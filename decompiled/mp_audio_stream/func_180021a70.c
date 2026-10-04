// FUN_180021a70 @ 180021a70

void FUN_180021a70(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar5 = 0;
    lVar4 = param_1 - param_2;
    if (3 < param_3) {
      lVar6 = (param_3 - 4 >> 2) + 1;
      uVar5 = lVar6 * 4;
      puVar3 = (undefined2 *)(param_2 + 1);
      do {
        puVar1 = puVar3 + 6;
        iVar2 = (int)((float)(int)((uint)CONCAT21(*puVar3,*(undefined1 *)((longlong)puVar3 + -1)) <<
                                  8) * param_4);
        *(char *)((longlong)puVar3 + lVar4 + -1) = (char)((uint)iVar2 >> 8);
        *(char *)(lVar4 + -0xb + (longlong)puVar1) = (char)((uint)iVar2 >> 0x18);
        *(char *)((longlong)puVar3 + lVar4) = (char)((uint)iVar2 >> 0x10);
        iVar2 = (int)((float)(int)((uint)*(uint3 *)(puVar3 + 1) << 8) * param_4);
        *(char *)(lVar4 + -10 + (longlong)puVar1) = (char)((uint)iVar2 >> 8);
        *(char *)(lVar4 + -8 + (longlong)puVar1) = (char)((uint)iVar2 >> 0x18);
        *(char *)(lVar4 + -9 + (longlong)puVar1) = (char)((uint)iVar2 >> 0x10);
        iVar2 = (int)((float)(int)((uint)*(uint3 *)((longlong)puVar3 + 5) << 8) * param_4);
        *(char *)(lVar4 + -7 + (longlong)puVar1) = (char)((uint)iVar2 >> 8);
        *(char *)(lVar4 + -5 + (longlong)puVar1) = (char)((uint)iVar2 >> 0x18);
        *(char *)(lVar4 + -6 + (longlong)puVar1) = (char)((uint)iVar2 >> 0x10);
        iVar2 = (int)((float)(int)((uint)*(uint3 *)(puVar3 + 4) << 8) * param_4);
        *(char *)(lVar4 + -4 + (longlong)puVar1) = (char)((uint)iVar2 >> 8);
        *(char *)((longlong)puVar3 + lVar4 + 10) = (char)((uint)iVar2 >> 0x18);
        *(char *)(lVar4 + -3 + (longlong)puVar1) = (char)((uint)iVar2 >> 0x10);
        lVar6 = lVar6 + -1;
        puVar3 = puVar1;
      } while (lVar6 != 0);
    }
    if (uVar5 < param_3) {
      lVar6 = param_3 - uVar5;
      puVar3 = (undefined2 *)(param_2 + 1 + uVar5 * 3);
      do {
        puVar1 = (undefined2 *)((longlong)puVar3 + 3);
        iVar2 = (int)((float)(int)((uint)CONCAT21(*puVar3,*(undefined1 *)((longlong)puVar3 + -1)) <<
                                  8) * param_4);
        *(char *)((longlong)puVar3 + lVar4 + -1) = (char)((uint)iVar2 >> 8);
        *(char *)(lVar4 + -3 + (longlong)puVar1) = (char)((uint)iVar2 >> 0x10);
        *(char *)(lVar4 + -2 + (longlong)puVar1) = (char)((uint)iVar2 >> 0x18);
        lVar6 = lVar6 + -1;
        puVar3 = puVar1;
      } while (lVar6 != 0);
    }
  }
  return;
}


