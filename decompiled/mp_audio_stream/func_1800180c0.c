// FUN_1800180c0 @ 1800180c0

ulonglong FUN_1800180c0(longlong *param_1,longlong param_2,uint param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong _Size;
  void *_Dst;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  void *_Src;
  int local_78 [14];
  
  uVar9 = 0;
  uVar8 = 0;
  uVar6 = uVar9;
  if (param_1 != (longlong *)0x0) {
LAB_180018110:
    do {
      uVar8 = (uint)uVar6;
      LOCK();
      iVar2 = (int)param_1[2];
      if (iVar2 == 0) {
        *(int *)(param_1 + 2) = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if ((iVar2 != 2) || (param_3 <= uVar8)) goto LAB_1800183c2;
      lVar5 = param_1[0x197];
      if (lVar5 == 0) {
        lVar5 = 0xc88;
        if ((int)param_1[0x66] != 1) {
          lVar5 = 0xca0;
        }
        uVar1 = *(undefined4 *)(lVar5 + (longlong)param_1);
        uVar7 = (**(code **)(*(longlong *)param_1[0x189] + 0x18))
                          ((longlong *)param_1[0x189],uVar1,param_1 + 0x197);
        if (uVar7 == 0) {
          *(undefined4 *)(param_1 + 0x198) = uVar1;
          *(undefined4 *)((longlong)param_1 + 0xcc4) = 0;
          goto LAB_180018110;
        }
        if ((uVar7 != 0x88890006) && (uVar7 != 0x88890018)) {
          if (*param_1 != 0) {
            uVar9 = *(ulonglong *)(*param_1 + 0x70);
          }
          FUN_180025970(uVar9,1,
                        "[WASAPI] Failed to retrieve internal buffer from playback device in preparation for writing to the device. HRESULT = %d. Stopping device.\n"
                        ,(ulonglong)uVar7);
          uVar9 = FUN_18001cc60(uVar7);
          uVar9 = uVar9 & 0xffffffff;
          goto LAB_1800183c2;
        }
      }
      else {
        iVar2 = (int)param_1[0x88];
        uVar7 = (int)param_1[0x198] - *(uint *)((longlong)param_1 + 0xcc4);
        local_78[0] = 0;
        local_78[1] = 1;
        local_78[2] = 2;
        if (param_3 - uVar8 <= uVar7) {
          uVar7 = param_3 - uVar8;
        }
        local_78[3] = 3;
        lVar4 = (longlong)*(int *)((longlong)param_1 + 0x43c);
        local_78[4] = 4;
        local_78[5] = 4;
        local_78[6] = 0;
        local_78[7] = 1;
        local_78[8] = 2;
        local_78[9] = 3;
        local_78[10] = 4;
        local_78[0xb] = 4;
        _Src = (void *)((uint)(iVar2 * local_78[lVar4]) * uVar6 + param_2);
        _Dst = (void *)((ulonglong)(uint)(iVar2 * local_78[lVar4 + 6]) *
                        (ulonglong)*(uint *)((longlong)param_1 + 0xcc4) + lVar5);
        if (_Dst != _Src) {
          local_78[6] = 0;
          local_78[7] = 1;
          local_78[8] = 2;
          local_78[9] = 3;
          local_78[10] = 4;
          local_78[0xb] = 4;
          for (uVar6 = (ulonglong)(uint)(iVar2 * local_78[lVar4 + 6]) * (ulonglong)uVar7; uVar6 != 0
              ; uVar6 = uVar6 - _Size) {
            _Size = uVar6;
            if (0xffffffff < uVar6) {
              _Size = 0xffffffff;
            }
            memcpy(_Dst,_Src,_Size);
            _Dst = (void *)((longlong)_Dst + _Size);
            _Src = (void *)((longlong)_Src + _Size);
          }
        }
        *(int *)((longlong)param_1 + 0xcc4) = *(int *)((longlong)param_1 + 0xcc4) + uVar7;
        uVar6 = (ulonglong)(uVar8 + uVar7);
        if (*(int *)((longlong)param_1 + 0xcc4) != (int)param_1[0x198]) goto LAB_180018110;
        (**(code **)(*(longlong *)param_1[0x189] + 0x20))
                  ((longlong *)param_1[0x189],(int)param_1[0x198],0);
        param_1[0x197] = 0;
        param_1[0x198] = 0;
        if ((int)param_1[0x66] != 1) goto LAB_180018110;
      }
      uVar8 = (uint)uVar6;
      DVar3 = WaitForSingleObject((HANDLE)param_1[399],5000);
    } while (DVar3 == 0);
    uVar9 = 0xffffffff;
  }
LAB_1800183c2:
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar8;
  }
  return uVar9;
}


