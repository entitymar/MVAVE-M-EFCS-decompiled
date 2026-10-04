// FUN_180002570 @ 180002570

longlong FUN_180002570(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x40) = 0xff;
  FUN_180001cb0((longlong)*(char *)(param_2 + 0x40) + 1);
  return param_1;
}


