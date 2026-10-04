// FUN_18000cdf8 @ 18000cdf8

__acrt_ptd * FUN_18000cdf8(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  __acrt_ptd *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_180025218,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = _calloc_base(1,0x3c8);
    if (lpFlsData != (__acrt_ptd *)0x0) {
      BVar1 = FlsSetValue(DAT_180025218,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_180025218,(PVOID)0x0);
        FUN_180009da0(lpFlsData);
        lpFlsData = (__acrt_ptd *)0x0;
      }
      else {
        construct_ptd_array(lpFlsData);
        FUN_180009da0((LPVOID)0x0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_180025218,(PVOID)0x0);
    FUN_180009da0((LPVOID)0x0);
  }
  SetLastError(dwErrCode);
  return (__acrt_ptd *)0x0;
}


