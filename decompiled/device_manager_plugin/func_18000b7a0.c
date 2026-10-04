// FUN_18000b7a0 @ 18000b7a0

void FUN_18000b7a0(undefined4 *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180015df8);
  *param_1 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180015df8);
                    /* WARNING: Could not recover jumptable at 0x00018000b7d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_180015df0);
  return;
}


