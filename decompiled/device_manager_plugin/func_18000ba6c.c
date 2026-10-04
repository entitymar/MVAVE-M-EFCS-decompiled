// FUN_18000ba6c @ 18000ba6c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18000ba6c(uint param_1)

{
  bool bVar1;
  ulonglong in_RAX;
  undefined7 extraout_var;
  
  if (DAT_180015e19 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_18000c320(5);
    }
    bVar1 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar1) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_180015e20 = _DAT_180010000;
      uRam0000000180015e28 = _UNK_180010008;
      _DAT_180015e30 = 0xffffffffffffffff;
      _DAT_180015e38 = _DAT_180010000;
      uRam0000000180015e40 = _UNK_180010008;
      _DAT_180015e48 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_180015e20);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table(&DAT_180015e38), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_180015e19 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


