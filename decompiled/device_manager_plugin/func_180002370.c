// FUN_180002370 @ 180002370

longlong * FUN_180002370(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_18000b2a8(0x48);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    *(undefined1 *)(lVar1 + 0x40) = 0xff;
    FUN_180001cb0((longlong)*(char *)(param_2 + 0x40) + 1);
  }
  *param_1 = lVar1;
  return param_1;
}


