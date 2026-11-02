// rea decompile_all
// name: FUN_006381c0
// address: 0x6381c0
// body: available
// range: 0x6381c0-0x63845e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00638422) */

undefined1 FUN_006381c0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined **ppuVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  undefined1 local_30 [12];
  undefined **local_24;
  undefined **local_20;
  undefined **local_1c;
  undefined **local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ef5b;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x90) == 0) {
    ppuVar6 = (undefined **)0x0;
    local_20 = (undefined **)0x0;
  }
  else {
    ppuVar6 = operator_new(8);
    local_8 = 0;
    *ppuVar6 = *(undefined **)(in_ECX + 0x90);
    local_20 = ppuVar6;
    local_1c = ppuVar6;
    uVar3 = FUN_00611760(0xffffffff);
    *(undefined1 *)(ppuVar6 + 1) = uVar3;
  }
  local_8 = 1;
  local_24 = ppuVar6;
  if ((ppuVar6 != (undefined **)0x0) && (*(char *)(ppuVar6 + 1) == '\0')) {
    uVar3 = 0;
    goto LAB_00638435;
  }
  FUN_0062a4d0(in_ECX + 0x70,0);
  local_8._0_1_ = 2;
  local_1c = operator_new(0x30);
  local_8 = CONCAT31(local_8._1_3_,3);
  piVar7 = (int *)FUN_0062aec0(local_30,0x8000);
  if (*(char *)piVar7[4] != '\0') {
    puVar1 = (undefined4 *)*piVar7;
    piVar7 = (int *)0x0;
    (*(code *)*puVar1)(1);
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  local_14 = piVar7;
  if (piVar7 == (int *)0x0) {
LAB_0063841c:
    uVar3 = 0;
  }
  else {
    iVar9 = *piVar7;
    pcVar2 = *(code **)(iVar9 + 0x24);
    if (*(int *)(in_ECX + 0x8c) == 1) {
      if (pcVar2 == FUN_0062a8d0) {
        local_1c = (undefined **)0x50525043;
        (**(code **)(iVar9 + 0x10))(&local_1c,4);
      }
      else {
        (*pcVar2)(0x50525043);
      }
      (**(code **)(*piVar7 + 4))();
      local_1c = operator_new(0x14);
      local_8._0_1_ = 5;
      local_14 = (int *)0x0;
      piVar8 = (int *)FUN_00613cc0(piVar7,9,1,0);
      local_8 = CONCAT31(local_8._1_3_,4);
      piVar7 = (int *)0x0;
      if (piVar8 != (int *)0x0) {
        piVar7 = piVar8;
        local_14 = piVar8;
      }
    }
    else if (pcVar2 == FUN_0062a8d0) {
      local_1c = (undefined **)0x504f5250;
      (**(code **)(iVar9 + 0x10))(&local_1c,4);
    }
    else {
      (*pcVar2)(0x504f5250);
    }
    local_1c = *(undefined ***)(in_ECX + 0xc);
    pcVar2 = *(code **)(*piVar7 + 0x24);
    if (pcVar2 == FUN_0062a8d0) {
      local_18 = local_1c;
      (**(code **)(*piVar7 + 0x10))(&local_18,4);
    }
    else {
      (*pcVar2)(local_1c);
    }
    uVar10 = 0;
    if (0 < (int)local_1c) {
      do {
        if (uVar10 < *(uint *)(in_ECX + 0xc)) {
          local_18 = (undefined **)(*(int *)(in_ECX + 4) + uVar10 * 4);
        }
        else {
          local_18 = &PTR_DAT_00c7ed68;
        }
        if (*(code **)(*piVar7 + 0x4c) == FUN_0062a880) {
          iVar9 = FUN_0045d1e0(*local_18);
          (**(code **)(*piVar7 + 0x10))(*local_18,iVar9 + 1);
        }
        else {
          (**(code **)(*piVar7 + 0x4c))(local_18);
        }
        if (uVar10 < *(uint *)(in_ECX + 0x18)) {
          local_18 = (undefined **)(*(int *)(in_ECX + 0x10) + uVar10 * 4);
        }
        else {
          local_18 = &PTR_DAT_00c7ed68;
        }
        if (*(code **)(*piVar7 + 0x4c) == FUN_0062a880) {
          iVar9 = FUN_0045d1e0(*local_18);
          (**(code **)(*piVar7 + 0x10))(*local_18,iVar9 + 1);
        }
        else {
          (**(code **)(*piVar7 + 0x4c))(local_18);
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)local_1c);
    }
    local_14 = (int *)0x0;
    if (piVar7 != (int *)0x0) {
      (**(code **)*piVar7)(1);
    }
    cVar4 = FUN_0062a3d0();
    if (cVar4 == '\0') goto LAB_0063841c;
    *(undefined1 *)(in_ECX + 0x95) = 0;
    uVar3 = 1;
  }
  FUN_0062a430();
  ppuVar6 = local_20;
LAB_00638435:
  if (ppuVar6 != (undefined **)0x0) {
    FUN_00611700(uVar5);
    FUN_004bfe14(ppuVar6,8);
  }
  ExceptionList = local_10;
  return uVar3;
}

