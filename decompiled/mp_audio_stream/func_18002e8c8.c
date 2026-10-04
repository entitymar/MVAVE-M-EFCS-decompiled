// FUN_18002e8c8 @ 18002e8c8

longlong FUN_18002e8c8(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180037288 = 1;
  }
  FUN_18002dee0();
  cVar1 = FUN_18002ecdc();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18002ecdc();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18002ecdc();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}


