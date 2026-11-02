// rea decompile_all
// name: FUN_006cf480
// address: 0x6cf480
// body: available
// range: 0x6cf480-0x6cf4f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006cf480(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  if (puVar1 == (undefined4 *)0x0) {
    local_20 = 0x3f800000;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    local_10 = 0x3f800000;
    local_c = 0;
  }
  else {
    local_20 = *puVar1;
    uStack_1c = puVar1[1];
    uStack_18 = puVar1[2];
    uStack_14 = puVar1[3];
    local_10 = puVar1[4];
    local_c = puVar1[5];
  }
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  param_1[3] = uStack_14;
  param_1[4] = local_10;
  *param_1 = local_20;
  param_1[5] = local_c;
  return param_1;
}

