// __acrt_initialize_multibyte @ 18000e9d8

/* Library Function - Single Match
    __acrt_initialize_multibyte
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __acrt_initialize_multibyte(void)

{
  ulonglong in_RAX;
  __acrt_ptd *p_Var1;
  
  if (DAT_18002659c == '\0') {
    DAT_180026588 = &DAT_1800256d0;
    DAT_180026590 = &DAT_180025390;
    DAT_180026580 = &DAT_1800255c0;
    p_Var1 = (__acrt_ptd *)FUN_18000cf84();
    in_RAX = FUN_18000e6b0(-3,'\x01',p_Var1,(__crt_multibyte_data **)&DAT_180026590);
    DAT_18002659c = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}


