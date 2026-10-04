// FUN_1800025b0 @ 1800025b0

undefined8 FUN_1800025b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  puVar6 = (undefined8 *)0x0;
  if (param_2 != puVar3) {
    if (param_2 < puVar3) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      puVar3 = puVar6;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + 8);
      }
      *(undefined8 **)(param_1 + 0x50) = puVar3;
      puVar3 = puVar6;
    }
    if (puVar3 < param_2) {
      puVar3 = puVar6;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + 8);
      }
      LOCK();
      puVar1 = (undefined8 *)*puVar3;
      bVar7 = puVar1 == (undefined8 *)0x0;
      if (bVar7) {
        *puVar3 = 0;
        puVar1 = (undefined8 *)0x0;
      }
      UNLOCK();
      puVar3 = puVar6;
      do {
        if (bVar7) {
          return 0xffffffe7;
        }
        puVar5 = (undefined8 *)(puVar1[1] + (longlong)puVar3);
        if (puVar3 <= param_2) {
          if (param_2 < puVar5) {
LAB_18000267e:
            *(undefined8 **)(param_1 + 0x60) = param_2;
            *(undefined8 **)(param_1 + 0x50) = puVar1;
            *(longlong *)(param_1 + 0x58) = (longlong)param_2 - (longlong)puVar3;
            return 0;
          }
          if (param_2 == puVar5) {
            puVar4 = puVar6;
            if (*(longlong *)(param_1 + 0x48) != 0) {
              puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + 0x20);
            }
            LOCK();
            puVar2 = (undefined8 *)*puVar4;
            if (puVar2 == (undefined8 *)0x0) {
              *puVar4 = 0;
              puVar2 = (undefined8 *)0x0;
            }
            UNLOCK();
            if (puVar1 == puVar2) goto LAB_18000267e;
          }
        }
        LOCK();
        puVar3 = (undefined8 *)*puVar1;
        bVar7 = puVar3 == (undefined8 *)0x0;
        if (bVar7) {
          *puVar1 = 0;
          puVar3 = (undefined8 *)0x0;
        }
        UNLOCK();
        puVar1 = puVar3;
        puVar3 = puVar5;
      } while( true );
    }
  }
  return 0;
}


