// FUN_18000503c @ 18000503c

char FUN_18000503c(longlong param_1,longlong *param_2,byte *param_3,byte *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  iVar1 = *(int *)(param_3 + 4);
  uVar4 = uVar5;
  if (iVar1 != 0) {
    lVar2 = FUN_180004b68();
    uVar4 = iVar1 + lVar2;
  }
  if (uVar4 == 0) {
    return '\0';
  }
  iVar1 = *(int *)(param_3 + 4);
  uVar4 = uVar5;
  if (iVar1 != 0) {
    lVar2 = FUN_180004b68();
    uVar4 = iVar1 + lVar2;
  }
  if (*(char *)(uVar4 + 0x10) == '\0') {
    return '\0';
  }
  if ((*(int *)(param_3 + 8) == 0) && (-1 < *(int *)param_3)) {
    return '\0';
  }
  if (-1 < *(int *)param_3) {
    param_2 = (longlong *)((longlong)*(int *)(param_3 + 8) + *param_2);
  }
  if ((((*param_3 & 0x80) == 0) || ((*param_4 & 0x10) == 0)) || (DAT_180025b88 == 0)) {
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        iVar1 = *(int *)(param_4 + 0x18);
        uVar4 = uVar5;
        if (iVar1 != 0) {
          lVar2 = FUN_180004b7c();
          uVar4 = iVar1 + lVar2;
        }
        if (uVar4 != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
            iVar1 = *(int *)(param_4 + 0x18);
            if (iVar1 != 0) {
              lVar2 = FUN_180004b7c();
              uVar5 = iVar1 + lVar2;
            }
            if (uVar5 != 0) {
              uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
              goto LAB_1800051ee;
            }
          }
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        iVar1 = *(int *)(param_4 + 0x14);
        puVar3 = (undefined8 *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_1800165f0(param_2,puVar3,(longlong)iVar1);
        goto LAB_1800051ee;
      }
      if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_1800165f0(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar5;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_1800051ee;
      lVar2 = *param_2;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x28);
      if ((lVar2 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *param_2 = lVar2;
    }
  }
  else {
    lVar2 = (*(code *)PTR__guard_dispatch_icall_180018270)();
    if ((lVar2 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *param_2 = lVar2;
  }
  lVar2 = __AdjustPointer(lVar2,(int *)(param_4 + 8));
  *param_2 = lVar2;
  uVar6 = uVar5;
LAB_1800051ee:
  return (char)uVar6;
}


