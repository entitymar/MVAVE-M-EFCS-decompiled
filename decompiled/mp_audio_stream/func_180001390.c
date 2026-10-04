// FUN_180001390 @ 180001390

undefined8 FUN_180001390(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  if (((*param_2 != DAT_18002f2e0) || (param_2[1] != DAT_18002f2e8)) &&
     ((*param_2 != DAT_18002f340 || (param_2[1] != DAT_18002f348)))) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}


