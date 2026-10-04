// __vcrt_FlsAlloc @ 180004da0

/* Library Function - Single Match
    __vcrt_FlsAlloc
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsAlloc(undefined8 param_1)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_180004c50(0,"FlsAlloc",(uint *)&DAT_180019338,(uint *)"FlsAlloc");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180018270)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180004dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsAlloc();
  return;
}


