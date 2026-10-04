// FUN_18001e820 @ 18001e820

undefined8 FUN_18001e820(int *param_1,undefined2 *param_2,longlong param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined2 uVar16;
  uint uVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined2 *puVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  float fVar34;
  uint local_res8;
  
  if (((param_1 == (int *)0x0) || (param_2 == (undefined2 *)0x0)) || (param_3 == 0)) {
LAB_18001ecca:
    uVar19 = 0xfffffffe;
  }
  else {
    if (*param_1 == 5) {
      local_res8 = 0;
      if (param_4 != 0) {
        do {
          uVar8 = param_1[1];
          uVar32 = 0;
          fVar1 = (float)param_1[2];
          fVar2 = (float)param_1[3];
          fVar3 = (float)param_1[4];
          fVar4 = (float)param_1[5];
          fVar5 = (float)param_1[6];
          if (uVar8 < 4) {
            if (uVar8 != 0) {
              lVar22 = 0;
              goto LAB_18001eac8;
            }
          }
          else {
            pfVar21 = (float *)(param_2 + 2);
            lVar25 = param_3 - (longlong)param_2;
            lVar29 = 4 - (longlong)param_2;
            lVar30 = 8 - (longlong)param_2;
            lVar15 = -(longlong)param_2;
            lVar26 = lVar15 + -4;
            uVar17 = (uVar8 - 4 >> 2) + 1;
            uVar31 = (ulonglong)uVar17;
            lVar23 = lVar29 + (longlong)pfVar21;
            lVar33 = lVar30 + (longlong)pfVar21;
            lVar24 = lVar26 + (longlong)pfVar21;
            uVar32 = uVar17 * 4;
            lVar22 = (ulonglong)uVar17 * 4;
            do {
              fVar6 = *(float *)(lVar25 + -4 + (longlong)pfVar21);
              fVar34 = fVar6 * fVar1 + *(float *)(*(longlong *)(param_1 + 8) + lVar24);
              fVar7 = *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 10) + lVar26);
              pfVar21[-1] = fVar34;
              *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 8) + lVar26) =
                   (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
              *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 10) + lVar26) =
                   fVar6 * fVar3 - fVar34 * fVar5;
              fVar6 = *(float *)(lVar25 + (longlong)pfVar21);
              fVar34 = fVar6 * fVar1 +
                       *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 8) + lVar15);
              fVar7 = *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 10) + lVar15);
              *pfVar21 = fVar34;
              *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 8) + lVar15) =
                   (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
              *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 10) + lVar15) =
                   fVar6 * fVar3 - fVar34 * fVar5;
              fVar6 = *(float *)(lVar25 + 4 + (longlong)pfVar21);
              fVar34 = fVar6 * fVar1 + *(float *)(lVar23 + *(longlong *)(param_1 + 8));
              fVar7 = *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 10) + lVar29);
              pfVar21[1] = fVar34;
              *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 8) + lVar29) =
                   (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
              *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 10) + lVar29) =
                   fVar6 * fVar3 - fVar34 * fVar5;
              fVar6 = *(float *)(lVar25 + 8 + (longlong)pfVar21);
              fVar34 = fVar6 * fVar1 + *(float *)(lVar33 + *(longlong *)(param_1 + 8));
              fVar7 = *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 10) + lVar30);
              pfVar21[2] = fVar34;
              *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 8) + lVar30) =
                   (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
              lVar24 = lVar24 + 0x10;
              lVar23 = lVar23 + 0x10;
              lVar33 = lVar33 + 0x10;
              *(float *)((longlong)pfVar21 + *(longlong *)(param_1 + 10) + lVar30) =
                   fVar6 * fVar3 - fVar34 * fVar5;
              uVar31 = uVar31 - 1;
              pfVar21 = pfVar21 + 4;
            } while (uVar31 != 0);
            if (uVar32 < uVar8) {
LAB_18001eac8:
              lVar22 = lVar22 * 4;
              uVar31 = (ulonglong)(uVar8 - uVar32);
              do {
                fVar6 = *(float *)((param_3 - (longlong)param_2) + lVar22 + (longlong)param_2);
                fVar34 = fVar6 * fVar1 + *(float *)(lVar22 + *(longlong *)(param_1 + 8));
                fVar7 = *(float *)(lVar22 + *(longlong *)(param_1 + 10));
                *(float *)(lVar22 + (longlong)param_2) = fVar34;
                *(float *)(lVar22 + *(longlong *)(param_1 + 8)) =
                     (fVar6 * fVar2 - fVar34 * fVar4) + fVar7;
                *(float *)(lVar22 + *(longlong *)(param_1 + 10)) = fVar6 * fVar3 - fVar34 * fVar5;
                lVar22 = lVar22 + 4;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
          }
          local_res8 = local_res8 + 1;
          param_2 = param_2 + (ulonglong)(uint)param_1[1] * 2;
          param_3 = param_3 + (ulonglong)(uint)param_1[1] * 4;
          if (param_4 <= local_res8) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      if (*param_1 != 2) goto LAB_18001ecca;
      local_res8 = 0;
      if (param_4 != 0) {
        do {
          iVar9 = param_1[5];
          iVar10 = param_1[2];
          iVar11 = param_1[3];
          iVar12 = param_1[4];
          iVar13 = param_1[6];
          if (param_1[1] != 0) {
            uVar31 = (ulonglong)(uint)param_1[1];
            puVar27 = param_2;
            lVar22 = 0;
            do {
              iVar28 = (int)*(short *)((param_3 - (longlong)param_2) + (longlong)puVar27);
              iVar20 = *(int *)(lVar22 + *(longlong *)(param_1 + 8)) + iVar28 * iVar10 >> 0xe;
              iVar14 = *(int *)(lVar22 + *(longlong *)(param_1 + 10));
              iVar18 = 0x7fff;
              if (iVar20 < 0x7fff) {
                iVar18 = iVar20;
              }
              uVar16 = (undefined2)iVar18;
              if (iVar18 < -0x8000) {
                uVar16 = 0x8000;
              }
              *puVar27 = uVar16;
              *(int *)(lVar22 + *(longlong *)(param_1 + 8)) =
                   (iVar14 - iVar20 * iVar9) + iVar28 * iVar11;
              *(int *)(lVar22 + *(longlong *)(param_1 + 10)) = iVar28 * iVar12 - iVar20 * iVar13;
              uVar31 = uVar31 - 1;
              puVar27 = puVar27 + 1;
              lVar22 = lVar22 + 4;
            } while (uVar31 != 0);
          }
          local_res8 = local_res8 + 1;
          param_2 = param_2 + (uint)param_1[1];
          param_3 = param_3 + (ulonglong)(uint)param_1[1] * 2;
        } while (local_res8 < param_4);
      }
    }
    uVar19 = 0;
  }
  return uVar19;
}


