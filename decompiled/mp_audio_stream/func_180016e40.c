// FUN_180016e40 @ 180016e40

undefined8 FUN_180016e40(longlong param_1)

{
  FUN_180011a50(param_1,1);
  LOCK();
  *(undefined4 *)(param_1 + 0xc88) = 1;
  UNLOCK();
  return 0;
}


