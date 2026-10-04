// FUN_180005b50 @ 180005b50

undefined8 * FUN_180005b50(undefined8 *param_1,uint param_2)

{
  *param_1 = flutter::BinaryMessengerImpl::vftable;
  FUN_180005540(param_1 + 2,param_1 + 2,*(longlong **)(param_1[2] + 8));
  free((void *)param_1[2]);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


