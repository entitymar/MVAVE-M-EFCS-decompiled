// FUN_180006b10 @ 180006b10

undefined8 FUN_180006b10(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong *local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = (longlong *)0x0;
  local_res20 = 0;
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_3 == 2,0,local_res10);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_res10[0] + 0x28))(local_res10[0],&local_res20);
    (**(code **)(*local_res10[0] + 0x10))();
    if (-1 < iVar1) {
      return local_res20;
    }
  }
  return 0;
}


