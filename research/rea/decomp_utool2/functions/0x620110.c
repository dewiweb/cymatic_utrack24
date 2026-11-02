// rea decompile_all
// name: FUN_00620110
// address: 0x620110
// body: available
// range: 0x620110-0x620183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00620110(int param_1,undefined1 *param_2)

{
  int iVar1;
  int *in_ECX;
  undefined1 *puStack_34;
  undefined1 auStack_2c [24];
  uint uStack_14;
  undefined1 local_d;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_2c;
  if ((int)param_2 < 0) {
    puStack_34 = (undefined1 *)-(int)(param_2 + (param_1 != 0));
    iVar1 = FUN_006104e0(-param_1);
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    puStack_34 = param_2;
    iVar1 = FUN_006104e0(param_1);
  }
  puStack_34 = &local_d + -iVar1;
  (**(code **)(*in_ECX + 0x10))(iVar1);
  __security_check_cookie(uStack_14 ^ (uint)&puStack_34);
  return;
}

