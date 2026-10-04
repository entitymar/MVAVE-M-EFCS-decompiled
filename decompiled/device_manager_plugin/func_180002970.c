// FUN_180002970 @ 180002970

void FUN_180002970(longlong *param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  std::basic_ostream<char,std::char_traits<char>_>::_Osfx
            ((basic_ostream<char,std::char_traits<char>_> *)*param_1);
  pbVar1 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      ((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1));
  if (pbVar1 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar1 + 0x10))(pbVar1);
  }
  return;
}


