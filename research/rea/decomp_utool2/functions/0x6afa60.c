// rea decompile_all
// name: FUN_006afa60
// address: 0x6afa60
// body: available
// range: 0x6afa60-0x6afd98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006afa60(void)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined4 *local_20;
  undefined1 *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723806;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0xe4) == '\0') {
    iVar8 = *(int *)(in_ECX + 0x18);
  }
  else {
    iVar8 = *(int *)(in_ECX + 0x1c);
  }
  local_14 = iVar8;
  local_18 = (int *)FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  cVar2 = (**(code **)(*local_18 + 4))();
  if (cVar2 == '\0') {
    puVar3 = *(undefined4 **)(in_ECX + 0xe8);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xe8) = 0;
      (**(code **)*puVar3)(1);
    }
    puVar3 = *(undefined4 **)(in_ECX + 0xec);
    iVar6 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0xec) = 0;
      (**(code **)*puVar3)(1);
    }
  }
  else {
    if (*(int *)(in_ECX + 0xe8) == 0) {
      puVar3 = operator_new(0xe8);
      uVar7 = 3;
      local_1c = &DAT_00bfe12c;
      if (*(char *)(in_ECX + 0xe4) != '\0') {
        uVar7 = 0;
      }
      local_8 = 1;
      local_20 = puVar3;
      FUN_006e3660(&local_1c);
      *(byte *)(puVar3 + 0x1a) = *(byte *)(puVar3 + 0x1a) & 0xdf;
      *puVar3 = juce::ScrollBar::ScrollbarButton::vftable;
      puVar3[0x1c] = juce::ScrollBar::ScrollbarButton::vftable;
      puVar3[0x38] = uVar7;
      puVar3[0x39] = in_ECX;
      local_8 = 0xffffffff;
      puVar4 = *(undefined4 **)(in_ECX + 0xe8);
      if ((puVar4 != puVar3) &&
         (*(undefined4 **)(in_ECX + 0xe8) = puVar3, puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
      piVar1 = *(int **)(in_ECX + 0xe8);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))(1);
        FUN_006e5050(piVar1,0xffffffff);
      }
      puVar4 = operator_new(0xe8);
      cVar2 = *(char *)(in_ECX + 0xe4);
      local_1c = &DAT_00bfe12c;
      local_8 = 3;
      local_20 = puVar4;
      FUN_006e3660(&local_1c);
      *(byte *)(puVar4 + 0x1a) = *(byte *)(puVar4 + 0x1a) & 0xdf;
      *puVar4 = juce::ScrollBar::ScrollbarButton::vftable;
      puVar4[0x1c] = juce::ScrollBar::ScrollbarButton::vftable;
      puVar4[0x38] = (cVar2 != '\0') + 1;
      puVar4[0x39] = in_ECX;
      local_8 = 0xffffffff;
      puVar3 = *(undefined4 **)(in_ECX + 0xec);
      if ((puVar3 != puVar4) &&
         (*(undefined4 **)(in_ECX + 0xec) = puVar4, puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      piVar1 = *(int **)(in_ECX + 0xec);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))(1);
        FUN_006e5050(piVar1,0xffffffff);
      }
      FUN_006b0190(*(undefined4 *)(in_ECX + 0xd8),*(undefined4 *)(in_ECX + 0xdc),
                   *(undefined4 *)(in_ECX + 0xe0));
    }
    if (*(code **)(*local_18 + 0x1c) == FUN_006dd6d0) {
      iVar8 = local_14;
      if (*(char *)(in_ECX + 0xe4) == '\0') {
        iVar6 = *(int *)(in_ECX + 0x1c) + 2;
        if (local_14 / 2 < iVar6) {
          iVar6 = local_14 / 2;
        }
      }
      else {
        iVar6 = *(int *)(in_ECX + 0x18) + 2;
        if (local_14 / 2 < iVar6) {
          iVar6 = local_14 / 2;
        }
      }
    }
    else {
      iVar6 = (**(code **)(*local_18 + 0x1c))();
      iVar8 = local_14;
      if (local_14 / 2 < iVar6) {
        iVar6 = local_14 / 2;
      }
    }
  }
  if (*(code **)(*local_18 + 0x14) == FUN_006dd710) {
    iVar5 = *(int *)(in_ECX + 0x18);
    if (*(int *)(in_ECX + 0x1c) < *(int *)(in_ECX + 0x18)) {
      iVar5 = *(int *)(in_ECX + 0x1c);
    }
    iVar5 = iVar5 * 2;
  }
  else {
    iVar5 = (**(code **)(*local_18 + 0x14))();
  }
  if (iVar8 < iVar5 + 0x20) {
    *(undefined4 *)(in_ECX + 0xc4) = 0;
    *(int *)(in_ECX + 0xc0) = iVar8 / 2;
  }
  else {
    *(int *)(in_ECX + 0xc0) = iVar6;
    *(int *)(in_ECX + 0xc4) = iVar8 + iVar6 * -2;
  }
  if (*(int *)(in_ECX + 0xe8) != 0) {
    FUN_006e6400(local_30);
    if (*(char *)(in_ECX + 0xe4) == '\0') {
      puVar3 = (undefined4 *)FUN_0040dd10(local_40,iVar6);
      FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
      puVar3 = (undefined4 *)FUN_0040dcd0(local_50,iVar6);
    }
    else {
      puVar3 = (undefined4 *)FUN_0040dd60(local_40,iVar6);
      FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
      puVar3 = (undefined4 *)FUN_00418d70(local_40,iVar6);
    }
    FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  }
  FUN_006aff30();
  ExceptionList = local_10;
  return;
}

