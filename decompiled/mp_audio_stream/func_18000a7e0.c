// FUN_18000a7e0 @ 18000a7e0

undefined8 FUN_18000a7e0(int *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  longlong local_res8;
  ulonglong local_68 [6];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined **ppuStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 != (ulonglong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  if (((param_1 == (int *)0x0) || (param_1[2] == 0)) || (param_1[3] == 0)) {
    return 0xfffffffe;
  }
  *param_2 = 0;
  param_2[1] = 0;
  puVar1 = FUN_180003010(local_68,param_1);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  local_28 = puVar1[2];
  ppuStack_20 = (undefined **)puVar1[3];
  local_18 = puVar1[4];
  uStack_10 = puVar1[5];
  uVar2 = FUN_1800030c0((longlong)&local_38,local_68);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  local_68[0] = *param_2 + local_68[0];
  *param_2 = local_68[0];
  param_2[2] = local_68[0];
  if ((param_1[0x10] != 0) || (param_1[4] != param_1[5])) {
    puVar1 = FUN_18001ca70(local_68,param_1);
    local_38 = *puVar1;
    uStack_30 = puVar1[1];
    local_28 = puVar1[2];
    ppuStack_20 = (undefined **)puVar1[3];
    local_18 = puVar1[4];
    uStack_10 = puVar1[5];
    local_res8 = 0;
    if ((int)local_28 == 0) {
      ppuVar3 = &PTR_FUN_180036470;
      uVar2 = 0;
    }
    else {
      ppuVar3 = ppuStack_20;
      uVar2 = local_18;
      if ((int)local_28 != 1) {
        return 0xfffffffe;
      }
    }
    if ((ppuVar3 == (undefined **)0x0) || ((code *)*ppuVar3 == (code *)0x0)) {
      return 0xffffffe3;
    }
    uVar2 = (*(code *)*ppuVar3)(uVar2,&local_38,&local_res8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    local_68[0] = local_res8 + *param_2;
  }
  *param_2 = local_68[0] + 7 & 0xfffffffffffffff8;
  return 0;
}


