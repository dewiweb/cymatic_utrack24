// rea decompile_all
// name: FUN_00448ee4
// address: 0x448ee4
// body: available
// range: 0x448ee4-0x449385 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448ee4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int in_ECX;
  undefined4 extraout_EDX;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  int ***pppiStack_40;
  uint uStack_3c;
  char local_29;
  uint **ppuStack_24;
  uint *puStack_20;
  undefined1 *puStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e26b8;
  local_14 = ExceptionList;
  uStack_3c = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  pppiStack_40 = (int ***)0x448f23;
  FUN_0043c289();
  pppiStack_40 = (int ***)0x448f2e;
  FUN_00449508();
  iVar1 = *(int *)(*(int *)(in_ECX + 0x570) + 0x7c);
  pppiStack_40 = (int ***)0x448f42;
  FUN_0045ef8e();
  puVar5 = *(undefined4 **)(in_ECX + 0x558);
  uVar7 = 0;
  local_29 = '\0';
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x558) = 0;
    pppiStack_40 = (int ***)0x1;
    (**(code **)*puVar5)();
  }
  puVar5 = *(undefined4 **)(in_ECX + 0x55c);
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x55c) = 0;
    pppiStack_40 = (int ***)0x1;
    (**(code **)*puVar5)();
  }
  pppiStack_40 = (int ***)&puStack_20;
  FUN_0046537e();
  pppiStack_40 = (int ***)(in_ECX + 0x564);
  FUN_00465317();
  pppiStack_40 = (int ***)0x448f9d;
  FUN_004652d6();
  uVar2 = *(uint *)(iVar1 + 0x29c);
  if (0 < (int)uVar2) {
    do {
      if (uVar7 < uVar2) {
        iVar6 = *(int *)(*(int *)(iVar1 + 0x294) + uVar7 * 4);
      }
      else {
        iVar6 = 0;
      }
      if ((*(uint *)(iVar6 + 4) & 0xf000) != 0) {
        pppiStack_40 = (int ***)&ppuStack_24;
        FUN_00448837();
        uStack_c = 0;
        pppiStack_40 = (int ***)0x1;
        FUN_004664c4();
        pppiStack_40 = (int ***)0x2f;
        cVar4 = FUN_00465e93();
        local_29 = '\x01' - (cVar4 != '\0');
        pppiStack_40 = (int ***)0x449018;
        FUN_004652d6();
        uStack_c = 0xffffffff;
        pppiStack_40 = (int ***)0x449026;
        FUN_004652d6();
        if (local_29 == '\0') {
          pppiStack_40 = (int ***)&ppuStack_24;
          FUN_00448837();
          puStack_1c = (undefined1 *)&pppiStack_40;
          uStack_c = 1;
          FUN_004c751a();
          FUN_004665e7(extraout_EDX);
          pppiStack_40 = (int ***)(in_ECX + 0x564);
          FUN_00465317();
          pppiStack_40 = (int ***)0x449086;
          FUN_004652d6();
          uStack_c = 0xffffffff;
          pppiStack_40 = (int ***)0x449094;
          FUN_004652d6();
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar2);
  }
  puStack_20 = (uint *)0x0;
  if (0 < *(int *)(iVar1 + 0x29c)) {
    bVar9 = *(int *)(iVar1 + 0x29c) != 0;
    do {
      puVar8 = puStack_20;
      if (bVar9) {
        iVar6 = *(int *)(*(int *)(iVar1 + 0x294) + (int)puStack_20 * 4);
      }
      else {
        iVar6 = 0;
      }
      if (*(int *)(iVar6 + 4) == 0) {
        if (local_29 == '\0') {
          pppiStack_40 = (int ***)0xbc;
          puStack_1c = (undefined1 *)FUN_005af82d();
          uStack_c = 2;
          if (puStack_1c == (undefined1 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            pppiStack_40 = *(int ****)(*(int *)(in_ECX + 0x570) + 0x7c);
            puVar5 = (undefined4 *)FUN_00449631(puStack_1c);
          }
          uStack_c = 0xffffffff;
          puVar3 = *(undefined4 **)(in_ECX + 0x558);
          if ((puVar3 != puVar5) &&
             (*(undefined4 **)(in_ECX + 0x558) = puVar5, puVar3 != (undefined4 *)0x0)) {
            pppiStack_40 = (int ***)0x1;
            (**(code **)*puVar3)();
          }
          pppiStack_40 = (int ***)0x449141;
          FUN_0044a1af();
LAB_00449147:
          pppiStack_40 = (int ***)0xffffffff;
          FUN_004c1064();
          puVar8 = puStack_20;
        }
      }
      else {
        if (puStack_20 < *(uint **)(iVar1 + 0x29c)) {
          iVar6 = *(int *)(*(int *)(iVar1 + 0x294) + (int)puStack_20 * 4);
        }
        else {
          iVar6 = 0;
        }
        if (*(int *)(iVar6 + 4) == 1) {
          if (local_29 == '\0') {
            pppiStack_40 = (int ***)0xbc;
            puStack_1c = (undefined1 *)FUN_005af82d();
            uStack_c = 3;
            if (puStack_1c == (undefined1 *)0x0) {
              puVar5 = (undefined4 *)0x0;
            }
            else {
              pppiStack_40 = *(int ****)(*(int *)(in_ECX + 0x570) + 0x7c);
              puVar5 = (undefined4 *)FUN_00449631(puStack_1c);
            }
            uStack_c = 0xffffffff;
            puVar3 = *(undefined4 **)(in_ECX + 0x55c);
            if ((puVar3 != puVar5) &&
               (*(undefined4 **)(in_ECX + 0x55c) = puVar5, puVar3 != (undefined4 *)0x0)) {
              pppiStack_40 = (int ***)0x1;
              (**(code **)*puVar3)();
            }
            pppiStack_40 = (int ***)0x4491f4;
            FUN_0044a1af();
            goto LAB_00449147;
          }
        }
        else {
          pppiStack_40 = (int ***)0x44920d;
          cVar4 = FUN_00448866();
          if (cVar4 == '\0') {
            pppiStack_40 = (int ***)0xbc;
            puStack_1c = (undefined1 *)FUN_005af82d();
            uStack_c = 4;
            if (puStack_1c == (undefined1 *)0x0) {
              puStack_20 = (uint *)0x0;
            }
            else {
              pppiStack_40 = *(int ****)(*(int *)(in_ECX + 0x570) + 0x7c);
              puStack_20 = (uint *)FUN_00449631(puStack_1c);
            }
            uStack_c = 0xffffffff;
            pppiStack_40 = (int ***)0x44927b;
            cVar4 = FUN_00448808();
            cVar4 = '\x01' - (cVar4 != '\0');
            ppuStack_24 = (uint **)CONCAT31(ppuStack_24._1_3_,cVar4);
            if (cVar4 == '\0') {
              pppiStack_40 = (int ***)0x44929d;
              cVar4 = FUN_0045f710();
              if (cVar4 != '\0') {
                pppiStack_40 = (int ***)0x4492a8;
                cVar4 = FUN_0045f738();
                ppuStack_24 = (uint **)((uint)ppuStack_24 & 0xffffff00);
                if (cVar4 != '\0') goto LAB_004492b6;
              }
              ppuStack_24 = (uint **)CONCAT31(ppuStack_24._1_3_,1);
            }
LAB_004492b6:
            pppiStack_40 = (int ***)ppuStack_24;
            FUN_004c3170();
          }
          else {
            pppiStack_40 = (int ***)0x4492e3;
            cVar4 = FUN_00448808();
            if (cVar4 != '\0') goto LAB_0044933e;
            pppiStack_40 = (int ***)0xbc;
            puStack_1c = (undefined1 *)FUN_005af82d();
            uStack_c = 5;
            if (puStack_1c != (undefined1 *)0x0) {
              pppiStack_40 = *(int ****)(*(int *)(in_ECX + 0x570) + 0x7c);
              FUN_00449631(puStack_1c);
            }
            uStack_c = 0xffffffff;
          }
          pppiStack_40 = (int ***)0x44933a;
          FUN_00449410();
        }
      }
LAB_0044933e:
      puStack_20 = (uint *)((int)puVar8 + 1);
      bVar9 = puStack_20 < *(uint **)(iVar1 + 0x29c);
    } while ((int)puStack_20 < (int)*(uint **)(iVar1 + 0x29c));
  }
  pppiStack_40 = (int ***)0x44935d;
  FUN_0045efa9();
  pppiStack_40 = (int ***)0x44936d;
  (*(code *)(*(int ***)(in_ECX + -0xa0))[0x21])();
  pppiStack_40 = (int ***)(in_ECX + -0xa0);
  FUN_004c1613();
  ExceptionList = local_14;
  return;
}

