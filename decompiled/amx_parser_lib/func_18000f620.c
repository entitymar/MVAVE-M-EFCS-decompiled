// FUN_18000f620 @ 18000f620

undefined8 FUN_18000f620(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_180025040 & 0x3f;
  return CONCAT71((int7)(DAT_180025040 >> 8),
                  (DAT_180026600 ^ DAT_180025040) >> bVar1 != 0 ||
                  (DAT_180026600 ^ DAT_180025040) << 0x40 - bVar1 != 0);
}


