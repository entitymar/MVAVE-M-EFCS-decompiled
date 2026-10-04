// FUN_18000c260 @ 18000c260

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000c260(longlong param_1,void *param_2,longlong param_3,uint param_4)

{
  short *psVar1;
  byte *pbVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  byte *pbVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  void *pvVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStackY_10d8 [32];
  uint local_10a8;
  uint local_10a4;
  uint local_10a0;
  int local_1098 [6];
  undefined8 local_1080;
  byte local_1078 [4096];
  ulonglong local_78;
  
  local_78 = DAT_180036c40 ^ (ulonglong)auStackY_10d8;
  if (param_1 == 0) {
    fVar5 = 0.0;
  }
  else {
    LOCK();
    fVar5 = *(float *)(param_1 + 0x6c);
    if (fVar5 == 0.0) {
      *(float *)(param_1 + 0x6c) = 0.0;
      fVar5 = 0.0;
    }
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if (*(char *)(param_1 + 0x67) == '\0') {
      _controlfp_s(&local_10a8,0,0);
      _controlfp_s(&local_10a4,local_10a8 | 0x1000000,0x3000000);
      local_10a0 = local_10a8;
    }
    else {
      local_10a0 = 0;
    }
    fVar4 = DAT_1800320cc;
    uVar10 = 0;
    if ((param_3 == 0) || (DAT_1800320cc <= fVar5)) {
      FUN_18000dae0(param_1,param_2,param_3,param_4);
    }
    else {
      local_1098[0] = 0;
      local_1098[1] = 1;
      local_1098[2] = 2;
      local_1098[3] = 3;
      local_1098[4] = 4;
      local_1098[5] = 4;
      local_10a4 = local_1098[*(int *)(param_1 + 0x8cc)] * *(int *)(param_1 + 0x8d0);
      local_1098[0] = 0;
      local_1098[1] = 1;
      local_1098[2] = 2;
      local_1098[3] = 3;
      local_1098[4] = 4;
      local_1098[5] = 4;
      uVar9 = local_1098[*(int *)(param_1 + 0x334)] * *(int *)(param_1 + 0x338);
      local_10a8 = uVar9;
      if (param_4 != 0) {
        local_1080 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1000)) / ZEXT416(local_10a4),0);
        do {
          uVar6 = 0;
          iVar3 = *(int *)(param_1 + 0x8cc);
          uVar11 = (ulonglong)*(uint *)(param_1 + 0x8d0);
          uVar14 = (ulonglong)(param_4 - uVar10);
          if (local_1080 < uVar14) {
            uVar14 = local_1080 & 0xffffffff;
          }
          pvVar12 = (void *)((ulonglong)(uVar10 * local_10a4) + param_3);
          if (iVar3 == 1) {
            if (pvVar12 != (void *)0x0) {
              uVar11 = uVar11 * uVar14;
              if (3 < uVar11) {
                lVar13 = (uVar11 - 4 >> 2) + 1;
                uVar6 = lVar13 * 4;
                pbVar7 = (byte *)((longlong)pvVar12 + 2);
                do {
                  pbVar2 = pbVar7 + 4;
                  pbVar2[(longlong)(local_1078 + -(longlong)pvVar12 + -6)] =
                       (byte)(int)((float)pbVar7[-2] * fVar5);
                  pbVar2[(longlong)(local_1078 + -(longlong)pvVar12 + -5)] =
                       (byte)(int)((float)pbVar7[-1] * fVar5);
                  pbVar2[(longlong)(local_1078 + -(longlong)pvVar12 + -4)] =
                       (byte)(int)((float)*pbVar7 * fVar5);
                  pbVar2[(longlong)(local_1078 + -(longlong)pvVar12 + -3)] =
                       (byte)(int)((float)pbVar7[1] * fVar5);
                  lVar13 = lVar13 + -1;
                  pbVar7 = pbVar2;
                  uVar9 = local_10a8;
                } while (lVar13 != 0);
              }
              if (uVar6 < uVar11) {
                do {
                  pbVar7 = local_1078 + uVar6;
                  uVar6 = uVar6 + 1;
                  *pbVar7 = (byte)(int)((float)pbVar7[(longlong)pvVar12 - (longlong)local_1078] *
                                       fVar5);
                } while (uVar6 < uVar11);
              }
            }
          }
          else if (iVar3 == 2) {
            if (pvVar12 != (void *)0x0) {
              uVar11 = uVar11 * uVar14;
              if (3 < uVar11) {
                lVar13 = (uVar11 - 4 >> 2) + 1;
                uVar6 = lVar13 * 4;
                psVar8 = (short *)((longlong)pvVar12 + 4);
                do {
                  psVar1 = psVar8 + 4;
                  *(short *)((longlong)local_1098 + -(longlong)pvVar12 + 0x14 + (longlong)psVar1) =
                       (short)(int)((float)(int)psVar8[-2] * fVar5);
                  *(short *)((longlong)local_1098 + -(longlong)pvVar12 + 0x16 + (longlong)psVar1) =
                       (short)(int)((float)(int)psVar8[-1] * fVar5);
                  *(short *)(local_1078 + -(longlong)pvVar12 + -8 + (longlong)psVar1) =
                       (short)(int)((float)(int)*psVar8 * fVar5);
                  *(short *)(local_1078 + -(longlong)pvVar12 + -6 + (longlong)psVar1) =
                       (short)(int)((float)(int)psVar8[1] * fVar5);
                  lVar13 = lVar13 + -1;
                  psVar8 = psVar1;
                  uVar9 = local_10a8;
                } while (lVar13 != 0);
              }
              for (; uVar6 < uVar11; uVar6 = uVar6 + 1) {
                *(short *)(local_1078 + uVar6 * 2) =
                     (short)(int)((float)(int)*(short *)((longlong)pvVar12 + uVar6 * 2) * fVar5);
              }
            }
          }
          else if (iVar3 == 3) {
            FUN_180021a70((longlong)local_1078,(longlong)pvVar12,uVar11 * uVar14,fVar5);
          }
          else if (iVar3 == 4) {
            FUN_180021c50((ulonglong)local_1078,(ulonglong)pvVar12,uVar11 * uVar14,fVar5);
          }
          else if (iVar3 == 5) {
            FUN_1800216d0(local_1078,pvVar12,*(uint *)(param_1 + 0x8d0) * uVar14,fVar5);
          }
          FUN_18000dae0(param_1,(void *)((ulonglong)(uVar10 * uVar9) + (longlong)param_2),
                        (longlong)local_1078,(uint)uVar14);
          uVar10 = uVar10 + (uint)uVar14;
        } while (uVar10 < param_4);
      }
    }
    if (param_2 != (void *)0x0) {
      if ((fVar5 < fVar4) && (param_3 == 0)) {
        FUN_180021900(param_2,param_2,(ulonglong)param_4,*(int *)(param_1 + 0x334),
                      *(uint *)(param_1 + 0x338),fVar5);
      }
      if ((*(char *)(param_1 + 0x66) == '\0') && (*(int *)(param_1 + 0x334) == 5)) {
        FUN_180020390((ulonglong)param_2,(ulonglong)param_2,
                      (ulonglong)(param_4 * *(int *)(param_1 + 0x338)));
      }
    }
    if (*(char *)(param_1 + 0x67) == '\0') {
      _controlfp_s(&local_10a4,local_10a0,0x3000000);
    }
  }
  return;
}


