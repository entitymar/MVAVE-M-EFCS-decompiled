// FUN_180013190 @ 180013190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_180013190(undefined8 param_1,int param_2,float param_3,int param_4,uint param_5,
                   undefined8 param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStackY_128 [32];
  float local_f8 [2];
  ulonglong local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  uint local_b8 [12];
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_180025040 ^ (ulonglong)auStackY_128;
  local_f0 = 0;
  local_f8[0] = param_3;
  uVar2 = FUN_180012f40(param_5,&local_f0);
  fVar1 = param_8;
  if (uVar2 != 0) {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      local_88 = (ulonglong)(uint)param_8;
    }
    local_78 = (ulonglong)(param_9 == 2);
    FUN_180015630(local_b8,&local_f0,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)local_f8);
  }
  uVar3 = FUN_18000f620();
  if (((char)uVar3 == '\0') || (param_4 == 0)) {
    FUN_180015660(param_4);
  }
  else {
    local_d8 = (double)param_7;
    local_e8[1] = 0;
    local_d0 = (double)fVar1;
    local_c8 = (double)local_f8[0];
    local_e8[0] = param_4;
    local_e0 = param_1;
    uVar3 = FUN_18000f650(local_e8);
    if ((int)uVar3 == 0) {
      FUN_180015660(param_4);
    }
    local_f8[0] = (float)local_c8;
  }
  return local_f8[0];
}


