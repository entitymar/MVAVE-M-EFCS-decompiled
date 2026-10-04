// FUN_180005940 @ 180005940

void FUN_180005940(undefined8 *param_1)

{
  if (*(char *)(param_1 + 2) != '\0') {
    (**(code **)param_1[1])(*param_1);
  }
  return;
}


