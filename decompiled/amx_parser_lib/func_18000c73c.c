// FUN_18000c73c @ 18000c73c

void FUN_18000c73c(undefined2 *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_18000c4d8((ulonglong)local_18,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}


