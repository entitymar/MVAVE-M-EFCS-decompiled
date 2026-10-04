// FUN_1800186a0 @ 1800186a0

HMODULE FUN_1800186a0(longlong param_1,LPCSTR param_2)

{
  HMODULE pHVar1;
  
  FUN_180025970(param_1,4,"Loading library: %s\n",param_2);
  pHVar1 = LoadLibraryA(param_2);
  if (pHVar1 == (HMODULE)0x0) {
    FUN_180025970(param_1,3,"Failed to load library: %s\n",param_2);
  }
  return pHVar1;
}


