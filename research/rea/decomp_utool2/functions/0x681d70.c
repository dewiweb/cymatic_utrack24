// rea decompile_all
// name: FUN_00681d70
// address: 0x681d70
// body: available
// range: 0x681d70-0x681d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00681d70(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  uVar1 = *in_ECX;
  *in_ECX = *param_1;
  *param_1 = uVar1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_1[6];
  in_ECX[3] = param_1[3];
  in_ECX[4] = uVar1;
  in_ECX[5] = uVar2;
  in_ECX[6] = uVar3;
  *(undefined1 *)(in_ECX + 7) = *(undefined1 *)(param_1 + 7);
  return;
}

