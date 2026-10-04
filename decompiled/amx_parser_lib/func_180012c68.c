// FUN_180012c68 @ 180012c68

void FUN_180012c68(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_180009da0((LPVOID)*param_1);
  }
  return;
}


