// FUN_1800053c8 @ 1800053c8

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800053c8(int *param_1,__uint64 *param_2,ULONG_PTR param_3,_xDISPATCHER_CONTEXT *param_4,
                  _s_FuncInfo *param_5,byte param_6,undefined8 param_7,longlong param_8)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStackY_168 [32];
  int *in_stack_fffffffffffffed0;
  undefined4 uVar15;
  ULONG_PTR local_100;
  longlong local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined8 local_c8;
  int iStack_c0;
  uint uStack_bc;
  int local_b8;
  _s_FuncInfo *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_180025040 ^ (ulonglong)auStackY_168;
  local_e0 = param_8;
  iVar6 = __FrameHandler3::GetHandlerSearchState(param_2,param_4,param_5);
  if ((-2 < iVar6) && (iVar6 < param_5->maxState)) {
    local_100 = param_3;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
       (((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)) &&
        (*(longlong *)(param_1 + 0xc) == 0)))) {
      lVar8 = FUN_180004494();
      if (*(longlong *)(lVar8 + 0x20) == 0) {
        return;
      }
      lVar8 = FUN_180004494();
      param_1 = *(int **)(lVar8 + 0x20);
      lVar8 = FUN_180004494();
      local_100 = *(ULONG_PTR *)(lVar8 + 0x28);
      FUN_180004ba8(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         ((((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
           ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) &&
          (*(longlong *)(param_1 + 0xc) == 0)))) goto LAB_1800058b1;
      lVar8 = FUN_180004494();
      if (*(longlong *)(lVar8 + 0x38) != 0) {
        lVar8 = FUN_180004494();
        piVar12 = *(int **)(lVar8 + 0x38);
        lVar8 = FUN_180004494();
        *(undefined8 *)(lVar8 + 0x38) = 0;
        cVar4 = FUN_180006408((longlong)param_1,piVar12);
        if (cVar4 == '\0') {
          uVar9 = FUN_1800064f0(piVar12);
          if ((char)uVar9 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180009bcc();
          }
          FUN_180004244(param_1);
          FUN_180005eb0(&local_c8);
          FUN_1800066d8(&local_c8,&DAT_180022318);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
    local_a8 = *(undefined8 *)(param_4 + 8);
    local_b0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) &&
       ((param_1[8] == 0x19930520 || (param_1[8] + 0xe66cfadfU < 2)))) {
      if (param_5->nTryBlocks != 0) {
        FUN_18000489c(&local_90,&local_b0,iVar6,(ulonglong *)param_4,(longlong)param_5);
        uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        uVar7 = (uint)uStack_88;
        local_a0 = local_90;
        uStack_98 = uStack_88;
        if (uVar7 < local_78) {
          do {
            lVar8 = (longlong)*(int *)(*local_a0 + 0x10) + (ulonglong)uVar7 * 0x14;
            piVar12 = (int *)(lVar8 + local_90[1]);
            local_c8._0_4_ = *piVar12;
            local_c8._4_4_ = piVar12[1];
            iStack_c0 = piVar12[2];
            uStack_bc = piVar12[3];
            local_b8 = *(int *)(lVar8 + 0x10 + local_90[1]);
            if (((int)local_c8 <= iVar6) && (iVar6 <= local_c8._4_4_)) {
              local_d0 = (longlong)local_b8 + *(longlong *)(param_4 + 8);
              uVar9 = 0;
              uStack_d4 = 0;
              local_d8 = uStack_bc;
              if (uStack_bc != 0) {
                do {
                  puVar1 = (undefined8 *)(local_d0 + uVar9 * 0x14);
                  local_70 = *puVar1;
                  uStack_68 = puVar1[1];
                  local_60 = *(undefined4 *)(local_d0 + 0x10 + uVar9 * 0x14);
                  iVar14 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar8 = FUN_180004b7c();
                  piVar12 = (int *)(lVar8 + 4 + (longlong)iVar14);
                  iVar14 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                  lVar8 = FUN_180004b7c();
                  for (iVar14 = *(int *)(lVar8 + iVar14); 0 < iVar14; iVar14 = iVar14 + -1) {
                    iVar2 = *piVar12;
                    lVar8 = FUN_180004b7c();
                    uVar10 = FUN_180005b1c((byte *)&local_70,(byte *)(iVar2 + lVar8),
                                           *(byte **)(param_1 + 0xc));
                    if ((int)uVar10 != 0) {
                      in_stack_fffffffffffffed0 = (int *)&local_c8;
                      FUN_1800052f0((ULONG_PTR)param_1,(longlong *)param_2,local_100,
                                    (ulonglong *)param_4,(ULONG_PTR)param_5,(byte *)&local_70,
                                    (byte *)(iVar2 + lVar8),in_stack_fffffffffffffed0);
                      goto LAB_18000572d;
                    }
                    piVar12 = piVar12 + 1;
                  }
                  uVar13 = (int)uVar9 + 1;
                  uVar9 = (ulonglong)uVar13;
                } while (uVar13 != local_d8);
              }
            }
LAB_18000572d:
            uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_78);
        }
      }
      if ((0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
         (((iVar6 = param_5->dispESTypeList, iVar6 != 0 &&
           (lVar8 = FUN_180004b68(), lVar8 + iVar6 != 0)) ||
          (((param_5->EHFlags & 4) != 0 &&
           (bVar5 = FUN_180004724((ulonglong *)param_4,(longlong)param_5), !bVar5)))))) {
        if ((param_5->EHFlags & 4) != 0) {
          lVar8 = FUN_180004494();
          *(int **)(lVar8 + 0x20) = param_1;
          lVar8 = FUN_180004494();
          *(ULONG_PTR *)(lVar8 + 0x28) = local_100;
                    /* WARNING: Subroutine does not return */
          FUN_180009bcc();
        }
        iVar6 = param_5->dispESTypeList;
        if (iVar6 == 0) {
          piVar12 = (int *)0x0;
        }
        else {
          lVar8 = FUN_180004b68();
          piVar12 = (int *)(iVar6 + lVar8);
        }
        cVar4 = FUN_180006408((longlong)param_1,piVar12);
        if (cVar4 == '\0') {
          plVar11 = FUN_1800047b4((longlong *)param_2,(ulonglong *)param_4,(longlong)param_5,
                                  &local_e0);
          FUN_1800049d4(param_2,(ULONG_PTR)param_1,local_100,(ULONG_PTR)plVar11,0,(ULONG_PTR)param_5
                        ,-1,CONCAT44(uVar15,0xffffffff),0,(undefined8 *)param_4,param_6);
        }
      }
    }
    else if (param_5->nTryBlocks != 0) {
      if (param_6 != 0) goto LAB_1800058b1;
      FUN_1800058b8(param_1,(longlong *)param_2,local_100,(ulonglong *)param_4,(ULONG_PTR)param_5,
                    iVar6);
    }
    lVar8 = FUN_180004494();
    if (*(longlong *)(lVar8 + 0x38) == 0) {
      return;
    }
  }
LAB_1800058b1:
                    /* WARNING: Subroutine does not return */
  abort();
}


