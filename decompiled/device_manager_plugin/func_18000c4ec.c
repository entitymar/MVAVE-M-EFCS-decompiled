// __scrt_is_ucrt_dll_in_use @ 18000c4ec

/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_1800150c0 != 0;
}


