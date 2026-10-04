// __scrt_dllmain_uninitialize_c @ 18000b9ec

/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    _execute_onexit_table(&DAT_180015e20);
    return;
  }
  uVar2 = FUN_180004ac0();
  if ((int)uVar2 == 0) {
    _cexit();
  }
  return;
}


