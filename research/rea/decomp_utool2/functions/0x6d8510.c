// rea decompile_all
// name: FUN_006d8510
// address: 0x6d8510
// body: available
// range: 0x6d8510-0x6d8608 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d8510(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uStack_4c;
  undefined4 *local_48;
  float local_44;
  undefined1 local_24 [4];
  void *local_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727727;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_48 = &local_14;
  local_44 = 2.354576e-38;
  uStack_4c = 0x6d854b;
  FUN_006e8e70();
  if (*(char *)(param_4 + 0x84) == '\0') {
    local_44 = (float)param_3 - 1.0;
    local_48 = (undefined4 *)0x0;
  }
  else {
    local_44 = 0.0;
    local_48 = (undefined4 *)((float)param_2 - 1.0);
  }
  FUN_006841a0(&uStack_4c);
  FUN_006840c0(local_14);
  local_8 = 0;
  local_44 = 1.0058068e-38;
  FUN_00683ff0();
  local_8 = 0xffffffff;
  local_44 = 1.0058089e-38;
  FID_conflict__free(local_20);
  local_44 = 1.0058108e-38;
  (**(code **)(*(int *)*param_1 + 0x2c))();
  local_48 = (undefined4 *)local_24;
  local_44 = 0.0;
  uStack_4c = 0x6d85f7;
  (**(code **)(*(int *)*param_1 + 0x54))();
  ExceptionList = local_10;
  return;
}

