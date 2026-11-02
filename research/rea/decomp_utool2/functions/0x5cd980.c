// rea decompile_all
// name: FUN_005cd980
// address: 0x5cd980
// body: available
// range: 0x5cd980-0x5cda37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cd980(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(in_ECX + 0x24) + 1;
    if (*(int *)(in_ECX + 0x20) < iVar3) {
      FUN_00409cf0(iVar3 / 2 + 8 + iVar3 & 0xfffffff8);
    }
    iVar3 = *(int *)(in_ECX + 0x24);
    *(int *)(in_ECX + 0x24) = iVar3 + 1;
    *(int *)(*(int *)(in_ECX + 0x1c) + iVar3 * 4) = param_1;
    operator_new(0x60);
    uVar1 = FUN_005ced70();
    iVar3 = *(int *)(in_ECX + 0x30) + 1;
    if (*(int *)(in_ECX + 0x2c) < iVar3) {
      FUN_00409cf0(iVar3 / 2 + *(int *)(in_ECX + 0x30) + 9 & 0xfffffff8);
    }
    iVar3 = *(int *)(in_ECX + 0x30);
    *(int *)(in_ECX + 0x30) = iVar3 + 1;
    *(undefined4 *)(*(int *)(in_ECX + 0x28) + iVar3 * 4) = uVar1;
    uVar2 = -(uint)(*(int *)(in_ECX + 0x220) != 0) & *(int *)(in_ECX + 0x220) + 8U;
    if (uVar2 != 0) {
      FUN_004097d0(uVar2);
    }
  }
  return;
}

