// FUN_180005760 @ 180005760

ulonglong * FUN_180005760(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = (param_2[1] - *param_2) / 0x48;
  if (uVar2 != 0) {
    if (0x38e38e38e38e38e < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180005170();
    }
    uVar3 = FUN_1800015d0(uVar2 * 0x48);
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar2 * 0x48 + uVar3;
    lVar1 = param_2[1];
    for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
      FUN_180002570(uVar3,lVar4);
      uVar3 = uVar3 + 0x48;
    }
    param_1[1] = uVar3;
  }
  return param_1;
}


