// FUN_18001d590 @ 18001d590

undefined8 FUN_18001d590(char *param_1,ulonglong param_2,longlong param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  
  if (param_1 == (char *)0x0) {
    return 0x16;
  }
  if (param_2 != 0) {
    if (param_3 == 0) {
      *param_1 = '\0';
      return 0x16;
    }
    uVar2 = 0;
    if (param_2 != 0) {
      pcVar1 = param_1;
      do {
        if (pcVar1[param_3 - (longlong)param_1] == '\0') {
          param_1[uVar2] = '\0';
          return 0;
        }
        *pcVar1 = pcVar1[param_3 - (longlong)param_1];
        uVar2 = uVar2 + 1;
        pcVar1 = pcVar1 + 1;
      } while (uVar2 < param_2);
    }
    *param_1 = '\0';
  }
  return 0x22;
}


