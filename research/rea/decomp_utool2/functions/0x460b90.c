// rea decompile_all
// name: FUN_00460b90
// address: 0x460b90
// body: available
// range: 0x460b90-0x460c31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460b90(undefined4 *param_1)

{
  void *in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_50;
  undefined1 local_4f [63];
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_50 = 0x80;
  local_10 = *(uint *)((int)in_ECX + 0x50);
  local_c = *(undefined4 *)((int)in_ECX + 0x54);
  uVar1 = local_10 >> 3 & 0x3f;
  iVar2 = 0x78 - uVar1;
  if (uVar1 < 0x38) {
    iVar2 = 0x38 - uVar1;
  }
  _memset(local_4f,0,0x3f);
  FUN_00460390(&local_50,iVar2);
  FUN_00460390(&local_10,8);
  *param_1 = *(undefined4 *)((int)in_ECX + 0x40);
  param_1[1] = *(undefined4 *)((int)in_ECX + 0x44);
  param_1[2] = *(undefined4 *)((int)in_ECX + 0x48);
  param_1[3] = *(undefined4 *)((int)in_ECX + 0x4c);
  _memset(in_ECX,0,0x40);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

