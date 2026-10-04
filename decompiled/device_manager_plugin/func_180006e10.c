// FUN_180006e10 @ 180006e10

longlong * FUN_180006e10(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180015dd8) {
    FUN_18000b848(&DAT_180015dd8);
    if (DAT_180015dd8 == -1) {
      plVar1 = (longlong *)FUN_18000b2a8(0x10);
      if (plVar1 == (longlong *)0x0) {
        plVar1 = (longlong *)0x0;
      }
      else {
        *plVar1 = 0;
        plVar1[1] = 0;
        lVar2 = FUN_18000b2a8(0x30);
        *(longlong *)lVar2 = lVar2;
        *(longlong *)(lVar2 + 8) = lVar2;
        *(longlong *)(lVar2 + 0x10) = lVar2;
        *(undefined2 *)(lVar2 + 0x18) = 0x101;
        *plVar1 = lVar2;
      }
      DAT_180015dd0 = plVar1;
      _Init_thread_footer(&DAT_180015dd8);
      return DAT_180015dd0;
    }
  }
  return DAT_180015dd0;
}


