// FUN_180005840 @ 180005840

undefined8 * FUN_180005840(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1[1] = param_2;
  *param_1 = flutter::BinaryMessengerImpl::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = FUN_18000b2a8(0x80);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[2] = lVar1;
  return param_1;
}


