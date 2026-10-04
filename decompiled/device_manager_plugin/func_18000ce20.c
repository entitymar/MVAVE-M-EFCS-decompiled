// FUN_18000ce20 @ 18000ce20

void FUN_18000ce20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180002890(*(undefined8 **)(param_2 + 0x98));
  }
  return;
}


