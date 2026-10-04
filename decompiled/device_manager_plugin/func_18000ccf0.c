// FUN_18000ccf0 @ 18000ccf0

void FUN_18000ccf0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_1800050d0((longlong *)(param_2 + 400));
  }
  return;
}


