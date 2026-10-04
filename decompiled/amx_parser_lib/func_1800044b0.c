// FUN_1800044b0 @ 1800044b0

LPVOID FUN_1800044b0(void)

{
  DWORD dwErrCode;
  int iVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_180025090 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_180025090);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_180025090,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x80);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_180025090,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_180025090,(LPVOID)0x0);
        pvVar2 = pvVar3;
      }
      else {
        *(undefined4 *)((longlong)pvVar3 + 0x78) = 0xfffffffe;
        pvVar2 = pvVar4;
        pvVar4 = pvVar3;
      }
      thunk_FUN_180009da0(pvVar2);
      pvVar3 = pvVar4;
    }
    SetLastError(dwErrCode);
  }
  return pvVar3;
}


