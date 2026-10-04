// FUN_180017990 @ 180017990

undefined8 FUN_180017990(longlong param_1)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  double dVar4;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  
  while( true ) {
    if ((undefined8 *)(param_1 + 0xc40) != (undefined8 *)0x0) {
      DVar2 = WaitForSingleObject(*(HANDLE *)(param_1 + 0xc40),0xffffffff);
      if ((DVar2 != 0) && (DVar2 != 0x102)) {
        GetLastError();
      }
    }
    iVar1 = *(int *)(param_1 + 0xc58);
    if (iVar1 == 1) break;
    if (iVar1 == 2) {
      BVar3 = QueryPerformanceCounter(&local_res10);
      dVar4 = 0.0;
      if (BVar3 != 0) {
        dVar4 = (double)(local_res10.QuadPart - ((LARGE_INTEGER *)(param_1 + 0xc60))->QuadPart) /
                (double)DAT_180036ca8;
      }
      *(double *)(param_1 + 0xc68) = dVar4 + *(double *)(param_1 + 0xc68);
      if (DAT_180036ca8 == 0) {
        QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180036ca8);
      }
      QueryPerformanceCounter(&local_res18);
      *(LARGE_INTEGER *)(param_1 + 0xc60) = local_res18;
      *(undefined4 *)(param_1 + 0xc5c) = 0;
      goto LAB_180017aae;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0xc5c) = 0;
      if ((undefined8 *)(param_1 + 0xc48) != (undefined8 *)0x0) {
        BVar3 = SetEvent(*(HANDLE *)(param_1 + 0xc48));
        if (BVar3 == 0) {
          GetLastError();
        }
      }
      if ((undefined8 *)(param_1 + 0xc50) != (undefined8 *)0x0) {
        BVar3 = ReleaseSemaphore(*(HANDLE *)(param_1 + 0xc50),1,(LPLONG)0x0);
        if (BVar3 == 0) {
          GetLastError();
        }
      }
      return 0;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc5c) = 0xfffffffd;
LAB_180017aae:
      if ((undefined8 *)(param_1 + 0xc48) != (undefined8 *)0x0) {
        BVar3 = SetEvent(*(HANDLE *)(param_1 + 0xc48));
        if (BVar3 == 0) {
          GetLastError();
        }
      }
      if ((undefined8 *)(param_1 + 0xc50) != (undefined8 *)0x0) {
        BVar3 = ReleaseSemaphore(*(HANDLE *)(param_1 + 0xc50),1,(LPLONG)0x0);
        if (BVar3 == 0) {
          GetLastError();
        }
      }
    }
  }
  if (DAT_180036ca8 == 0) {
    QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_180036ca8);
  }
  QueryPerformanceCounter(&local_res8);
  *(LARGE_INTEGER *)(param_1 + 0xc60) = local_res8;
  *(undefined4 *)(param_1 + 0xc5c) = 0;
  goto LAB_180017aae;
}


