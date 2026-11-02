// rea decompile_all
// name: FUN_004014c0
// address: 0x4014c0
// body: available
// range: 0x4014c0-0x40161b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004014c0(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("No error.",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0045c990("Operation canceled {ctxid}.");
  local_8._0_1_ = 1;
  FUN_0045c990("File creation error {ctxid}\n{file}");
  local_8._0_1_ = 2;
  FUN_0045c990("File already exists {ctxid}\n{file}");
  local_8._0_1_ = 3;
  FUN_0045c990("File reading error {ctxid}\n{file}");
  local_8._0_1_ = 4;
  FUN_0045c990("File writing error {ctxid}\n{file}");
  local_8._0_1_ = 5;
  FUN_0045c990("Invalid audio file {ctxid}\n{file}");
  local_8._0_1_ = 6;
  FUN_0045c990("Failed to import {ctxid}\n{file}");
  local_8._0_1_ = 7;
  FUN_0045c990("Missing file {ctxid}\n{file}");
  local_8._0_1_ = 8;
  FUN_0045c990("Content already exists {ctxid}.");
  local_8._0_1_ = 9;
  FUN_0045c990("Previous content deletion {ctxid}\n{file}");
  local_8._0_1_ = 10;
  FUN_0045c990("Failed to open existing project {ctxid}\n{file}");
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_0045c990("Failed to save file {ctxid}\n{file}");
  _atexit((_func_4879 *)&LAB_0072a0c0);
  ExceptionList = local_10;
  return;
}

