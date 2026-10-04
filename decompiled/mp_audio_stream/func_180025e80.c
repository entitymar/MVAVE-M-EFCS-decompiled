// FUN_180025e80 @ 180025e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180025e80(int *param_1,void *param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  double _X;
  undefined8 uVar3;
  ulonglong uVar4;
  int local_78;
  uint local_74;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  
  if (param_3 != (int *)0x0) {
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    if (param_1 != (int *)0x0) {
      _X = (*(double *)(param_1 + 4) * DAT_180032100) / (double)(uint)param_1[2];
      dVar2 = sin(DAT_1800320f0 - _X);
      dVar1 = *(double *)(param_1 + 6);
      local_48 = sin(_X);
      local_74 = param_1[1];
      local_78 = *param_1;
      local_68 = DAT_1800320e0 - dVar2;
      local_50 = dVar2 * _DAT_180032170;
      local_48 = local_48 / (dVar1 + dVar1);
      local_70 = local_68 * DAT_1800320d0;
      local_58 = local_48 + DAT_1800320e0;
      local_48 = DAT_1800320e0 - local_48;
      if (local_74 != 0) {
        *(void **)(param_3 + 0xc) = param_2;
        uVar4 = (ulonglong)local_74;
        local_60 = local_70;
        if ((param_2 != (void *)0x0) && ((ulonglong)local_74 != 0)) {
          memset(param_2,0,(ulonglong)local_74 * 8);
        }
        *(void **)(param_3 + 8) = param_2;
        *(void **)(param_3 + 10) = (void *)((longlong)param_2 + uVar4 * 4);
        uVar3 = FUN_18001ece0(&local_78,param_3);
        return uVar3;
      }
    }
  }
  return 0xfffffffe;
}


