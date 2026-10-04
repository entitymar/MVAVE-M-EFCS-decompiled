// FUN_180018710 @ 180018710

FARPROC FUN_180018710(longlong param_1,HMODULE param_2,LPCSTR param_3)

{
  FARPROC pFVar1;
  
  FUN_180025970(param_1,4,"Loading symbol: %s\n",param_3);
  pFVar1 = GetProcAddress(param_2,param_3);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_180025970(param_1,2,"Failed to load symbol: %s\n",param_3);
  }
  return pFVar1;
}


