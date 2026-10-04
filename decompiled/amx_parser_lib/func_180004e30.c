// __vcrt_FlsGetValue @ 180004e30

/* Library Function - Single Match
    __vcrt_FlsGetValue
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsGetValue(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_180004c50(2,"FlsGetValue",(uint *)&DAT_180019360,(uint *)"FlsGetValue");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180018270)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180004e6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsGetValue(param_1);
  return;
}


