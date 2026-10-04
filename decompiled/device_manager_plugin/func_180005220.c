// FUN_180005220 @ 180005220

void FUN_180005220(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  plVar1 = (longlong *)param_3[7];
  local_res8 = param_2;
  local_res10[0] = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,local_res10,&local_res8);
    plVar1 = (longlong *)param_3[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
      param_3[7] = 0;
    }
    free(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


