// FUN_18000ac40 @ 18000ac40

void FUN_18000ac40(undefined8 param_1,void *param_2,longlong param_3)

{
  void *_Memory;
  
  _Memory = param_2;
  if ((0xfff < param_3 + 1U) &&
     (_Memory = *(void **)((longlong)param_2 + -8),
     0x1f < (ulonglong)((longlong)param_2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  free(_Memory);
  return;
}


