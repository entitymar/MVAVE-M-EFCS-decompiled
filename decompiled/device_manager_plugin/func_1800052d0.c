// FUN_1800052d0 @ 1800052d0

void FUN_1800052d0(longlong *param_1)

{
  longlong *plVar1;
  
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
      param_1[7] = 0;
    }
    free(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


