
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool readLocationProtobuf(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined local_48 [16];
  long local_38;
  
  plVar5 = _DAT_7ffa41ed4678;
  plVar4 = _DAT_7ffa41ed4660;
  plVar3 = _DAT_7ffa41ed4648;
  puVar2 = PTR_DAT_7ffa405a6760;
  plVar14 = _DAT_7ffa41ed4650;
  local_38 = param_1;
  if (*(ulong *)(param_2 + *_DAT_7ffa41ed4678) < *(ulong *)(param_2 + *_DAT_7ffa41ed4660)) {
    while (*(char *)(param_2 + *plVar14) == '\0') {
      bVar9 = 0;
      uVar12 = 0;
      do {
        lVar8 = *(long *)(param_2 + *plVar5);
        uVar11 = lVar8 + 1;
        if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
          *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727aa5b:
          lVar8 = *plVar14;
          cVar6 = *(char *)(param_2 + lVar8);
          if (cVar6 != '\0') {
            uVar12 = 0;
          }
          goto LAB_7ffa0727aa67;
        }
        bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
        *(ulong *)(param_2 + *plVar5) = uVar11;
        uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
        if (-1 < (char)bVar1) goto LAB_7ffa0727aa5b;
        bVar9 = bVar9 + 7;
      } while (bVar9 != 0x46);
      lVar8 = *plVar14;
      cVar6 = *(char *)(param_2 + lVar8);
      uVar12 = 0;
LAB_7ffa0727aa67:
      if ((cVar6 != '\0') || (((byte)uVar12 & 7) == 4)) break;
      switch((int)(uVar12 >> 3)) {
      case 1:
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffff8) && (uVar12 + 8 <= *(ulong *)(param_2 + *plVar4))) {
          uVar7 = *(undefined8 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 8;
          lVar8 = _OBJC_IVAR_$_CLPLocation._latitude;
        }
        else {
          *(undefined *)(param_2 + lVar8) = 1;
          uVar7 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._latitude;
        }
        goto LAB_7ffa0727b535;
      case 2:
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffff8) && (uVar12 + 8 <= *(ulong *)(param_2 + *plVar4))) {
          uVar7 = *(undefined8 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 8;
          lVar8 = _OBJC_IVAR_$_CLPLocation._longitude;
        }
        else {
          *(undefined *)(param_2 + lVar8) = 1;
          uVar7 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._longitude;
        }
        goto LAB_7ffa0727b535;
      case 3:
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._horizontalAccuracy;
        }
        else {
          *(undefined *)(param_2 + lVar8) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._horizontalAccuracy;
        }
        break;
      default:
        cVar6 = _PBReaderSkipValueWithTag(param_2,uVar12 >> 3,uVar12 & 7);
        plVar14 = _DAT_7ffa41ed4650;
        if (cVar6 == '\0') {
          return false;
        }
        goto LAB_7ffa0727b5c1;
      case 5:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 1;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._altitude;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._altitude;
        }
        break;
      case 6:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x4000;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._verticalAccuracy;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._verticalAccuracy;
        }
        break;
      case 7:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x1000;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._speed;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._speed;
        }
        break;
      case 8:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 4;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._course;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._course;
        }
        break;
      case 9:
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffff8) && (uVar12 + 8 <= *(ulong *)(param_2 + *plVar4))) {
          uVar7 = *(undefined8 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 8;
          lVar8 = _OBJC_IVAR_$_CLPLocation._timestamp;
        }
        else {
          *(undefined *)(param_2 + lVar8) = 1;
          uVar7 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._timestamp;
        }
LAB_7ffa0727b535:
        *(undefined8 *)(param_1 + lVar8) = uVar7;
        goto LAB_7ffa0727b5c1;
      case 10:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 2;
        bVar9 = 0;
        uVar12 = 0;
        do {
          uVar16 = (undefined4)uVar12;
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b33b:
            lVar8 = _OBJC_IVAR_$_CLPLocation._context;
            uVar10 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar10 = uVar16;
            }
            goto LAB_7ffa0727b429;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          uVar16 = (undefined4)uVar12;
          if (-1 < (char)bVar1) goto LAB_7ffa0727b33b;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        lVar8 = _OBJC_IVAR_$_CLPLocation._context;
        uVar10 = 0;
        goto LAB_7ffa0727b429;
      case 0xb:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x400;
        bVar9 = 0;
        uVar12 = 0;
        do {
          uVar16 = (undefined4)uVar12;
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b35b:
            lVar8 = _OBJC_IVAR_$_CLPLocation._motionActivityType;
            uVar10 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar10 = uVar16;
            }
            goto LAB_7ffa0727b429;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          uVar16 = (undefined4)uVar12;
          if (-1 < (char)bVar1) goto LAB_7ffa0727b35b;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        lVar8 = _OBJC_IVAR_$_CLPLocation._motionActivityType;
        uVar10 = 0;
        goto LAB_7ffa0727b429;
      case 0xc:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x200;
        bVar9 = 0;
        uVar12 = 0;
        do {
          uVar16 = (undefined4)uVar12;
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b37b:
            lVar8 = _OBJC_IVAR_$_CLPLocation._motionActivityConfidence;
            uVar10 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar10 = uVar16;
            }
            goto LAB_7ffa0727b429;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          uVar16 = (undefined4)uVar12;
          if (-1 < (char)bVar1) goto LAB_7ffa0727b37b;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        lVar8 = _OBJC_IVAR_$_CLPLocation._motionActivityConfidence;
        uVar10 = 0;
        goto LAB_7ffa0727b429;
      case 0xd:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x800;
        bVar9 = 0;
        uVar12 = 0;
        do {
          uVar16 = (undefined4)uVar12;
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b39b:
            lVar8 = _OBJC_IVAR_$_CLPLocation._provider;
            uVar10 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar10 = uVar16;
            }
            goto LAB_7ffa0727b429;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          uVar16 = (undefined4)uVar12;
          if (-1 < (char)bVar1) goto LAB_7ffa0727b39b;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        lVar8 = _OBJC_IVAR_$_CLPLocation._provider;
        uVar10 = 0;
        goto LAB_7ffa0727b429;
      case 0xe:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x10;
        bVar9 = 0;
        uVar12 = 0;
        do {
          uVar16 = (undefined4)uVar12;
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b3b8:
            lVar8 = _OBJC_IVAR_$_CLPLocation._floor;
            uVar10 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar10 = uVar16;
            }
            goto LAB_7ffa0727b429;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          uVar16 = (undefined4)uVar12;
          if (-1 < (char)bVar1) goto LAB_7ffa0727b3b8;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        lVar8 = _OBJC_IVAR_$_CLPLocation._floor;
        uVar10 = 0;
        goto LAB_7ffa0727b429;
      case 0xf:
        uVar7 = _PBReaderReadString(param_2);
        lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
        if (lVar8 != 0) {
          (*_DAT_7ffa41ee6578)(local_38,puVar2,lVar8);
        }
        goto LAB_7ffa0727b311;
      case 0x10:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x20000;
        bVar9 = 0;
        uVar12 = 0;
        do {
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b3d5:
            uVar11 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar11 = uVar12;
            }
            goto LAB_7ffa0727b3e2;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          if (-1 < (char)bVar1) goto LAB_7ffa0727b3d5;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        uVar11 = 0;
LAB_7ffa0727b3e2:
        bVar15 = uVar11 == 0;
        lVar8 = _OBJC_IVAR_$_CLPLocation._motionVehicleConnectedStateChanged;
        goto LAB_7ffa0727b450;
      case 0x11:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x10000;
        bVar9 = 0;
        uVar12 = 0;
        do {
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b3f5:
            uVar11 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar11 = uVar12;
            }
            goto LAB_7ffa0727b402;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          if (-1 < (char)bVar1) goto LAB_7ffa0727b3f5;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        uVar11 = 0;
LAB_7ffa0727b402:
        bVar15 = uVar11 == 0;
        lVar8 = _OBJC_IVAR_$_CLPLocation._motionVehicleConnected;
        goto LAB_7ffa0727b450;
      case 0x12:
        lVar8 = _objc_alloc_init(PTR__OBJC_CLASS_$_CLPMotionActivity_7ffa405a9688);
        lVar13 = _OBJC_IVAR_$_CLPLocation._rawMotionActivity;
        goto LAB_7ffa0727afba;
      case 0x13:
        lVar8 = _objc_alloc_init(PTR__OBJC_CLASS_$_CLPMotionActivity_7ffa405a9688);
        lVar13 = _OBJC_IVAR_$_CLPLocation._motionActivity;
        goto LAB_7ffa0727afba;
      case 0x14:
        lVar8 = _objc_alloc_init(PTR__OBJC_CLASS_$_CLPMotionActivity_7ffa405a9688);
        lVar13 = _OBJC_IVAR_$_CLPLocation._dominantMotionActivity;
LAB_7ffa0727afba:
        _objc_storeStrong(lVar13 + param_1,lVar8);
        cVar6 = _PBReaderPlaceMark(param_2,local_48);
        if (cVar6 == '\0') goto LAB_7ffa0727b5f9;
        cVar6 = _CLPMotionActivityReadFrom(lVar8,param_2);
        goto LAB_7ffa0727b2fd;
      case 0x15:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 8;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._courseAccuracy;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._courseAccuracy;
        }
        break;
      case 0x16:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x2000;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._speedAccuracy;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._speedAccuracy;
        }
        break;
      case 0x17:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x100;
        bVar9 = 0;
        uVar12 = 0;
        do {
          uVar16 = (undefined4)uVar12;
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b415:
            lVar8 = _OBJC_IVAR_$_CLPLocation._modeIndicator;
            uVar10 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar10 = uVar16;
            }
            goto LAB_7ffa0727b429;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          uVar16 = (undefined4)uVar12;
          if (-1 < (char)bVar1) goto LAB_7ffa0727b415;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        lVar8 = _OBJC_IVAR_$_CLPLocation._modeIndicator;
        uVar10 = 0;
LAB_7ffa0727b429:
        *(undefined4 *)(param_1 + lVar8) = uVar10;
        goto LAB_7ffa0727b5c1;
      case 0x18:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x20;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._horzUncSemiMaj;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._horzUncSemiMaj;
        }
        break;
      case 0x19:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x80;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._horzUncSemiMin;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._horzUncSemiMin;
        }
        break;
      case 0x1a:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x40;
        uVar12 = *(ulong *)(param_2 + *plVar5);
        if ((uVar12 < 0xfffffffffffffffc) && (uVar12 + 4 <= *(ulong *)(param_2 + *plVar4))) {
          uVar16 = *(undefined4 *)(*(long *)(param_2 + *plVar3) + uVar12);
          *(ulong *)(param_2 + *plVar5) = uVar12 + 4;
          lVar8 = _OBJC_IVAR_$_CLPLocation._horzUncSemiMajAz;
        }
        else {
          *(undefined *)(param_2 + *plVar14) = 1;
          uVar16 = 0;
          lVar8 = _OBJC_IVAR_$_CLPLocation._horzUncSemiMajAz;
        }
        break;
      case 0x1b:
        lVar8 = _objc_alloc_init(PTR__OBJC_CLASS_$_CLPSatelliteReport_7ffa405a97f8);
        _objc_storeStrong(_OBJC_IVAR_$_CLPLocation._satReport + param_1,lVar8);
        cVar6 = _PBReaderPlaceMark(param_2,local_48);
        if (cVar6 == '\0') goto LAB_7ffa0727b5f9;
        cVar6 = _CLPSatelliteReportReadFrom(lVar8,param_2);
        goto LAB_7ffa0727b2fd;
      case 0x1c:
        *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) =
             *(uint *)(param_1 + _OBJC_IVAR_$_CLPLocation._has) | 0x8000;
        bVar9 = 0;
        uVar12 = 0;
        do {
          lVar8 = *(long *)(param_2 + *plVar5);
          uVar11 = lVar8 + 1;
          if ((uVar11 == 0) || (*(ulong *)(param_2 + *plVar4) < uVar11)) {
            *(undefined *)(param_2 + *plVar14) = 1;
LAB_7ffa0727b439:
            uVar11 = 0;
            if (*(char *)(param_2 + *plVar14) == '\0') {
              uVar11 = uVar12;
            }
            goto LAB_7ffa0727b446;
          }
          bVar1 = *(byte *)(*(long *)(param_2 + *plVar3) + lVar8);
          *(ulong *)(param_2 + *plVar5) = uVar11;
          uVar12 = uVar12 | (ulong)(bVar1 & 0x7f) << (bVar9 & 0x3f);
          if (-1 < (char)bVar1) goto LAB_7ffa0727b439;
          bVar9 = bVar9 + 7;
        } while (bVar9 != 0x46);
        uVar11 = 0;
LAB_7ffa0727b446:
        bVar15 = uVar11 == 0;
        lVar8 = _OBJC_IVAR_$_CLPLocation._isFromLocationController;
LAB_7ffa0727b450:
        *(bool *)(param_1 + lVar8) = !bVar15;
        goto LAB_7ffa0727b5c1;
      case 0x1d:
        lVar8 = _objc_alloc_init(PTR__OBJC_CLASS_$_CLPPipelineDiagnosticReport_7ffa405a9800);
        _objc_storeStrong(_OBJC_IVAR_$_CLPLocation._pipelineDiagnosticReport + param_1,lVar8);
        cVar6 = _PBReaderPlaceMark(param_2,local_48);
        if (cVar6 == '\0') goto LAB_7ffa0727b5f9;
        cVar6 = _CLPPipelineDiagnosticReportReadFrom(lVar8,param_2);
        goto LAB_7ffa0727b2fd;
      case 0x1e:
        lVar8 = _objc_alloc_init(PTR__OBJC_CLASS_$_CLPBaroCalibrationIndication_7ffa405a9690);
        _objc_storeStrong(_OBJC_IVAR_$_CLPLocation._baroCalibrationIndication + param_1,lVar8);
        cVar6 = _PBReaderPlaceMark(param_2,local_48);
        if (cVar6 == '\0') goto LAB_7ffa0727b5f9;
        cVar6 = _CLPBaroCalibrationIndicationReadFrom(lVar8,param_2);
        goto LAB_7ffa0727b2fd;
      case 0x1f:
        lVar8 = _objc_alloc_init(PTR__OBJC_CLASS_$_CLPLocationProcessingMetadata_7ffa405a9808);
        _objc_storeStrong(_OBJC_IVAR_$_CLPLocation._processingMetadata + param_1,lVar8);
        cVar6 = _PBReaderPlaceMark(param_2,local_48);
        if (cVar6 == '\0') goto LAB_7ffa0727b5f9;
        cVar6 = _CLPLocationProcessingMetadataReadFrom(lVar8,param_2);
LAB_7ffa0727b2fd:
        if (cVar6 == '\0') {
LAB_7ffa0727b5f9:
          (*_DAT_7ffa41ee65d0)(lVar8);
          return false;
        }
        _PBReaderRecallMark(param_2);
LAB_7ffa0727b311:
        (*_DAT_7ffa41ee65d0)(lVar8);
        plVar14 = _DAT_7ffa41ed4650;
        param_1 = local_38;
        goto LAB_7ffa0727b5c1;
      }
      *(undefined4 *)(param_1 + lVar8) = uVar16;
LAB_7ffa0727b5c1:
      if (*(ulong *)(param_2 + *plVar4) <= *(ulong *)(param_2 + *plVar5)) break;
    }
  }
  return *(char *)(param_2 + *_DAT_7ffa41ed4650) == '\0';
}


bool readAPDeviceProtobuf(long self,long protobufString)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long tmpVar;
  ulong uVar10;
  ulong fieldType;
  long *plVar11;
  ulong uVar12;
  undefined local_48 [16];
  long local_38;
  
  plVar5 = _DAT_7ffa41ed4678;
  plVar4 = _DAT_7ffa41ed4660;
  plVar3 = _DAT_7ffa41ed4648;
  plVar11 = _DAT_7ffa41ed4650;
  if (*(ulong *)(protobufString + *_DAT_7ffa41ed4678) <
      *(ulong *)(protobufString + *_DAT_7ffa41ed4660)) {
    while (uVar12 = 0, *(char *)(protobufString + *plVar11) == '\0') {
      bVar6 = 0;
      fieldType = 0;
      do {
        tmpVar = *(long *)(protobufString + *plVar5);
        uVar10 = tmpVar + 1;
        if ((uVar10 == 0) || (*(ulong *)(protobufString + *plVar4) < uVar10)) {
          *(undefined *)(protobufString + *plVar11) = 1;
LAB_7ffa07293624:
          cVar7 = *(char *)(protobufString + *plVar11);
          if (cVar7 != '\0') {
            fieldType = uVar12;
          }
          goto parsingLoopStart;
        }
        bVar1 = *(byte *)(*(long *)(protobufString + *plVar3) + tmpVar);
        *(ulong *)(protobufString + *plVar5) = uVar10;
        fieldType = fieldType | (ulong)(bVar1 & 0x7f) << (bVar6 & 0x3f);
        if (-1 < (char)bVar1) goto LAB_7ffa07293624;
        bVar6 = bVar6 + 7;
      } while (bVar6 != 0x46);
      cVar7 = *(char *)(protobufString + *plVar11);
      fieldType = 0;
parsingLoopStart:
      if ((cVar7 != '\0') || (bVar6 = (byte)fieldType & 7, bVar6 == 4)) break;
      switch((int)(fieldType >> 3)) {
      case 1:
        uVar9 = _PBReaderReadString(protobufString);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        tmpVar = _OBJC_IVAR_$_CLPWifiAPLocation._mac;
        goto LAB_7ffa072937e9;
      case 2:
        bVar6 = 0;
        fieldType = 0;
        do {
          tmpVar = *(long *)(protobufString + *plVar5);
          uVar10 = tmpVar + 1;
          if ((uVar10 == 0) || (*(ulong *)(protobufString + *plVar4) < uVar10)) {
            *(undefined *)(protobufString + *plVar11) = 1;
LAB_7ffa07293980:
            if (*(char *)(protobufString + *plVar11) != '\0') {
              fieldType = uVar12;
            }
            goto LAB_7ffa0729398b;
          }
          bVar1 = *(byte *)(*(long *)(protobufString + *plVar3) + tmpVar);
          *(ulong *)(protobufString + *plVar5) = uVar10;
          fieldType = fieldType | (ulong)(bVar1 & 0x7f) << (bVar6 & 0x3f);
          if (-1 < (char)bVar1) goto LAB_7ffa07293980;
          bVar6 = bVar6 + 7;
        } while (bVar6 != 0x46);
        fieldType = 0;
LAB_7ffa0729398b:
        uVar8 = (undefined4)fieldType;
        tmpVar = _OBJC_IVAR_$_CLPWifiAPLocation._channel;
        break;
      case 3:
        bVar6 = 0;
        fieldType = 0;
        do {
          tmpVar = *(long *)(protobufString + *plVar5);
          uVar10 = tmpVar + 1;
          if ((uVar10 == 0) || (*(ulong *)(protobufString + *plVar4) < uVar10)) {
            *(undefined *)(protobufString + *plVar11) = 1;
LAB_7ffa0729399b:
            if (*(char *)(protobufString + *plVar11) != '\0') {
              fieldType = uVar12;
            }
            goto LAB_7ffa072939a6;
          }
          bVar1 = *(byte *)(*(long *)(protobufString + *plVar3) + tmpVar);
          *(ulong *)(protobufString + *plVar5) = uVar10;
          fieldType = fieldType | (ulong)(bVar1 & 0x7f) << (bVar6 & 0x3f);
          if (-1 < (char)bVar1) goto LAB_7ffa0729399b;
          bVar6 = bVar6 + 7;
        } while (bVar6 != 0x46);
        fieldType = 0;
LAB_7ffa072939a6:
        uVar8 = (undefined4)fieldType;
        tmpVar = _OBJC_IVAR_$_CLPWifiAPLocation._rssi;
        break;
      case 4:
        uVar9 = _objc_alloc_init(PTR__OBJC_CLASS_$_CLPLocation_7ffa405a9658);
        local_38 = self;
        _objc_storeStrong(_OBJC_IVAR_$_CLPWifiAPLocation._location + self,uVar9);
        cVar7 = _PBReaderPlaceMark(protobufString,local_48);
        if ((cVar7 == '\0') || (cVar7 = _CLPLocationReadFrom(uVar9,protobufString), cVar7 == '\0'))
        {
          (*_DAT_7ffa41ee65d0)(uVar9);
          return false;
        }
        _PBReaderRecallMark(protobufString);
        (*_DAT_7ffa41ee65d0)(uVar9);
        plVar11 = _DAT_7ffa41ed4650;
        self = local_38;
        goto LAB_7ffa07293a02;
      case 5:
        uVar9 = _PBReaderReadString(protobufString);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        tmpVar = _OBJC_IVAR_$_CLPWifiAPLocation._appBundleId;
LAB_7ffa072937e9:
        uVar2 = *(undefined8 *)(self + tmpVar);
        *(undefined8 *)(self + tmpVar) = uVar9;
        (*_DAT_7ffa41ee65d0)(uVar2);
        plVar11 = _DAT_7ffa41ed4650;
        goto LAB_7ffa07293a02;
      case 6:
        *(byte *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._has) =
             *(byte *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._has) | 8;
        bVar6 = 0;
        fieldType = 0;
        do {
          tmpVar = *(long *)(protobufString + *plVar5);
          uVar10 = tmpVar + 1;
          if ((uVar10 == 0) || (*(ulong *)(protobufString + *plVar4) < uVar10)) {
            *(undefined *)(protobufString + *plVar11) = 1;
LAB_7ffa072939b6:
            if (*(char *)(protobufString + *plVar11) != '\0') {
              fieldType = uVar12;
            }
            goto LAB_7ffa072939c1;
          }
          bVar1 = *(byte *)(*(long *)(protobufString + *plVar3) + tmpVar);
          *(ulong *)(protobufString + *plVar5) = uVar10;
          fieldType = fieldType | (ulong)(bVar1 & 0x7f) << (bVar6 & 0x3f);
          if (-1 < (char)bVar1) goto LAB_7ffa072939b6;
          bVar6 = bVar6 + 7;
        } while (bVar6 != 0x46);
        fieldType = 0;
LAB_7ffa072939c1:
        uVar8 = (undefined4)fieldType;
        tmpVar = _OBJC_IVAR_$_CLPWifiAPLocation._serverHash;
        break;
      case 7:
        *(byte *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._has) =
             *(byte *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._has) | 2;
        bVar6 = 0;
        fieldType = 0;
        do {
          tmpVar = *(long *)(protobufString + *plVar5);
          uVar10 = tmpVar + 1;
          if ((uVar10 == 0) || (*(ulong *)(protobufString + *plVar4) < uVar10)) {
            *(undefined *)(protobufString + *plVar11) = 1;
LAB_7ffa072939d1:
            if (*(char *)(protobufString + *plVar11) != '\0') {
              fieldType = uVar12;
            }
            goto LAB_7ffa072939dc;
          }
          bVar1 = *(byte *)(*(long *)(protobufString + *plVar3) + tmpVar);
          *(ulong *)(protobufString + *plVar5) = uVar10;
          fieldType = fieldType | (ulong)(bVar1 & 0x7f) << (bVar6 & 0x3f);
          if (-1 < (char)bVar1) goto LAB_7ffa072939d1;
          bVar6 = bVar6 + 7;
        } while (bVar6 != 0x46);
        fieldType = 0;
LAB_7ffa072939dc:
        uVar8 = (undefined4)fieldType;
        tmpVar = _OBJC_IVAR_$_CLPWifiAPLocation._hidden;
        break;
      case 8:
        *(byte *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._has) =
             *(byte *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._has) | 1;
        uVar12 = *(ulong *)(protobufString + *plVar5);
        if ((uVar12 < 0xfffffffffffffff8) && (uVar12 + 8 <= *(ulong *)(protobufString + *plVar4))) {
          uVar9 = *(undefined8 *)(*(long *)(protobufString + *plVar3) + uVar12);
          *(ulong *)(protobufString + *plVar5) = uVar12 + 8;
        }
        else {
          *(undefined *)(protobufString + *plVar11) = 1;
          uVar9 = 0;
        }
        *(undefined8 *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._scanTimestamp) = uVar9;
        goto LAB_7ffa07293a02;
      case 9:
        *(byte *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._has) =
             *(byte *)(self + _OBJC_IVAR_$_CLPWifiAPLocation._has) | 4;
        bVar6 = 0;
        fieldType = 0;
        do {
          tmpVar = *(long *)(protobufString + *plVar5);
          uVar10 = tmpVar + 1;
          if ((uVar10 == 0) || (*(ulong *)(protobufString + *plVar4) < uVar10)) {
            *(undefined *)(protobufString + *plVar11) = 1;
LAB_7ffa072939ec:
            if (*(char *)(protobufString + *plVar11) != '\0') {
              fieldType = uVar12;
            }
            goto LAB_7ffa072939f7;
          }
          bVar1 = *(byte *)(*(long *)(protobufString + *plVar3) + tmpVar);
          *(ulong *)(protobufString + *plVar5) = uVar10;
          fieldType = fieldType | (ulong)(bVar1 & 0x7f) << (bVar6 & 0x3f);
          if (-1 < (char)bVar1) goto LAB_7ffa072939ec;
          bVar6 = bVar6 + 7;
        } while (bVar6 != 0x46);
        fieldType = 0;
LAB_7ffa072939f7:
        uVar8 = (undefined4)fieldType;
        tmpVar = _OBJC_IVAR_$_CLPWifiAPLocation._scanType;
        break;
      default:
        cVar7 = _PBReaderSkipValueWithTag(protobufString,fieldType >> 3,bVar6);
        plVar11 = _DAT_7ffa41ed4650;
        if (cVar7 == '\0') {
          return false;
        }
        goto LAB_7ffa07293a02;
      }
      *(undefined4 *)(self + tmpVar) = uVar8;
LAB_7ffa07293a02:
      if (*(ulong *)(protobufString + *plVar4) <= *(ulong *)(protobufString + *plVar5)) break;
    }
  }
  return *(char *)(protobufString + *_DAT_7ffa41ed4650) == '\0';
}

