// FUN_180005de0 @ 180005de0

undefined8 FUN_180005de0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  basic_ostream<char,std::char_traits<char>_> *this;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  local_34 = 0;
  uStack_18._4_4_ = 0;
  local_28._4_4_ = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18._0_4_ = 0;
  if (param_2 != (undefined4 *)0x0) {
    if (*(char *)(param_2 + 0x12) == '\0') {
      local_30 = FUN_1800051e0;
      local_38 = 0;
      local_28 = param_2;
      uVar1 = FlutterDesktopTextureRegistrarRegisterExternalTexture
                        (*(undefined8 *)(param_1 + 8),&local_38);
      return uVar1;
    }
    if ((param_2 != (undefined4 *)0x0) && (*(char *)(param_2 + 0x12) == '\x01')) {
      local_28._0_4_ = *param_2;
      uStack_20 = 0x80005290;
      uStack_1c = 1;
      local_38 = 1;
      local_30 = (code *)0x20;
      uStack_18 = param_2;
      uVar1 = FlutterDesktopTextureRegistrarRegisterExternalTexture
                        (*(undefined8 *)(param_1 + 8),&local_38);
      return uVar1;
    }
  }
  this = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                       "Attempting to register unknown texture variant.");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,FUN_180002140);
  return 0xffffffffffffffff;
}


