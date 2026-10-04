// FUN_180002ca0 @ 180002ca0

void * FUN_180002ca0(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


