// FUN_18000f764 @ 18000f764

ulonglong FUN_18000f764(FILE *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18000a0c4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
  }
  else {
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xc & 1) == 0) {
      FUN_180006928((longlong)param_1);
      uVar1 = FUN_18000f7e0(param_1,param_2);
      FUN_180006934((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    FUN_1800143e4(&param_1->_ptr);
  }
  return 0xffffffff;
}


