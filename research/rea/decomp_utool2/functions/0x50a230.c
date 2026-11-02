// rea decompile_all
// name: FUN_0050a230
// address: 0x50a230
// body: available
// range: 0x50a230-0x50a28d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050a230(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  
  if ((*(byte *)(in_ECX + 0x69) & 0x10) == 0) {
    if ((*(int *)(in_ECX + 0xc) != 0) && (cVar1 = FUN_006e6320(), cVar1 == '\0')) {
      return;
    }
    if ((*(uint *)(param_1 + 0x10) >> 4 & 1) != 0) {
      iVar2 = FUN_00412320();
      *(undefined4 *)(iVar2 + 0x2b0) = *(undefined4 *)(iVar2 + 0x2ac);
      FUN_0050a760();
      FUN_004122d0(extraout_ECX,iVar2);
    }
  }
  return;
}

