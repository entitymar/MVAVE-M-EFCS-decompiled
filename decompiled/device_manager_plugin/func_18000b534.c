// FUN_18000b534 @ 18000b534

undefined1 FUN_18000b534(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  uVar1 = (undefined1)param_1;
  if (DAT_180015dec < 1) {
    uVar1 = 0;
  }
  else {
    DAT_180015dec = DAT_180015dec + -1;
    uVar2 = __scrt_acquire_startup_lock();
    if (DAT_180015e08 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_18000c320(7);
    }
    __scrt_dllmain_uninitialize_c();
    FUN_18000c2d4();
    FUN_18000c4a8();
    DAT_180015e08 = 0;
    uVar3 = (undefined7)((ulonglong)param_1 >> 8);
    __scrt_release_startup_lock((char)uVar2);
    uVar1 = __scrt_uninitialize_crt(CONCAT71(uVar3,uVar1),'\0');
    FUN_18000ba1c();
  }
  return uVar1;
}


