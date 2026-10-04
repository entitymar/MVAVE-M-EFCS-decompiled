// FUN_180005190 @ 180005190

char * FUN_180005190(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}


