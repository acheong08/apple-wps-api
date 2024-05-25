import os

import folium

# Create a Folium map
map = folium.Map(
    location=[
        51.506889,
        -3.192196,
    ],
    zoom_start=10,
)


def plot_points(file, color="green"):
    coords = [line.strip().split() for line in open(file, "r").readlines()]
    # Plot each coordinate as a marker
    for coord in coords:
        folium.Marker(coord, icon=folium.Icon(color=color)).add_to(map)


# List .txt files
files = os.listdir()
files = [file for file in files if file.endswith(".txt")]

# A different color for each
colors = [
    "red",
    "blue",
    "green",
    "purple",
    "orange",
    "darkred",
    "lightred",
    "beige",
    "darkblue",
    "darkgreen",
    "cadetblue",
    "darkpurple",
    "white",
    "pink",
    "lightblue",
    "lightgreen",
    "gray",
    "black",
]

# Plot each file
for i, file in enumerate(files):
    plot_points(file, colors[i % len(colors)])

# Display the map
map.save("map.html")
