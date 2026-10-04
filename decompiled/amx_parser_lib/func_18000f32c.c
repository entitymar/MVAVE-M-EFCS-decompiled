// FUN_18000f32c @ 18000f32c

ulonglong FUN_18000f32c(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(*param_2);
  bVar1 = (byte)DAT_180025040 & 0x3f;
  uVar2 = DAT_1800265f0 ^ DAT_180025040;
  __acrt_unlock(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}


