// FUN_180001680 @ 180001680

float FUN_180001680(longlong param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  float fVar15;
  
  piVar13 = (int *)(param_1 + 0xdc0);
  fVar15 = param_2 * DAT_1800183c4;
  *(undefined8 *)piVar13 = *(undefined8 *)(param_1 + 0xe04);
  *(undefined8 *)(param_1 + 0xdc8) = *(undefined8 *)(param_1 + 0xe0c);
  lVar14 = 4;
  *(int *)(param_1 + 0xe00) = (int)fVar15;
  *(undefined8 *)(param_1 + 0xdd0) = *(undefined8 *)(param_1 + 0xe14);
  *(undefined8 *)(param_1 + 0xdd8) = *(undefined8 *)(param_1 + 0xe1c);
  *(undefined8 *)(param_1 + 0xde0) = *(undefined8 *)(param_1 + 0xe24);
  *(undefined8 *)(param_1 + 0xde8) = *(undefined8 *)(param_1 + 0xe2c);
  *(undefined8 *)(param_1 + 0xdf0) = *(undefined8 *)(param_1 + 0xe34);
  *(undefined8 *)(param_1 + 0xdf8) = *(undefined8 *)(param_1 + 0xe3c);
  FUN_1800031c0((undefined4 *)(param_1 + 0xd00),param_1,(longlong)piVar13,0x11,9,0,0x44,4,0x15);
  lVar4 = FUN_180002f50((int *)(param_1 + 0xe04),(int *)(param_1 + 0xcc0));
  lVar5 = FUN_180003050(piVar13,(int *)(param_1 + 0x264));
  *(int *)(param_1 + 0xd24) = (int)lVar5;
  lVar6 = FUN_180003050(piVar13,(int *)(param_1 + 0x2a8));
  *(int *)(param_1 + 0xd28) = (int)lVar6;
  lVar7 = FUN_180003050(piVar13,(int *)(param_1 + 0x2ec));
  *(int *)(param_1 + 0xd2c) = (int)lVar7;
  lVar8 = FUN_180003050(piVar13,(int *)(param_1 + 0x330));
  *(int *)(param_1 + 0xd30) = (int)lVar8;
  lVar9 = FUN_180003050(piVar13,(int *)(param_1 + 0x374));
  *(int *)(param_1 + 0xd34) = (int)lVar9;
  lVar10 = FUN_180003050(piVar13,(int *)(param_1 + 0x3b8));
  *(int *)(param_1 + 0xd38) = (int)lVar10;
  lVar11 = FUN_180003050(piVar13,(int *)(param_1 + 0x3fc));
  *(int *)(param_1 + 0xd3c) = (int)lVar11;
  if (*(int *)(param_1 + 0xe44) != 0) {
    *(int *)(param_1 + 0xd00) =
         *(int *)(param_1 + 0xd00) + *(int *)(param_1 + 0xf08) + *(int *)(param_1 + 0xe48);
    *(int *)(param_1 + 0xd04) =
         *(int *)(param_1 + 0xd04) + *(int *)(param_1 + 0xf0c) + *(int *)(param_1 + 0xe4c);
    *(int *)(param_1 + 0xd08) =
         *(int *)(param_1 + 0xd08) + *(int *)(param_1 + 0xf10) + *(int *)(param_1 + 0xe50);
    *(int *)(param_1 + 0xd0c) =
         *(int *)(param_1 + 0xd0c) + *(int *)(param_1 + 0xf14) + *(int *)(param_1 + 0xe54);
    *(int *)(param_1 + 0xd10) =
         *(int *)(param_1 + 0xd10) + *(int *)(param_1 + 0xf18) + *(int *)(param_1 + 0xe58);
    *(int *)(param_1 + 0xd14) =
         *(int *)(param_1 + 0xd14) + *(int *)(param_1 + 0xf1c) + *(int *)(param_1 + 0xe5c);
    *(int *)(param_1 + 0xd18) =
         *(int *)(param_1 + 0xd18) + *(int *)(param_1 + 0xf20) + *(int *)(param_1 + 0xe60);
    *(int *)(param_1 + 0xd1c) =
         *(int *)(param_1 + 0xd1c) + *(int *)(param_1 + 0xf24) + *(int *)(param_1 + 0xe64);
    *(int *)(param_1 + 0xd20) =
         *(int *)(param_1 + 0xd20) + *(int *)(param_1 + 0xf28) + *(int *)(param_1 + 0xe68);
    *(int *)(param_1 + 0xd24) = *(int *)(param_1 + 0xf2c) + *(int *)(param_1 + 0xe6c) + (int)lVar5;
    *(int *)(param_1 + 0xd28) = *(int *)(param_1 + 0xf30) + *(int *)(param_1 + 0xe70) + (int)lVar6;
    *(int *)(param_1 + 0xd2c) = *(int *)(param_1 + 0xf34) + *(int *)(param_1 + 0xe74) + (int)lVar7;
    *(int *)(param_1 + 0xd30) = *(int *)(param_1 + 0xf38) + *(int *)(param_1 + 0xe78) + (int)lVar8;
    *(int *)(param_1 + 0xd34) = *(int *)(param_1 + 0xf3c) + *(int *)(param_1 + 0xe7c) + (int)lVar9;
    *(int *)(param_1 + 0xd38) = *(int *)(param_1 + 0xf40) + *(int *)(param_1 + 0xe80) + (int)lVar10;
    *(int *)(param_1 + 0xd3c) = *(int *)(param_1 + 0xf44) + *(int *)(param_1 + 0xe84) + (int)lVar11;
  }
  FUN_1800031c0((undefined4 *)(param_1 + 0xd40),param_1 + 0x440,(longlong)piVar13,0x11,10,0,0x44,4,
                0x15);
  uVar1 = *(int *)(param_1 + 0xd00) + 0x2000000;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0x3ffffff < (int)uVar1) {
    uVar1 = 0x3ffffff;
  }
  uVar2 = *(int *)(param_1 + 0xd04) + 0x2000000;
  *(int *)(param_1 + 0xd00) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar1 >> 0x11) * 4) *
              (ulonglong)(uVar1 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar1 >> 0x11) * 4) >> 2);
  uVar1 = 0x3ffffff;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = 0x3ffffff;
  }
  uVar3 = *(int *)(param_1 + 0xd08) + 0x2000000;
  *(int *)(param_1 + 0xd04) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = 0x3ffffff;
  }
  uVar2 = *(int *)(param_1 + 0xd0c) + 0x2000000;
  *(int *)(param_1 + 0xd08) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = 0x3ffffff;
  }
  uVar3 = *(int *)(param_1 + 0xd10) + 0x2000000;
  *(int *)(param_1 + 0xd0c) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd14) + 0x2000000;
  *(int *)(param_1 + 0xd10) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_1 + 0xd18) + 0x2000000;
  *(int *)(param_1 + 0xd14) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd1c) + 0x2000000;
  *(int *)(param_1 + 0xd18) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_1 + 0xd20) + 0x2000000;
  *(int *)(param_1 + 0xd1c) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd24) + 0x2000000;
  *(int *)(param_1 + 0xd20) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_1 + 0xd28) + 0x2000000;
  *(int *)(param_1 + 0xd24) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd2c) + 0x2000000;
  *(int *)(param_1 + 0xd28) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_1 + 0xd30) + 0x2000000;
  *(int *)(param_1 + 0xd2c) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd34) + 0x2000000;
  *(int *)(param_1 + 0xd30) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  *(int *)(param_1 + 0xd34) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  uVar2 = *(int *)(param_1 + 0xd38) + 0x2000000;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  *(int *)(param_1 + 0xd38) =
       (int)(((longlong)
              ((ulonglong)(uVar2 & 0x1ffff) *
              (longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  uVar2 = *(int *)(param_1 + 0xd3c) + 0x2000000;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  *(int *)(param_1 + 0xd3c) =
       (int)(((longlong)
              ((ulonglong)(uVar2 & 0x1ffff) *
              (longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  lVar5 = FUN_180003050(piVar13,(int *)(param_1 + 0x6e8));
  *(int *)(param_1 + 0xd68) = (int)lVar5;
  lVar6 = FUN_180003050(piVar13,(int *)(param_1 + 0x72c));
  *(int *)(param_1 + 0xd6c) = (int)lVar6;
  lVar7 = FUN_180003050(piVar13,(int *)(param_1 + 0x770));
  *(int *)(param_1 + 0xd70) = (int)lVar7;
  lVar8 = FUN_180003050(piVar13,(int *)(param_1 + 0x7b4));
  *(int *)(param_1 + 0xd74) = (int)lVar8;
  lVar9 = FUN_180003050(piVar13,(int *)(param_1 + 0x7f8));
  *(int *)(param_1 + 0xd78) = (int)lVar9;
  lVar10 = FUN_180003050(piVar13,(int *)(param_1 + 0x83c));
  *(int *)(param_1 + 0xd7c) = (int)lVar10;
  if (*(int *)(param_1 + 0xe44) != 0) {
    *(int *)(param_1 + 0xd40) =
         *(int *)(param_1 + 0xd40) + *(int *)(param_1 + 0xf48) + *(int *)(param_1 + 0xe88);
    *(int *)(param_1 + 0xd44) =
         *(int *)(param_1 + 0xd44) + *(int *)(param_1 + 0xf4c) + *(int *)(param_1 + 0xe8c);
    *(int *)(param_1 + 0xd48) =
         *(int *)(param_1 + 0xd48) + *(int *)(param_1 + 0xf50) + *(int *)(param_1 + 0xe90);
    *(int *)(param_1 + 0xd4c) =
         *(int *)(param_1 + 0xd4c) + *(int *)(param_1 + 0xf54) + *(int *)(param_1 + 0xe94);
    *(int *)(param_1 + 0xd50) =
         *(int *)(param_1 + 0xd50) + *(int *)(param_1 + 0xf58) + *(int *)(param_1 + 0xe98);
    *(int *)(param_1 + 0xd54) =
         *(int *)(param_1 + 0xd54) + *(int *)(param_1 + 0xf5c) + *(int *)(param_1 + 0xe9c);
    *(int *)(param_1 + 0xd58) =
         *(int *)(param_1 + 0xd58) + *(int *)(param_1 + 0xf60) + *(int *)(param_1 + 0xea0);
    *(int *)(param_1 + 0xd5c) =
         *(int *)(param_1 + 0xd5c) + *(int *)(param_1 + 0xf64) + *(int *)(param_1 + 0xea4);
    *(int *)(param_1 + 0xd60) =
         *(int *)(param_1 + 0xd60) + *(int *)(param_1 + 0xf68) + *(int *)(param_1 + 0xea8);
    *(int *)(param_1 + 0xd64) =
         *(int *)(param_1 + 0xd64) + *(int *)(param_1 + 0xf6c) + *(int *)(param_1 + 0xeac);
    *(int *)(param_1 + 0xd68) = *(int *)(param_1 + 0xf70) + *(int *)(param_1 + 0xeb0) + (int)lVar5;
    *(int *)(param_1 + 0xd6c) = *(int *)(param_1 + 0xf74) + *(int *)(param_1 + 0xeb4) + (int)lVar6;
    *(int *)(param_1 + 0xd70) = *(int *)(param_1 + 0xf78) + *(int *)(param_1 + 0xeb8) + (int)lVar7;
    *(int *)(param_1 + 0xd74) = *(int *)(param_1 + 0xf7c) + *(int *)(param_1 + 0xebc) + (int)lVar8;
    *(int *)(param_1 + 0xd78) = *(int *)(param_1 + 0xf80) + *(int *)(param_1 + 0xec0) + (int)lVar9;
    *(int *)(param_1 + 0xd7c) = *(int *)(param_1 + 0xf84) + *(int *)(param_1 + 0xec4) + (int)lVar10;
  }
  FUN_1800031c0((undefined4 *)(param_1 + 0xd80),param_1 + 0x880,(longlong)piVar13,0x10,10,0,0x40,4,
                0x15);
  uVar1 = *(int *)(param_1 + 0xd40) + 0x2000000;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0x3ffffff < (int)uVar1) {
    uVar1 = 0x3ffffff;
  }
  uVar2 = *(int *)(param_1 + 0xd44) + 0x2000000;
  *(int *)(param_1 + 0xd40) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar1 >> 0x11) * 4) *
              (ulonglong)(uVar1 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar1 >> 0x11) * 4) >> 2);
  uVar1 = 0x3ffffff;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = 0x3ffffff;
  }
  *(int *)(param_1 + 0xd44) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  uVar2 = *(int *)(param_1 + 0xd48) + 0x2000000;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = 0x3ffffff;
  }
  *(int *)(param_1 + 0xd48) =
       (int)(((longlong)
              ((ulonglong)(uVar2 & 0x1ffff) *
              (longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  uVar2 = *(int *)(param_1 + 0xd4c) + 0x2000000;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = 0x3ffffff;
  }
  uVar3 = *(int *)(param_1 + 0xd50) + 0x2000000;
  *(int *)(param_1 + 0xd4c) =
       (int)(((longlong)
              ((ulonglong)(uVar2 & 0x1ffff) *
              (longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  *(int *)(param_1 + 0xd50) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  uVar2 = *(int *)(param_1 + 0xd54) + 0x2000000;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  *(int *)(param_1 + 0xd54) =
       (int)(((longlong)
              ((ulonglong)(uVar2 & 0x1ffff) *
              (longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  uVar2 = *(int *)(param_1 + 0xd58) + 0x2000000;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_1 + 0xd5c) + 0x2000000;
  *(int *)(param_1 + 0xd58) =
       (int)(((longlong)
              ((ulonglong)(uVar2 & 0x1ffff) *
              (longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd60) + 0x2000000;
  *(int *)(param_1 + 0xd5c) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  *(int *)(param_1 + 0xd60) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  uVar2 = *(int *)(param_1 + 0xd64) + 0x2000000;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_1 + 0xd68) + 0x2000000;
  *(int *)(param_1 + 0xd64) =
       (int)(((longlong)
              ((ulonglong)(uVar2 & 0x1ffff) *
              (longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd6c) + 0x2000000;
  *(int *)(param_1 + 0xd68) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_1 + 0xd70) + 0x2000000;
  *(int *)(param_1 + 0xd6c) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd74) + 0x2000000;
  *(int *)(param_1 + 0xd70) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  uVar3 = *(int *)(param_1 + 0xd78) + 0x2000000;
  *(int *)(param_1 + 0xd74) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0x3ffffff < (int)uVar3) {
    uVar3 = uVar1;
  }
  uVar2 = *(int *)(param_1 + 0xd7c) + 0x2000000;
  *(int *)(param_1 + 0xd78) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar3 >> 0x11) * 4) *
              (ulonglong)(uVar3 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar3 >> 0x11) * 4) >> 2);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0x3ffffff < (int)uVar2) {
    uVar2 = uVar1;
  }
  *(int *)(param_1 + 0xd7c) =
       (int)(((longlong)
              ((longlong)*(int *)(&DAT_180023000 + ((longlong)(int)uVar2 >> 0x11) * 4) *
              (ulonglong)(uVar2 & 0x1ffff)) >> 0x11) +
             (longlong)*(int *)(&DAT_180023800 + ((longlong)(int)uVar2 >> 0x11) * 4) >> 2);
  lVar5 = FUN_180002f50(piVar13,(int *)(param_1 + 0xb00));
  *(int *)(param_1 + 0xda8) = (int)lVar5;
  lVar6 = FUN_180002f50(piVar13,(int *)(param_1 + 0xb40));
  *(int *)(param_1 + 0xdac) = (int)lVar6;
  lVar7 = FUN_180002f50(piVar13,(int *)(param_1 + 0xb80));
  *(int *)(param_1 + 0xdb0) = (int)lVar7;
  lVar8 = FUN_180002f50(piVar13,(int *)(param_1 + 0xbc0));
  *(int *)(param_1 + 0xdb4) = (int)lVar8;
  lVar9 = FUN_180002f50(piVar13,(int *)(param_1 + 0xc00));
  *(int *)(param_1 + 0xdb8) = (int)lVar9;
  lVar10 = FUN_180002f50(piVar13,(int *)(param_1 + 0xc40));
  *(int *)(param_1 + 0xdbc) = (int)lVar10;
  if (*(int *)(param_1 + 0xe44) != 0) {
    *(int *)(param_1 + 0xd80) = *(int *)(param_1 + 0xd80) + *(int *)(param_1 + 0xf88);
    *(int *)(param_1 + 0xd84) = *(int *)(param_1 + 0xd84) + *(int *)(param_1 + 0xf8c);
    *(int *)(param_1 + 0xd88) = *(int *)(param_1 + 0xd88) + *(int *)(param_1 + 0xf90);
    *(int *)(param_1 + 0xd8c) = *(int *)(param_1 + 0xd8c) + *(int *)(param_1 + 0xf94);
    *(int *)(param_1 + 0xd90) = *(int *)(param_1 + 0xd90) + *(int *)(param_1 + 0xf98);
    *(int *)(param_1 + 0xd94) = *(int *)(param_1 + 0xd94) + *(int *)(param_1 + 0xf9c);
    *(int *)(param_1 + 0xd98) = *(int *)(param_1 + 0xd98) + *(int *)(param_1 + 4000);
    *(int *)(param_1 + 0xd9c) = *(int *)(param_1 + 0xd9c) + *(int *)(param_1 + 0xfa4);
    *(int *)(param_1 + 0xda0) = *(int *)(param_1 + 0xda0) + *(int *)(param_1 + 0xfa8);
    *(int *)(param_1 + 0xda4) = *(int *)(param_1 + 0xda4) + *(int *)(param_1 + 0xfac);
    *(int *)(param_1 + 0xda8) = *(int *)(param_1 + 0xfb0) + (int)lVar5;
    *(int *)(param_1 + 0xdac) = *(int *)(param_1 + 0xfb4) + (int)lVar6;
    *(int *)(param_1 + 0xdb0) = *(int *)(param_1 + 0xfb8) + (int)lVar7;
    *(int *)(param_1 + 0xdb4) = *(int *)(param_1 + 0xfbc) + (int)lVar8;
    *(int *)(param_1 + 0xdb8) = *(int *)(param_1 + 0xfc0) + (int)lVar9;
    *(int *)(param_1 + 0xdbc) = *(int *)(param_1 + 0xfc4) + (int)lVar10;
  }
  lVar5 = (longlong)(int)fVar15;
  piVar13 = (int *)(param_1 + 0xd80);
  do {
    iVar12 = (int)((longlong)piVar13[-0x20] * (longlong)*piVar13 + piVar13[-0x40] * lVar5 >> 0x15) +
             piVar13[0x52];
    *piVar13 = iVar12;
    uVar1 = iVar12 + 0x2000000;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x3ffffff < (int)uVar1) {
      uVar1 = 0x3ffffff;
    }
    iVar12 = (int)(((longlong)
                    ((longlong)*(int *)(&DAT_180024800 + ((longlong)(int)uVar1 >> 0x11) * 4) *
                    (ulonglong)(uVar1 & 0x1ffff)) >> 0x11) +
                   (longlong)*(int *)(&DAT_180024000 + ((longlong)(int)uVar1 >> 0x11) * 4) >> 2);
    *piVar13 = iVar12;
    piVar13[0x21] =
         (int)((longlong)(piVar13[0x21] - iVar12) * (longlong)piVar13[-0x10] >> 0x15) + iVar12;
    iVar12 = (int)((longlong)piVar13[-0x1f] * (longlong)piVar13[1] + piVar13[-0x3f] * lVar5 >> 0x15)
             + piVar13[0x53];
    piVar13[1] = iVar12;
    uVar1 = iVar12 + 0x2000000;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x3ffffff < (int)uVar1) {
      uVar1 = 0x3ffffff;
    }
    iVar12 = (int)(((longlong)
                    ((longlong)*(int *)(&DAT_180024800 + ((longlong)(int)uVar1 >> 0x11) * 4) *
                    (ulonglong)(uVar1 & 0x1ffff)) >> 0x11) +
                   (longlong)*(int *)(&DAT_180024000 + ((longlong)(int)uVar1 >> 0x11) * 4) >> 2);
    piVar13[1] = iVar12;
    piVar13[0x22] =
         (int)((longlong)(piVar13[0x22] - iVar12) * (longlong)piVar13[-0xf] >> 0x15) + iVar12;
    iVar12 = (int)((longlong)piVar13[-0x1e] * (longlong)piVar13[2] + piVar13[-0x3e] * lVar5 >> 0x15)
             + piVar13[0x54];
    piVar13[2] = iVar12;
    uVar1 = iVar12 + 0x2000000;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x3ffffff < (int)uVar1) {
      uVar1 = 0x3ffffff;
    }
    iVar12 = (int)(((longlong)
                    ((longlong)*(int *)(&DAT_180024800 + ((longlong)(int)uVar1 >> 0x11) * 4) *
                    (ulonglong)(uVar1 & 0x1ffff)) >> 0x11) +
                   (longlong)*(int *)(&DAT_180024000 + ((longlong)(int)uVar1 >> 0x11) * 4) >> 2);
    piVar13[2] = iVar12;
    piVar13[0x23] =
         (int)((longlong)(piVar13[0x23] - iVar12) * (longlong)piVar13[-0xe] >> 0x15) + iVar12;
    iVar12 = (int)((longlong)piVar13[-0x1d] * (longlong)piVar13[3] + piVar13[-0x3d] * lVar5 >> 0x15)
             + piVar13[0x55];
    piVar13[3] = iVar12;
    uVar1 = iVar12 + 0x2000000;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0x3ffffff < (int)uVar1) {
      uVar1 = 0x3ffffff;
    }
    iVar12 = (int)(((longlong)
                    ((longlong)*(int *)(&DAT_180024800 + ((longlong)(int)uVar1 >> 0x11) * 4) *
                    (ulonglong)(uVar1 & 0x1ffff)) >> 0x11) +
                   (longlong)*(int *)(&DAT_180024000 + ((longlong)(int)uVar1 >> 0x11) * 4) >> 2);
    piVar13[3] = iVar12;
    piVar13[0x24] =
         (int)((longlong)(piVar13[0x24] - iVar12) * (longlong)piVar13[-0xd] >> 0x15) + iVar12;
    piVar13 = piVar13 + 4;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  return (float)(int)lVar4 * DAT_1800183bc;
}


