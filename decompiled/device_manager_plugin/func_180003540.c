// FUN_180003540 @ 180003540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180003540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong **pplVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  void *_Memory;
  longlong *plVar8;
  longlong **pplVar9;
  undefined1 auStackY_198 [32];
  longlong **local_168;
  longlong *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  longlong *local_148;
  longlong **local_138;
  longlong **local_130;
  longlong local_128 [7];
  undefined8 local_f0;
  longlong **local_e8;
  longlong **pplStack_e0;
  longlong local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong *local_b0;
  undefined **local_a8;
  longlong local_a0 [4];
  longlong *local_80;
  void *local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_180015040 ^ (ulonglong)auStackY_198;
  pplVar9 = (longlong **)0x0;
  local_160 = (longlong *)*param_3;
  *param_3 = 0;
  local_168 = &local_160;
  local_a8 = flutter::MethodCall<flutter::EncodableValue>::vftable;
  local_158 = param_3;
  local_150 = param_3;
  local_148 = param_4;
  FUN_1800023e0(local_a0,param_2);
  local_80 = local_160;
  local_160 = (longlong *)0x0;
  puVar6 = (undefined8 *)
           (**(code **)(*(longlong *)param_1[5] + 0x10))
                     ((longlong *)param_1[5],&local_168,&local_a8);
  pplVar3 = local_168;
  plVar8 = (longlong *)*puVar6;
  *puVar6 = 0;
  local_160 = plVar8;
  if (local_168 != (longlong **)0x0) {
    FUN_180004eb0((longlong *)local_168);
    free(pplVar3);
  }
  pplVar3 = (longlong **)*param_4;
  if (pplVar3 == (longlong **)0x0) {
    local_b0 = (longlong *)0x0;
    (**(code **)(*(longlong *)*param_1 + 8))
              ((longlong *)*param_1,param_1 + 1,*plVar8,plVar8[1] - *plVar8);
    if (plVar8 != (longlong *)0x0) {
      FUN_180004eb0(plVar8);
      free(plVar8);
    }
    plVar8 = local_80;
    if (local_80 != (longlong *)0x0) {
      thunk_FUN_1800041d0(local_80);
      free(plVar8);
    }
    FUN_1800050d0(local_a0);
    plVar8 = (longlong *)*param_3;
  }
  else {
    *param_4 = 0;
    local_168 = pplVar3;
    local_168 = (longlong **)FUN_18000b2a8(0x18);
    if (local_168 != (longlong **)0x0) {
      *local_168 = (longlong *)0x0;
      local_168[1] = (longlong *)0x0;
      *(undefined4 *)(local_168 + 1) = 1;
      *(undefined4 *)((longlong)local_168 + 0xc) = 1;
      *local_168 = (longlong *)
                   std::_Ref_count<flutter::MethodResult<flutter::EncodableValue>_>::vftable;
      local_168[2] = (longlong *)pplVar3;
      pplVar9 = local_168;
    }
    lVar4 = param_1[5];
    local_138 = pplVar3;
    local_130 = pplVar9;
    FUN_1800023e0(local_78,param_1 + 1);
    if (pplVar9 != (longlong **)0x0) {
      LOCK();
      *(int *)(pplVar9 + 1) = *(int *)(pplVar9 + 1) + 1;
      UNLOCK();
    }
    local_e8 = pplVar3;
    pplStack_e0 = pplVar9;
    local_d8 = lVar4;
    FUN_1800023e0((undefined8 *)&local_d0,local_78);
    local_f0 = 0;
    plVar7 = (longlong *)FUN_18000b2a8(0x40);
    *plVar7 = (longlong)
              std::
              _Func_impl_no_alloc<<lambda_a7e5c5c9b6b04193c20a21573dea4e4a>,void,unsigned_char_const*___ptr64,unsigned___int64>
              ::vftable;
    plVar7[1] = (longlong)local_e8;
    plVar7[2] = (longlong)pplStack_e0;
    local_e8 = (longlong **)0x0;
    pplStack_e0 = (longlong **)0x0;
    plVar7[3] = local_d8;
    plVar7[4] = CONCAT71(uStack_cf,local_d0);
    plVar7[5] = lStack_c8;
    plVar7[6] = local_c0;
    plVar7[7] = lStack_b8;
    local_c0 = _DAT_18000d680;
    lStack_b8 = _UNK_18000d688;
    local_d0 = 0;
    FUN_1800050d0((longlong *)&local_d0);
    pplVar3 = pplStack_e0;
    if (pplStack_e0 != (longlong **)0x0) {
      LOCK();
      plVar5 = (longlong *)(pplStack_e0 + 1);
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (*(code *)**pplStack_e0)(pplStack_e0);
        LOCK();
        piVar1 = (int *)((longlong)pplVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)((longlong)*pplVar3 + 8))(pplVar3);
        }
      }
    }
    plVar5 = (longlong *)*param_1;
    local_168 = *(longlong ***)(*plVar5 + 8);
    local_b0 = (longlong *)0x0;
    if (plVar7 == local_128) {
      local_b0 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,&local_e8);
      (**(code **)(*plVar7 + 0x20))(plVar7,0);
      plVar7 = local_b0;
    }
    local_b0 = plVar7;
    local_f0 = 0;
    (*(code *)local_168)(plVar5,param_1 + 1);
    if (0xf < local_60) {
      _Memory = local_78[0];
      if ((0xfff < local_60 + 1) &&
         (_Memory = *(void **)((longlong)local_78[0] + -8),
         0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory);
    }
    if (pplVar9 != (longlong **)0x0) {
      LOCK();
      pplVar3 = pplVar9 + 1;
      iVar2 = *(int *)pplVar3;
      *(int *)pplVar3 = *(int *)pplVar3 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**pplVar9)(pplVar9);
        LOCK();
        piVar1 = (int *)((longlong)pplVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)(*pplVar9)[1])(pplVar9);
        }
      }
    }
    FUN_180004eb0(plVar8);
    free(plVar8);
    plVar8 = local_80;
    if (local_80 != (longlong *)0x0) {
      thunk_FUN_1800041d0(local_80);
      free(plVar8);
    }
    FUN_1800050d0(local_a0);
    plVar8 = (longlong *)*local_158;
  }
  if (plVar8 != (longlong *)0x0) {
    thunk_FUN_1800041d0(plVar8);
    free(plVar8);
  }
  puVar6 = (undefined8 *)*param_4;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  return;
}


