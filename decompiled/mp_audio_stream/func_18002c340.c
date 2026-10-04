// FUN_18002c340 @ 18002c340

undefined8 FUN_18002c340(undefined4 *param_1,undefined8 param_2,void *param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if ((param_3 == (void *)0x0) || (memset(param_3,0,0xc0), param_1 == (undefined4 *)0x0)) {
    return 0xfffffffe;
  }
  *(undefined8 *)((longlong)param_3 + 0xb0) = param_2;
  *(undefined4 *)((longlong)param_3 + 0x18) = *param_1;
  *(undefined4 *)((longlong)param_3 + 0x1c) = param_1[1];
  *(undefined4 *)((longlong)param_3 + 0x20) = param_1[2];
  *(undefined4 *)((longlong)param_3 + 0x24) = param_1[3];
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  if (param_1[4] == 0) {
    ppuVar1 = &PTR_FUN_180036470;
    *(undefined ***)((longlong)param_3 + 8) = &PTR_FUN_180036470;
    pvVar3 = param_3;
  }
  else {
    if (param_1[4] != 1) {
      return 0xfffffffe;
    }
    ppuVar1 = *(undefined ***)(param_1 + 6);
    *(undefined ***)((longlong)param_3 + 8) = ppuVar1;
    pvVar3 = *(void **)(param_1 + 8);
  }
  *(void **)((longlong)param_3 + 0x10) = pvVar3;
  if ((ppuVar1 != (undefined **)0x0) && ((code *)ppuVar1[1] != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018002c3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)ppuVar1[1])(pvVar3,param_1,param_2,param_3);
    return uVar2;
  }
  return 0xffffffe3;
}


