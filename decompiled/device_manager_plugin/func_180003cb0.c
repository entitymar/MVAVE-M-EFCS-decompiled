// FUN_180003cb0 @ 180003cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180003cb0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Memory;
  undefined1 auStackY_188 [32];
  undefined1 local_148 [56];
  longlong *local_110;
  longlong local_108 [7];
  undefined8 local_d0;
  longlong local_c8 [7];
  longlong *local_90;
  longlong local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  void *local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180015040 ^ (ulonglong)auStackY_188;
  puVar1 = param_1 + 1;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    local_110 = (longlong *)0x0;
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,puVar1,local_148);
  }
  else {
    lVar6 = param_1[5];
    FUN_1800023e0(local_58,puVar1);
    local_90 = (longlong *)0x0;
    puVar2 = *(undefined8 **)(param_2 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      local_90 = (longlong *)(**(code **)*puVar2)(puVar2,local_c8);
    }
    local_88 = lVar6;
    FUN_1800023e0((undefined8 *)&local_80,local_58);
    local_d0 = 0;
    plVar5 = (longlong *)FUN_18000b2a8(0x70);
    *plVar5 = (longlong)
              std::
              _Func_impl_no_alloc<<lambda_7f1a937f2a091b23c858f0d24ff7078e>,void,unsigned_char_const*___ptr64,unsigned___int64,std::function<void___cdecl(unsigned_char_const*___ptr64,unsigned___int64)>_>
              ::vftable;
    plVar5[8] = 0;
    if (local_90 != (longlong *)0x0) {
      lVar6 = (**(code **)*local_90)(local_90,plVar5 + 1);
      plVar5[8] = lVar6;
    }
    plVar5[9] = local_88;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[10] = CONCAT71(uStack_7f,local_80);
    plVar5[0xb] = lStack_78;
    plVar5[0xc] = local_70;
    plVar5[0xd] = lStack_68;
    local_70 = 0;
    lStack_68 = 0xf;
    local_80 = 0;
    FUN_1800050d0((longlong *)&local_80);
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x20))(local_90,local_90 != local_c8);
      local_90 = (longlong *)0x0;
    }
    plVar3 = (longlong *)*param_1;
    pcVar4 = *(code **)(*plVar3 + 0x10);
    local_110 = (longlong *)0x0;
    if (plVar5 == local_108) {
      local_110 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,local_148);
      (**(code **)(*plVar5 + 0x20))(plVar5,0);
      plVar5 = local_110;
    }
    local_110 = plVar5;
    local_d0 = 0;
    (*pcVar4)(plVar3,puVar1);
    if (0xf < local_40) {
      _Memory = local_58[0];
      if ((0xfff < local_40 + 1) &&
         (_Memory = *(void **)((longlong)local_58[0] + -8),
         0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      free(_Memory);
    }
  }
  return;
}


