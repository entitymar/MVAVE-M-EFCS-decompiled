// FUN_18001b470 @ 18001b470

undefined8 FUN_18001b470(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar3;
  
  if (param_2 != (ulonglong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
     (uVar1 = *(uint *)(param_1 + 0x18), uVar1 < 9)) {
    uVar5 = 0;
    *param_2 = 0;
    param_2[1] = 0;
    uVar3 = uVar5;
    uVar4 = uVar5;
    if ((uVar1 & 1) != 0) {
      do {
        if (*(uint *)(param_1 + 4) == 0) {
          return 0xfffffffe;
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
        uVar4 = uVar4 + ((ulonglong)*(uint *)(param_1 + 4) * 4 + 7 & 0xfffffffffffffff8) + 0x28;
        *param_2 = uVar4;
      } while (uVar2 < (uVar1 & 1));
    }
    param_2[2] = uVar4;
    if (uVar1 >> 1 != 0) {
      do {
        if (*(uint *)(param_1 + 4) == 0) {
          return 0xfffffffe;
        }
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar2;
        uVar4 = uVar4 + (ulonglong)*(uint *)(param_1 + 4) * 8 + 0x40;
        *param_2 = uVar4;
      } while (uVar2 < uVar1 >> 1);
    }
    *param_2 = uVar4;
    return 0;
  }
  return 0xfffffffe;
}


