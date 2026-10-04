// FUN_180008d70 @ 180008d70

longlong FUN_180008d70(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    *(undefined1 *)(param_3 + 0x40) = 0xff;
    FUN_180008df0((longlong)*(char *)(param_1 + 0x40) + 1);
    param_3 = param_3 + 0x48;
  }
  return param_3;
}


