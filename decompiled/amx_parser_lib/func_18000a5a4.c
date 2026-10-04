// FlsAlloc @ 18000a5a4

DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018000a5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}


