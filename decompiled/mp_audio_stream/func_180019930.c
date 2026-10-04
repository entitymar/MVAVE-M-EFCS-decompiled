// FUN_180019930 @ 180019930

undefined8 FUN_180019930(int *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 != (ulonglong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  if ((param_1 == (int *)0x0) || (((*param_1 != 5 && (*param_1 != 2)) || (param_1[1] == 0)))) {
    return 0xfffffffe;
  }
  uVar2 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = 4;
  if (*param_1 != 5) {
    lVar4 = 2;
  }
  uVar5 = lVar4 * (ulonglong)(uint)param_1[1];
  *param_2 = uVar5;
  param_2[2] = uVar5;
  if (*param_1 == 5) {
    lVar4 = (ulonglong)(uint)param_1[1] * 4;
  }
  else {
    lVar4 = (ulonglong)(uint)param_1[1] * 2;
  }
  *param_2 = uVar5 + lVar4;
  param_2[3] = uVar5 + lVar4 + 7 & 0xfffffffffffffff8;
  uVar1 = param_1[1];
  uVar3 = 8;
  if ((uint)param_1[4] < 8) {
    uVar3 = param_1[4];
  }
  if ((uVar1 != 0) && (uVar3 < 9)) {
    uVar5 = uVar2;
    uVar7 = uVar2;
    if ((uVar3 & 1) != 0) {
      do {
        uVar6 = (int)uVar7 + 1;
        uVar5 = ((ulonglong)uVar1 * 4 + 7 & 0xfffffffffffffff8) + 0x28 + uVar5;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < (uVar3 & 1));
    }
    if (uVar3 >> 1 != 0) {
      do {
        if (uVar1 == 0) {
          return 0xfffffffe;
        }
        uVar6 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar6;
        uVar5 = uVar5 + (ulonglong)uVar1 * 8 + 0x40;
      } while (uVar6 < uVar3 >> 1);
    }
    *param_2 = uVar5 + *param_2 + 7 & 0xfffffffffffffff8;
    return 0;
  }
  return 0xfffffffe;
}


