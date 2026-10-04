// FUN_1800028d0 @ 1800028d0

void FUN_1800028d0(undefined8 param_1,void *param_2,undefined8 param_3,int param_4)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)(DAT_180036ca0 + 0xd00) - *(int *)(DAT_180036ca0 + 0xd04);
  uVar2 = param_4 * *(int *)(DAT_180036ca0 + 0xd08);
  if ((*(char *)(DAT_180036ca0 + 0xd0c) != '\0') && (uVar1 < *(uint *)(DAT_180036ca0 + 0xd10))) {
    memset(param_2,0,(ulonglong)uVar2 << 2);
    *(int *)(DAT_180036ca0 + 0xd14) = *(int *)(DAT_180036ca0 + 0xd14) + 1;
    return;
  }
  *(undefined1 *)(DAT_180036ca0 + 0xd0c) = 0;
  _Src = (void *)(*(longlong *)(DAT_180036ca0 + 0xcf8) +
                 (ulonglong)*(uint *)(DAT_180036ca0 + 0xd04) * 4);
  if (uVar1 < uVar2) {
    memcpy(param_2,_Src,(ulonglong)uVar1 * 4);
    memset((void *)((ulonglong)uVar1 * 4 + (longlong)param_2),0,(ulonglong)(uVar2 - uVar1) << 2);
    *(undefined4 *)(DAT_180036ca0 + 0xd04) = *(undefined4 *)(DAT_180036ca0 + 0xd00);
    *(undefined1 *)(DAT_180036ca0 + 0xd0c) = 1;
    *(int *)(DAT_180036ca0 + 0xd14) = *(int *)(DAT_180036ca0 + 0xd14) + 1;
    return;
  }
  memcpy(param_2,_Src,(ulonglong)uVar2 << 2);
  *(int *)(DAT_180036ca0 + 0xd04) = *(int *)(DAT_180036ca0 + 0xd04) + uVar2;
  return;
}


