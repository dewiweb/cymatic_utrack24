// rea decompile_all
// name: FUN_005a8780
// address: 0x5a8780
// body: available
// range: 0x5a8780-0x5a886c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a8780(undefined1 *param_1)

{
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717a54;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *in_ECX = SessionSelectorPopup::vftable;
  in_ECX[0x1c] = param_1;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  param_1 = &DAT_00bfe12c;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_006e0be0(&param_1);
  FUN_006dfbd0();
  *extraout_ECX = SessionSelectorPopup::TVItem::vftable;
  extraout_ECX[0xe] = in_ECX;
  extraout_ECX[0xf] = &DAT_00bfe12c;
  extraout_ECX[0x10] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  *(undefined1 *)(extraout_ECX + 0x13) = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_006e0a30(extraout_ECX);
  FUN_006e09a0(extraout_ECX_00);
  (**(code **)(in_ECX[0x21] + 0x28))(1);
  FUN_006e5050(in_ECX + 0x21,0xffffffff);
  ExceptionList = local_10;
  return;
}

