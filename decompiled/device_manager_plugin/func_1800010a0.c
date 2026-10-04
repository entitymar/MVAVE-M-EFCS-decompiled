// FUN_1800010a0 @ 1800010a0

basic_ostream<char,std::char_traits<char>_> *
FUN_1800010a0(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  __int64 _Var6;
  basic_streambuf<char,std::char_traits<char>_> *pbVar7;
  basic_ostream<char,std::char_traits<char>_> *this;
  size_t sVar8;
  int iVar9;
  longlong lVar10;
  
  lVar10 = 0;
  iVar9 = 0;
  sVar5 = strlen(param_2);
  _Var6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if ((0 < _Var6) &&
     (_Var6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4))),
     (longlong)sVar5 < _Var6)) {
    _Var6 = std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    lVar10 = _Var6 - sVar5;
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
    iVar9 = 4;
  }
  else {
    uVar3 = std::ios_base::flags((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    if ((uVar3 & 0x1c0) != 0x40) {
      for (; 0 < lVar10; lVar10 = lVar10 + -1) {
        pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar7,cVar2);
        if (iVar4 == -1) goto LAB_18000126e;
      }
    }
    pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                       ((basic_ios<char,std::char_traits<char>_> *)
                        (param_1 + *(int *)(*(longlong *)param_1 + 4)));
    sVar8 = std::basic_streambuf<char,std::char_traits<char>_>::sputn(pbVar7,param_2,sVar5);
    if (sVar8 == sVar5) {
      for (; 0 < lVar10; lVar10 = lVar10 + -1) {
        pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                           ((basic_ios<char,std::char_traits<char>_> *)
                            (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        cVar2 = std::basic_ios<char,std::char_traits<char>_>::fill
                          ((basic_ios<char,std::char_traits<char>_> *)
                           (param_1 + *(int *)(*(longlong *)param_1 + 4)));
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc(pbVar7,cVar2);
        if (iVar4 == -1) goto LAB_18000126e;
      }
    }
    else {
LAB_18000126e:
      iVar9 = 4;
    }
    std::ios_base::width((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)),0);
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar9,false);
  std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  pbVar7 = std::basic_ios<char,std::char_traits<char>_>::rdbuf
                     ((basic_ios<char,std::char_traits<char>_> *)
                      (param_1 + *(int *)(*(longlong *)param_1 + 4)));
  if (pbVar7 != (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    (**(code **)(*(longlong *)pbVar7 + 0x10))(pbVar7);
  }
  return param_1;
}


