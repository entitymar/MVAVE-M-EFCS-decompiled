// __acrt_locale_free_numeric @ 180012bfc

/* Library Function - Single Match
    __acrt_locale_free_numeric
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __acrt_locale_free_numeric(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1800258e0) {
      FUN_180009da0((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1800258e8) {
      FUN_180009da0((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1800258f0) {
      FUN_180009da0((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_180025938) {
      FUN_180009da0((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_180025940) {
      FUN_180009da0((undefined *)param_1[0xc]);
    }
  }
  return;
}


