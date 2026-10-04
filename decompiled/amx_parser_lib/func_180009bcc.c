// FUN_180009bcc @ 180009bcc

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180009bcc(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18000cf68();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


