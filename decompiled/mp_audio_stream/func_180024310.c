// FUN_180024310 @ 180024310

void FUN_180024310(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Memory;
  code *pcVar3;
  BOOL BVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1 != (longlong *)0x0) {
    LOCK();
    bVar6 = (int)param_1[2] == 0;
    if (bVar6) {
      *(int *)(param_1 + 2) = 0;
    }
    UNLOCK();
    if (!bVar6) {
      LOCK();
      *(undefined4 *)(param_1 + 2) = 0;
      UNLOCK();
      lVar2 = *param_1;
      if (((*(longlong *)(lVar2 + 0x40) != 0) || (*(longlong *)(lVar2 + 0x48) != 0)) ||
         (*(longlong *)(lVar2 + 0x50) != 0)) {
        if ((param_1 + 8 != (longlong *)0x0) && (BVar4 = SetEvent((HANDLE)param_1[8]), BVar4 == 0))
        {
          GetLastError();
        }
        plVar1 = param_1 + 0xb;
        if (plVar1 != (longlong *)0x0) {
          WaitForSingleObject((HANDLE)*plVar1,0xffffffff);
          CloseHandle((HANDLE)*plVar1);
        }
      }
      if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
        (**(code **)(*param_1 + 0x28))(param_1);
      }
      if (param_1 + 10 != (longlong *)0x0) {
        CloseHandle((HANDLE)param_1[10]);
      }
      if (param_1 + 9 != (longlong *)0x0) {
        CloseHandle((HANDLE)param_1[9]);
      }
      if (param_1 + 8 != (longlong *)0x0) {
        CloseHandle((HANDLE)param_1[8]);
      }
      if (param_1 + 7 != (longlong *)0x0) {
        CloseHandle((HANDLE)param_1[7]);
      }
      lVar2 = *param_1;
      if (((*(longlong *)(lVar2 + 0x40) == 0) && (*(longlong *)(lVar2 + 0x48) == 0)) &&
         ((*(longlong *)(lVar2 + 0x50) == 0 &&
          (((((int)param_1[1] == 3 && (param_1 != (longlong *)0xffffffffffffff90)) &&
            (param_1 + 0x17 != (longlong *)0x0)) &&
           ((*(char *)((longlong)param_1 + 0xd4) != '\0' &&
            (_Memory = *(void **)(param_1[0x17] + -8), _Memory != (void *)0x0)))))))) {
        if (param_1 == (longlong *)0xffffffffffffff28) {
          free(_Memory);
        }
        else if ((code *)param_1[0x1e] != (code *)0x0) {
          (*(code *)param_1[0x1e])();
        }
      }
      if (((int)param_1[1] == 2) || ((int)param_1[1] - 3U < 2)) {
        lVar2 = *param_1;
        lVar5 = lVar2 + 0x100;
        if (param_1 != (longlong *)0xfffffffffffff510) {
          if ((((*(char *)((longlong)param_1 + 0xc1b) != '\0') &&
               (param_1 + 0x16b != (longlong *)0x0)) && (param_1[0x16c] != 0)) &&
             (((pcVar3 = *(code **)(param_1[0x16c] + 0x10), pcVar3 != (code *)0x0 &&
               ((*pcVar3)(param_1[0x16d],param_1[0x16b],lVar5), (int)param_1[0x182] != 0)) &&
              ((void *)param_1[0x181] != (void *)0x0)))) {
            if (lVar5 == 0) {
              free((void *)param_1[0x181]);
            }
            else if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
              (**(code **)(lVar2 + 0x118))();
            }
          }
          if (((param_1 != (longlong *)0xfffffffffffff4f0) && ((int)param_1[0x16a] != 0)) &&
             ((void *)param_1[0x169] != (void *)0x0)) {
            if (lVar5 == 0) {
              free((void *)param_1[0x169]);
            }
            else if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
              (**(code **)(lVar2 + 0x118))();
            }
          }
          if ((*(char *)((longlong)param_1 + 0xc1d) != '\0') &&
             ((void *)param_1[0x184] != (void *)0x0)) {
            if (lVar5 == 0) {
              free((void *)param_1[0x184]);
            }
            else if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
              (**(code **)(lVar2 + 0x118))();
            }
          }
        }
      }
      if (((int)param_1[1] == 1) || ((int)param_1[1] == 3)) {
        lVar2 = *param_1;
        lVar5 = lVar2 + 0x100;
        if (param_1 != (longlong *)0xfffffffffffffaa8) {
          if ((((*(char *)((longlong)param_1 + 0x683) != '\0') &&
               (param_1 + 0xb8 != (longlong *)0x0)) && (param_1[0xb9] != 0)) &&
             (((pcVar3 = *(code **)(param_1[0xb9] + 0x10), pcVar3 != (code *)0x0 &&
               ((*pcVar3)(param_1[0xba],param_1[0xb8],lVar5), (int)param_1[0xcf] != 0)) &&
              ((void *)param_1[0xce] != (void *)0x0)))) {
            if (lVar5 == 0) {
              free((void *)param_1[0xce]);
            }
            else if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
              (**(code **)(lVar2 + 0x118))();
            }
          }
          if (((param_1 != (longlong *)0xfffffffffffffa88) && ((int)param_1[0xb7] != 0)) &&
             ((void *)param_1[0xb6] != (void *)0x0)) {
            if (lVar5 == 0) {
              free((void *)param_1[0xb6]);
            }
            else if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
              (**(code **)(lVar2 + 0x118))();
            }
          }
          if ((*(char *)((longlong)param_1 + 0x685) != '\0') &&
             ((void *)param_1[0xd1] != (void *)0x0)) {
            if (lVar5 == 0) {
              free((void *)param_1[0xd1]);
            }
            else if (*(code **)(lVar2 + 0x118) != (code *)0x0) {
              (**(code **)(lVar2 + 0x118))();
            }
          }
        }
      }
      if ((void *)param_1[0xd4] != (void *)0x0) {
        if (*param_1 == -0x100) {
          free((void *)param_1[0xd4]);
        }
        else {
          pcVar3 = *(code **)(*param_1 + 0x118);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)();
          }
        }
      }
      if ((void *)param_1[0x185] != (void *)0x0) {
        if (*param_1 == -0x100) {
          free((void *)param_1[0x185]);
        }
        else {
          pcVar3 = *(code **)(*param_1 + 0x118);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)();
          }
        }
      }
      if ((void *)param_1[0xd2] != (void *)0x0) {
        if (*param_1 == -0x100) {
          free((void *)param_1[0xd2]);
        }
        else {
          pcVar3 = *(code **)(*param_1 + 0x118);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)();
          }
        }
      }
      if (*(char *)((longlong)param_1 + 100) != '\0') {
        pcVar3 = *(code **)(*param_1 + 0x118);
        FUN_180020f60(*param_1);
        if ((*param_1 != 0) && (pcVar3 != (code *)0x0)) {
          (*pcVar3)();
        }
      }
      memset(param_1,0,0xcf0);
    }
  }
  return;
}


