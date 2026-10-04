// FUN_180001a70 @ 180001a70

basic_ostream<char,std::char_traits<char>_> *
FUN_180001a70(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2,ulonglong param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  __int64 _Var5;
  ulonglong uVar6;
  basic_streambuf<char,std::char_traits<char>_> *pbVar7;
  basic_ostream<char,std::char_traits<char>_> *this;
  int iVar8;
  longlong lVar9;
  
  lVar9 = 0;
  iVar8 = 0;
  _Var5 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((0 < _Var5) &&
     (uVar6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     param_3 < uVar6)) {
    _Var5 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    lVar9 = _Var5 - param_3;
  }
  pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar7 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar7 + 8))(pbVar7);
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (bVar1) {
    this = std::basic_ios<char,std::char_traits<char>_>::tie
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar1 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1 == false) {
    iVar8 = 4;
  }
  else {
    uVar3 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar3 & 0x1c0) != 0x40) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar7,cVar2);
        if (iVar4 == -1) {
          iVar8 = 4;
          goto joined_r0x000180001bfd;
        }
      }
    }
    pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,std::char_traits<char>_> *)
                        (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    uVar6 = std::basic_streambuf<char,std::char_traits<char>_>::sputn(pbVar7,param_2,param_3);
    if (uVar6 == param_3) {
joined_r0x000180001bfd:
      do {
        if (lVar9 == 0) goto LAB_180001c3f;
        pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar7,cVar2);
        if (iVar4 == -1) {
          iVar8 = 4;
          goto LAB_180001c3f;
        }
        lVar9 = lVar9 + -1;
      } while( true );
    }
    iVar8 = 4;
LAB_180001c3f:
    std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar8,false);
  std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar7 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar7 + 0x10))(pbVar7);
  }
  return param_1;
}


