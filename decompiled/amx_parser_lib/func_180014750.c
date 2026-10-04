// FUN_180014750 @ 180014750

bool FUN_180014750(uint *param_1)

{
  undefined8 uVar1;
  uint local_res8 [2];
  
  FUN_180014ff0(*param_1);
  FUN_180015120(param_1[1]);
  local_res8[0] = 0;
  local_res8[1] = 0;
  uVar1 = FUN_180014730(local_res8);
  if (((int)uVar1 == 0) && (*param_1 == local_res8[0])) {
    return param_1[1] != local_res8[1];
  }
  return true;
}


