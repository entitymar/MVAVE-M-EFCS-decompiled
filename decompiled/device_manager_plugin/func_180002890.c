// FUN_180002890 @ 180002890

void FUN_180002890(undefined8 *param_1)

{
  longlong *_Memory;
  
  _Memory = (longlong *)*param_1;
  if (_Memory != (longlong *)0x0) {
    FUN_180004eb0(_Memory);
    free(_Memory);
    return;
  }
  return;
}


