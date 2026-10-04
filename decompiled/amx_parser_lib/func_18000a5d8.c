// FUN_18000a5d8 @ 18000a5d8

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18000a5d8(ushort *param_1,uint param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  if (DAT_180029090 == (FARPROC)0xffffffffffffffff) {
LAB_18000a683:
    Locale = FUN_18000a6cc(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pFVar1 = DAT_180029090;
    if (DAT_180029090 == (FARPROC)0x0) {
      pFVar1 = FUN_18000a348(0x12,"LCMapStringEx",(uint *)&DAT_18001a008,(uint *)"LCMapStringEx");
      if (pFVar1 == (FARPROC)0x0) goto LAB_18000a683;
    }
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}


