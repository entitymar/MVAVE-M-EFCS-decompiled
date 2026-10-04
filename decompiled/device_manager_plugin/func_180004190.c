// FUN_180004190 @ 180004190

void FUN_180004190(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018000419d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}


