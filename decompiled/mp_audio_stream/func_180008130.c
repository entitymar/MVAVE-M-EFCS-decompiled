// FUN_180008130 @ 180008130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180008130(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  short sVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined1 auStackY_d88 [32];
  undefined8 local_d40;
  CHAR local_d38 [256];
  char local_c38;
  char local_c37 [1023];
  WCHAR local_838 [256];
  undefined1 local_638 [512];
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_180036c40 ^ (ulonglong)auStackY_d88;
  FUN_18001d5f0((char *)(param_3 + 0x100),0x100,param_2,0xffffffffffffffff);
  lVar5 = *(longlong *)(param_2 + 0x28) - DAT_180036cd0;
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_2 + 0x30) - DAT_180036cd8;
  }
  if ((lVar5 != 0) &&
     (iVar3 = (**(code **)(param_1 + 0x288))(param_2 + 0x28,local_838,0x100), 0 < iVar3)) {
    WideCharToMultiByte(0xfde9,0,local_838,-1,local_d38,0x100,(LPCSTR)0x0,(LPBOOL)0x0);
    FUN_18001d590(local_438,0x400,0x180030ec0);
    FUN_18001d530(local_438,0x400,(longlong)local_d38);
    iVar3 = (**(code **)(param_1 + 0x2b0))(0xffffffff80000002,local_438,0,0x20019);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(param_1 + 0x2c0))(local_d40,&DAT_180030ef4,0,0);
      (**(code **)(param_1 + 0x2b8))(local_d40);
      if ((iVar3 == 0) && (uVar6 = FUN_18001d590(&local_c38,0x400,param_3 + 0x100), (int)uVar6 == 0)
         ) {
        pcVar9 = &local_c38;
        pcVar10 = (char *)0x0;
        if (local_c38 != '\0') {
          do {
            bVar11 = local_c38 != '(';
            local_c38 = pcVar9[1];
            pcVar7 = pcVar9;
            if (bVar11) {
              pcVar7 = pcVar10;
            }
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar7;
          } while (local_c38 != '\0');
          if (pcVar7 != (char *)0x0) {
            FUN_18001d5f0(pcVar7 + 1,0x400 - ((longlong)pcVar7 - (longlong)&local_c38),
                          (longlong)local_638,0xffffffffffffffff);
            if (((longlong)pcVar7 - (longlong)&local_c38) + 0x200U < 0x3ff) {
              FUN_18001d530(&local_c38,0x400,0x180030efc);
            }
            FUN_18001d5f0((char *)(param_3 + 0x100),0x100,(longlong)&local_c38,0xffffffffffffffff);
          }
        }
      }
    }
  }
  sVar8 = 0x10;
  uVar2 = *(uint *)(param_2 + 0x20);
  if (*(short *)(param_2 + 0x24) == 1) {
    if ((uVar2 >> 0xe & 1) != 0) {
      uVar4 = 48000;
      goto LAB_1800084c0;
    }
    if ((uVar2 >> 10 & 1) != 0) {
      uVar4 = 0xac44;
      goto LAB_1800084c0;
    }
    if ((uVar2 & 0x40) != 0) {
      uVar4 = 0x5622;
      goto LAB_1800084c0;
    }
    if ((uVar2 & 4) != 0) {
      uVar4 = 0x2b11;
      goto LAB_1800084c0;
    }
    sVar8 = 0x10;
    if ((uVar2 >> 0x12 & 1) != 0) {
LAB_1800084bb:
      uVar4 = 96000;
      goto LAB_1800084c0;
    }
    sVar8 = 8;
    if ((uVar2 >> 0xc & 1) != 0) {
      uVar4 = 48000;
      goto LAB_1800084c0;
    }
    if ((uVar2 >> 8 & 1) != 0) {
      uVar4 = 0xac44;
      goto LAB_1800084c0;
    }
    if ((uVar2 & 0x10) != 0) {
      uVar4 = 0x5622;
      goto LAB_1800084c0;
    }
    if ((uVar2 & 1) != 0) {
      uVar4 = 0x2b11;
      goto LAB_1800084c0;
    }
    uVar2 = uVar2 & 0x10000;
LAB_1800084b9:
    sVar8 = 8;
    if (uVar2 != 0) goto LAB_1800084bb;
LAB_18000851c:
    uVar6 = 0xffffff38;
  }
  else {
    if ((uVar2 >> 0xf & 1) == 0) {
      if ((uVar2 >> 0xb & 1) == 0) {
        if ((char)uVar2 < '\0') {
          uVar4 = 0x5622;
        }
        else if ((uVar2 & 8) == 0) {
          sVar8 = 0x10;
          if ((uVar2 >> 0x13 & 1) != 0) goto LAB_1800084bb;
          sVar8 = 8;
          if ((uVar2 >> 0xd & 1) == 0) {
            if ((uVar2 >> 9 & 1) == 0) {
              if ((uVar2 & 0x20) == 0) {
                if ((uVar2 & 2) == 0) {
                  uVar2 = uVar2 & 0x20000;
                  goto LAB_1800084b9;
                }
                uVar4 = 0x2b11;
              }
              else {
                uVar4 = 0x5622;
              }
            }
            else {
              uVar4 = 0xac44;
            }
          }
          else {
            uVar4 = 48000;
          }
        }
        else {
          uVar4 = 0x2b11;
        }
      }
      else {
        uVar4 = 0xac44;
      }
    }
    else {
      uVar4 = 48000;
    }
LAB_1800084c0:
    if (sVar8 == 8) {
      *(undefined4 *)(param_3 + 0x208) = 1;
    }
    else if (sVar8 == 0x10) {
      *(undefined4 *)(param_3 + 0x208) = 2;
    }
    else {
      if (sVar8 != 0x18) goto LAB_18000851c;
      *(undefined4 *)(param_3 + 0x208) = 3;
    }
    uVar1 = *(ushort *)(param_2 + 0x24);
    *(undefined4 *)(param_3 + 0x210) = uVar4;
    uVar6 = 0;
    *(uint *)(param_3 + 0x20c) = (uint)uVar1;
    *(undefined4 *)(param_3 + 0x214) = 0;
    *(undefined4 *)(param_3 + 0x204) = 1;
  }
  return uVar6;
}


