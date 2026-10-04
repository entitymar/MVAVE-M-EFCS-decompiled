// FUN_180009ab0 @ 180009ab0

undefined8 FUN_180009ab0(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_180026590;
  uVar2 = (ulonglong)uVar1;
  *DAT_180026590 = *DAT_180026590 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_180026590 != (uint *)&DAT_180025390)) {
    uVar2 = FUN_180009da0(DAT_180026590);
    DAT_180026590 = (uint *)&DAT_180025390;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}


