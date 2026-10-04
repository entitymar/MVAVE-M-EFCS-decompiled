// FUN_180006cc0 @ 180006cc0

void FUN_180006cc0(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  plVar2 = (longlong *)*plVar1;
  local_28 = (longlong *)plVar2[1];
  uStack_20 = 0;
  plVar7 = plVar2;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar5 = local_28;
    plVar8 = plVar2;
    do {
      local_28 = plVar5;
      plVar6 = local_28;
      plVar7 = local_28;
      if ((ulonglong)local_28[4] < *param_2) {
        plVar6 = local_28 + 2;
        plVar7 = plVar8;
      }
      uStack_20 = (uint)(*param_2 <= (ulonglong)local_28[4]);
      plVar5 = (longlong *)*plVar6;
      plVar8 = plVar7;
    } while (*(char *)(*plVar6 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar7 + 0x19) != '\0') || (*param_2 < (ulonglong)plVar7[4])) {
    if (*(longlong *)(param_1 + 0x28) == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      FUN_180004e90();
    }
    uStack_30 = 0;
    local_38 = plVar1;
    plVar7 = (longlong *)FUN_18000b2a8(0x28);
    uVar3 = *param_2;
    *param_2 = 0;
    plVar7[4] = uVar3;
    *plVar7 = (longlong)plVar2;
    plVar7[1] = (longlong)plVar2;
    plVar7[2] = (longlong)plVar2;
    *(undefined2 *)(plVar7 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    FUN_180004ad0(plVar1,(longlong *)&local_38,plVar7);
  }
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return;
}


