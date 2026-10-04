// FUN_180003668 @ 180003668

undefined8 FUN_180003668(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar3 = FUN_180003bd0(0);
  if ((char)uVar3 != '\0') {
    uVar3 = __scrt_acquire_startup_lock();
    bVar1 = true;
    if (DAT_180025b38 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180003d94(7);
    }
    DAT_180025b38 = 1;
    bVar2 = FUN_180003ad4();
    if (bVar2) {
      FUN_180003ee0();
      FUN_180003a24();
      FUN_180003a48();
      uVar4 = FUN_180008e14((undefined8 *)&DAT_1800182a8,(undefined8 *)&DAT_1800182c8);
      if (((int)uVar4 == 0) && (uVar4 = __scrt_dllmain_after_initialize_c(), (char)uVar4 != '\0')) {
        FUN_180008ddc((undefined8 *)&DAT_180018298,(undefined8 *)&DAT_1800182a0);
        DAT_180025b38 = 2;
        bVar1 = false;
      }
    }
    __scrt_release_startup_lock((char)uVar3);
    if (!bVar1) {
      plVar5 = (longlong *)FUN_180003d80();
      if ((*plVar5 != 0) && (uVar6 = FUN_180003c98((longlong)plVar5), (char)uVar6 != '\0')) {
        (*(code *)PTR__guard_dispatch_icall_180018270)(param_1,2,param_2);
      }
      DAT_180025b18 = DAT_180025b18 + 1;
      return 1;
    }
  }
  return 0;
}


