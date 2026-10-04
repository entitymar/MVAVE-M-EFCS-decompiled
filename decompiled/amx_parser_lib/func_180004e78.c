// __vcrt_FlsSetValue @ 180004e78

/* Library Function - Single Match
    __vcrt_FlsSetValue
   
   Library: Visual Studio 2019 Release */

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_180004c50(3,"FlsSetValue",(uint *)&DAT_180019378,(uint *)"FlsSetValue");
  if (pFVar1 == (FARPROC)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180018270)();
  }
  return;
}


