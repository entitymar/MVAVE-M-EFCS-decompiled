// FUN_18000d18c @ 18000d18c

undefined4 FUN_18000d18c(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_18002630c;
  LOCK();
  DAT_18002630c = 1;
  UNLOCK();
  return uVar1;
}


