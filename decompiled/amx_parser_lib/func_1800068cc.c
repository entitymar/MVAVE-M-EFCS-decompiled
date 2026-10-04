// __acrt_uninitialize_stdio @ 1800068cc

/* Library Function - Single Match
    __acrt_uninitialize_stdio
   
   Library: Visual Studio 2019 Release */

void __acrt_uninitialize_stdio(bool param_1)

{
  longlong lVar1;
  
  common_flush_all(param_1);
  FUN_18000a7e8();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(undefined8 **)(lVar1 + (longlong)DAT_180025c90));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_180025c90) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_180009da0(DAT_180025c90);
  DAT_180025c90 = (LPVOID)0x0;
  return;
}


