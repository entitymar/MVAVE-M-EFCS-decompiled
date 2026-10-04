// FUN_18001d530 @ 18001d530

undefined8 FUN_18001d530(char *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  longlong lVar2;
  
  if (param_1 == (char *)0x0) {
    return 0x16;
  }
  if (param_2 != 0) {
    pcVar1 = param_1;
    if (param_3 == 0) {
      *param_1 = '\0';
      return 0x16;
    }
    while (*pcVar1 != '\0') {
      param_2 = param_2 + -1;
      pcVar1 = pcVar1 + 1;
      if (param_2 == 0) {
        return 0x16;
      }
    }
    lVar2 = param_3 - (longlong)pcVar1;
    do {
      if (pcVar1[lVar2] == '\0') {
        *pcVar1 = '\0';
        return 0;
      }
      *pcVar1 = pcVar1[lVar2];
      pcVar1 = pcVar1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    *param_1 = '\0';
  }
  return 0x22;
}


