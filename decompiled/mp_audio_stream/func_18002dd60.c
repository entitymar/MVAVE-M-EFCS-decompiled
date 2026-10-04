// vsnprintf @ 18002dd60

/* Library Function - Single Match
    vsnprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl vsnprintf(char *_DstBuf,size_t _MaxCount,char *_Format,va_list _ArgList)

{
  int iVar1;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)FUN_18001e620();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,_DstBuf,_MaxCount,_Format,0,_ArgList);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}


