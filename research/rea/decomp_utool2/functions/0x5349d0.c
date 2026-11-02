// rea decompile_all
// name: FUN_005349d0
// address: 0x5349d0
// body: available
// range: 0x5349d0-0x534a4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005349d0(undefined4 *param_1)

{
  int in_ECX;
  undefined4 *puStack_24;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  FUN_006841a0(&puStack_24);
  FUN_00684c50();
  local_10 = (float)(*(int *)(in_ECX + 0x18) + -4);
  if (4.0 < local_10) {
    local_10 = local_10 - 4.0;
    local_18 = 0x40800000;
    puStack_24 = &local_18;
    local_c = 0x3f800000;
    local_14 = (float)(*(int *)(in_ECX + 0x1c) / 2);
    (**(code **)(*(int *)*param_1 + 0x50))();
  }
  return;
}

