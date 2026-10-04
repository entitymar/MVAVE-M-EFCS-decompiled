// FUN_1800147c0 @ 1800147c0

undefined8 FUN_1800147c0(ulonglong *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  uVar3 = FUN_180014730((uint *)local_res10);
  uVar1 = local_res10[0];
  if ((int)uVar3 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    bVar2 = FUN_180014750((uint *)local_res10);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      FUN_180015800();
      return 0;
    }
  }
  return 1;
}


