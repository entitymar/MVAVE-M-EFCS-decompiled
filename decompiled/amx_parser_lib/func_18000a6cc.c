// FUN_18000a6cc @ 18000a6cc

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000a6cc(ushort *param_1,uint param_2)

{
  FARPROC pFVar1;
  
  if (DAT_1800290a0 == (FARPROC)0xffffffffffffffff) {
LAB_18000a71b:
    FUN_18000f6bc(param_1);
  }
  else {
    pFVar1 = DAT_1800290a0;
    if (DAT_1800290a0 == (FARPROC)0x0) {
      pFVar1 = FUN_18000a348(0x14,"LocaleNameToLCID",(uint *)&DAT_18001a020,
                             (uint *)"LocaleNameToLCID");
      if (pFVar1 == (FARPROC)0x0) goto LAB_18000a71b;
    }
    (*pFVar1)(param_1,(ulonglong)param_2);
  }
  return;
}


