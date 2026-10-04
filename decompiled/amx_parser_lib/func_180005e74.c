// FUN_180005e74 @ 180005e74

undefined8 * FUN_180005e74(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180006630((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


