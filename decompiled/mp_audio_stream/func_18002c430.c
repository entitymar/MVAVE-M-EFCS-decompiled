// FUN_18002c430 @ 18002c430

void FUN_18002c430(void *param_1,longlong param_2,int param_3,uint param_4)

{
  ulonglong _Size;
  ulonglong uVar1;
  int local_28 [8];
  
  if (param_3 == 1) {
    if ((ulonglong)param_4 * param_2 != 0) {
      memset(param_1,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0x80),
             (ulonglong)param_4 * param_2);
      return;
    }
  }
  else {
    local_28[0] = 0;
    local_28[1] = 1;
    local_28[2] = 2;
    local_28[3] = 3;
    local_28[4] = 4;
    local_28[5] = 4;
    for (uVar1 = (ulonglong)(param_4 * local_28[param_3]) * param_2; uVar1 != 0;
        uVar1 = uVar1 - _Size) {
      _Size = uVar1;
      if (0xffffffff < uVar1) {
        _Size = 0xffffffff;
      }
      if ((param_1 != (void *)0x0) && (_Size != 0)) {
        memset(param_1,0,_Size);
      }
      param_1 = (void *)((longlong)param_1 + _Size);
    }
  }
  return;
}


