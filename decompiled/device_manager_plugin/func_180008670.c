// FUN_180008670 @ 180008670

longlong FUN_180008670(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar3 = *param_1;
  lVar6 = (param_2 - lVar3) / 0x12 + (param_2 - lVar3 >> 0x3f);
  lVar4 = (param_1[1] - lVar3) / 0x48;
  if (lVar4 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_180005170();
  }
  uVar1 = lVar4 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x48;
  if (0x38e38e38e38e38e - (uVar2 >> 1) < uVar2) {
    uVar7 = 0x38e38e38e38e38e;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x38e38e38e38e38e < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_180004e70();
    }
  }
  uVar5 = FUN_1800015d0(uVar7 * 0x48);
  lVar3 = uVar5 + ((lVar6 >> 2) - (lVar6 >> 0x3f)) * 0x48;
  *(undefined1 *)(lVar3 + 0x40) = 0xff;
  FUN_180008df0((longlong)*(char *)(param_3 + 0x40) + 1);
  lVar4 = param_1[1];
  lVar6 = *param_1;
  uVar2 = uVar5;
  if (param_2 == lVar4) {
    for (; lVar6 != lVar4; lVar6 = lVar6 + 0x48) {
      FUN_180002570(uVar2,lVar6);
      uVar2 = uVar2 + 0x48;
    }
  }
  else {
    FUN_180008d70(lVar6,param_2,uVar5);
    FUN_180008d70(param_2,param_1[1],lVar3 + 0x48);
  }
  FUN_18000ab50(param_1,uVar5,uVar1,uVar7);
  return lVar3;
}


