// FUN_18002e904 @ 18002e904

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18002e904(uint param_1)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_180037289 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_18002ea8c(5);
    }
    bVar1 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      _DAT_180037290 = _DAT_180032300;
      uRam0000000180037298 = _UNK_180032308;
      _DAT_1800372a0 = 0xffffffffffffffff;
      _DAT_1800372a8 = _DAT_180032300;
      uRam00000001800372b0 = _UNK_180032308;
      _DAT_1800372b8 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180037290);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_1800372a8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180037289 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


