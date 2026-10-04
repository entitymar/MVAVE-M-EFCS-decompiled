// FUN_18000af80 @ 18000af80

ulonglong FUN_18000af80(undefined1 (*param_1) [16],undefined1 (*param_2) [32],ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  ulonglong uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 (*pauVar7) [16];
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  
  uVar4 = 0;
  if ((DAT_1800150a4 & 0x20) == 0) {
    if ((DAT_1800150a4 & 4) == 0) {
      lVar10 = (longlong)param_2 - (longlong)param_1;
    }
    else {
      uVar11 = param_3 * 4 & 0xfffffffffffffff0;
      if (uVar11 == 0) {
        lVar10 = (longlong)param_2 - (longlong)param_1;
        uVar4 = 0;
      }
      else {
        lVar10 = (longlong)param_2 - (longlong)param_1;
        pauVar7 = param_1;
        do {
          piVar9 = (int *)(lVar10 + (longlong)pauVar7);
          auVar1 = *pauVar7;
          auVar12._0_4_ = -(uint)(*piVar9 == auVar1._0_4_);
          auVar12._4_4_ = -(uint)(piVar9[1] == auVar1._4_4_);
          auVar12._8_4_ = -(uint)(piVar9[2] == auVar1._8_4_);
          auVar12._12_4_ = -(uint)(piVar9[3] == auVar1._12_4_);
          uVar8 = (ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                           (ushort)((byte)(auVar12._12_4_ >> 7) & 1) << 0xc |
                           (ushort)((byte)(auVar12._12_4_ >> 0xf) & 1) << 0xd |
                           (ushort)((byte)(auVar12._12_4_ >> 0x17) & 1) << 0xe |
                          (ushort)(byte)(auVar12._12_4_ >> 0x1f) << 0xf) ^ 0xffff;
          if (uVar8 != 0) {
            uVar5 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
              }
            }
            return uVar4 + uVar5 >> 2;
          }
          uVar4 = uVar4 + 0x10;
          pauVar7 = pauVar7 + 1;
        } while (uVar4 != uVar11);
        uVar4 = uVar4 >> 2;
      }
    }
    if (uVar4 != param_3) {
      piVar9 = (int *)(*param_1 + uVar4 * 4);
      while (*piVar9 == *(int *)((longlong)piVar9 + lVar10)) {
        uVar4 = uVar4 + 1;
        piVar9 = piVar9 + 1;
        if (uVar4 == param_3) {
          return uVar4;
        }
      }
    }
  }
  else {
    uVar11 = param_3 * 4;
    if ((uVar11 & 0xffffffffffffffe0) != 0) {
      pauVar6 = param_2;
      do {
        auVar2 = vpcmpeqd_avx2(*pauVar6,*(undefined1 (*) [32])
                                         (((longlong)param_1 - (longlong)param_2) +
                                         (longlong)pauVar6));
        uVar8 = ~((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 |
                  (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
                  (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                  (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                  (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                  (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                  (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                  (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f);
        if (uVar8 != 0) {
          uVar5 = 0;
          for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          return uVar4 + uVar5 >> 2;
        }
        uVar4 = uVar4 + 0x20;
        pauVar6 = pauVar6 + 1;
      } while (uVar4 != (uVar11 & 0xffffffffffffffe0));
    }
    uVar8 = (uint)uVar11 & 0x1c;
    if ((uVar11 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_18000ffe0 + -(ulonglong)uVar8),
                               *(undefined1 (*) [32])(*param_2 + uVar4));
      auVar3 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_18000ffe0 + -(ulonglong)uVar8),
                               *(undefined1 (*) [32])(*param_1 + uVar4));
      auVar2 = vpcmpeqd_avx2(auVar3,auVar2);
      uVar5 = ~((uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf
                | (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar2 >> 0xbf,0) << 0x17 | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18
                | (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
                (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
                (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
                (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
                (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
                (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f);
      if (uVar5 == 0) {
        return uVar4 + uVar8 >> 2;
      }
      uVar8 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar4 = uVar4 + uVar8;
    }
    uVar4 = uVar4 >> 2;
  }
  return uVar4;
}


