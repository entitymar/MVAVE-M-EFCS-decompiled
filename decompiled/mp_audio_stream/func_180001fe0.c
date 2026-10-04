// FUN_180001fe0 @ 180001fe0

undefined8
FUN_180001fe0(undefined8 param_1,int *param_2,longlong param_3,ulonglong *param_4,short *param_5,
             ulonglong *param_6)

{
  undefined8 uVar1;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 == 2) {
      if ((uint)param_2[3] < (uint)param_2[2]) {
        uVar1 = FUN_18001ab80((longlong)param_2,param_3,param_4,(longlong)param_5,param_6);
        return uVar1;
      }
      uVar1 = FUN_18001af30((longlong)param_2,param_3,param_4,param_5,param_6);
      return uVar1;
    }
    if (*param_2 == 5) {
      if ((uint)param_2[3] < (uint)param_2[2]) {
        uVar1 = FUN_180019e10((longlong)param_2,param_3,param_4,(longlong)param_5,param_6);
        return uVar1;
      }
      uVar1 = FUN_18001a4e0((longlong)param_2,param_3,param_4,param_5,param_6);
      return uVar1;
    }
  }
  return 0xfffffffe;
}


