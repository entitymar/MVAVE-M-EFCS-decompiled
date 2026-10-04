// FUN_1800027a0 @ 1800027a0

undefined8 FUN_1800027a0(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  int iVar1;
  
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = 0;
  }
  if ((param_3 != 0) && (param_1 != 0)) {
    if (param_2 == 0) {
      *(double *)(param_1 + 0x70) =
           (double)(longlong)param_3 * *(double *)(param_1 + 0x68) + *(double *)(param_1 + 0x70);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        FUN_18001dbc0(param_1,param_2,param_3);
      }
      else if (iVar1 == 1) {
        FUN_18001de20(param_1,DAT_1800320d0,param_2,param_3);
      }
      else if (iVar1 == 2) {
        FUN_18001e0d0(param_1,param_2,param_3);
      }
      else {
        if (iVar1 != 3) {
          return 0xfffffffd;
        }
        FUN_18001d930(param_1,param_2,param_3);
      }
    }
    if (param_4 != (ulonglong *)0x0) {
      *param_4 = param_3;
    }
    return 0;
  }
  return 0xfffffffe;
}


