// FUN_18000ccc0 @ 18000ccc0

void FUN_18000ccc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1800050d0((longlong *)(param_2 + 0x170));
  }
  return;
}


