// FUN_180003bd0 @ 180003bd0

ulonglong FUN_180003bd0(int param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    DAT_180025b48 = 1;
  }
  FUN_180003380();
  uVar1 = __vcrt_initialize();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_180009b4c();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar1 = __vcrt_uninitialize('\0');
  }
  return uVar1 & 0xffffffffffffff00;
}


