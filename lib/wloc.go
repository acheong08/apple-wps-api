package lib

import (
	"bytes"
	"errors"
	"io"
	"net/http"
	"wloc/pb"

	"google.golang.org/protobuf/proto"
)

func serializeWlocRequest(applWloc *pb.AppleWLoc) ([]byte, error) {
	if applWloc == nil {
		panic("nil pointer error")
	}
	serializedWloc, err := proto.Marshal(applWloc)
	if err != nil {
		return nil, err
	}
	data := make([]byte, 50)
	copyMultiByte(data, []byte{0x00, 0x01, 0x00, 0x05}, []byte("en_US"), []byte{0x00, 0x13}, []byte("com.apple.locationd"), []byte{0x00, 0x0a}, []byte("17.5.21F79"), []byte{0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00}, []byte{byte(len(serializedWloc))})
	data = append(data, serializedWloc...)

	return data, nil
}

func RequestWloc(block *pb.AppleWLoc, args *wlocArgs) (*pb.AppleWLoc, error) {
	// Serialize to bytes
	serializedBlock, err := serializeWlocRequest(block)
	if err != nil {
		return nil, errors.New("failed to serialize protobuf")
	}
	var wlocURL string = "https://gs-loc.apple.com"
	if args != nil {
		switch args.region {
		case Options.China:
			wlocURL = "https://gs-loc-cn.apple.com"
		}
	}
	wlocURL = wlocURL + "/clls/wloc"
	// Make HTTP request
	req, _ := http.NewRequest(http.MethodPost, wlocURL, bytes.NewReader(serializedBlock))
	for key, val := range map[string]string{
		"Content-Type":   "application/x-www-form-urlencoded",
		"Accept":         "*/*",
		"Accept-Charset": "utf-8",
		// "Accept-Encoding": "gzip, deflate",
		"Accept-Language": "en-us",
		"User-Agent":      "locationd/1753.17 CFNetwork/711.1.12 Darwin/14.0.0",
		jsHeader:          jsHeaderValue,
	} {
		req.Header.Set(key, val)
	}
	resp, err := http.DefaultClient.Do(req)
	if err != nil {
		return nil, errors.New("failed to make request")
	}
	defer resp.Body.Close()
	if resp.StatusCode != 200 {
		if resp.StatusCode == 0 {
			return nil, errors.New("cors issue probably")
		}
		return nil, errors.New(http.StatusText(resp.StatusCode))
	}
	body, err := io.ReadAll(resp.Body)
	if err != nil {
		return nil, errors.New("failed to read response body")
	}
	respBlock := pb.AppleWLoc{}
	err = proto.Unmarshal(body[10:], &respBlock)
	if err != nil {
		return nil, errors.New("failed to unmarshal response protobuf")
	}
	return &respBlock, nil
}

func QueryBssid(bssids []string, maxResults bool, options ...Modifier) (*pb.AppleWLoc, error) {
	args := newWlocArgs()
	for _, option := range options {
		option(&args)
	}
	zero32 := int32(0)
	one32 := int32(1)
	block := pb.AppleWLoc{}
	block.WifiDevices = make([]*pb.WifiDevice, len(bssids))
	for i, bssid := range bssids {
		block.WifiDevices[i] = &pb.WifiDevice{Bssid: bssid}
	}
	if maxResults {
		block.NumWifiResults = &zero32
	} else {
		block.NumWifiResults = &one32
	}
	return RequestWloc(&block, &args)
}

func copyMultiByte(dst []byte, srcs ...[]byte) {
	n := 0
	for _, src := range srcs {
		copy(dst[n:], src)
		n += len(src)
	}
}
