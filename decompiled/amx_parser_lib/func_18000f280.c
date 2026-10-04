// FUN_18000f280 @ 18000f280

ulonglong FUN_18000f280(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_180025040 & 0x3f;
  uVar2 = DAT_1800265d8 ^ DAT_180025040;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}


