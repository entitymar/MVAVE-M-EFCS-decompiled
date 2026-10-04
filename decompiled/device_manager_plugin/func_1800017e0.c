// FUN_1800017e0 @ 1800017e0

undefined8 * FUN_1800017e0(longlong *param_1,undefined8 *param_2,int *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_48;
  undefined8 uStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar4 = (longlong *)*param_1;
  local_38 = (longlong *)plVar4[1];
  uStack_30 = 0;
  plVar6 = plVar4;
  if (*(char *)((longlong)local_38 + 0x19) == '\0') {
    plVar2 = local_38;
    plVar5 = plVar4;
    do {
      local_38 = plVar2;
      plVar1 = local_38;
      plVar6 = local_38;
      if ((int)local_38[4] < *param_3) {
        plVar1 = local_38 + 2;
        plVar6 = plVar5;
      }
      uStack_30 = (uint)(*param_3 <= (int)local_38[4]);
      plVar2 = (longlong *)*plVar1;
      plVar5 = plVar6;
    } while (*(char *)(*plVar1 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') && ((int)plVar6[4] <= *param_3)) {
    *param_2 = plVar6;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (param_1[1] == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_180004e90();
  }
  uStack_40 = 0;
  local_48 = param_1;
  plVar2 = (longlong *)FUN_18000b2a8(0x68);
  *(int *)(plVar2 + 4) = *param_3;
  plVar2[0xc] = 0;
  plVar6 = (longlong *)param_4[7];
  if (plVar6 != (longlong *)0x0) {
    if (plVar6 == param_4) {
      lVar3 = (**(code **)(*plVar6 + 8))(plVar6,plVar2 + 5);
      plVar2[0xc] = lVar3;
      plVar6 = (longlong *)param_4[7];
      if (plVar6 == (longlong *)0x0) goto LAB_1800018e8;
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar6 != param_4);
    }
    else {
      plVar2[0xc] = (longlong)plVar6;
    }
    param_4[7] = 0;
  }
LAB_1800018e8:
  *plVar2 = (longlong)plVar4;
  plVar2[1] = (longlong)plVar4;
  plVar2[2] = (longlong)plVar4;
  *(undefined2 *)(plVar2 + 3) = 0;
  uStack_40 = CONCAT44(uStack_2c,uStack_30);
  local_48 = local_38;
  plVar4 = FUN_180004ad0(param_1,(longlong *)&local_48,plVar2);
  *param_2 = plVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}


