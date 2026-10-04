// FUN_18000cfc8 @ 18000cfc8

__acrt_ptd * FUN_18000cfc8(void)

{
  DWORD dwErrCode;
  __acrt_ptd *p_Var1;
  __acrt_ptd *p_Var2;
  
  p_Var2 = (__acrt_ptd *)0x0;
  if (DAT_180026308 == '\0') {
    dwErrCode = GetLastError();
    p_Var1 = p_Var2;
    if (DAT_180025218 != 0xffffffff) {
      p_Var1 = FlsGetValue(DAT_180025218);
    }
    if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
       (p_Var2 = p_Var1, p_Var1 == (__acrt_ptd *)0x0)) {
      p_Var2 = FUN_18000cdf8();
    }
    SetLastError(dwErrCode);
  }
  else {
    p_Var1 = p_Var2;
    if (DAT_180025218 != 0xffffffff) {
      p_Var1 = (__acrt_ptd *)FUN_18000a5bc();
    }
    if ((p_Var1 != (__acrt_ptd *)0xffffffffffffffff) &&
       (p_Var2 = p_Var1, p_Var1 == (__acrt_ptd *)0x0)) {
      p_Var2 = FUN_18000cdf8();
    }
  }
  return p_Var2;
}


