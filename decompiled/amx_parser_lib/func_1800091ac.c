// FUN_1800091ac @ 1800091ac

void FUN_1800091ac(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_1800091dc(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


