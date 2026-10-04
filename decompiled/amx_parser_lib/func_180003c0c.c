// FUN_180003c0c @ 180003c0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180003c0c(uint param_1)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_180025b49 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_180003d94(5);
    }
    bVar1 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      _DAT_180025b50 = _DAT_1800183e0;
      uRam0000000180025b58 = _UNK_1800183e8;
      _DAT_180025b60 = 0xffffffffffffffff;
      _DAT_180025b68 = _DAT_1800183e0;
      uRam0000000180025b70 = _UNK_1800183e8;
      _DAT_180025b78 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table((longlong *)&DAT_180025b50);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((longlong *)&DAT_180025b68), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180025b49 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


