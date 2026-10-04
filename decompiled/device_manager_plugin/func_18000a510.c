// FUN_18000a510 @ 18000a510

longlong FUN_18000a510(undefined **param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *local_48;
  undefined8 uStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == (undefined **)0x0) {
    param_1 = FUN_18000a4a0();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_180015de8) && (FUN_18000b848(&DAT_180015de8), DAT_180015de8 == -1)) {
    plVar6 = (longlong *)FUN_18000b2a8(0x10);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      *plVar6 = 0;
      plVar6[1] = 0;
      lVar7 = FUN_18000b2a8(0x30);
      *(longlong *)lVar7 = lVar7;
      *(longlong *)(lVar7 + 8) = lVar7;
      *(longlong *)(lVar7 + 0x10) = lVar7;
      *(undefined2 *)(lVar7 + 0x18) = 0x101;
      *plVar6 = lVar7;
    }
    DAT_180015de0 = plVar6;
    _Init_thread_footer(&DAT_180015de8);
  }
  plVar6 = (longlong *)*DAT_180015de0;
  plVar4 = (longlong *)plVar6[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar5 = plVar6;
  while (cVar1 == '\0') {
    plVar8 = plVar4;
    if ((undefined **)plVar4[4] < param_1) {
      plVar4 = plVar4 + 2;
      plVar8 = plVar5;
    }
    plVar4 = (longlong *)*plVar4;
    plVar5 = plVar8;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar5 + 0x19) != '\0') || (param_1 < (undefined **)plVar5[4])) ||
     (plVar5 == plVar6)) {
    puVar3 = (undefined8 *)FUN_18000b2a8(0x10);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *puVar3 = flutter::StandardMethodCodec::vftable;
      puVar3[1] = param_1;
    }
    plVar8 = DAT_180015de0;
    plVar6 = (longlong *)*DAT_180015de0;
    plVar4 = (longlong *)plVar6[1];
    uStack_30 = 0;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
    plVar5 = plVar6;
    local_38 = plVar4;
    while (plVar2 = plVar4, cVar1 == '\0') {
      plVar4 = plVar2;
      plVar9 = plVar2;
      if ((undefined **)plVar2[4] < param_1) {
        plVar4 = plVar2 + 2;
        plVar9 = plVar5;
      }
      uStack_30 = (uint)(param_1 <= (undefined **)plVar2[4]);
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar5 = plVar9;
      plVar4 = (longlong *)*plVar4;
      local_38 = plVar2;
    }
    if ((*(char *)((longlong)plVar5 + 0x19) != '\0') ||
       (puVar10 = puVar3, param_1 < (undefined **)plVar5[4])) {
      if (DAT_180015de0[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
        FUN_180004e90();
      }
      local_48 = DAT_180015de0;
      uStack_40 = 0;
      plVar4 = (longlong *)FUN_18000b2a8(0x30);
      plVar4[4] = (longlong)param_1;
      puVar10 = (undefined8 *)0x0;
      plVar4[5] = (longlong)puVar3;
      *plVar4 = (longlong)plVar6;
      plVar4[1] = (longlong)plVar6;
      plVar4[2] = (longlong)plVar6;
      *(undefined2 *)(plVar4 + 3) = 0;
      uStack_40 = CONCAT44(uStack_2c,uStack_30);
      local_48 = local_38;
      plVar5 = FUN_180004ad0(plVar8,(longlong *)&local_48,plVar4);
    }
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  return plVar5[5];
}


