// rea decompile_all
// name: FUN_0066b700
// address: 0x66b700
// body: available
// range: 0x66b700-0x66b7ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0066b700(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  *(undefined4 *)(iVar1 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xbc) != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    FUN_0066bb00();
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    do {
      FUN_0066be00(1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x100));
  }
  **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = *(undefined4 *)(iVar1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0xbc);
  if (uVar2 != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(uint *)(iVar1 + 0x44) = uVar2;
      uVar2 = *(int *)(iVar1 + 0x48) + 1U & 7;
      *(uint *)(iVar1 + 0x48) = uVar2;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

