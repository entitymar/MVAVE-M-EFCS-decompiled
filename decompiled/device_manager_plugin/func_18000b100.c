// FUN_18000b100 @ 18000b100

ulonglong FUN_18000b100(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 (*pauVar1) [24];
  undefined1 auVar2 [32];
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar3 = 0;
  if ((DAT_1800150a4 & 0x20) == 0) {
    if ((DAT_1800150a4 & 4) == 0) {
      lVar7 = (longlong)param_2 - (longlong)param_1;
    }
    else {
      uVar8 = param_3 * 8 & 0xfffffffffffffff0;
      if (uVar8 == 0) {
        lVar7 = (longlong)param_2 - (longlong)param_1;
        uVar3 = 0;
      }
      else {
        lVar7 = (longlong)param_2 - (longlong)param_1;
        plVar5 = param_1;
        do {
          auVar9._0_8_ = -(ulonglong)(*plVar5 == *(longlong *)(lVar7 + (longlong)plVar5));
          auVar9._8_8_ = -(ulonglong)(plVar5[1] == ((longlong *)(lVar7 + (longlong)plVar5))[1]);
          uVar6 = (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                           (ushort)((byte)(auVar9._8_8_ >> 7) & 1) << 8 |
                           (ushort)((byte)(auVar9._8_8_ >> 0xf) & 1) << 9 |
                           (ushort)((byte)(auVar9._8_8_ >> 0x17) & 1) << 10 |
                           (ushort)((byte)(auVar9._8_8_ >> 0x1f) & 1) << 0xb |
                           (ushort)((byte)(auVar9._8_8_ >> 0x27) & 1) << 0xc |
                           (ushort)((byte)(auVar9._8_8_ >> 0x2f) & 1) << 0xd |
                           (ushort)((byte)(auVar9._8_8_ >> 0x37) & 1) << 0xe |
                          (ushort)(byte)(auVar9._8_8_ >> 0x3f) << 0xf) ^ 0xffff;
          if (uVar6 != 0) {
            uVar4 = 0;
            if (uVar6 != 0) {
              for (; (uVar6 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
            return uVar3 + uVar4 >> 3;
          }
          uVar3 = uVar3 + 0x10;
          plVar5 = plVar5 + 2;
        } while (uVar3 != uVar8);
        uVar3 = uVar3 >> 3;
      }
    }
    if (uVar3 != param_3) {
      plVar5 = param_1 + uVar3;
      while (*plVar5 == *(longlong *)((longlong)plVar5 + lVar7)) {
        uVar3 = uVar3 + 1;
        plVar5 = plVar5 + 1;
        if (uVar3 == param_3) {
          return uVar3;
        }
      }
    }
  }
  else {
    uVar8 = param_3 * 8;
    if ((uVar8 & 0xffffffffffffffe0) != 0) {
      plVar5 = param_2;
      do {
        pauVar1 = (undefined1 (*) [24])(((longlong)param_1 - (longlong)param_2) + (longlong)plVar5);
        auVar10._0_8_ = -(ulonglong)(*plVar5 == *(longlong *)*pauVar1);
        auVar10._8_8_ = -(ulonglong)(plVar5[1] == *(longlong *)(*pauVar1 + 8));
        auVar10._16_8_ = -(ulonglong)(plVar5[2] == SUB248(*pauVar1,0x10));
        auVar10._24_8_ = -(ulonglong)(plVar5[3] == *(longlong *)pauVar1[1]);
        uVar6 = ~((uint)(SUB321(auVar10 >> 7,0) & 1) | (uint)(SUB321(auVar10 >> 0xf,0) & 1) << 1 |
                  (uint)(SUB321(auVar10 >> 0x17,0) & 1) << 2 |
                  (uint)(SUB321(auVar10 >> 0x1f,0) & 1) << 3 |
                  (uint)(SUB321(auVar10 >> 0x27,0) & 1) << 4 |
                  (uint)(SUB321(auVar10 >> 0x2f,0) & 1) << 5 |
                  (uint)(SUB321(auVar10 >> 0x37,0) & 1) << 6 |
                  (uint)(SUB321(auVar10 >> 0x3f,0) & 1) << 7 |
                  (uint)(SUB321(auVar10 >> 0x47,0) & 1) << 8 |
                  (uint)(SUB321(auVar10 >> 0x4f,0) & 1) << 9 |
                  (uint)(SUB321(auVar10 >> 0x57,0) & 1) << 10 |
                  (uint)(SUB321(auVar10 >> 0x5f,0) & 1) << 0xb |
                  (uint)(SUB321(auVar10 >> 0x67,0) & 1) << 0xc |
                  (uint)(SUB321(auVar10 >> 0x6f,0) & 1) << 0xd |
                  (uint)(SUB321(auVar10 >> 0x77,0) & 1) << 0xe |
                  (uint)SUB321(auVar10 >> 0x7f,0) << 0xf |
                  (uint)(SUB321(auVar10 >> 0x87,0) & 1) << 0x10 |
                  (uint)(SUB321(auVar10 >> 0x8f,0) & 1) << 0x11 |
                  (uint)(SUB321(auVar10 >> 0x97,0) & 1) << 0x12 |
                  (uint)(SUB321(auVar10 >> 0x9f,0) & 1) << 0x13 |
                  (uint)(SUB321(auVar10 >> 0xa7,0) & 1) << 0x14 |
                  (uint)(SUB321(auVar10 >> 0xaf,0) & 1) << 0x15 |
                  (uint)(SUB321(auVar10 >> 0xb7,0) & 1) << 0x16 |
                  (uint)SUB321(auVar10 >> 0xbf,0) << 0x17 |
                  (uint)((byte)(auVar10._24_8_ >> 7) & 1) << 0x18 |
                  (uint)((byte)(auVar10._24_8_ >> 0xf) & 1) << 0x19 |
                  (uint)((byte)(auVar10._24_8_ >> 0x17) & 1) << 0x1a |
                  (uint)((byte)(auVar10._24_8_ >> 0x1f) & 1) << 0x1b |
                  (uint)((byte)(auVar10._24_8_ >> 0x27) & 1) << 0x1c |
                  (uint)((byte)(auVar10._24_8_ >> 0x2f) & 1) << 0x1d |
                  (uint)((byte)(auVar10._24_8_ >> 0x37) & 1) << 0x1e |
                 (uint)(byte)(auVar10._24_8_ >> 0x3f) << 0x1f);
        if (uVar6 != 0) {
          uVar4 = 0;
          for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          return uVar3 + uVar4 >> 3;
        }
        uVar3 = uVar3 + 0x20;
        plVar5 = plVar5 + 4;
      } while (uVar3 != (uVar8 & 0xffffffffffffffe0));
    }
    uVar6 = (uint)uVar8 & 0x1c;
    if ((uVar8 & 0x1c) != 0) {
      auVar10 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_18000ffe0 + -(ulonglong)uVar6),
                                *(undefined1 (*) [32])(uVar3 + (longlong)param_2));
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_18000ffe0 + -(ulonglong)uVar6),
                               *(undefined1 (*) [32])(uVar3 + (longlong)param_1));
      auVar11._0_8_ = -(ulonglong)(auVar2._0_8_ == auVar10._0_8_);
      auVar11._8_8_ = -(ulonglong)(auVar2._8_8_ == auVar10._8_8_);
      auVar11._16_8_ = -(ulonglong)(auVar2._16_8_ == auVar10._16_8_);
      auVar11._24_8_ = -(ulonglong)(auVar2._24_8_ == auVar10._24_8_);
      uVar4 = ~((uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1 |
                (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
                (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
                (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
                (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
                (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
                (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
                (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
                (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
                (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
                (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
                (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
                (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
                (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe |
                (uint)SUB321(auVar11 >> 0x7f,0) << 0xf |
                (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
                (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
                (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
                (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
                (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
                (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
                (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
                (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
                (uint)((byte)(auVar11._24_8_ >> 7) & 1) << 0x18 |
                (uint)((byte)(auVar11._24_8_ >> 0xf) & 1) << 0x19 |
                (uint)((byte)(auVar11._24_8_ >> 0x17) & 1) << 0x1a |
                (uint)((byte)(auVar11._24_8_ >> 0x1f) & 1) << 0x1b |
                (uint)((byte)(auVar11._24_8_ >> 0x27) & 1) << 0x1c |
                (uint)((byte)(auVar11._24_8_ >> 0x2f) & 1) << 0x1d |
                (uint)((byte)(auVar11._24_8_ >> 0x37) & 1) << 0x1e |
               (uint)(byte)(auVar11._24_8_ >> 0x3f) << 0x1f);
      if (uVar4 == 0) {
        return uVar3 + uVar6 >> 3;
      }
      uVar6 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar6 = uVar6 + 1;
      }
      uVar3 = uVar3 + uVar6;
    }
    uVar3 = uVar3 >> 3;
  }
  return uVar3;
}


