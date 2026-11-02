// rea decompile_all
// name: FUN_00430960
// address: 0x430960
// body: available
// range: 0x430960-0x4309cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00430960(undefined4 param_1,undefined4 param_2,char param_3)

{
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 local_3c;
  uint local_38 [12];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  _memset(local_38,0,0x30);
  local_3c = param_2;
  local_38[0] = (uint)(param_3 != '\0');
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x48))(&local_3c);
  FUN_004308c0(extraout_ECX);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

