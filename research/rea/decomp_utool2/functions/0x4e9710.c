// rea decompile_all
// name: FUN_004e9710
// address: 0x4e9710
// body: available
// range: 0x4e9710-0x4e979e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e9710(undefined4 param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 900) != 0) {
    *(undefined4 *)(in_ECX + 900) = 0;
    FUN_00696ef0(in_ECX + 0x364);
  }
  FUN_006e6170(0x1000200,DAT_00c8a720);
  FUN_006e6170(0x1000201,DAT_00c7ebb4);
  FUN_006e55f0(param_1,0);
  if (*(int *)(in_ECX + 0x268) != in_ECX) {
    (**(code **)(*(int *)(in_ECX + 0x25c) + 0x28))(1);
    FUN_006e5050((int *)(in_ECX + 0x25c),0xffffffff);
  }
  return;
}

