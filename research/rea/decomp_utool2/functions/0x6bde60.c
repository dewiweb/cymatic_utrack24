// rea decompile_all
// name: FUN_006bde60
// address: 0x6bde60
// body: available
// range: 0x6bde60-0x6bdfc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bde60(float *param_1)

{
  uint uVar1;
  int *in_ECX;
  char *pcVar2;
  undefined **local_24 [2];
  double local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00724de5;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24[0] = &PTR_vftable_00c7ed2c;
  local_1c = (double)*param_1;
  local_8 = 0;
  local_14 = uVar1;
  if (*in_ECX != 0) {
    FUN_00461420(&DAT_00c8aa5c,local_24,0);
  }
  (**(code **)(*local_24[0] + 0x54))(&local_1c,uVar1);
  if (param_1[1] == 0.0) {
    pcVar2 = "miter";
  }
  else {
    pcVar2 = "curved";
    if (param_1[1] != 1.4013e-45) {
      pcVar2 = "bevel";
    }
  }
  local_24[0] = &PTR_vftable_00c7ed4c;
  local_8 = 1;
  FUN_0045c990(pcVar2);
  local_8 = 2;
  if (*in_ECX != 0) {
    FUN_00461420(&DAT_00c8a994,local_24,0);
  }
  (**(code **)(*local_24[0] + 0x54))(&local_1c);
  if (param_1[2] == 0.0) {
    pcVar2 = "butt";
  }
  else {
    pcVar2 = "square";
    if (param_1[2] != 1.4013e-45) {
      pcVar2 = "round";
    }
  }
  local_24[0] = &PTR_vftable_00c7ed4c;
  local_8 = 3;
  FUN_0045c990(pcVar2);
  local_8 = 4;
  if (*in_ECX != 0) {
    FUN_00461420(&DAT_00c8a9d0,local_24,0);
  }
  (**(code **)(*local_24[0] + 0x54))(&local_1c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

