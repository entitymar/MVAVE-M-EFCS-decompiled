// FUN_18001bdf0 @ 18001bdf0

longlong FUN_18001bdf0(longlong param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  uVar7 = 0;
  for (uVar5 = uVar7; (uint)uVar5 < *(uint *)(param_1 + 0x40); uVar5 = (ulonglong)((uint)uVar5 + 1))
  {
    lVar8 = lVar8 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x48) + 0x40 + uVar5 * 0x48) *
                    (ulonglong)*(ushort *)(param_1 + 0x18) * 4;
  }
  uVar6 = uVar7;
  uVar5 = uVar7;
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_18001bec4;
    lVar4 = *(longlong *)(param_1 + 0x50);
    uVar3 = (ulonglong)*(ushort *)(param_1 + 0x18);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x50);
    uVar3 = (ulonglong)*(ushort *)(param_1 + 0x18);
    uVar1 = (param_2 - 2 >> 1) + 1;
    uVar7 = (ulonglong)uVar1;
    pbVar2 = (byte *)(lVar4 + 0x41);
    do {
      uVar5 = uVar5 + pbVar2[-0x38] * uVar3 * 4;
      uVar6 = uVar6 + *pbVar2 * uVar3 * 4;
      uVar7 = uVar7 - 1;
      pbVar2 = pbVar2 + 0x70;
    } while (uVar7 != 0);
    uVar7 = (ulonglong)uVar1 * 2;
    if (param_2 <= uVar1 * 2) {
      return uVar6 + uVar5 + lVar8;
    }
  }
  lVar8 = lVar8 + *(byte *)(uVar7 * 0x38 + 9 + lVar4) * uVar3 * 4;
  uVar7 = uVar6;
LAB_18001bec4:
  return uVar7 + uVar5 + lVar8;
}


