// FUN_18000ba30 @ 18000ba30

longlong FUN_18000ba30(int param_1)

{
  char cVar1;
  uint7 extraout_var;
  uint7 uVar2;
  undefined7 extraout_var_00;
  uint7 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_180015e18 = 1;
  }
  FUN_18000bc34();
  cVar1 = FUN_18000c59c();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_18000c59c();
    if (cVar1 != '\0') {
      return CONCAT71(extraout_var_00,1);
    }
    FUN_18000c59c();
    uVar2 = extraout_var_01;
  }
  return (ulonglong)uVar2 << 8;
}


