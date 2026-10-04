// FUN_18001bd10 @ 18001bd10

longlong FUN_18001bd10(longlong param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar6 = 0;
  lVar7 = lVar6;
  lVar9 = lVar6;
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_18001bdd5;
    lVar5 = *(longlong *)(param_1 + 0x48);
    uVar8 = (ulonglong)*(ushort *)(param_1 + 0x18);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x48);
    uVar8 = (ulonglong)*(ushort *)(param_1 + 0x18);
    uVar1 = (param_2 - 2 >> 1) + 1;
    uVar3 = (ulonglong)uVar1;
    pbVar2 = (byte *)(lVar5 + 0x88);
    do {
      lVar7 = lVar7 + pbVar2[-0x48] * uVar8 * 4;
      lVar9 = lVar9 + *pbVar2 * uVar8 * 4;
      uVar3 = uVar3 - 1;
      pbVar2 = pbVar2 + 0x90;
    } while (uVar3 != 0);
    lVar6 = (ulonglong)uVar1 * 2;
    if (param_2 <= uVar1 * 2) {
      return lVar9 + lVar7 + lVar4;
    }
  }
  lVar4 = lVar4 + *(byte *)(lVar5 + 0x40 + lVar6 * 0x48) * uVar8 * 4;
  lVar6 = lVar7;
LAB_18001bdd5:
  return lVar9 + lVar6 + lVar4;
}


