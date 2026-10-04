// FUN_18000a840 @ 18000a840

uint FUN_18000a840(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 local_res10;
  
  bVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (bVar1 < 0xfe) {
    return (uint)bVar1;
  }
  if (bVar1 == 0xfe) {
    local_res10 = (uint)local_res10._2_2_ << 0x10;
    (**(code **)(*param_2 + 0x10))(param_2,&local_res10,2);
    return local_res10 & 0xffff;
  }
  local_res10 = 0;
  (**(code **)(*param_2 + 0x10))(param_2,&local_res10,4);
  return local_res10;
}


