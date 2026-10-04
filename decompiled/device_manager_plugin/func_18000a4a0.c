// FUN_18000a4a0 @ 18000a4a0

undefined ** FUN_18000a4a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_180015ddc) {
    FUN_18000b848(&DAT_180015ddc);
    if (DAT_180015ddc == -1) {
      atexit((_func_5014 *)&LAB_18000cf90);
      _Init_thread_footer(&DAT_180015ddc);
      return &PTR_vftable_180015000;
    }
  }
  return &PTR_vftable_180015000;
}


