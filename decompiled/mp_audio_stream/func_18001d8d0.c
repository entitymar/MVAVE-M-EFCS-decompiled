// FUN_18001d8d0 @ 18001d8d0

void FUN_18001d8d0(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE_00 = (code *)*param_1;
  uVar1 = param_1[1];
  if (param_1 + 2 == (undefined8 *)0x0) {
    free(param_1);
  }
  else if ((code *)param_1[5] != (code *)0x0) {
    (*(code *)param_1[5])(param_1,param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00018001d908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018001d921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(uVar1);
  return;
}


