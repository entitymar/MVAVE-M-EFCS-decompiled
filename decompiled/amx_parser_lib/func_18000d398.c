// __acrt_lock @ 18000d398

/* Library Function - Multiple Matches With Different Base Names
    __acrt_lock
    __acrt_unlock
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_lock(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018000d3aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(&DAT_180026320 + (longlong)param_1 * 0x28);
  return;
}


