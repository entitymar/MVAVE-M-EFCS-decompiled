// FUN_18000cf84 @ 18000cf84

void FUN_18000cf84(void)

{
  PVOID pvVar1;
  __acrt_ptd *p_Var2;
  
  if (DAT_180025218 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_180025218);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      p_Var2 = FUN_18000cdf8();
      if (p_Var2 == (__acrt_ptd *)0x0) goto LAB_18000cfc0;
    }
    return;
  }
LAB_18000cfc0:
                    /* WARNING: Subroutine does not return */
  abort();
}


