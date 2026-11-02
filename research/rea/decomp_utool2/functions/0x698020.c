// rea decompile_all
// name: FUN_00698020
// address: 0x698020
// body: available
// range: 0x698020-0x6981f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00698020(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int in_ECX;
  int iVar9;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721fba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  if (*(int *)(in_ECX + 0xa0) == 0) {
    local_20 = (double)(float)param_1[0xd] + 6755399441055744.0;
    iVar4 = FUN_00698fa0((undefined4)local_20);
    iVar9 = *(int *)(in_ECX + 0x80) + -1;
    *(int *)(in_ECX + 0xa0) = iVar4;
    if (-1 < iVar9) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + iVar9 * 4);
        if (*(int *)(iVar1 + 4) == iVar4) {
          if ((iVar1 != 0) && ((*(byte *)(iVar1 + 8) & 4) != 0)) {
            uVar5 = FUN_00699020(iVar4,1);
            *(undefined4 *)(in_ECX + 0xb0) = uVar5;
            FUN_006d7870(&local_30,uVar5);
            uVar5 = *(undefined4 *)(in_ECX + 0xa0);
            *(undefined4 *)(in_ECX + 0xa0) = 0;
            pvVar6 = operator_new(0x74);
            local_20 = (double)CONCAT44(pvVar6,(undefined4)local_20);
            local_8 = 0;
            uVar7 = FUN_006ce130(&param_1,&local_30,0,0x3f800000);
            local_8 = CONCAT31(local_8._1_3_,1);
            local_18 = 1;
            puVar8 = (undefined4 *)FUN_0049f050(uVar7);
            local_8 = 2;
            puVar2 = *(undefined4 **)(in_ECX + 0x90);
            if ((puVar2 != puVar8) &&
               (*(undefined4 **)(in_ECX + 0x90) = puVar8, puVar2 != (undefined4 *)0x0)) {
              (**(code **)*puVar2)(1);
            }
            piVar3 = *(int **)(in_ECX + 0x90);
            if (piVar3 != (int *)0x0) {
              (**(code **)(*piVar3 + 0x28))(1);
              FUN_006e5050(piVar3,0xffffffff);
            }
            local_8 = 0xffffffff;
            if (param_1 != (undefined4 *)0x0) {
              LOCK();
              piVar3 = param_1 + 1;
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)*param_1)(1);
              }
            }
            *(undefined4 *)(in_ECX + 0xa0) = uVar5;
            FUN_006e9790(local_30,local_2c,local_28,local_24);
            iVar4 = *(int *)(in_ECX + 0x8c) + -1;
            if (iVar4 < 0) {
              ExceptionList = local_10;
              return;
            }
            do {
              (**(code **)(**(int **)(*(int *)(in_ECX + 0x84) + iVar4 * 4) + 0x10))();
              iVar9 = *(int *)(in_ECX + 0x8c) + -1;
              if (iVar9 < iVar4) {
                iVar4 = iVar9;
              }
              iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
            ExceptionList = local_10;
            return;
          }
          break;
        }
        iVar9 = iVar9 + -1;
      } while (-1 < iVar9);
    }
    *(undefined4 *)(in_ECX + 0xa0) = 0;
  }
  ExceptionList = local_10;
  return;
}

