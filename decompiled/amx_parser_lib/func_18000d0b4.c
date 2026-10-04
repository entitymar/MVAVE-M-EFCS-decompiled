// FUN_18000d0b4 @ 18000d0b4

ulonglong FUN_18000d0b4(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var_00;
  undefined4 extraout_var;
  
  DAT_180026308 = FUN_18000a760();
  DAT_180025218 = FlsAlloc(FUN_18000cce0);
  uVar2 = CONCAT44(extraout_var,DAT_180025218);
  if (DAT_180025218 != 0xffffffff) {
    p_Var3 = FUN_18000cfc8();
    if (p_Var3 != (__acrt_ptd *)0x0) {
      return CONCAT71((int7)((ulonglong)p_Var3 >> 8),1);
    }
    uVar1 = FUN_18000d0f8();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}


