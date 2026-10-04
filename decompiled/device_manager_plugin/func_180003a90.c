// FUN_180003a90 @ 180003a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180003a90(longlong param_1)

{
  undefined8 uVar1;
  void *_Memory;
  undefined ***_Memory_00;
  undefined8 *puVar2;
  HWND hRecipient;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined ***local_e0;
  undefined8 *local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined ***local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_68;
  undefined8 *local_60;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = DAT_180015040 ^ (ulonglong)auStack_108;
  puVar2 = (undefined8 *)FUN_18000b2a8(0x20);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = _anon_5D82C4E7::DeviceManagerPlugin::vftable;
    puVar2[1] = 0;
    puVar2[2] = param_1;
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    *(undefined1 *)((longlong)puVar2 + 0x1c) = 0;
    local_d0 = std::
               _Func_impl_no_alloc<<lambda_f04de94e0232436b5fdcffbf0916af6e>,std::optional<__int64>,HWND__*___ptr64,unsigned_int,unsigned___int64,__int64>
               ::vftable;
    local_98 = &local_d0;
    local_e0 = &local_d0;
    local_d8 = puVar2;
    local_c8 = puVar2;
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FlutterDesktopPluginRegistrarRegisterTopLevelWindowProcDelegate
                (*(undefined8 *)(param_1 + 8),FUN_180003940,param_1);
    }
    local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,*(int *)(param_1 + 0x38));
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    FUN_1800017e0((longlong *)(param_1 + 0x40),&local_90,(int *)&local_e8,(longlong *)&local_d0);
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[4])(local_98,local_98 != &local_d0);
    }
    *(undefined4 *)(puVar2 + 3) = local_e8._0_4_;
    puVar3 = puVar2;
    if ((*(char *)((longlong)puVar2 + 0x1c) == '\0') &&
       (hRecipient = GetActiveWindow(), hRecipient != (HWND)0x0)) {
      *(undefined1 *)((longlong)puVar2 + 0x1c) = 1;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_90 = 0x500000020;
      RegisterDeviceNotificationW(hRecipient,&local_90,4);
    }
  }
  local_d8 = puVar3;
  local_e8 = (undefined8 *)FUN_18000a510((undefined **)0x0);
  local_90 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = FUN_180002180(&local_e0,&local_90,"device_manager",&local_e8);
  uVar1 = *puVar2;
  *puVar2 = 0;
  _Memory = (void *)puVar3[1];
  puVar3[1] = uVar1;
  if (_Memory != (void *)0x0) {
    FUN_1800050d0((longlong *)((longlong)_Memory + 8));
    free(_Memory);
  }
  _Memory_00 = local_e0;
  if (local_e0 != (undefined ***)0x0) {
    FUN_1800050d0((longlong *)(local_e0 + 1));
    free(_Memory_00);
  }
  local_68 = std::
             _Func_impl_no_alloc<<lambda_54c2c42cedc300c33ce034434cada858>,void,flutter::MethodCall<flutter::EncodableValue>_const&___ptr64,std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>,std::default_delete<flutter::MethodResult<flutter::EncodableValue>_>_>_>
             ::vftable;
  local_30 = &local_68;
  local_60 = puVar3;
  FUN_180003cb0((undefined8 *)puVar3[1],(longlong)&local_68);
  if (local_30 != (undefined ***)0x0) {
    (*(code *)(*local_30)[4])(local_30,local_30 != &local_68);
  }
  local_d8 = (undefined8 *)0x0;
  local_e8 = puVar3;
  FUN_180006cc0(param_1,(ulonglong *)&local_e8);
  return;
}


