// FUN_18000a7d0 @ 18000a7d0

void FUN_18000a7d0(longlong param_1,void *param_2,size_t param_3)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  
  if (*(ulonglong *)(param_1 + 0x10) < *(longlong *)(param_1 + 0x18) + param_3) {
    this = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                         "Invalid read in StandardCodecByteStreamReader");
                    /* WARNING: Could not recover jumptable at 0x00018000a818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,FUN_180002140);
    return;
  }
  memcpy(param_2,(void *)(*(longlong *)(param_1 + 8) + *(longlong *)(param_1 + 0x18)),param_3);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + param_3;
  return;
}


