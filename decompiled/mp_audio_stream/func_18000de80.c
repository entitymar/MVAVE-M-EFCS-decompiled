// FUN_18000de80 @ 18000de80

void FUN_18000de80(longlong param_1)

{
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0;
  local_18 = param_1;
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    (**(code **)(param_1 + 0x20))(&local_18);
  }
  if ((*(code **)(local_18 + 0x28) != (code *)0x0) && ((int)uStack_10 == 1)) {
    (**(code **)(local_18 + 0x28))();
  }
  return;
}


