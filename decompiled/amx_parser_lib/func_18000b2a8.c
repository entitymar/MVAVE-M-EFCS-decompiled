// __acrt_update_locale_info @ 18000b2a8

/* Library Function - Single Match
    __acrt_update_locale_info
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_update_locale_info(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_180026310) && ((DAT_1800258d0 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = __acrt_update_thread_locale_data();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}


