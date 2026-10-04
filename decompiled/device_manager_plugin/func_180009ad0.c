// FUN_180009ad0 @ 180009ad0

undefined8 * FUN_180009ad0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = flutter::StandardMethodCodec::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


