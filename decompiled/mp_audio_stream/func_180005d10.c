// FUN_180005d10 @ 180005d10

void FUN_180005d10(uint param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    uVar4 = (ulonglong)param_2;
    if (((param_3 != (undefined1 *)0x0) && (param_2 != 0)) && (uVar5 = 0, param_2 != 0)) {
      while (uVar4 != 0) {
        uVar2 = FUN_180005500(0,param_2,uVar5);
        *param_3 = (char)uVar2;
        uVar4 = uVar4 - 1;
        param_3 = param_3 + 1;
        uVar5 = uVar5 + 1;
        if (param_2 <= uVar5) {
          return;
        }
      }
    }
  }
  else {
    if ((param_2 == 1) && ((param_1 & 4) != 0)) {
      *param_3 = 1;
      return;
    }
    uVar2 = 0;
    uVar5 = 1;
    uVar4 = uVar2;
    do {
      if (param_2 <= (uint)uVar4) {
        return;
      }
      uVar1 = uVar5 & param_1;
      if (uVar1 != 0) {
        if (uVar1 < 0x201) {
          if (uVar1 == 0x200) {
            uVar3 = 0xb;
          }
          else if (uVar1 < 0x11) {
            if (uVar1 == 0x10) {
              uVar3 = 6;
            }
            else if (uVar1 == 1) {
              uVar3 = 2;
            }
            else if (uVar1 == 2) {
              uVar3 = 3;
            }
            else if (uVar1 == 4) {
              uVar3 = 4;
            }
            else {
              if (uVar1 != 8) goto LAB_180005e68;
              uVar3 = 5;
            }
          }
          else if (uVar1 == 0x20) {
            uVar3 = 7;
          }
          else if (uVar1 == 0x40) {
            uVar3 = 8;
          }
          else if (uVar1 == 0x80) {
            uVar3 = 9;
          }
          else {
            if (uVar1 != 0x100) goto LAB_180005e68;
            uVar3 = 10;
          }
        }
        else if (uVar1 < 0x4001) {
          if (uVar1 == 0x4000) {
            uVar3 = 0x10;
          }
          else if (uVar1 == 0x400) {
            uVar3 = 0xc;
          }
          else if (uVar1 == 0x800) {
            uVar3 = 0xd;
          }
          else if (uVar1 == 0x1000) {
            uVar3 = 0xe;
          }
          else {
            if (uVar1 != 0x2000) goto LAB_180005e68;
            uVar3 = 0xf;
          }
        }
        else if (uVar1 == 0x8000) {
          uVar3 = 0x11;
        }
        else if (uVar1 == 0x10000) {
          uVar3 = 0x12;
        }
        else if (uVar1 == 0x20000) {
          uVar3 = 0x13;
        }
        else {
LAB_180005e68:
          uVar3 = 0;
        }
        param_3[uVar4] = uVar3;
        uVar4 = (ulonglong)((uint)uVar4 + 1);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    } while (uVar1 < 0x20);
  }
  return;
}


