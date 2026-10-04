// FUN_1800059d0 @ 1800059d0

void FUN_1800059d0(longlong *param_1)

{
  longlong *plVar1;
  basic_ostream<char,std::char_traits<char>_> *this;
  
  if (param_1[7] != 0) {
    this = FUN_1800010a0((basic_ostream<char,std::char_traits<char>_> *)cerr_exref,
                         "Warning: Failed to respond to a message. This is a memory leak.");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,FUN_180002140);
  }
  plVar1 = (longlong *)param_1[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1);
    param_1[7] = 0;
  }
  return;
}


