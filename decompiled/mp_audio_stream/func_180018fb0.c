// FUN_180018fb0 @ 180018fb0

undefined1 FUN_180018fb0(short *param_1)

{
  short sVar1;
  undefined1 uVar2;
  
  sVar1 = *param_1;
  if (sVar1 == -2) {
    if ((*(longlong *)(param_1 + 0xc) == DAT_1800361a0) &&
       (*(longlong *)(param_1 + 0x10) == DAT_1800361a8)) {
      sVar1 = param_1[9];
      if (sVar1 == 0x20) {
        return 4;
      }
      if (sVar1 == 0x18) {
        if (param_1[7] == 0x20) {
          return 4;
        }
        if (param_1[7] == 0x18) {
          return 3;
        }
      }
      else {
        if (sVar1 == 0x10) {
          return 2;
        }
        if (sVar1 == 8) {
          return 1;
        }
      }
    }
    if (((*(longlong *)(param_1 + 0xc) == DAT_1800361b0) &&
        (*(longlong *)(param_1 + 0x10) == DAT_1800361b8)) && (param_1[9] == 0x20)) {
      return 5;
    }
  }
  else {
    if (sVar1 == 1) {
      sVar1 = param_1[7];
      if (sVar1 == 0x20) {
        return 4;
      }
      if (sVar1 != 0x18) {
        if (sVar1 == 0x10) {
          return 2;
        }
        return sVar1 == 8;
      }
      return 3;
    }
    if (sVar1 == 3) {
      uVar2 = 0;
      if (param_1[7] == 0x20) {
        uVar2 = 5;
      }
      return uVar2;
    }
  }
  return 0;
}


