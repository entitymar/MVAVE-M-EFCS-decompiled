// FUN_180002860 @ 180002860

void FUN_180002860(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_1800050d0((longlong *)((longlong)_Memory + 8));
    free(_Memory);
    return;
  }
  return;
}


