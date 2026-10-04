// FUN_1800025d0 @ 1800025d0

void FUN_1800025d0(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_1800050d0(param_1 + 9);
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}


