// FUN_180002bd0 @ 180002bd0

void * FUN_180002bd0(void *param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = *(longlong **)((longlong)param_1 + 8);
  if (_Memory != (longlong *)0x0) {
    FUN_1800059d0(_Memory);
    free(_Memory);
  }
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


