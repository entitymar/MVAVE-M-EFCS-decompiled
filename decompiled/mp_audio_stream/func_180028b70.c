// FUN_180028b70 @ 180028b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180028b70(undefined1 (*param_1) [16],int param_2,void *param_3,int param_4,
                  ulonglong param_5,int param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [13];
  undefined1 auVar31 [13];
  undefined1 auVar32 [13];
  undefined1 auVar33 [13];
  undefined1 auVar34 [13];
  undefined1 auVar35 [13];
  undefined1 auVar36 [13];
  undefined1 auVar37 [13];
  uint7 uVar38;
  uint7 uVar39;
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [13];
  undefined1 auVar45 [13];
  undefined1 auVar46 [13];
  undefined1 auVar47 [13];
  undefined1 auVar48 [15];
  unkuint9 Var49;
  undefined1 auVar50 [11];
  undefined1 auVar51 [13];
  undefined1 auVar52 [15];
  unkuint9 Var53;
  undefined1 auVar54 [11];
  undefined1 auVar55 [13];
  undefined1 auVar56 [15];
  undefined1 auVar57 [11];
  undefined1 auVar58 [13];
  undefined1 auVar59 [15];
  undefined1 auVar60 [11];
  undefined1 auVar61 [13];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [15];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  uint5 uVar70;
  uint5 uVar71;
  float fVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  undefined1 (*pauVar85) [16];
  ulonglong *puVar86;
  undefined4 *puVar87;
  undefined2 *puVar88;
  ulonglong uVar89;
  ulonglong uVar90;
  undefined1 *puVar91;
  char *pcVar92;
  float *pfVar93;
  longlong lVar94;
  undefined1 auVar95 [16];
  undefined1 auVar98 [16];
  int iVar102;
  undefined1 auVar103 [16];
  undefined1 auVar106 [16];
  undefined1 auVar109 [16];
  int iVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  uint local_28 [8];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined2 uVar101;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  
  sVar84 = _UNK_1800321fe;
  sVar83 = _UNK_1800321fc;
  sVar82 = _UNK_1800321fa;
  sVar81 = _UNK_1800321f8;
  sVar80 = _UNK_1800321f6;
  sVar79 = _UNK_1800321f4;
  sVar78 = _UNK_1800321f2;
  sVar77 = _DAT_1800321f0;
  iVar76 = _UNK_1800321cc;
  iVar75 = _UNK_1800321c8;
  iVar74 = _UNK_1800321c4;
  iVar73 = _DAT_1800321c0;
  fVar72 = DAT_1800320a4;
  if (param_2 == param_4) {
    local_28[0] = 0;
    local_28[1] = 1;
    local_28[2] = 2;
    local_28[3] = 3;
    local_28[4] = 4;
    local_28[5] = 4;
    for (uVar90 = local_28[param_2] * param_5; uVar90 != 0; uVar90 = uVar90 - uVar89) {
      uVar89 = uVar90;
      if (0xffffffff < uVar90) {
        uVar89 = 0xffffffff;
      }
      memcpy(param_1,param_3,uVar89);
      param_1 = (undefined1 (*) [16])((longlong)*param_1 + uVar89);
      param_3 = (void *)((longlong)param_3 + uVar89);
    }
    return;
  }
  if (param_4 == 1) {
    if (param_2 == 2) {
      uVar90 = 0;
      if (param_5 == 0) {
        return;
      }
      if ((0x1f < param_5) &&
         (((undefined1 (*) [16])((param_5 - 1) + (longlong)param_3) < param_1 ||
          (param_1[-1] + param_5 * 2 + 0xe < param_3)))) {
        puVar86 = (ulonglong *)((longlong)param_3 + 0x10);
        pauVar85 = param_1 + 2;
        do {
          uVar89 = puVar86[-2];
          uVar1 = puVar86[-1];
          uVar90 = uVar90 + 0x20;
          auVar6._8_6_ = 0;
          auVar6._0_8_ = uVar89;
          auVar6[0xe] = (char)(uVar89 >> 0x38);
          auVar10._8_4_ = 0;
          auVar10._0_8_ = uVar89;
          auVar10[0xc] = (char)(uVar89 >> 0x30);
          auVar10._13_2_ = auVar6._13_2_;
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar89;
          auVar14._12_3_ = auVar10._12_3_;
          auVar18._8_2_ = 0;
          auVar18._0_8_ = uVar89;
          auVar18[10] = (char)(uVar89 >> 0x28);
          auVar18._11_4_ = auVar14._11_4_;
          auVar22._8_2_ = 0;
          auVar22._0_8_ = uVar89;
          auVar22._10_5_ = auVar18._10_5_;
          auVar26[8] = (char)(uVar89 >> 0x20);
          auVar26._0_8_ = uVar89;
          auVar26._9_6_ = auVar22._9_6_;
          auVar48._7_8_ = 0;
          auVar48._0_7_ = auVar26._8_7_;
          Var49 = CONCAT81(SUB158(auVar48 << 0x40,7),(char)(uVar89 >> 0x18));
          auVar62._9_6_ = 0;
          auVar62._0_9_ = Var49;
          auVar50._1_10_ = SUB1510(auVar62 << 0x30,5);
          auVar50[0] = (char)(uVar89 >> 0x10);
          auVar63._11_4_ = 0;
          auVar63._0_11_ = auVar50;
          auVar51._1_12_ = SUB1512(auVar63 << 0x20,3);
          auVar51[0] = (char)(uVar89 >> 8);
          auVar7._8_6_ = 0;
          auVar7._0_8_ = uVar1;
          auVar7[0xe] = (char)(uVar1 >> 0x38);
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar1;
          auVar11[0xc] = (char)(uVar1 >> 0x30);
          auVar11._13_2_ = auVar7._13_2_;
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar1;
          auVar15._12_3_ = auVar11._12_3_;
          auVar19._8_2_ = 0;
          auVar19._0_8_ = uVar1;
          auVar19[10] = (char)(uVar1 >> 0x28);
          auVar19._11_4_ = auVar15._11_4_;
          auVar23._8_2_ = 0;
          auVar23._0_8_ = uVar1;
          auVar23._10_5_ = auVar19._10_5_;
          auVar27[8] = (char)(uVar1 >> 0x20);
          auVar27._0_8_ = uVar1;
          auVar27._9_6_ = auVar23._9_6_;
          auVar52._7_8_ = 0;
          auVar52._0_7_ = auVar27._8_7_;
          Var53 = CONCAT81(SUB158(auVar52 << 0x40,7),(char)(uVar1 >> 0x18));
          auVar64._9_6_ = 0;
          auVar64._0_9_ = Var53;
          auVar54._1_10_ = SUB1510(auVar64 << 0x30,5);
          auVar54[0] = (char)(uVar1 >> 0x10);
          auVar65._11_4_ = 0;
          auVar65._0_11_ = auVar54;
          auVar55._1_12_ = SUB1512(auVar65 << 0x20,3);
          auVar55[0] = (char)(uVar1 >> 8);
          auVar109._0_2_ = (ushort)(byte)uVar89 - sVar77;
          auVar109._2_2_ = auVar51._0_2_ - sVar78;
          auVar109._4_2_ = auVar50._0_2_ - sVar79;
          auVar109._6_2_ = (short)Var49 - sVar80;
          auVar109._8_2_ = auVar26._8_2_ - sVar81;
          auVar109._10_2_ = auVar18._10_2_ - sVar82;
          auVar109._12_2_ = auVar10._12_2_ - sVar83;
          auVar109._14_2_ = (auVar6._13_2_ >> 8) - sVar84;
          auVar109 = psllw(auVar109,8);
          auVar111._0_2_ = (ushort)(byte)uVar1 - sVar77;
          auVar111._2_2_ = auVar55._0_2_ - sVar78;
          auVar111._4_2_ = auVar54._0_2_ - sVar79;
          auVar111._6_2_ = (short)Var53 - sVar80;
          auVar111._8_2_ = auVar27._8_2_ - sVar81;
          auVar111._10_2_ = auVar19._10_2_ - sVar82;
          auVar111._12_2_ = auVar11._12_2_ - sVar83;
          auVar111._14_2_ = (auVar7._13_2_ >> 8) - sVar84;
          auVar111 = psllw(auVar111,8);
          pauVar85[-2] = auVar109;
          uVar89 = *puVar86;
          auVar8._8_6_ = 0;
          auVar8._0_8_ = uVar89;
          auVar8[0xe] = (char)(uVar89 >> 0x38);
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar89;
          auVar12[0xc] = (char)(uVar89 >> 0x30);
          auVar12._13_2_ = auVar8._13_2_;
          auVar16._8_4_ = 0;
          auVar16._0_8_ = uVar89;
          auVar16._12_3_ = auVar12._12_3_;
          auVar20._8_2_ = 0;
          auVar20._0_8_ = uVar89;
          auVar20[10] = (char)(uVar89 >> 0x28);
          auVar20._11_4_ = auVar16._11_4_;
          auVar24._8_2_ = 0;
          auVar24._0_8_ = uVar89;
          auVar24._10_5_ = auVar20._10_5_;
          auVar28[8] = (char)(uVar89 >> 0x20);
          auVar28._0_8_ = uVar89;
          auVar28._9_6_ = auVar24._9_6_;
          auVar56._7_8_ = 0;
          auVar56._0_7_ = auVar28._8_7_;
          Var49 = CONCAT81(SUB158(auVar56 << 0x40,7),(char)(uVar89 >> 0x18));
          auVar66._9_6_ = 0;
          auVar66._0_9_ = Var49;
          auVar57._1_10_ = SUB1510(auVar66 << 0x30,5);
          auVar57[0] = (char)(uVar89 >> 0x10);
          auVar67._11_4_ = 0;
          auVar67._0_11_ = auVar57;
          auVar58._1_12_ = SUB1512(auVar67 << 0x20,3);
          auVar58[0] = (char)(uVar89 >> 8);
          auVar113._0_2_ = (ushort)(byte)uVar89 - sVar77;
          auVar113._2_2_ = auVar58._0_2_ - sVar78;
          auVar113._4_2_ = auVar57._0_2_ - sVar79;
          auVar113._6_2_ = (short)Var49 - sVar80;
          auVar113._8_2_ = auVar28._8_2_ - sVar81;
          auVar113._10_2_ = auVar20._10_2_ - sVar82;
          auVar113._12_2_ = auVar12._12_2_ - sVar83;
          auVar113._14_2_ = (auVar8._13_2_ >> 8) - sVar84;
          auVar109 = psllw(auVar113,8);
          pauVar85[-1] = auVar111;
          uVar89 = puVar86[1];
          auVar9._8_6_ = 0;
          auVar9._0_8_ = uVar89;
          auVar9[0xe] = (char)(uVar89 >> 0x38);
          auVar13._8_4_ = 0;
          auVar13._0_8_ = uVar89;
          auVar13[0xc] = (char)(uVar89 >> 0x30);
          auVar13._13_2_ = auVar9._13_2_;
          auVar17._8_4_ = 0;
          auVar17._0_8_ = uVar89;
          auVar17._12_3_ = auVar13._12_3_;
          auVar21._8_2_ = 0;
          auVar21._0_8_ = uVar89;
          auVar21[10] = (char)(uVar89 >> 0x28);
          auVar21._11_4_ = auVar17._11_4_;
          auVar25._8_2_ = 0;
          auVar25._0_8_ = uVar89;
          auVar25._10_5_ = auVar21._10_5_;
          auVar29[8] = (char)(uVar89 >> 0x20);
          auVar29._0_8_ = uVar89;
          auVar29._9_6_ = auVar25._9_6_;
          auVar59._7_8_ = 0;
          auVar59._0_7_ = auVar29._8_7_;
          Var49 = CONCAT81(SUB158(auVar59 << 0x40,7),(char)(uVar89 >> 0x18));
          auVar68._9_6_ = 0;
          auVar68._0_9_ = Var49;
          auVar60._1_10_ = SUB1510(auVar68 << 0x30,5);
          auVar60[0] = (char)(uVar89 >> 0x10);
          auVar69._11_4_ = 0;
          auVar69._0_11_ = auVar60;
          auVar61._1_12_ = SUB1512(auVar69 << 0x20,3);
          auVar61[0] = (char)(uVar89 >> 8);
          auVar112._0_2_ = (ushort)(byte)uVar89 - sVar77;
          auVar112._2_2_ = auVar61._0_2_ - sVar78;
          auVar112._4_2_ = auVar60._0_2_ - sVar79;
          auVar112._6_2_ = (short)Var49 - sVar80;
          auVar112._8_2_ = auVar29._8_2_ - sVar81;
          auVar112._10_2_ = auVar21._10_2_ - sVar82;
          auVar112._12_2_ = auVar13._12_2_ - sVar83;
          auVar112._14_2_ = (auVar9._13_2_ >> 8) - sVar84;
          auVar113 = psllw(auVar112,8);
          *pauVar85 = auVar109;
          pauVar85[1] = auVar113;
          puVar86 = puVar86 + 4;
          pauVar85 = pauVar85 + 4;
        } while (uVar90 < (param_5 & 0xffffffffffffffe0));
        if (param_5 <= uVar90) {
          return;
        }
      }
      do {
        *(ushort *)(*param_1 + uVar90 * 2) = (*(byte *)((longlong)param_3 + uVar90) - 0x80) * 0x100;
        uVar90 = uVar90 + 1;
      } while (uVar90 < param_5);
      return;
    }
    if (param_2 == 3) {
      uVar90 = 0;
      if (param_5 == 0) {
        return;
      }
      pcVar92 = *param_1 + 2;
      do {
        cVar3 = *(char *)((longlong)param_3 + uVar90);
        uVar90 = uVar90 + 1;
        pcVar92[-2] = '\0';
        pcVar92[-1] = '\0';
        *pcVar92 = cVar3 + -0x80;
        pcVar92 = pcVar92 + 3;
      } while (uVar90 < param_5);
      return;
    }
    if (param_2 != 4) {
      if (param_2 != 5) {
        return;
      }
      FUN_18002c160((ulonglong)param_1,(ulonglong)param_3,param_5);
      return;
    }
    uVar90 = 0;
    if (param_5 == 0) {
      return;
    }
    if ((0xf < param_5) &&
       (((undefined1 (*) [16])((param_5 - 1) + (longlong)param_3) < param_1 ||
        (param_1[-1] + param_5 * 4 + 0xc < param_3)))) {
      puVar87 = (undefined4 *)((longlong)param_3 + 8);
      pauVar85 = param_1 + 2;
      do {
        uVar4 = puVar87[-2];
        uVar5 = puVar87[-1];
        uVar90 = uVar90 + 0x10;
        uVar38 = (uint7)(ushort)uVar4 & 0xffffffffff00ff;
        uVar39 = (uint7)(ushort)uVar5 & 0xffffffffff00ff;
        auVar30._7_5_ = 0;
        auVar30._0_7_ = uVar38;
        auVar30[0xc] = (char)((uint)uVar4 >> 0x18);
        uVar70 = CONCAT32(auVar30._10_3_,(ushort)(byte)((uint)uVar4 >> 0x10));
        auVar44._5_8_ = 0;
        auVar44._0_5_ = uVar70;
        iVar102 = (int)uVar38;
        auVar31[4] = (char)((uint)uVar4 >> 8);
        auVar31._0_4_ = iVar102;
        auVar31[5] = 0;
        auVar31._6_7_ = SUB137(auVar44 << 0x40,6);
        auVar32._7_5_ = 0;
        auVar32._0_7_ = uVar39;
        auVar32[0xc] = (char)((uint)uVar5 >> 0x18);
        uVar71 = CONCAT32(auVar32._10_3_,(ushort)(byte)((uint)uVar5 >> 0x10));
        auVar45._5_8_ = 0;
        auVar45._0_5_ = uVar71;
        iVar110 = (int)uVar39;
        auVar33[4] = (char)((uint)uVar5 >> 8);
        auVar33._0_4_ = iVar110;
        auVar33[5] = 0;
        auVar33._6_7_ = SUB137(auVar45 << 0x40,6);
        *(int *)pauVar85[-2] = (iVar102 - iVar73) * 0x1000000;
        *(int *)(pauVar85[-2] + 4) = (auVar31._4_4_ - iVar74) * 0x1000000;
        *(int *)(pauVar85[-2] + 8) = ((int)uVar70 - iVar75) * 0x1000000;
        *(uint *)(pauVar85[-2] + 0xc) = ((uint)(uint3)(auVar30._10_3_ >> 0x10) - iVar76) * 0x1000000
        ;
        uVar4 = *puVar87;
        uVar38 = (uint7)(ushort)uVar4 & 0xffffffffff00ff;
        auVar34._7_5_ = 0;
        auVar34._0_7_ = uVar38;
        auVar34[0xc] = (char)((uint)uVar4 >> 0x18);
        uVar70 = CONCAT32(auVar34._10_3_,(ushort)(byte)((uint)uVar4 >> 0x10));
        auVar46._5_8_ = 0;
        auVar46._0_5_ = uVar70;
        iVar102 = (int)uVar38;
        auVar35[4] = (char)((uint)uVar4 >> 8);
        auVar35._0_4_ = iVar102;
        auVar35[5] = 0;
        auVar35._6_7_ = SUB137(auVar46 << 0x40,6);
        *(int *)pauVar85[-1] = (iVar110 - iVar73) * 0x1000000;
        *(int *)(pauVar85[-1] + 4) = (auVar33._4_4_ - iVar74) * 0x1000000;
        *(int *)(pauVar85[-1] + 8) = ((int)uVar71 - iVar75) * 0x1000000;
        *(uint *)(pauVar85[-1] + 0xc) = ((uint)(uint3)(auVar32._10_3_ >> 0x10) - iVar76) * 0x1000000
        ;
        uVar4 = puVar87[1];
        uVar38 = (uint7)(ushort)uVar4 & 0xffffffffff00ff;
        auVar36._7_5_ = 0;
        auVar36._0_7_ = uVar38;
        auVar36[0xc] = (char)((uint)uVar4 >> 0x18);
        uVar71 = CONCAT32(auVar36._10_3_,(ushort)(byte)((uint)uVar4 >> 0x10));
        auVar47._5_8_ = 0;
        auVar47._0_5_ = uVar71;
        iVar110 = (int)uVar38;
        auVar37[4] = (char)((uint)uVar4 >> 8);
        auVar37._0_4_ = iVar110;
        auVar37[5] = 0;
        auVar37._6_7_ = SUB137(auVar47 << 0x40,6);
        *(int *)*pauVar85 = (iVar102 - iVar73) * 0x1000000;
        *(int *)(*pauVar85 + 4) = (auVar35._4_4_ - iVar74) * 0x1000000;
        *(int *)(*pauVar85 + 8) = ((int)uVar70 - iVar75) * 0x1000000;
        *(uint *)(*pauVar85 + 0xc) = ((uint)(uint3)(auVar34._10_3_ >> 0x10) - iVar76) * 0x1000000;
        *(int *)pauVar85[1] = (iVar110 - iVar73) * 0x1000000;
        *(int *)(pauVar85[1] + 4) = (auVar37._4_4_ - iVar74) * 0x1000000;
        *(int *)(pauVar85[1] + 8) = ((int)uVar71 - iVar75) * 0x1000000;
        *(uint *)(pauVar85[1] + 0xc) = ((uint)(uint3)(auVar36._10_3_ >> 0x10) - iVar76) * 0x1000000;
        puVar87 = puVar87 + 4;
        pauVar85 = pauVar85 + 4;
      } while (uVar90 < (param_5 & 0xfffffffffffffff0));
      if (param_5 <= uVar90) {
        return;
      }
    }
    do {
      *(uint *)(*param_1 + uVar90 * 4) = (*(byte *)((longlong)param_3 + uVar90) - 0x80) * 0x1000000;
      uVar90 = uVar90 + 1;
    } while (uVar90 < param_5);
    return;
  }
  if (param_4 != 2) {
    if (param_4 == 3) {
      if (param_2 == 1) {
        FUN_18002b860((longlong)param_1,(longlong)param_3,param_5,param_6);
        return;
      }
      if (param_2 == 2) {
        FUN_18002b670((longlong)param_1,(longlong)param_3,param_5,param_6);
        return;
      }
      if (param_2 == 4) {
        uVar90 = 0;
        if (param_5 == 0) {
          return;
        }
        puVar88 = (undefined2 *)((longlong)param_3 + 1);
        do {
          *(uint *)(*param_1 + uVar90 * 4) =
               (uint)CONCAT21(*puVar88,*(undefined1 *)((longlong)puVar88 + -1)) << 8;
          uVar90 = uVar90 + 1;
          puVar88 = (undefined2 *)((longlong)puVar88 + 3);
        } while (uVar90 < param_5);
        return;
      }
      if (param_2 != 5) {
        return;
      }
      uVar90 = 0;
      if (3 < param_5) {
        lVar94 = (param_5 - 4 >> 2) + 1;
        uVar90 = lVar94 * 4;
        puVar88 = (undefined2 *)((longlong)param_3 + 1);
        pfVar93 = (float *)(*param_1 + 8);
        do {
          *(float *)*(undefined1 (*) [16])(pfVar93 + -2) =
               (float)((int)((uint)CONCAT21(*puVar88,*(undefined1 *)((longlong)puVar88 + -1)) << 8)
                      >> 8) * fVar72;
          pfVar93[-1] = (float)((int)((uint)*(uint3 *)(puVar88 + 1) << 8) >> 8) * fVar72;
          *pfVar93 = (float)((int)((uint)*(uint3 *)((longlong)puVar88 + 5) << 8) >> 8) * fVar72;
          pfVar93[1] = (float)((int)((uint)*(uint3 *)(puVar88 + 4) << 8) >> 8) * fVar72;
          lVar94 = lVar94 + -1;
          puVar88 = puVar88 + 6;
          pfVar93 = pfVar93 + 4;
        } while (lVar94 != 0);
      }
      if (param_5 <= uVar90) {
        return;
      }
      puVar88 = (undefined2 *)((longlong)param_3 + uVar90 * 3 + 1);
      do {
        *(float *)(*param_1 + uVar90 * 4) =
             (float)((int)((uint)CONCAT21(*puVar88,*(undefined1 *)((longlong)puVar88 + -1)) << 8) >>
                    8) * fVar72;
        uVar90 = uVar90 + 1;
        puVar88 = (undefined2 *)((longlong)puVar88 + 3);
      } while (uVar90 < param_5);
      return;
    }
    if (param_4 != 4) {
      if (param_4 != 5) {
        return;
      }
      if (param_2 == 1) {
        FUN_18002aa20((longlong)param_1,(longlong)param_3,param_5,param_6);
        return;
      }
      if (param_2 == 2) {
        FUN_1800293a0(param_1,(longlong)param_3,param_5,param_6);
        return;
      }
      if (param_2 != 3) {
        if (param_2 != 4) {
          return;
        }
        FUN_18002a8e0((ulonglong)param_1,(ulonglong)param_3,param_5);
        return;
      }
      FUN_18002a750((longlong)param_1,(longlong)param_3,param_5);
      return;
    }
    if (param_2 == 1) {
      FUN_18002beb0((ulonglong)param_1,(ulonglong)param_3,param_5,param_6);
      return;
    }
    if (param_2 == 2) {
      FUN_18002bbf0((ulonglong)param_1,(ulonglong)param_3,param_5,param_6);
      return;
    }
    if (param_2 == 3) {
      uVar90 = 0;
      if (param_5 == 0) {
        return;
      }
      puVar91 = *param_1 + 2;
      do {
        uVar4 = *(undefined4 *)((longlong)param_3 + uVar90 * 4);
        uVar90 = uVar90 + 1;
        puVar91[-2] = (char)((uint)uVar4 >> 8);
        puVar91[-1] = (char)((uint)uVar4 >> 0x10);
        *puVar91 = (char)((uint)uVar4 >> 0x18);
        puVar91 = puVar91 + 3;
      } while (uVar90 < param_5);
      return;
    }
    if (param_2 != 5) {
      return;
    }
    FUN_18002ba50((ulonglong)param_1,(ulonglong)param_3,param_5);
    return;
  }
  if (param_2 == 1) {
    FUN_18002b3d0((ulonglong)param_1,(ulonglong)param_3,param_5,param_6);
    return;
  }
  if (param_2 == 3) {
    uVar90 = 0;
    if (param_5 == 0) {
      return;
    }
    puVar91 = *param_1 + 2;
    do {
      puVar91[-2] = 0;
      puVar91[-1] = *(undefined1 *)((longlong)param_3 + uVar90 * 2);
      lVar94 = uVar90 * 2;
      uVar90 = uVar90 + 1;
      *puVar91 = *(undefined1 *)((longlong)param_3 + lVar94 + 1);
      puVar91 = puVar91 + 3;
    } while (uVar90 < param_5);
    return;
  }
  if (param_2 != 4) {
    if (param_2 != 5) {
      return;
    }
    FUN_18002b210((ulonglong)param_1,(ulonglong)param_3,param_5);
    return;
  }
  uVar90 = 0;
  if (param_5 == 0) {
    return;
  }
  if ((param_5 < 2) ||
     ((param_1 <= (undefined1 (*) [16])((longlong)param_3 + (param_5 - 1) * 2) &&
      (param_3 <= param_1[-1] + param_5 * 4 + 0xc)))) goto LAB_1800290b0;
  if (param_5 < 0x10) {
LAB_180029077:
    do {
      uVar4 = *(undefined4 *)((longlong)param_3 + uVar90 * 2);
      uVar101 = (undefined2)((uint)uVar4 >> 0x10);
      *(ulonglong *)(*param_1 + uVar90 * 4) =
           CONCAT44((int)((longlong)CONCAT26(uVar101,CONCAT24(uVar101,uVar4)) >> 0x30) << 0x10,
                    (int)(short)uVar4 << 0x10);
      uVar90 = uVar90 + 2;
    } while (uVar90 < (param_5 & 0xfffffffffffffffe));
  }
  else {
    uVar89 = (ulonglong)((uint)param_5 & 0xf);
    pauVar85 = param_1 + 2;
    puVar86 = (ulonglong *)((longlong)param_3 + 0x10);
    do {
      uVar1 = puVar86[-2];
      uVar2 = puVar86[-1];
      uVar101 = (undefined2)(uVar1 >> 0x30);
      auVar97._8_4_ = 0;
      auVar97._0_8_ = uVar1;
      auVar97._12_2_ = uVar101;
      auVar97._14_2_ = uVar101;
      uVar101 = (undefined2)(uVar1 >> 0x20);
      auVar96._12_4_ = auVar97._12_4_;
      auVar96._8_2_ = 0;
      auVar96._0_8_ = uVar1;
      auVar96._10_2_ = uVar101;
      auVar95._10_6_ = auVar96._10_6_;
      auVar95._8_2_ = uVar101;
      auVar95._0_8_ = uVar1;
      uVar101 = (undefined2)(uVar1 >> 0x10);
      auVar40._4_8_ = auVar95._8_8_;
      auVar40._2_2_ = uVar101;
      auVar40._0_2_ = uVar101;
      uVar90 = uVar90 + 0x10;
      uVar101 = (undefined2)(uVar2 >> 0x30);
      auVar105._8_4_ = 0;
      auVar105._0_8_ = uVar2;
      auVar105._12_2_ = uVar101;
      auVar105._14_2_ = uVar101;
      uVar101 = (undefined2)(uVar2 >> 0x20);
      auVar104._12_4_ = auVar105._12_4_;
      auVar104._8_2_ = 0;
      auVar104._0_8_ = uVar2;
      auVar104._10_2_ = uVar101;
      auVar103._10_6_ = auVar104._10_6_;
      auVar103._8_2_ = uVar101;
      auVar103._0_8_ = uVar2;
      uVar101 = (undefined2)(uVar2 >> 0x10);
      auVar41._4_8_ = auVar103._8_8_;
      auVar41._2_2_ = uVar101;
      auVar41._0_2_ = uVar101;
      *(int *)pauVar85[-2] = (int)(short)uVar1 << 0x10;
      *(int *)(pauVar85[-2] + 4) = (auVar40._0_4_ >> 0x10) << 0x10;
      *(int *)(pauVar85[-2] + 8) = (auVar95._8_4_ >> 0x10) << 0x10;
      *(int *)(pauVar85[-2] + 0xc) = (auVar96._12_4_ >> 0x10) << 0x10;
      uVar1 = *puVar86;
      uVar101 = (undefined2)(uVar1 >> 0x30);
      auVar100._8_4_ = 0;
      auVar100._0_8_ = uVar1;
      auVar100._12_2_ = uVar101;
      auVar100._14_2_ = uVar101;
      uVar101 = (undefined2)(uVar1 >> 0x20);
      auVar99._12_4_ = auVar100._12_4_;
      auVar99._8_2_ = 0;
      auVar99._0_8_ = uVar1;
      auVar99._10_2_ = uVar101;
      auVar98._10_6_ = auVar99._10_6_;
      auVar98._8_2_ = uVar101;
      auVar98._0_8_ = uVar1;
      uVar101 = (undefined2)(uVar1 >> 0x10);
      auVar42._4_8_ = auVar98._8_8_;
      auVar42._2_2_ = uVar101;
      auVar42._0_2_ = uVar101;
      *(int *)pauVar85[-1] = (int)(short)uVar2 << 0x10;
      *(int *)(pauVar85[-1] + 4) = (auVar41._0_4_ >> 0x10) << 0x10;
      *(int *)(pauVar85[-1] + 8) = (auVar103._8_4_ >> 0x10) << 0x10;
      *(int *)(pauVar85[-1] + 0xc) = (auVar104._12_4_ >> 0x10) << 0x10;
      uVar2 = puVar86[1];
      uVar101 = (undefined2)(uVar2 >> 0x30);
      auVar108._8_4_ = 0;
      auVar108._0_8_ = uVar2;
      auVar108._12_2_ = uVar101;
      auVar108._14_2_ = uVar101;
      uVar101 = (undefined2)(uVar2 >> 0x20);
      auVar107._12_4_ = auVar108._12_4_;
      auVar107._8_2_ = 0;
      auVar107._0_8_ = uVar2;
      auVar107._10_2_ = uVar101;
      auVar106._10_6_ = auVar107._10_6_;
      auVar106._8_2_ = uVar101;
      auVar106._0_8_ = uVar2;
      uVar101 = (undefined2)(uVar2 >> 0x10);
      auVar43._4_8_ = auVar106._8_8_;
      auVar43._2_2_ = uVar101;
      auVar43._0_2_ = uVar101;
      *(int *)*pauVar85 = (int)(short)uVar1 << 0x10;
      *(int *)(*pauVar85 + 4) = (auVar42._0_4_ >> 0x10) << 0x10;
      *(int *)(*pauVar85 + 8) = (auVar98._8_4_ >> 0x10) << 0x10;
      *(int *)(*pauVar85 + 0xc) = (auVar99._12_4_ >> 0x10) << 0x10;
      *(int *)pauVar85[1] = (int)(short)uVar2 << 0x10;
      *(int *)(pauVar85[1] + 4) = (auVar43._0_4_ >> 0x10) << 0x10;
      *(int *)(pauVar85[1] + 8) = (auVar106._8_4_ >> 0x10) << 0x10;
      *(int *)(pauVar85[1] + 0xc) = (auVar107._12_4_ >> 0x10) << 0x10;
      pauVar85 = pauVar85 + 4;
      puVar86 = puVar86 + 4;
    } while (uVar90 < param_5 - uVar89);
    if (1 < uVar89) goto LAB_180029077;
  }
  if (param_5 <= uVar90) {
    return;
  }
LAB_1800290b0:
  do {
    *(int *)(*param_1 + uVar90 * 4) = (int)*(short *)((longlong)param_3 + uVar90 * 2) << 0x10;
    uVar90 = uVar90 + 1;
  } while (uVar90 < param_5);
  return;
}


