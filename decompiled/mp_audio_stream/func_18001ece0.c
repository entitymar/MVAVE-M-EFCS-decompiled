// FUN_18001ece0 @ 18001ece0

undefined8 FUN_18001ece0(int *param_1,int *param_2)

{
  int iVar1;
  double dVar2;
  
  if ((((param_2 == (int *)0x0) || (param_1 == (int *)0x0)) || (*(double *)(param_1 + 8) == 0.0)) ||
     ((iVar1 = *param_1, iVar1 != 5 && (iVar1 != 2)))) {
    return 0xfffffffe;
  }
  if (((*param_2 == 0) || (*param_2 == iVar1)) && ((param_2[1] == 0 || (param_2[1] == param_1[1]))))
  {
    *param_2 = iVar1;
    param_2[1] = param_1[1];
    dVar2 = DAT_180032120;
    if (*param_1 != 5) {
      param_2[2] = (int)((*(double *)(param_1 + 2) / *(double *)(param_1 + 8)) * DAT_180032120);
      param_2[3] = (int)((*(double *)(param_1 + 4) / *(double *)(param_1 + 8)) * dVar2);
      param_2[4] = (int)((*(double *)(param_1 + 6) / *(double *)(param_1 + 8)) * dVar2);
      param_2[5] = (int)((*(double *)(param_1 + 10) / *(double *)(param_1 + 8)) * dVar2);
      param_2[6] = (int)((*(double *)(param_1 + 0xc) / *(double *)(param_1 + 8)) * dVar2);
      return 0;
    }
    param_2[2] = (int)(float)(*(double *)(param_1 + 2) / *(double *)(param_1 + 8));
    param_2[3] = (int)(float)(*(double *)(param_1 + 4) / *(double *)(param_1 + 8));
    param_2[4] = (int)(float)(*(double *)(param_1 + 6) / *(double *)(param_1 + 8));
    param_2[5] = (int)(float)(*(double *)(param_1 + 10) / *(double *)(param_1 + 8));
    param_2[6] = (int)(float)(*(double *)(param_1 + 0xc) / *(double *)(param_1 + 8));
    return 0;
  }
  return 0xfffffffd;
}


