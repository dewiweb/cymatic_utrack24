// rea decompile_all
// name: FUN_00696020
// address: 0x696020
// body: available
// range: 0x696020-0x696164 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696020(undefined4 param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_10;
  
  if (param_2 == '\0') {
    *(undefined4 *)(in_ECX + 0x148) = 0;
    FUN_00696620(*(undefined4 *)(in_ECX + 0xf4),*(undefined4 *)(in_ECX + 0xf8));
    FUN_00696590(param_1);
    *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(in_ECX + 0x110);
    *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0x110);
    return;
  }
  FUN_00696590(param_1);
  iVar5 = *(int *)(in_ECX + 0xf8);
  iVar6 = *(int *)(in_ECX + 0xf4);
  if (*(int *)(in_ECX + 0x148) == 0) {
    uVar4 = *(int *)(in_ECX + 0x110) - *(int *)(in_ECX + 0xf8);
    uVar1 = *(int *)(in_ECX + 0x110) - iVar6;
    uVar7 = (int)uVar1 >> 0x1f;
    uVar8 = (int)uVar4 >> 0x1f;
    *(uint *)(in_ECX + 0x148) =
         ((int)((uVar4 ^ uVar8) - uVar8) <= (int)((uVar1 ^ uVar7) - uVar7)) + 1;
  }
  iVar3 = *(int *)(in_ECX + 0x110);
  if (*(int *)(in_ECX + 0x148) == 1) {
    iVar2 = *(int *)(in_ECX + 0xf8);
    local_10 = iVar3;
    if (iVar3 < iVar2) goto LAB_006960b5;
    *(undefined4 *)(in_ECX + 0x148) = 2;
    local_10 = iVar2;
  }
  else {
    local_10 = iVar6;
    if (iVar3 < iVar6) {
      *(undefined4 *)(in_ECX + 0x148) = 1;
      iVar2 = iVar6;
      local_10 = iVar3;
      goto LAB_006960b5;
    }
  }
  iVar2 = local_10;
  if (local_10 < iVar3) {
    iVar2 = iVar3;
  }
LAB_006960b5:
  *(int *)(in_ECX + 0xf8) = iVar2;
  *(int *)(in_ECX + 0xf4) = local_10;
  iVar3 = *(int *)(in_ECX + 0xf8);
  if (*(int *)(in_ECX + 0xf8) < iVar5) {
    iVar3 = iVar5;
  }
  iVar5 = *(int *)(in_ECX + 0xf4);
  if (iVar6 < *(int *)(in_ECX + 0xf4)) {
    iVar5 = iVar6;
  }
  iVar6 = iVar5;
  if (iVar5 < iVar3) {
    iVar6 = iVar3;
  }
  FUN_00696620(iVar5,iVar6);
  return;
}

