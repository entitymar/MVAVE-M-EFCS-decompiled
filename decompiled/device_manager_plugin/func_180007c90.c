// FUN_180007c90 @ 180007c90

undefined1 FUN_180007c90(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (longlong)*(char *)(param_1 + 0x40) + 1;
  uVar2 = (longlong)*(char *)(param_2 + 0x40) + 1;
  if (uVar3 < uVar2) {
    return 1;
  }
  if ((uVar3 == uVar2) && (cVar1 = FUN_1800090f0(uVar2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}


