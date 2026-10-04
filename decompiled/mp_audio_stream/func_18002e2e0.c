// FUN_18002e2e0 @ 18002e2e0

undefined1 FUN_18002e2e0(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  uVar1 = (undefined1)param_1;
  if (DAT_180036ce8 < 1) {
    uVar1 = 0;
  }
  else {
    DAT_180036ce8 = DAT_180036ce8 + -1;
    uVar2 = __scrt_acquire_startup_lock();
    if (DAT_180037278 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_18002ea8c(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_18002e72c();
    FUN_18002ec14();
    DAT_180037278 = 0;
    uVar3 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar2);
    uVar1 = __scrt_uninitialize_crt(CONCAT71(uVar3,uVar1),'\0');
    FUN_18002e8b4();
  }
  return uVar1;
}


