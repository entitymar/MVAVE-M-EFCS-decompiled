// FUN_18002b860 @ 18002b860

void FUN_18002b860(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  int iVar7;
  
  if (param_4 == 0) {
    uVar5 = 0;
    if (param_3 != 0) {
      pcVar2 = (char *)(param_2 + 2);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 3;
        *(char *)(param_1 + uVar5) = cVar1 + -0x80;
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
      return;
    }
  }
  else {
    uVar5 = 0;
    if (param_3 != 0) {
      puVar6 = (undefined2 *)(param_2 + 1);
      if (param_4 == 2) {
        do {
          iVar3 = DAT_18003604c * 0xbc8f;
          iVar7 = (uint)CONCAT21(*puVar6,*(undefined1 *)((longlong)puVar6 + -1)) * 0x100;
          uVar4 = iVar3 + ((int)((longlong)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) *
                          -0x7fffffff;
          iVar3 = uVar4 * 0xbc8f;
          DAT_18003604c =
               iVar3 + ((int)((longlong)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) * -0x7fffffff
          ;
          uVar4 = (DAT_18003604c >> 9) + (uVar4 >> 9);
          cVar1 = (char)((uVar4 - 0x800000) + iVar7 >> 0x18);
          if (0x7fffffff < (longlong)((longlong)iVar7 + ((ulonglong)uVar4 - 0x800000))) {
            cVar1 = '\x7f';
          }
          puVar6 = (undefined2 *)((longlong)puVar6 + 3);
          *(char *)(uVar5 + param_1) = cVar1 + -0x80;
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_3);
        return;
      }
      do {
        iVar7 = (uint)CONCAT21(*puVar6,*(undefined1 *)((longlong)puVar6 + -1)) * 0x100;
        iVar3 = 0;
        if (param_4 == 1) {
          iVar3 = DAT_18003604c * 0xbc8f;
          DAT_18003604c =
               iVar3 + ((int)((longlong)iVar3 * 0x40000001 >> 0x3d) - (iVar3 >> 0x1f)) * -0x7fffffff
          ;
          iVar3 = (DAT_18003604c >> 8) - 0x800000;
        }
        cVar1 = (char)((uint)(iVar7 + iVar3) >> 0x18);
        if (0x7fffffff < (longlong)iVar7 + (longlong)iVar3) {
          cVar1 = '\x7f';
        }
        puVar6 = (undefined2 *)((longlong)puVar6 + 3);
        *(char *)(uVar5 + param_1) = cVar1 + -0x80;
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
    }
  }
  return;
}


