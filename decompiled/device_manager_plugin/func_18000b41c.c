// FUN_18000b41c @ 18000b41c

undefined8 FUN_18000b41c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar4 = FUN_18000ba30(0);
  if ((char)uVar4 != '\0') {
    uVar4 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180015e08 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18000c320(7);
    }
    DAT_180015e08 = 1;
    bVar2 = FUN_18000b934();
    if (bVar2) {
      FUN_18000c46c();
      FUN_18000c2c4();
      FUN_18000c2f0();
      iVar3 = _initterm_e(&DAT_18000d348,&DAT_18000d350);
      if ((iVar3 == 0) && (uVar5 = __scrt_dllmain_after_initialize_c(), (char)uVar5 != '\0')) {
        _initterm(&DAT_18000d338,&DAT_18000d340);
        DAT_180015e08 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar4);
    if (!bVar1) {
      plVar6 = (longlong *)FUN_18000c30c();
      if ((*plVar6 != 0) && (uVar7 = FUN_18000baf8((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_18000d310)(param_1,2,param_2);
      }
      DAT_180015dec = DAT_180015dec + 1;
      return 1;
    }
  }
  return 0;
}


