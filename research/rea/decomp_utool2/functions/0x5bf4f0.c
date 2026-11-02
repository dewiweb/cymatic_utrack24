// rea decompile_all
// name: FUN_005bf4f0
// address: 0x5bf4f0
// body: available
// range: 0x5bf4f0-0x5bf5ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bf4f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  void *local_98;
  undefined1 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071a3f1;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_a8 = *param_1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  local_8 = 0;
  local_a4 = param_3;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_14 = 0;
  FUN_004259d0(param_1[3],param_2);
  local_8 = 1;
  FUN_00425e30(&local_a8,extraout_ECX);
  (**(code **)(*in_ECX + 0x28))(in_ECX + 9,0,param_3,uVar1);
  FUN_00425eb0(in_ECX + 9,extraout_ECX_00);
  FID_conflict__free(local_98);
  ExceptionList = local_10;
  return;
}

