// FUN_180011b40 @ 180011b40

longlong FUN_180011b40(longlong param_1)

{
  BOOL BVar1;
  longlong lVar2;
  uint uVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  
  if ((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) == 3)) {
    uVar3 = *(uint *)(param_1 + 0x9dc);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x444);
  }
  BVar1 = QueryPerformanceCounter(&local_res8);
  dVar4 = 0.0;
  if (BVar1 != 0) {
    dVar4 = (double)(local_res8.QuadPart - *(longlong *)(param_1 + 0xc60)) / (double)DAT_180036ca8;
  }
  lVar2 = 0;
  dVar4 = (dVar4 + *(double *)(param_1 + 0xc68)) * (double)uVar3;
  if ((DAT_180032140 <= dVar4) && (dVar4 = dVar4 - DAT_180032140, dVar4 < DAT_180032140)) {
    lVar2 = -0x8000000000000000;
  }
  return (longlong)dVar4 + lVar2;
}


