// FUN_18000b848 @ 18000b848

void FUN_18000b848(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180015df8);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18000b8b0:
                    /* WARNING: Could not recover jumptable at 0x00018000b8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180015df8);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_18001508c;
      goto LAB_18000b8b0;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_180015df0,(PSRWLOCK)&DAT_180015df8,0xffffffff,0);
  } while( true );
}


