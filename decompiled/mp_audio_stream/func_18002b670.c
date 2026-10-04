// FUN_18002b670 @ 18002b670

void FUN_18002b670(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined2 uVar6;
  
  uVar4 = 0;
  if (param_4 == 0) {
    if (param_3 != 0) {
      puVar1 = (undefined2 *)(param_2 + 1);
      do {
        uVar6 = *puVar1;
        puVar1 = (undefined2 *)((longlong)puVar1 + 3);
        *(undefined2 *)(param_1 + uVar4 * 2) = uVar6;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_3);
      return;
    }
  }
  else if (param_3 != 0) {
    puVar1 = (undefined2 *)(param_2 + 1);
    if (param_4 == 2) {
      do {
        iVar2 = DAT_18003604c * 0xbc8f;
        iVar5 = (uint)CONCAT21(*puVar1,*(undefined1 *)((longlong)puVar1 + -1)) * 0x100;
        uVar3 = iVar2 + ((int)((longlong)iVar2 * 0x40000001 >> 0x3d) - (iVar2 >> 0x1f)) *
                        -0x7fffffff;
        iVar2 = uVar3 * 0xbc8f;
        DAT_18003604c =
             iVar2 + ((int)((longlong)iVar2 * 0x40000001 >> 0x3d) - (iVar2 >> 0x1f)) * -0x7fffffff;
        iVar2 = uVar3 / 0x1fffd + ((DAT_18003604c >> 0x11) - 0x8000);
        if ((longlong)iVar2 + (longlong)iVar5 < 0x80000000) {
          uVar6 = (undefined2)((uint)(iVar5 + iVar2) >> 0x10);
        }
        else {
          uVar6 = 0x7fff;
        }
        puVar1 = (undefined2 *)((longlong)puVar1 + 3);
        *(undefined2 *)(param_1 + uVar4 * 2) = uVar6;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_3);
      return;
    }
    do {
      iVar2 = (uint)CONCAT21(*puVar1,*(undefined1 *)((longlong)puVar1 + -1)) * 0x100;
      if (param_4 == 1) {
        iVar5 = DAT_18003604c * 0xbc8f;
        DAT_18003604c =
             iVar5 + ((int)((longlong)iVar5 * 0x40000001 >> 0x3d) - (iVar5 >> 0x1f)) * -0x7fffffff;
        iVar5 = (DAT_18003604c >> 0x10) - 0x8000;
      }
      else {
        iVar5 = 0;
      }
      if ((longlong)iVar5 + (longlong)iVar2 < 0x80000000) {
        uVar6 = (undefined2)((uint)(iVar2 + iVar5) >> 0x10);
      }
      else {
        uVar6 = 0x7fff;
      }
      puVar1 = (undefined2 *)((longlong)puVar1 + 3);
      *(undefined2 *)(param_1 + uVar4 * 2) = uVar6;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}


