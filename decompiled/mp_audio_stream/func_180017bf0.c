// FUN_180017bf0 @ 180017bf0

undefined8 FUN_180017bf0(longlong *param_1)

{
  void *pvVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  if (param_1[0x187] != 0) {
    (**(code **)(*param_1 + 0x158))();
  }
  if (((int)param_1[1] == 2) || ((int)param_1[1] == 3)) {
    pvVar1 = (void *)param_1[0x18b];
    puVar3 = (undefined8 *)(*param_1 + 0x100);
    if (pvVar1 != (void *)0x0) {
      if (puVar3 == (undefined8 *)0x0) {
        free(pvVar1);
      }
      else {
        pcVar2 = *(code **)(*param_1 + 0x118);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(pvVar1,*puVar3);
        }
      }
    }
    pvVar1 = (void *)param_1[0x189];
    puVar3 = (undefined8 *)(*param_1 + 0x100);
    if (pvVar1 != (void *)0x0) {
      if (puVar3 == (undefined8 *)0x0) {
        free(pvVar1);
      }
      else {
        pcVar2 = *(code **)(*param_1 + 0x118);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(pvVar1,*puVar3);
        }
      }
    }
  }
  if (((int)param_1[1] == 1) || ((int)param_1[1] == 3)) {
    pvVar1 = (void *)param_1[0x18a];
    puVar3 = (undefined8 *)(*param_1 + 0x100);
    if (pvVar1 != (void *)0x0) {
      if (puVar3 == (undefined8 *)0x0) {
        free(pvVar1);
      }
      else {
        pcVar2 = *(code **)(*param_1 + 0x118);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(pvVar1,*puVar3);
        }
      }
    }
    pvVar1 = (void *)param_1[0x188];
    puVar3 = (undefined8 *)(*param_1 + 0x100);
    if (pvVar1 != (void *)0x0) {
      if (puVar3 == (undefined8 *)0x0) {
        free(pvVar1);
      }
      else {
        pcVar2 = *(code **)(*param_1 + 0x118);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(pvVar1,*puVar3);
          return 0;
        }
      }
    }
  }
  return 0;
}


