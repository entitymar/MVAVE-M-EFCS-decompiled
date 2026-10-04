// FUN_180021df0 @ 180021df0

void FUN_180021df0(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar5 = 0;
    lVar3 = param_2 - param_1;
    if (3 < param_3) {
      lVar4 = (param_3 - 4 >> 2) + 1;
      uVar5 = lVar4 * 4;
      puVar2 = (undefined1 *)(param_1 + 1);
      do {
        puVar1 = puVar2 + 4;
        puVar2[-1] = (char)(int)((float)(byte)puVar2[lVar3 + -1] * param_4);
        *puVar2 = (char)(int)((float)(byte)puVar1[lVar3 + -4] * param_4);
        puVar2[1] = (char)(int)((float)(byte)puVar1[lVar3 + -3] * param_4);
        puVar2[2] = (char)(int)((float)(byte)puVar1[lVar3 + -2] * param_4);
        lVar4 = lVar4 + -1;
        puVar2 = puVar1;
      } while (lVar4 != 0);
    }
    if (uVar5 < param_3) {
      lVar4 = param_3 - uVar5;
      puVar2 = (undefined1 *)(uVar5 + param_1);
      do {
        *puVar2 = (char)(int)((float)(byte)puVar2[lVar3] * param_4);
        lVar4 = lVar4 + -1;
        puVar2 = puVar2 + 1;
      } while (lVar4 != 0);
    }
  }
  return;
}


