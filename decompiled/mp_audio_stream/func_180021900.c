// FUN_180021900 @ 180021900

void FUN_180021900(void *param_1,void *param_2,longlong param_3,int param_4,uint param_5,
                  float param_6)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_4 == 1) {
    FUN_180021df0((longlong)param_1,(longlong)param_2,(ulonglong)param_5 * param_3,param_6);
    return;
  }
  if (param_4 == 2) {
    uVar4 = (ulonglong)param_5 * param_3;
    if ((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) {
      uVar6 = 0;
      lVar3 = (longlong)param_2 - (longlong)param_1;
      if (3 < uVar4) {
        lVar5 = (uVar4 - 4 >> 2) + 1;
        uVar6 = lVar5 * 4;
        puVar2 = (undefined2 *)((longlong)param_1 + 2);
        do {
          puVar1 = puVar2 + 4;
          puVar2[-1] = (short)(int)((float)(int)*(short *)(lVar3 + -2 + (longlong)puVar2) * param_6)
          ;
          *puVar2 = (short)(int)((float)(int)*(short *)(lVar3 + -8 + (longlong)puVar1) * param_6);
          puVar2[1] = (short)(int)((float)(int)*(short *)(lVar3 + -6 + (longlong)puVar1) * param_6);
          puVar2[2] = (short)(int)((float)(int)*(short *)(lVar3 + -4 + (longlong)puVar1) * param_6);
          lVar5 = lVar5 + -1;
          puVar2 = puVar1;
        } while (lVar5 != 0);
      }
      if (uVar6 < uVar4) {
        lVar5 = uVar4 - uVar6;
        puVar2 = (undefined2 *)((longlong)param_1 + uVar6 * 2);
        do {
          *puVar2 = (short)(int)((float)(int)*(short *)(lVar3 + (longlong)puVar2) * param_6);
          lVar5 = lVar5 + -1;
          puVar2 = puVar2 + 1;
        } while (lVar5 != 0);
      }
    }
    return;
  }
  if (param_4 == 3) {
    FUN_180021a70((longlong)param_1,(longlong)param_2,(ulonglong)param_5 * param_3,param_6);
    return;
  }
  if (param_4 != 4) {
    if (param_4 == 5) {
      FUN_1800216d0(param_1,param_2,(ulonglong)param_5 * param_3,param_6);
      return;
    }
    return;
  }
  FUN_180021c50((ulonglong)param_1,(ulonglong)param_2,(ulonglong)param_5 * param_3,param_6);
  return;
}


