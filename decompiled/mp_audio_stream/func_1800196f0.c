// FUN_1800196f0 @ 1800196f0

undefined8 FUN_1800196f0(uint param_1,short param_2,undefined2 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar3 = 0x10;
  if (param_2 == 1) {
    if ((param_1 >> 0xe & 1) != 0) {
      uVar2 = 48000;
      goto LAB_180019820;
    }
    if ((param_1 >> 10 & 1) != 0) {
      uVar2 = 0xac44;
      goto LAB_180019820;
    }
    if ((param_1 & 0x40) != 0) {
      uVar2 = 0x5622;
      goto LAB_180019820;
    }
    if ((param_1 & 4) != 0) {
      uVar2 = 0x2b11;
      goto LAB_180019820;
    }
    uVar3 = 0x10;
    if ((param_1 >> 0x12 & 1) == 0) {
      uVar3 = 8;
      if ((param_1 >> 0xc & 1) != 0) {
        uVar2 = 48000;
        goto LAB_180019820;
      }
      if ((param_1 >> 8 & 1) != 0) {
        uVar2 = 0xac44;
        goto LAB_180019820;
      }
      if ((param_1 & 0x10) != 0) {
        uVar2 = 0x5622;
        goto LAB_180019820;
      }
      if ((param_1 & 1) != 0) {
        uVar2 = 0x2b11;
        goto LAB_180019820;
      }
      uVar1 = param_1 & 0x10000;
LAB_180019819:
      uVar3 = 8;
      if (uVar1 == 0) {
        return 0xffffff38;
      }
    }
  }
  else {
    if ((param_1 >> 0xf & 1) != 0) {
      uVar2 = 48000;
      goto LAB_180019820;
    }
    if ((param_1 >> 0xb & 1) != 0) {
      uVar2 = 0xac44;
      goto LAB_180019820;
    }
    if ((char)param_1 < '\0') {
      uVar2 = 0x5622;
      goto LAB_180019820;
    }
    if ((param_1 & 8) != 0) {
      uVar2 = 0x2b11;
      goto LAB_180019820;
    }
    uVar3 = 0x10;
    if ((param_1 >> 0x13 & 1) == 0) {
      uVar3 = 8;
      if ((param_1 >> 0xd & 1) != 0) {
        uVar2 = 48000;
        goto LAB_180019820;
      }
      if ((param_1 >> 9 & 1) != 0) {
        uVar2 = 0xac44;
        goto LAB_180019820;
      }
      if ((param_1 & 0x20) != 0) {
        uVar2 = 0x5622;
        goto LAB_180019820;
      }
      if ((param_1 & 2) != 0) {
        uVar2 = 0x2b11;
        goto LAB_180019820;
      }
      uVar1 = param_1 & 0x20000;
      goto LAB_180019819;
    }
  }
  uVar2 = 96000;
LAB_180019820:
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = uVar3;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar2;
  }
  return 0;
}


