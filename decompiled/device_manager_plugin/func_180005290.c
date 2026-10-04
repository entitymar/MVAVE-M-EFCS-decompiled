// FUN_180005290 @ 180005290

void FUN_180005290(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  plVar1 = *(longlong **)(param_3 + 0x40);
  local_res8 = param_2;
  local_res10[0] = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,local_res10,&local_res8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


