// FUN_180016018 @ 180016018

void FUN_180016018(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180003f70(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    lVar2 = FUN_180004494();
    *(PEXCEPTION_RECORD *)(lVar2 + 0x20) = param_1;
    lVar2 = FUN_180004494();
    *(longlong *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_180009bcc();
  }
  return;
}


