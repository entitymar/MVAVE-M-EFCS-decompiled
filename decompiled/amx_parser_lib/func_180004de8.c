// __vcrt_FlsFree @ 180004de8

/* Library Function - Single Match
    __vcrt_FlsFree
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __vcrt_FlsFree(undefined4 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_180004c50(1,"FlsFree",(uint *)&DAT_180019350,(uint *)"FlsFree");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180018270)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180004e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsFree(param_1);
  return;
}


