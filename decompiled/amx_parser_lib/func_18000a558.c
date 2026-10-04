// FUN_18000a558 @ 18000a558

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_18000a558(void)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  if (DAT_180029000 == (FARPROC)0xffffffffffffffff) {
    return 1;
  }
  pFVar1 = DAT_180029000;
  if ((DAT_180029000 == (FARPROC)0x0) &&
     (pFVar1 = FUN_18000a348(0,"AreFileApisANSI",(uint *)&DAT_180019fd8,(uint *)&DAT_180019fdc),
     pFVar1 == (FARPROC)0x0)) {
    return 1;
  }
  IVar2 = (*pFVar1)();
  return IVar2;
}


