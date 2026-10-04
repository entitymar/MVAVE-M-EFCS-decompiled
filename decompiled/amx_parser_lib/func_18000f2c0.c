// _set_new_handler @ 18000f2c0

/* Library Function - Single Match
    _set_new_handler
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _set_new_handler(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  __acrt_lock(0);
  bVar2 = (byte)DAT_180025040 & 0x3f;
  uVar3 = DAT_180025040 ^ DAT_1800265d8;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_1800265d8 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_180025040;
  __acrt_unlock(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}


