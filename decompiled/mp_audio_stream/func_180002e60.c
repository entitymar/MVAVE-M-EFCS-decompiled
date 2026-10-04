// FUN_180002e60 @ 180002e60

undefined8 FUN_180002e60(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  char *pcVar13;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar11 = (ulonglong)uVar1;
  uVar9 = 0;
  uVar2 = *(uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar4 = *(char **)(param_1 + 0x18);
  pcVar13 = *(char **)(param_1 + 0x10);
  if (uVar1 == uVar2) {
    if (pcVar4 == pcVar13) {
      bVar5 = true;
    }
    else {
      uVar12 = 0;
      if (uVar1 != 0) {
        pcVar10 = pcVar13;
        do {
          if (pcVar4 == (char *)0x0) {
            uVar8 = FUN_180005500(0,(uint)uVar11,uVar12);
            cVar7 = (char)uVar8;
          }
          else {
            cVar7 = pcVar10[(longlong)pcVar4 - (longlong)pcVar13];
          }
          if (pcVar13 == (char *)0x0) {
            uVar8 = FUN_180005500(0,(uint)uVar11,uVar12);
            cVar6 = (char)uVar8;
          }
          else {
            cVar6 = *pcVar10;
          }
          if (cVar7 != cVar6) {
            bVar5 = false;
            goto LAB_180002f09;
          }
          uVar12 = uVar12 + 1;
          pcVar10 = pcVar10 + 1;
        } while (uVar12 < (uint)uVar11);
      }
      bVar5 = true;
    }
LAB_180002f09:
    if (bVar5) {
      return 1;
    }
  }
  if (((uint)uVar11 == 1) && ((pcVar4 == (char *)0x0 || (*pcVar4 == (char)uVar11)))) {
    return 2;
  }
  if ((uVar2 == 1) && ((pcVar13 == (char *)0x0 || (*pcVar13 == '\x01')))) {
    return 3;
  }
  if ((iVar3 != 2) && (uVar2 == (uint)uVar11)) {
    if (uVar2 == 0) {
      return 4;
    }
    if (pcVar13 == (char *)0x0) {
      uVar8 = FUN_180005500(0,uVar2,0);
      cVar7 = (char)uVar8;
    }
    else {
      cVar7 = *pcVar13;
    }
    pcVar13 = pcVar4;
    if ((int)uVar11 != 0) {
      do {
        if (pcVar4 == (char *)0x0) {
          uVar8 = FUN_180005500(0,(uint)uVar11,uVar9);
          cVar6 = (char)uVar8;
        }
        else {
          cVar6 = *pcVar13;
        }
        if (cVar6 == cVar7) {
          return 4;
        }
        uVar9 = uVar9 + 1;
        pcVar13 = pcVar13 + 1;
      } while (uVar9 < (uint)uVar11);
    }
  }
  return 5;
}


