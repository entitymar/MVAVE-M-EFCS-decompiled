// FUN_180015cbc @ 180015cbc

undefined8 * FUN_180015cbc(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_180009da0(param_1);
  }
  return param_1;
}


