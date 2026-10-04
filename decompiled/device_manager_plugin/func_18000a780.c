// FUN_18000a780 @ 18000a780

ulonglong FUN_18000a780(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x18);
  if (*(ulonglong *)(param_1 + 0x10) <= uVar2) {
    this = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                         "Invalid read in StandardCodecByteStreamReader");
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,FUN_180002140);
    return (ulonglong)pbVar3 & 0xffffffffffffff00;
  }
  bVar1 = *(byte *)(uVar2 + *(longlong *)(param_1 + 8));
  *(ulonglong *)(param_1 + 0x18) = uVar2 + 1;
  return (ulonglong)bVar1;
}


