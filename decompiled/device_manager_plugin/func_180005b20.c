// FUN_180005b20 @ 180005b20

void * FUN_180005b20(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


