// __vcrt_uninitialize_locks @ 180004634

/* Library Function - Single Match
    __vcrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

undefined8 __vcrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_180025c38;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180025c10 + uVar1 * 0x28));
    DAT_180025c38 = DAT_180025c38 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


