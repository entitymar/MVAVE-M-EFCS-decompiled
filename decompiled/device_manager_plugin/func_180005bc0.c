// FUN_180005bc0 @ 180005bc0

undefined8 * FUN_180005bc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = flutter::TextureRegistrarImpl::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


