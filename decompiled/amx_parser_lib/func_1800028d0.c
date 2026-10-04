// calc_bias_gru @ 1800028d0

undefined8 calc_bias_gru(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined1 (*pauVar2) [32];
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
                    /* 0x28d0  1  calc_bias_gru */
  if (*(int *)(param_1 + 0x183c) == 0x544d4c) {
    FUN_180003160(0x1800183a0,param_2,param_3,param_4);
    return 0xffffffff;
  }
  pauVar2 = FUN_180001000(param_1 + 0x43c,0x10,0,param_4);
  iVar3 = 0;
  do {
    uVar4 = FUN_180008c80();
    FUN_180001680((longlong)pauVar2,(float)uVar4);
    fVar1 = DAT_1800183bc;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xac44);
  fVar11 = (float)*(int *)(pauVar2[0x70] + 4) * DAT_1800183bc;
  fVar14 = (float)*(int *)(pauVar2[0x70] + 0x14) * DAT_1800183bc;
  fVar18 = (float)*(int *)(pauVar2[0x71] + 4) * DAT_1800183bc;
  fVar16 = (float)*(int *)(pauVar2[0x71] + 0x14) * DAT_1800183bc;
  fVar5 = (float)*(int *)(pauVar2[0x70] + 8) * DAT_1800183bc;
  fVar8 = (float)*(int *)(pauVar2[0x70] + 0x18) * DAT_1800183bc;
  fVar12 = (float)*(int *)(pauVar2[0x71] + 8) * DAT_1800183bc;
  fVar6 = (float)*(int *)(pauVar2[0x70] + 0xc) * DAT_1800183bc;
  fVar9 = (float)*(int *)(pauVar2[0x70] + 0x1c) * DAT_1800183bc;
  fVar13 = (float)*(int *)(pauVar2[0x71] + 0xc) * DAT_1800183bc;
  fVar7 = (float)*(int *)(pauVar2[0x70] + 0x10) * DAT_1800183bc;
  fVar10 = (float)*(int *)pauVar2[0x71] * DAT_1800183bc;
  fVar15 = (float)*(int *)(pauVar2[0x71] + 0x10) * DAT_1800183bc;
  fVar17 = (float)*(int *)(pauVar2[0x71] + 0x1c) * DAT_1800183bc;
  fVar19 = (float)*(int *)pauVar2[0x72] * DAT_1800183bc;
  iVar3 = *(int *)(pauVar2[0x71] + 0x18);
  *(undefined4 *)(param_1 + 0x183c) = 0x544d4c;
  *(float *)(param_1 + 0x1840) = fVar11;
  *(float *)(param_1 + 0x1844) = fVar5;
  *(float *)(param_1 + 0x1848) = fVar6;
  *(float *)(param_1 + 0x184c) = fVar7;
  *(float *)(param_1 + 0x1850) = fVar14;
  *(float *)(param_1 + 0x1854) = fVar8;
  *(float *)(param_1 + 0x1858) = fVar9;
  *(float *)(param_1 + 0x185c) = fVar10;
  *(float *)(param_1 + 0x1860) = fVar18;
  *(float *)(param_1 + 0x1864) = fVar12;
  *(float *)(param_1 + 0x1868) = fVar13;
  *(float *)(param_1 + 0x186c) = fVar15;
  *(float *)(param_1 + 0x1870) = fVar16;
  *(float *)(param_1 + 0x1874) = (float)iVar3 * fVar1;
  *(float *)(param_1 + 0x1878) = fVar17;
  *(float *)(param_1 + 0x187c) = fVar19;
  thunk_FUN_180009da0(pauVar2);
  return 0;
}


