// _fileno @ 18000c93c

/* Library Function - Single Match
    _fileno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _fileno(FILE *_File)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if (_File == (FILE *)0x0) {
    p_Var2 = FUN_18000a324();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_18000a17c();
    iVar1 = -1;
  }
  else {
    iVar1 = _File->_flag;
  }
  return iVar1;
}


