// FUN_180008d20 @ 180008d20

longlong FUN_180008d20(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    FUN_180002570(param_3,param_1);
    param_3 = param_3 + 0x48;
  }
  return param_3;
}


