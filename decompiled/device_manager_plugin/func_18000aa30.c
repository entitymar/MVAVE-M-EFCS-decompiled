// FUN_18000aa30 @ 18000aa30

void FUN_18000aa30(undefined8 param_1,ulonglong param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  if (param_2 < 0xfe) {
                    /* WARNING: Could not recover jumptable at 0x00018000aa59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))();
    return;
  }
  pcVar1 = *(code **)(*param_3 + 8);
  if (param_2 < 0x10000) {
    (*pcVar1)(param_3,0xfe);
    uVar2 = 2;
    local_res10[0] = CONCAT22(local_res10[0]._2_2_,(short)param_2);
  }
  else {
    (*pcVar1)(param_3,0xff);
    uVar2 = 4;
    local_res10[0] = (undefined4)param_2;
  }
  (**(code **)(*param_3 + 0x10))(param_3,local_res10,uVar2);
  return;
}


