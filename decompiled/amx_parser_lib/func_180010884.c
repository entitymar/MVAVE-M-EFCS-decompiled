// FUN_180010884 @ 180010884

void FUN_180010884(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001800108a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((&DAT_180025ed0)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}


