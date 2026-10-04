// FUN_1800066b0 @ 1800066b0

void FUN_1800066b0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_180009da0((LPVOID)*param_1);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


