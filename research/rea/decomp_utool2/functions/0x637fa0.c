// rea decompile_all
// name: FUN_00637fa0
// address: 0x637fa0
// body: available
// range: 0x637fa0-0x638012 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00637fa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  undefined1 auStack_6c [68];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_6c;
  local_28 = 0x67452301;
  local_24 = 0xefcdab89;
  local_20 = 0x98badcfe;
  local_1c = 0x10325476;
  local_18 = 0;
  local_14 = 0;
  FUN_00460390(param_1,param_2);
  FUN_00460b90(in_ECX);
  __security_check_cookie(local_c ^ (uint)auStack_6c);
  return;
}

