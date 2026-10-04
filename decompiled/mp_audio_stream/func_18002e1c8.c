// FUN_18002e1c8 @ 18002e1c8

undefined8 FUN_18002e1c8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar4 = FUN_18002e8c8(0);
  if ((char)uVar4 != '\0') {
    uVar4 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180037278 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18002ea8c(7);
    }
    DAT_180037278 = 1;
    bVar2 = FUN_18002e7cc();
    if (bVar2) {
      FUN_18002ebd8();
      FUN_18002e71c();
      FUN_18002e740();
      iVar3 = _initterm_e(&DAT_18002f248,&DAT_18002f250);
      if ((iVar3 == 0) && (uVar5 = __scrt_dllmain_after_initialize_c(), (char)uVar5 != '\0')) {
        _initterm(&DAT_18002f238,&DAT_18002f240);
        DAT_180037278 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar4);
    if (!bVar1) {
      plVar6 = (longlong *)FUN_18002ea78();
      if ((*plVar6 != 0) && (uVar7 = FUN_18002e990((longlong)plVar6), (char)uVar7 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_18002f210)(param_1,2,param_2);
      }
      DAT_180036ce8 = DAT_180036ce8 + 1;
      return 1;
    }
  }
  return 0;
}


