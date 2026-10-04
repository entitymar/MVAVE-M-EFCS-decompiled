// FUN_180002c30 @ 180002c30

void * FUN_180002c30(void *param_1,uint param_2)

{
  longlong *_Memory;
  
  _Memory = *(longlong **)((longlong)param_1 + 0x28);
  if (_Memory != (longlong *)0x0) {
    FUN_1800041d0(_Memory);
    free(_Memory);
  }
  FUN_1800050d0((longlong *)((longlong)param_1 + 8));
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


