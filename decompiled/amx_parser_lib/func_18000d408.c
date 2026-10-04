// FUN_18000d408 @ 18000d408

uint FUN_18000d408(void)

{
  return *(uint *)(*(longlong *)((longlong)Self + 0x60) + 0xbc) >> 8 & 0xffffff01;
}


