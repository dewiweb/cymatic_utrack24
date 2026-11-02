// rea decompile_all
// name: FUN_0069e1f0
// address: 0x69e1f0
// body: available
// range: 0x69e1f0-0x69e290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069e1f0(void)

{
  float *in_EDX;
  undefined1 auStack_30 [4];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_30;
  local_24 = in_EDX[2];
  local_2c = *in_EDX;
  local_28 = in_EDX[1];
  local_20 = in_EDX[3];
  local_1c = in_EDX[4];
  local_18 = in_EDX[5];
  local_14 = in_EDX[2] + (in_EDX[4] - local_2c);
  local_10 = in_EDX[3] + (local_18 - local_28);
  FUN_004af560();
  __security_check_cookie(local_c ^ (uint)auStack_30);
  return;
}

