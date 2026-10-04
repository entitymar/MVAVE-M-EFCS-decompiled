// FUN_180011a00 @ 180011a00

undefined8 FUN_180011a00(longlong param_1)

{
  if ((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) - 3U < 2)) {
    SetEvent(*(HANDLE *)(param_1 + 0xc80));
  }
  if ((*(int *)(param_1 + 8) == 1) || (*(int *)(param_1 + 8) == 3)) {
    SetEvent(*(HANDLE *)(param_1 + 0xc78));
  }
  return 0;
}


