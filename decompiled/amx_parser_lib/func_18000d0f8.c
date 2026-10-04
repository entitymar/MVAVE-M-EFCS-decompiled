// FUN_18000d0f8 @ 18000d0f8

undefined4 FUN_18000d0f8(void)

{
  BOOL in_EAX;
  
  if (DAT_180025218 != 0xffffffff) {
    in_EAX = FlsFree(DAT_180025218);
    DAT_180025218 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


