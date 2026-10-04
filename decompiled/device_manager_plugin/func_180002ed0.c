// FUN_180002ed0 @ 180002ed0

undefined8 * FUN_180002ed0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = stdext::exception::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


