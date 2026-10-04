// FUN_180002180 @ 180002180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_180002180(undefined8 *param_1,undefined8 *param_2,char *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  ulonglong uVar6;
  void *_Dst;
  ulonglong uVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  undefined1 auStackY_a8 [32];
  undefined8 ***local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_180015040 ^ (ulonglong)auStackY_a8;
  bVar8 = false;
  puVar4 = (undefined8 *)FUN_18000b2a8(0x30);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    ppppuVar9 = (undefined8 ****)local_60;
    uVar11 = local_48;
  }
  else {
    uVar1 = *param_4;
    local_60 = (undefined8 ****)0x0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    sVar5 = strlen(param_3);
    FUN_180001640(&local_60,param_3,sVar5);
    uVar11 = local_48;
    uVar3 = local_50;
    ppppuVar9 = (undefined8 ****)local_60;
    bVar8 = true;
    *puVar4 = *param_2;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    ppppuVar10 = &local_60;
    if (0xf < local_48) {
      ppppuVar10 = (undefined8 ****)local_60;
    }
    if (0x7fffffffffffffff < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_180005150();
    }
    if (local_50 < 0x10) {
      puVar4[3] = local_50;
      puVar4[4] = 0xf;
      pppuVar2 = ppppuVar10[1];
      puVar4[1] = *ppppuVar10;
      puVar4[2] = pppuVar2;
      puVar4[5] = uVar1;
    }
    else {
      uVar6 = local_50 | 0xf;
      uVar7 = 0x7fffffffffffffff;
      if ((uVar6 < 0x8000000000000000) && (uVar7 = uVar6, uVar6 < 0x16)) {
        uVar7 = 0x16;
      }
      _Dst = (void *)FUN_1800015d0(uVar7 + 1);
      puVar4[1] = _Dst;
      puVar4[3] = uVar3;
      puVar4[4] = uVar7;
      memcpy(_Dst,ppppuVar10,uVar3 + 1);
      puVar4[5] = uVar1;
    }
  }
  *param_1 = puVar4;
  if ((bVar8) && (0xf < uVar11)) {
    ppppuVar10 = ppppuVar9;
    if ((0xfff < uVar11 + 1) &&
       (ppppuVar10 = (undefined8 ****)ppppuVar9[-1],
       0x1f < (ulonglong)((longlong)ppppuVar9 + (-8 - (longlong)ppppuVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    free(ppppuVar10);
  }
  return param_1;
}


