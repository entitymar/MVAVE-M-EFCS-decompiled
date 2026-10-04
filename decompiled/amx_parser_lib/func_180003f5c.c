// __scrt_is_ucrt_dll_in_use @ 180003f5c

/* Library Function - Single Match
    __scrt_is_ucrt_dll_in_use
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_180026b98 != 0;
}


