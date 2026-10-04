// FUN_180002d70 @ 180002d70

uint FUN_180002d70(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(param_2 * 0x28) / 1000;
  }
  uVar2 = 0;
  if (param_1 != 0) {
    if ((param_2 == 0) && (param_2 = *(int *)(param_1 + 0x14), param_2 == 0)) {
      param_2 = 48000;
    }
    uVar2 = *(uint *)(param_1 + 0x118);
    if (uVar2 == 0) {
      uVar2 = uVar1;
      if (*(int *)(param_1 + 0x11c) == 0) {
        if (param_3 == 0) {
          if (param_2 != 0) {
            uVar1 = (uint)(param_2 * 10) / 1000;
            if (uVar3 <= uVar1) {
              uVar3 = uVar1;
            }
            return uVar3;
          }
        }
        else if (param_2 != 0) {
          uVar1 = (uint)(param_2 * 100) / 1000;
          if (uVar3 <= uVar1) {
            uVar3 = uVar1;
          }
          return uVar3;
        }
      }
      else if (param_2 != 0) {
        uVar1 = (uint)(*(int *)(param_1 + 0x11c) * param_2) / 1000;
        if (uVar3 <= uVar1) {
          uVar3 = uVar1;
        }
        return uVar3;
      }
    }
  }
  if (uVar3 <= uVar2) {
    uVar3 = uVar2;
  }
  return uVar3;
}


