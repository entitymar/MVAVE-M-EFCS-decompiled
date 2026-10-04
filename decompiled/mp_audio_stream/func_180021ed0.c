// FUN_180021ed0 @ 180021ed0

void FUN_180021ed0(void *param_1,void *param_2,longlong param_3,int param_4,int param_5)

{
  ulonglong _Size;
  ulonglong uVar1;
  int local_28 [8];
  
  if (param_1 != param_2) {
    local_28[0] = 0;
    local_28[1] = 1;
    local_28[2] = 2;
    local_28[3] = 3;
    local_28[4] = 4;
    local_28[5] = 4;
    for (uVar1 = (ulonglong)(uint)(param_5 * local_28[param_4]) * param_3; uVar1 != 0;
        uVar1 = uVar1 - _Size) {
      _Size = uVar1;
      if (0xffffffff < uVar1) {
        _Size = 0xffffffff;
      }
      memcpy(param_1,param_2,_Size);
      param_1 = (void *)((longlong)param_1 + _Size);
      param_2 = (void *)((longlong)param_2 + _Size);
    }
  }
  return;
}


