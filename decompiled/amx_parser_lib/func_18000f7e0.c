// FUN_18000f7e0 @ 18000f7e0

ulonglong FUN_18000f7e0(FILE *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_18000a0c4((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if ((*(uint *)((longlong)&param_1->_base + 4) >> 0xd & 1) != 0) {
      uVar2 = FUN_18000aa7c(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      __acrt_stdio_free_buffer_nolock(&param_1->_ptr);
      uVar1 = _fileno(param_1);
      uVar3 = FUN_180014250(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (param_1->_tmpfname != (char *)0x0) {
        FUN_180009da0(param_1->_tmpfname);
        param_1->_tmpfname = (char *)0x0;
      }
    }
    FUN_1800143e4(&param_1->_ptr);
  }
  return uVar2;
}


