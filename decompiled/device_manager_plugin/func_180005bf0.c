// FUN_180005bf0 @ 180005bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180005bf0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  code *local_e8;
  longlong *local_e0;
  longlong local_d8;
  code **local_d0;
  undefined1 local_c8;
  longlong *local_c0;
  longlong local_b8 [7];
  longlong *local_80;
  undefined **local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = DAT_180015040 ^ (ulonglong)auStack_108;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = FlutterDesktopMessengerAddRef();
  local_e8 = FlutterDesktopMessengerRelease_exref;
  local_d0 = &local_e8;
  local_c8 = 1;
  local_d8 = lVar5;
  local_e0 = (longlong *)FUN_18000b2a8(0x20);
  if (local_e0 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *local_e0 = 0;
    local_e0[1] = 0;
    *(undefined4 *)(local_e0 + 1) = 1;
    *(undefined4 *)((longlong)local_e0 + 0xc) = 1;
    *local_e0 = (longlong)
                std::
                _Ref_count_resource<FlutterDesktopMessenger*___ptr64,void_(__cdecl*)(FlutterDesktopMessenger*___ptr64)>
                ::vftable;
    local_e0[2] = (longlong)local_e8;
    local_e0[3] = lVar5;
    plVar6 = local_e0;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_78 = std::
             _Func_impl_no_alloc<<lambda_8eee370cab40fdde7c9cc6b356495af3>,void,unsigned_char_const*___ptr64,unsigned___int64>
             ::vftable;
  local_40 = &local_78;
  local_80 = (longlong *)0x0;
  local_d8 = lVar5;
  local_d0 = (code **)plVar6;
  local_70 = lVar5;
  local_68 = plVar6;
  local_60 = uVar3;
  local_80 = FUN_1800066d0((longlong)&local_78,local_b8);
  if (local_40 != (undefined ***)0x0) {
    (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
    local_40 = (undefined ***)0x0;
  }
  local_c0 = local_b8;
  local_e8 = *(code **)(param_2 + 0x18);
  local_e0 = *(longlong **)(param_2 + 0x10);
  plVar4 = *(longlong **)(param_3 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_e0,&local_e8,local_b8);
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x20))(local_80,local_80 != local_b8);
    }
    if (local_40 != (undefined ***)0x0) {
      (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
      local_40 = (undefined ***)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_function_call();
}


