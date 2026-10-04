// thunk_FUN_1800041d0 @ 1800027c0

void thunk_FUN_1800041d0(longlong *param_1)

{
  longlong *plVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[8]) {
  default:
    return;
  case '\x05':
    FUN_1800050d0(param_1);
    return;
  case '\x06':
    FUN_180004eb0(param_1);
    return;
  case '\a':
    FUN_180004f20(param_1);
    return;
  case '\b':
    FUN_180004f90(param_1);
    return;
  case '\t':
    FUN_180004f90(param_1);
    return;
  case '\n':
    FUN_180005000(param_1);
    return;
  case '\v':
    FUN_1800019e0(param_1,param_1,*(longlong **)(*param_1 + 8));
    free((void *)*param_1);
    return;
  case '\f':
    break;
  case '\r':
    FUN_180004f20(param_1);
    return;
  }
  if ((*(uint *)(param_1 + 7) & 3) == 1) {
    plVar1 = (longlong *)param_1[5];
  }
  else {
    plVar1 = param_1;
    if ((*(uint *)(param_1 + 7) & 3) != 2) goto LAB_18000428d;
  }
  (**(code **)param_1[6])(plVar1);
LAB_18000428d:
  param_1[7] = 0;
  return;
}


