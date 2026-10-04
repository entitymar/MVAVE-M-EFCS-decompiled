// FUN_1800042f0 @ 1800042f0

void FUN_1800042f0(ulonglong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *_Buf1;
  ulonglong _Size;
  ulonglong local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  undefined8 **local_res20;
  uint local_60 [16];
  undefined1 local_20;
  
  plVar1 = (longlong *)*param_3;
  *param_3 = 0;
  local_res20 = &local_res18;
  local_res18 = (undefined8 *)0x0;
  _Buf1 = (undefined8 *)(param_2 + 8);
  uVar2 = *(ulonglong *)(param_2 + 0x18);
  if (0xf < *(ulonglong *)(param_2 + 0x20)) {
    _Buf1 = (undefined8 *)*_Buf1;
  }
  _Size = uVar2;
  if (0x11 < uVar2) {
    _Size = 0x11;
  }
  local_res8 = param_1;
  local_res10 = plVar1;
  iVar3 = memcmp(_Buf1,"get_devices_count",_Size);
  if ((iVar3 == 0) && (uVar2 == 0x11)) {
    local_res8 = local_res8 & 0xffffffff00000000;
    GetRawInputDeviceList((PRAWINPUTDEVICELIST)0x0,(PUINT)&local_res8,0x10);
    local_60[0] = (uint)local_res8;
    local_20 = 2;
    (**(code **)(*local_res10 + 8))(local_res10,local_60);
    FUN_1800041d0((longlong *)local_60);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  if (local_res10 != (longlong *)0x0) {
    (**(code **)*local_res10)(local_res10,1);
  }
  if (local_res18 != (undefined8 *)0x0) {
    (**(code **)*local_res18)(local_res18,1);
  }
  return;
}


