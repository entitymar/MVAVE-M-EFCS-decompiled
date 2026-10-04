// FUN_180014080 @ 180014080

uint FUN_180014080(void)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_initialize_multibyte();
  return (uint)uVar1 & 0xff ^ 1;
}


