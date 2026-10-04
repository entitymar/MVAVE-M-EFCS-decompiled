// FUN_180001ea0 @ 180001ea0

void FUN_180001ea0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    if (param_2 != -0x40) {
      uVar3 = 0;
      uVar4 = 0;
      if (*(int *)(param_2 + 0x4c) != 0) {
        do {
          lVar2 = *(longlong *)(param_2 + 0x58) + (ulonglong)uVar4 * 0x28;
          if (((lVar2 != 0) && (*(int *)(lVar2 + 0x20) != 0)) &&
             (pvVar1 = *(void **)(lVar2 + 0x18), pvVar1 != (void *)0x0)) {
            if (param_3 == (undefined8 *)0x0) {
              free(pvVar1);
            }
            else if ((code *)param_3[3] != (code *)0x0) {
              (*(code *)param_3[3])(pvVar1,*param_3);
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_2 + 0x4c));
      }
      if (*(int *)(param_2 + 0x50) != 0) {
        do {
          lVar2 = (ulonglong)uVar3 * 0x40 + *(longlong *)(param_2 + 0x60);
          if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) != 0)) &&
             (pvVar1 = *(void **)(lVar2 + 0x30), pvVar1 != (void *)0x0)) {
            if (param_3 == (undefined8 *)0x0) {
              free(pvVar1);
            }
            else if ((code *)param_3[3] != (code *)0x0) {
              (*(code *)param_3[3])(pvVar1,*param_3);
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_2 + 0x50));
      }
      if ((*(int *)(param_2 + 0x70) != 0) &&
         (pvVar1 = *(void **)(param_2 + 0x68), pvVar1 != (void *)0x0)) {
        if (param_3 == (undefined8 *)0x0) {
          free(pvVar1);
        }
        else if ((code *)param_3[3] != (code *)0x0) {
          (*(code *)param_3[3])(pvVar1,*param_3);
        }
      }
    }
    if ((*(int *)(param_2 + 0x80) != 0) &&
       (pvVar1 = *(void **)(param_2 + 0x78), pvVar1 != (void *)0x0)) {
      if (param_3 == (undefined8 *)0x0) {
        free(pvVar1);
      }
      else if ((code *)param_3[3] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180001fc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_3[3])(pvVar1,*param_3);
        return;
      }
    }
  }
  return;
}


