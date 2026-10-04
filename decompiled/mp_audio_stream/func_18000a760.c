// FUN_18000a760 @ 18000a760

char * FUN_18000a760(char *param_1,undefined8 *param_2)

{
  ulonglong _Size;
  size_t sVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    _Size = sVar1 + 1;
    if (param_2 == (undefined8 *)0x0) {
      pcVar2 = malloc(_Size);
    }
    else {
      if ((code *)param_2[1] == (code *)0x0) {
        return (char *)0x0;
      }
      pcVar2 = (char *)(*(code *)param_2[1])(_Size,*param_2);
    }
    if (pcVar2 != (char *)0x0) {
      FUN_18001d590(pcVar2,_Size,(longlong)param_1);
      return pcVar2;
    }
  }
  return (char *)0x0;
}


