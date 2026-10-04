// FUN_180017340 @ 180017340

undefined8 FUN_180017340(longlong param_1)

{
  FUN_180011a50(param_1,2);
  LOCK();
  *(undefined4 *)(param_1 + 0xc88) = 0;
  UNLOCK();
  return 0;
}


