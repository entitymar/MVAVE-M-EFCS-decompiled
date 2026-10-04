// __scrt_dllmain_uninitialize_c @ 180003b8c

/* Library Function - Single Match
    __scrt_dllmain_uninitialize_c
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __scrt_dllmain_uninitialize_c(void)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_1800099b0(&DAT_180025b50);
    return;
  }
  iVar2 = FUN_180009264();
  if (iVar2 == 0) {
    FUN_180009248();
  }
  return;
}


