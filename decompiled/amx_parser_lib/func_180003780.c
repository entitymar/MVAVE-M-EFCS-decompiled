// FUN_180003780 @ 180003780

ulonglong FUN_180003780(bool param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (DAT_180025b18 < 1) {
    uVar2 = 0;
  }
  else {
    DAT_180025b18 = DAT_180025b18 + -1;
    uVar1 = __scrt_acquire_startup_lock();
    if (DAT_180025b38 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_180003d94(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_180003a34();
    FUN_180003f1c();
    DAT_180025b38 = 0;
    __scrt_release_startup_lock((char)uVar1);
    uVar2 = __scrt_uninitialize_crt(param_1,'\0');
    uVar2 = uVar2 & 0xff;
    FUN_180003bbc();
  }
  return uVar2;
}


