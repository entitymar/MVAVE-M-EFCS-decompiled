// FUN_18001d5f0 @ 18001d5f0

undefined8 FUN_18001d5f0(char *param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  if (param_1 == (char *)0x0) {
    return 0x16;
  }
  if (param_2 != 0) {
    if (param_3 == 0) {
      *param_1 = '\0';
      return 0x16;
    }
    if ((param_4 == 0xffffffffffffffff) || (uVar3 = param_4, param_2 <= param_4)) {
      uVar3 = param_2 - 1;
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      pcVar2 = param_1;
      do {
        if (pcVar2[param_3 - (longlong)param_1] == '\0') break;
        *pcVar2 = pcVar2[param_3 - (longlong)param_1];
        uVar1 = uVar1 + 1;
        pcVar2 = pcVar2 + 1;
      } while (uVar1 < uVar3);
    }
    if (((*(char *)(uVar1 + param_3) == '\0') || (uVar1 == param_4)) ||
       (param_4 == 0xffffffffffffffff)) {
      param_1[uVar1] = '\0';
      return 0;
    }
    *param_1 = '\0';
  }
  return 0x22;
}


