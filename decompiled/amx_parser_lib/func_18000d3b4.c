// __acrt_uninitialize_locks @ 18000d3b4

/* Library Function - Single Match
    __acrt_uninitialize_locks
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_uninitialize_locks(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_180026578;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_180026320 + uVar1 * 0x28));
    DAT_180026578 = DAT_180026578 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}


