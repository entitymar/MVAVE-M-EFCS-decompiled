// FUN_1800058a0 @ 1800058a0

longlong FUN_1800058a0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_180006710(param_1,param_2);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return param_1;
}


