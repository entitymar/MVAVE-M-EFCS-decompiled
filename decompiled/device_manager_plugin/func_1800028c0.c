// FUN_1800028c0 @ 1800028c0

void FUN_1800028c0(undefined8 *param_1)

{
  longlong *_Memory;
  
  _Memory = (longlong *)*param_1;
  if (_Memory != (longlong *)0x0) {
    FUN_1800041d0(_Memory);
    free(_Memory);
    return;
  }
  return;
}


