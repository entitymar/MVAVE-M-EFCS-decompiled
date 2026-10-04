// FUN_1800168d0 @ 1800168d0

uint FUN_1800168d0(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_18;
  undefined8 uStack_10;
  
  if (param_2 != 3) {
    lVar3 = 0;
    lVar2 = lVar3;
    if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
      lVar2 = *(longlong *)(*param_1 + 0x70);
    }
    FUN_180025970(lVar2,4,"=== CHANGING DEVICE ===\n",param_4);
    uVar1 = FUN_180016210(param_1,param_2);
    if (uVar1 == 0) {
      FUN_18000ded0(param_1,param_2);
      uStack_10 = 2;
      local_18 = param_1;
      if ((code *)param_1[4] != (code *)0x0) {
        (*(code *)param_1[4])(&local_18);
      }
      if (((code *)local_18[5] != (code *)0x0) && ((int)uStack_10 == 1)) {
        (*(code *)local_18[5])();
      }
      if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
        lVar3 = *(longlong *)(*param_1 + 0x70);
      }
      FUN_180025970(lVar3,4,"=== DEVICE CHANGED ===\n",param_4);
      uVar1 = 0;
    }
    else {
      if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
        lVar3 = *(longlong *)(*param_1 + 0x70);
      }
      FUN_180025970(lVar3,2,"[WASAPI] Reinitializing device after route change failed.\n",param_4);
    }
    return uVar1;
  }
  return 0xfffffffe;
}


