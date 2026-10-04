// FUN_180002670 @ 180002670

void FUN_180002670(longlong param_1)

{
  longlong *_Memory;
  
  _Memory = *(longlong **)(param_1 + 0x28);
  if (_Memory != (longlong *)0x0) {
    FUN_1800041d0(_Memory);
    free(_Memory);
  }
  FUN_1800050d0((longlong *)(param_1 + 8));
  return;
}


