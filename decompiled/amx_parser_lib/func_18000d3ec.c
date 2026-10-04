// __acrt_unlock @ 18000d3ec

/* Library Function - Single Match
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_unlock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d3fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(&DAT_180026320 + (longlong)param_1 * 0x28);
  return;
}


