// FUN_18000ae60 @ 18000ae60

ulonglong FUN_18000ae60(undefined1 (*param_1) [16],undefined1 (*param_2) [32],ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  ulonglong uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  char *pcVar7;
  uint uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 auVar10 [16];
  
  uVar4 = 0;
  if ((DAT_1800150a4 & 0x20) == 0) {
    if (((DAT_1800150a4 & 4) != 0) && ((param_3 & 0xfffffffffffffff0) != 0)) {
      pauVar6 = param_1;
      do {
        pcVar7 = (char *)(((longlong)param_2 - (longlong)param_1) + (longlong)pauVar6);
        auVar1 = *pauVar6;
        auVar10[0] = -(*pcVar7 == auVar1[0]);
        auVar10[1] = -(pcVar7[1] == auVar1[1]);
        auVar10[2] = -(pcVar7[2] == auVar1[2]);
        auVar10[3] = -(pcVar7[3] == auVar1[3]);
        auVar10[4] = -(pcVar7[4] == auVar1[4]);
        auVar10[5] = -(pcVar7[5] == auVar1[5]);
        auVar10[6] = -(pcVar7[6] == auVar1[6]);
        auVar10[7] = -(pcVar7[7] == auVar1[7]);
        auVar10[8] = -(pcVar7[8] == auVar1[8]);
        auVar10[9] = -(pcVar7[9] == auVar1[9]);
        auVar10[10] = -(pcVar7[10] == auVar1[10]);
        auVar10[0xb] = -(pcVar7[0xb] == auVar1[0xb]);
        auVar10[0xc] = -(pcVar7[0xc] == auVar1[0xc]);
        auVar10[0xd] = -(pcVar7[0xd] == auVar1[0xd]);
        auVar10[0xe] = -(pcVar7[0xe] == auVar1[0xe]);
        auVar10[0xf] = -(pcVar7[0xf] == auVar1[0xf]);
        uVar5 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar10[0xf] >> 7) << 0xf) ^ 0xffff;
        if (uVar5 != 0) {
          uVar8 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          return uVar4 + uVar8;
        }
        uVar4 = uVar4 + 0x10;
        pauVar6 = pauVar6 + 1;
      } while (uVar4 != (param_3 & 0xfffffffffffffff0));
    }
  }
  else {
    if ((param_3 & 0xffffffffffffffe0) != 0) {
      pauVar9 = param_2;
      do {
        auVar2 = vpcmpeqb_avx2(*pauVar9,*(undefined1 (*) [32])
                                         (((longlong)param_1 - (longlong)param_2) +
                                         (longlong)pauVar9));
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
        if (uVar5 != 0) goto LAB_18000af1a;
        uVar4 = uVar4 + 0x20;
        pauVar9 = pauVar9 + 1;
      } while (uVar4 != (param_3 & 0xffffffffffffffe0));
    }
    uVar8 = (uint)param_3 & 0x1c;
    if ((param_3 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_18000ffe0 + -(ulonglong)uVar8),
                               *(undefined1 (*) [32])(*param_2 + uVar4));
      auVar3 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_18000ffe0 + -(ulonglong)uVar8),
                               *(undefined1 (*) [32])(*param_1 + uVar4));
      auVar2 = vpcmpeqb_avx2(auVar3,auVar2);
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
      if (uVar5 != 0) {
LAB_18000af1a:
        uVar8 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        return uVar4 + uVar8;
      }
      uVar4 = uVar4 + uVar8;
    }
  }
  if (uVar4 != param_3) {
    pcVar7 = *param_1 + uVar4;
    do {
      if (*pcVar7 != pcVar7[(longlong)param_2 - (longlong)param_1]) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      pcVar7 = pcVar7 + 1;
    } while (uVar4 != param_3);
  }
  return uVar4;
}


