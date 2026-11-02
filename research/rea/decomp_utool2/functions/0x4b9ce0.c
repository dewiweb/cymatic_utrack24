// rea decompile_all
// name: FUN_004b9ce0
// address: 0x4b9ce0
// body: available
// range: 0x4b9ce0-0x4b9d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9ce0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 0x2c84)) {
    FUN_004b9700();
  }
  if (*(int *)(in_ECX + 100) != 0) {
    if (0 < *(int *)(in_ECX + 0x2c84)) {
      FUN_004b9700();
    }
    iVar1 = *(int *)(in_ECX + 100);
    iVar2 = *(int *)(in_ECX + 0x5c);
    (**(code **)(iVar2 + 0x5c))(*(undefined4 *)(iVar1 + 0x10));
    (**(code **)(iVar2 + 0x5c))(*(undefined4 *)(iVar1 + 0x14));
    *(undefined4 *)(in_ECX + 100) = 0;
    (**(code **)(*(int *)(in_ECX + 0x5c) + 0x38))(0);
  }
  return;
}

