// FUN_18001085c @ 18001085c

void FUN_18001085c(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018001087c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((&DAT_180025ed0)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}


