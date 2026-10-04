// FUN_1800170c8 @ 1800170c8

void FUN_1800170c8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180004494();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_180004494();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}


