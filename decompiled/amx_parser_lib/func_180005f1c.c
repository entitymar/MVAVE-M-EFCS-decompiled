// FUN_180005f1c @ 180005f1c

undefined8 * FUN_180005f1c(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  FUN_1800066b0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_180009da0(param_1);
  }
  return param_1;
}


