// FUN_180006ed0 @ 180006ed0

void FUN_180006ed0(ulonglong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_18;
  longlong *local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_180015dd8) && (FUN_18000b848(&DAT_180015dd8), DAT_180015dd8 == -1)) {
    plVar2 = (longlong *)FUN_18000b2a8(0x10);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      *plVar2 = 0;
      plVar2[1] = 0;
      lVar3 = FUN_18000b2a8(0x30);
      *(longlong *)lVar3 = lVar3;
      *(longlong *)(lVar3 + 8) = lVar3;
      *(longlong *)(lVar3 + 0x10) = lVar3;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *plVar2 = lVar3;
    }
    DAT_180015dd0 = plVar2;
    _Init_thread_footer(&DAT_180015dd8);
  }
  local_10 = (longlong *)*DAT_180015dd0;
  plVar2 = (longlong *)local_10[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  local_18 = local_10;
  plVar4 = plVar2;
  while (cVar1 == '\0') {
    if ((ulonglong)plVar4[4] < param_1) {
      plVar4 = plVar4 + 2;
    }
    else {
      local_18 = plVar4;
      if ((*(char *)((longlong)local_10 + 0x19) != '\0') && (param_1 < (ulonglong)plVar4[4])) {
        local_10 = plVar4;
      }
    }
    plVar4 = (longlong *)*plVar4;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (*(char *)((longlong)local_10 + 0x19) == '\0') {
    plVar2 = (longlong *)*local_10;
  }
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  while (cVar1 == '\0') {
    plVar4 = plVar2;
    if ((ulonglong)plVar2[4] <= param_1) {
      plVar2 = plVar2 + 2;
      plVar4 = local_10;
    }
    plVar2 = (longlong *)*plVar2;
    local_10 = plVar4;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  FUN_180007010(DAT_180015dd0,(longlong *)&local_18);
  return;
}


