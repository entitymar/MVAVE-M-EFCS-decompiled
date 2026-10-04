// FUN_180002f90 @ 180002f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180002f90(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5,longlong param_6)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong *****pppppuVar3;
  void *pvVar4;
  ulonglong *******pppppppuVar5;
  ulonglong ******ppppppuVar6;
  ulonglong ******ppppppuVar7;
  ulonglong *****pppppuVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  ulonglong ******local_c8;
  ulonglong *****local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong *****local_b0;
  undefined1 local_78;
  ulonglong ******local_68;
  ulonglong ******local_60;
  ulonglong *****local_58;
  ulonglong ******local_50;
  ulonglong ******local_48;
  ulonglong local_30;
  
  local_30 = DAT_180015040 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_2 + 8) = 0;
  if ((int)param_4 == 0x219) {
    if (param_5 == 0x8000) {
      local_b8 = *(undefined4 *)(param_6 + 4);
      local_78 = 2;
      puVar2 = *(undefined8 **)(param_1 + 8);
      local_58 = (ulonglong *****)&local_c0;
      local_c0 = (ulonglong *****)0x0;
      local_68 = (ulonglong ******)&local_c8;
      pppppppuVar5 = (ulonglong *******)FUN_18000b2a8(0x48);
      local_c8 = (ulonglong ******)(ulonglong *******)0x0;
      local_60 = (ulonglong ******)pppppppuVar5;
      if (pppppppuVar5 != (ulonglong *******)0x0) {
        *(undefined1 *)(pppppppuVar5 + 8) = 0xff;
        local_c8 = (ulonglong ******)pppppppuVar5;
        local_50 = (ulonglong ******)pppppppuVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(local_78) {
        case 0:
          *(undefined1 *)(pppppppuVar5 + 8) = 0;
          break;
        case 1:
          *(undefined1 *)pppppppuVar5 = (undefined1)local_b8;
          *(undefined1 *)(pppppppuVar5 + 8) = 1;
          break;
        case 2:
          *(undefined4 *)pppppppuVar5 = local_b8;
          *(undefined1 *)(pppppppuVar5 + 8) = 2;
          break;
        case 3:
          *pppppppuVar5 = (ulonglong ******)CONCAT44(uStack_b4,local_b8);
          *(undefined1 *)(pppppppuVar5 + 8) = 3;
          break;
        case 4:
          *pppppppuVar5 = (ulonglong ******)CONCAT44(uStack_b4,local_b8);
          *(undefined1 *)(pppppppuVar5 + 8) = 4;
          break;
        case 5:
          FUN_1800023e0(pppppppuVar5,(undefined8 *)&local_b8);
          *(undefined1 *)(pppppppuVar5 + 8) = 5;
          break;
        case 6:
          *pppppppuVar5 = (ulonglong ******)0x0;
          pppppppuVar5[1] = (ulonglong ******)0x0;
          pppppppuVar5[2] = (ulonglong ******)0x0;
          uVar10 = (longlong)local_b0 - CONCAT44(uStack_b4,local_b8);
          if (uVar10 != 0) {
            if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_180005170();
            }
            ppppppuVar7 = (ulonglong ******)FUN_1800015d0(uVar10);
            *pppppppuVar5 = ppppppuVar7;
            pppppppuVar5[1] = ppppppuVar7;
            pppppppuVar5[2] = (ulonglong ******)((longlong)ppppppuVar7 + uVar10);
            pvVar4 = (void *)CONCAT44(uStack_b4,local_b8);
            memmove(ppppppuVar7,pvVar4,(longlong)local_b0 - (longlong)pvVar4);
            pppppppuVar5[1] =
                 (ulonglong ******)(((longlong)local_b0 - (longlong)pvVar4) + (longlong)ppppppuVar7)
            ;
          }
          *(undefined1 *)(pppppppuVar5 + 8) = 6;
          break;
        case 7:
          *pppppppuVar5 = (ulonglong ******)0x0;
          pppppppuVar5[1] = (ulonglong ******)0x0;
          pppppppuVar5[2] = (ulonglong ******)0x0;
          uVar10 = (longlong)local_b0 - CONCAT44(uStack_b4,local_b8) >> 2;
          if (uVar10 != 0) {
            if (0x3fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_180005170();
            }
            ppppppuVar7 = (ulonglong ******)FUN_1800015d0(uVar10 * 4);
            *pppppppuVar5 = ppppppuVar7;
            pppppppuVar5[1] = ppppppuVar7;
            pppppppuVar5[2] = (ulonglong ******)((longlong)ppppppuVar7 + uVar10 * 4);
            pvVar4 = (void *)CONCAT44(uStack_b4,local_b8);
            memmove(ppppppuVar7,pvVar4,(longlong)local_b0 - (longlong)pvVar4);
            pppppppuVar5[1] =
                 (ulonglong ******)
                 ((longlong)ppppppuVar7 + ((longlong)local_b0 - (longlong)pvVar4 >> 2) * 4);
          }
          *(undefined1 *)(pppppppuVar5 + 8) = 7;
          break;
        case 8:
          *pppppppuVar5 = (ulonglong ******)0x0;
          pppppppuVar5[1] = (ulonglong ******)0x0;
          pppppppuVar5[2] = (ulonglong ******)0x0;
          uVar10 = (longlong)local_b0 - CONCAT44(uStack_b4,local_b8) >> 3;
          if (uVar10 != 0) {
            if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_180005170();
            }
            ppppppuVar7 = (ulonglong ******)FUN_1800015d0(uVar10 * 8);
            *pppppppuVar5 = ppppppuVar7;
            pppppppuVar5[1] = ppppppuVar7;
            pppppppuVar5[2] = ppppppuVar7 + uVar10;
            pvVar4 = (void *)CONCAT44(uStack_b4,local_b8);
            memmove(ppppppuVar7,pvVar4,(longlong)local_b0 - (longlong)pvVar4);
            pppppppuVar5[1] = ppppppuVar7 + ((longlong)local_b0 - (longlong)pvVar4 >> 3);
          }
          *(undefined1 *)(pppppppuVar5 + 8) = 8;
          break;
        case 9:
          *pppppppuVar5 = (ulonglong ******)0x0;
          pppppppuVar5[1] = (ulonglong ******)0x0;
          pppppppuVar5[2] = (ulonglong ******)0x0;
          uVar10 = (longlong)local_b0 - CONCAT44(uStack_b4,local_b8) >> 3;
          if (uVar10 != 0) {
            if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_180005170();
            }
            ppppppuVar7 = (ulonglong ******)FUN_1800015d0(uVar10 * 8);
            *pppppppuVar5 = ppppppuVar7;
            pppppppuVar5[1] = ppppppuVar7;
            pppppppuVar5[2] = ppppppuVar7 + uVar10;
            pvVar4 = (void *)CONCAT44(uStack_b4,local_b8);
            memmove(ppppppuVar7,pvVar4,(longlong)local_b0 - (longlong)pvVar4);
            pppppppuVar5[1] = ppppppuVar7 + ((longlong)local_b0 - (longlong)pvVar4 >> 3);
          }
          *(undefined1 *)(pppppppuVar5 + 8) = 9;
          break;
        case 10:
          *pppppppuVar5 = (ulonglong ******)0x0;
          pppppppuVar5[1] = (ulonglong ******)0x0;
          pppppppuVar5[2] = (ulonglong ******)0x0;
          uVar10 = ((longlong)local_b0 - CONCAT44(uStack_b4,local_b8)) / 0x48;
          if (uVar10 != 0) {
            if (0x38e38e38e38e38e < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_180005170();
            }
            ppppppuVar6 = (ulonglong ******)FUN_1800015d0(uVar10 * 0x48);
            *pppppppuVar5 = ppppppuVar6;
            pppppppuVar5[1] = ppppppuVar6;
            pppppppuVar5[2] = ppppppuVar6 + uVar10 * 9;
            for (ppppppuVar7 = (ulonglong ******)CONCAT44(uStack_b4,local_b8);
                ppppppuVar7 != (ulonglong ******)local_b0; ppppppuVar7 = ppppppuVar7 + 9) {
              FUN_180002570((longlong)ppppppuVar6,(longlong)ppppppuVar7);
              ppppppuVar6 = ppppppuVar6 + 9;
            }
            pppppppuVar5[1] = ppppppuVar6;
          }
          *(undefined1 *)(pppppppuVar5 + 8) = 10;
          break;
        case 0xb:
          *pppppppuVar5 = (ulonglong ******)0x0;
          pppppppuVar5[1] = (ulonglong ******)0x0;
          local_48 = (ulonglong ******)pppppppuVar5;
          ppppppuVar7 = (ulonglong ******)FUN_18000b2a8(0xb0);
          *ppppppuVar7 = (ulonglong *****)ppppppuVar7;
          ppppppuVar7[1] = (ulonglong *****)ppppppuVar7;
          ppppppuVar7[2] = (ulonglong *****)ppppppuVar7;
          *(undefined2 *)(ppppppuVar7 + 3) = 0x101;
          *pppppppuVar5 = ppppppuVar7;
          pppppuVar8 = (ulonglong *****)
                       FUN_180001700(pppppppuVar5,*(undefined8 **)(CONCAT44(uStack_b4,local_b8) + 8)
                                     ,ppppppuVar7,param_4);
          (*pppppppuVar5)[1] = pppppuVar8;
          pppppppuVar5[1] = (ulonglong ******)local_b0;
          ppppppuVar7 = *pppppppuVar5;
          pppppuVar8 = ppppppuVar7[1];
          if (*(char *)((longlong)pppppuVar8 + 0x19) == '\0') {
            cVar1 = *(char *)((longlong)*pppppuVar8 + 0x19);
            pppppuVar3 = (ulonglong *****)*pppppuVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((longlong)*pppppuVar3 + 0x19);
              pppppuVar8 = pppppuVar3;
              pppppuVar3 = (ulonglong *****)*pppppuVar3;
            }
            *ppppppuVar7 = pppppuVar8;
            pppppuVar8 = (*pppppppuVar5)[1];
            pppppuVar3 = (ulonglong *****)pppppuVar8[2];
            cVar1 = *(char *)((longlong)pppppuVar3 + 0x19);
            while (cVar1 == '\0') {
              cVar1 = *(char *)((longlong)pppppuVar3[2] + 0x19);
              pppppuVar8 = pppppuVar3;
              pppppuVar3 = (ulonglong *****)pppppuVar3[2];
            }
            (*pppppppuVar5)[2] = pppppuVar8;
          }
          else {
            *ppppppuVar7 = (ulonglong *****)ppppppuVar7;
            (*pppppppuVar5)[2] = (ulonglong *****)*pppppppuVar5;
          }
          *(undefined1 *)(pppppppuVar5 + 8) = 0xb;
          break;
        case 0xc:
          FUN_1800013b0((longlong *)&local_50,(undefined8 *)&local_b8);
          break;
        case 0xd:
          FUN_1800012f0((longlong *)&local_50,(longlong *)&local_b8);
        }
      }
      FUN_1800024a0(&local_50,"device_added");
      FUN_180003540(puVar2,&local_50,&local_c8,(longlong *)&local_c0);
      FUN_1800050d0((longlong *)&local_50);
    }
    else {
      if (param_5 != 0x8004) {
        return param_2;
      }
      local_b8 = *(undefined4 *)(param_6 + 4);
      local_78 = 2;
      puVar2 = *(undefined8 **)(param_1 + 8);
      local_60 = (ulonglong ******)&local_c8;
      local_c8 = (ulonglong ******)0x0;
      local_68 = &local_c0;
      plVar9 = FUN_180002370((longlong *)&local_c0,(longlong)&local_b8);
      FUN_1800024a0(&local_50,"device_removed");
      FUN_180003540(puVar2,&local_50,plVar9,(longlong *)&local_c8);
      FUN_1800050d0((longlong *)&local_50);
    }
    FUN_1800041d0((longlong *)&local_b8);
  }
  return param_2;
}


