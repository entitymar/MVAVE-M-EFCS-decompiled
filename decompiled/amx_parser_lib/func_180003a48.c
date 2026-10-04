// FUN_180003a48 @ 180003a48

void FUN_180003a48(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800028c0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_180003a40();
  *puVar1 = *puVar1 | 2;
  return;
}


