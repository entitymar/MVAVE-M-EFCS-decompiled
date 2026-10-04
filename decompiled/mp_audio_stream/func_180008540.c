// FUN_180008540 @ 180008540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_180008540(longlong param_1,longlong *param_2,undefined2 *param_3,undefined2 *param_4,
             undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180036c40 ^ (ulonglong)auStack_78;
  lVar6 = 0;
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  uStack_50 = 0;
  local_58 = 0x10;
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2,&local_58);
  if (iVar1 < 0) {
    if (param_1 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x70);
    }
    FUN_180025970(lVar6,1,"[DirectSound] IDirectSoundCapture_GetCaps() failed for capture device.",
                  param_2);
    uVar3 = FUN_18001cc60(iVar1);
    return uVar3;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = uStack_50._4_2_;
  }
  uVar4 = 0x10;
  uVar2 = 48000;
  uVar5 = uVar4;
  if (uStack_50._4_4_ == 1) {
    uVar5 = 0x10;
    if (((uint)uStack_50 >> 0xe & 1) != 0) goto LAB_180008719;
    if (((uint)uStack_50 >> 10 & 1) != 0) {
      uVar2 = 0xac44;
      uVar5 = uVar4;
      goto LAB_180008719;
    }
    if ((uStack_50 & 0x40) != 0) {
      uVar2 = 0x5622;
      uVar5 = uVar4;
      goto LAB_180008719;
    }
    if ((uStack_50 & 4) != 0) {
      uVar2 = 0x2b11;
      uVar5 = uVar4;
      goto LAB_180008719;
    }
    if (((uint)uStack_50 >> 0x12 & 1) != 0) {
      uVar2 = 96000;
      uVar5 = uVar4;
      goto LAB_180008719;
    }
    uVar5 = 8;
    if (((uint)uStack_50 >> 0xc & 1) != 0) goto LAB_180008719;
    if (((uint)uStack_50 >> 8 & 1) != 0) {
      uVar2 = 0xac44;
      goto LAB_180008719;
    }
    if ((uStack_50 & 0x10) != 0) {
      uVar2 = 0x5622;
      goto LAB_180008719;
    }
    if ((uStack_50 & 1) != 0) {
      uVar2 = 0x2b11;
      goto LAB_180008719;
    }
    uStack_50._0_4_ = (uint)uStack_50 & 0x10000;
  }
  else {
    if ((uStack_50._4_4_ != 2) || (((uint)uStack_50 >> 0xf & 1) != 0)) goto LAB_180008719;
    if (((uint)uStack_50 >> 0xb & 1) != 0) {
      uVar2 = 0xac44;
      goto LAB_180008719;
    }
    if ((char)uStack_50 < '\0') {
      uVar2 = 0x5622;
      goto LAB_180008719;
    }
    if ((uStack_50 & 8) != 0) {
      uVar2 = 0x2b11;
      goto LAB_180008719;
    }
    if (((uint)uStack_50 >> 0x13 & 1) != 0) {
      uVar2 = 96000;
      goto LAB_180008719;
    }
    uVar5 = 8;
    if (((uint)uStack_50 >> 0xd & 1) != 0) goto LAB_180008719;
    if (((uint)uStack_50 >> 9 & 1) != 0) {
      uVar2 = 0xac44;
      goto LAB_180008719;
    }
    if ((uStack_50 & 0x20) != 0) {
      uVar2 = 0x5622;
      goto LAB_180008719;
    }
    if ((uStack_50 & 2) != 0) {
      uVar2 = 0x2b11;
      goto LAB_180008719;
    }
    uStack_50._0_4_ = (uint)uStack_50 & 0x20000;
  }
  uVar5 = 0x10;
  if ((uint)uStack_50 != 0) {
    uVar2 = 96000;
    uVar5 = 8;
  }
LAB_180008719:
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = uVar5;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar2;
  }
  return 0;
}


