// FUN_180004b14 @ 180004b14

void FUN_180004b14(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = FUN_180004494();
  if (param_1 == *(longlong *)(lVar2 + 0x58)) {
    lVar2 = FUN_180004494();
    lVar2 = *(longlong *)(lVar2 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar3 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar3) {
        lVar2 = FUN_180004494();
        *(longlong *)(lVar2 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


