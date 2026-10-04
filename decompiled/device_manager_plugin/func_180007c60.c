// FUN_180007c60 @ 180007c60

undefined8 * FUN_180007c60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = flutter::StandardCodecSerializer::vftable;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


