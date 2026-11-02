// rea decompile_all
// name: FUN_006c8ce0
// address: 0x6c8ce0
// body: available
// range: 0x6c8ce0-0x6c8e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c8ce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  float fVar1;
  float fVar2;
  float in_XMM2_Da;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  
  local_8 = in_XMM2_Da;
  FUN_006e3660(param_1);
  *in_ECX = juce::ArrowButton::vftable;
  in_ECX[0x1c] = juce::ArrowButton::vftable;
  in_ECX[0x38] = param_2;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  *(undefined1 *)(in_ECX + 0x40) = 1;
  FUN_006824f0(0x3f800000,0x3f800000,0x3f000000);
  fVar1 = local_8 * 6.2831855;
  local_8 = fVar1;
  FUN_004363f0();
  fVar2 = local_8;
  FUN_00436470();
  local_20 = -fVar2;
  local_1c = (fVar2 * 0.5 - fVar1 * 0.5) + 0.5;
  local_10 = 0.5 - (fVar1 * 0.5 + fVar2 * 0.5);
  local_24 = fVar1;
  local_18 = fVar2;
  local_14 = fVar1;
  FUN_00680060(&local_24);
  return;
}

