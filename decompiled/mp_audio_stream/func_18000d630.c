// FUN_18000d630 @ 18000d630

undefined8 FUN_18000d630(int param_1,longlong *param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int local_28 [8];
  
  if (((int)param_2[1] == 2) || ((int)param_2[1] == 3)) {
    local_28[0] = 0;
    local_28[1] = 1;
    local_28[2] = 2;
    local_28[3] = 3;
    local_28[4] = 4;
    local_28[5] = 4;
    uVar6 = (ulonglong)
            (uint)(local_28[*(int *)((longlong)param_2 + 0x9d4)] * (int)param_2[0x13b] * param_1);
    if (*param_2 == -0x100) {
      pvVar3 = malloc(uVar6);
LAB_18000d6ca:
      if (pvVar3 != (void *)0x0) {
        if (uVar6 != 0) {
          memset(pvVar3,0,uVar6);
        }
        pvVar2 = (void *)param_2[0x18b];
        puVar5 = (undefined8 *)(*param_2 + 0x100);
        if (pvVar2 != (void *)0x0) {
          if (puVar5 == (undefined8 *)0x0) {
            free(pvVar2);
          }
          else {
            pcVar1 = *(code **)(*param_2 + 0x118);
            if (pcVar1 != (code *)0x0) {
              (*pcVar1)(pvVar2,*puVar5);
            }
          }
        }
        param_2[0x18b] = (longlong)pvVar3;
        *(int *)(param_2 + 0xa9) = param_1;
        goto LAB_18000d726;
      }
    }
    else {
      pcVar1 = *(code **)(*param_2 + 0x108);
      if (pcVar1 != (code *)0x0) {
        pvVar3 = (void *)(*pcVar1)(uVar6);
        goto LAB_18000d6ca;
      }
    }
LAB_18000d80e:
    uVar4 = 0xfffffffc;
  }
  else {
LAB_18000d726:
    if (((int)param_2[1] == 1) || ((int)param_2[1] == 3)) {
      local_28[0] = 0;
      local_28[1] = 1;
      local_28[2] = 2;
      local_28[3] = 3;
      local_28[4] = 4;
      local_28[5] = 4;
      uVar6 = (ulonglong)
              (uint)(local_28[*(int *)((longlong)param_2 + 0x43c)] * (int)param_2[0x88] * param_1);
      if (*param_2 == -0x100) {
        pvVar3 = malloc(uVar6);
      }
      else {
        pcVar1 = *(code **)(*param_2 + 0x108);
        if (pcVar1 == (code *)0x0) goto LAB_18000d80e;
        pvVar3 = (void *)(*pcVar1)(uVar6);
      }
      if (pvVar3 == (void *)0x0) goto LAB_18000d80e;
      if (uVar6 != 0) {
        memset(pvVar3,0,uVar6);
      }
      pvVar2 = (void *)param_2[0x18a];
      puVar5 = (undefined8 *)(*param_2 + 0x100);
      if (pvVar2 != (void *)0x0) {
        if (puVar5 == (undefined8 *)0x0) {
          free(pvVar2);
        }
        else {
          pcVar1 = *(code **)(*param_2 + 0x118);
          if (pcVar1 != (code *)0x0) {
            (*pcVar1)(pvVar2,*puVar5);
            param_2[0x18a] = (longlong)pvVar3;
            *(int *)(param_2 + 0xa9) = param_1;
            return 0;
          }
        }
      }
      param_2[0x18a] = (longlong)pvVar3;
      *(int *)(param_2 + 0xa9) = param_1;
    }
    uVar4 = 0;
  }
  return uVar4;
}


