// FUN_180004d90 @ 180004d90

void FUN_180004d90(longlong *param_1)

{
  if (*(code **)_Raise_handler_exref != (code *)0x0) {
    (**(code **)_Raise_handler_exref)();
  }
  (**(code **)(*param_1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


