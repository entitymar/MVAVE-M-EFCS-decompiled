// _Init_thread_footer @ 18000b7dc

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180015df8);
  uVar1 = (ulonglong)_tls_index;
  DAT_18001508c = DAT_18001508c + 1;
  *param_1 = DAT_18001508c;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_18001508c;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180015df8);
                    /* WARNING: Could not recover jumptable at 0x00018000b83e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_180015df0);
  return;
}


