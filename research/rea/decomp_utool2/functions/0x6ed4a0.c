// rea decompile_all
// name: FUN_006ed4a0
// address: 0x6ed4a0
// body: available
// range: 0x6ed4a0-0x6ed5a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ed4a0(int param_1)

{
  int in_ECX;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  char local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072913e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006f03a0(&local_24,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  local_38 = local_24;
  local_34 = local_20;
  local_30 = local_1c;
  local_2c = local_18;
  local_28 = '\0';
  local_8 = 1;
  if (*(byte *)(param_1 + 0x3c) < 3) {
    FUN_006f1ef0(&local_24,&local_24,&local_38);
  }
  else {
    FUN_006f2d00(local_1c,0);
    FUN_006f2d00(local_1c + 1,0);
  }
  FUN_006f0a50(&local_24,0);
  FUN_006f0a50(&local_38,1);
  *(undefined4 *)(in_ECX + 0x2fc) = 0;
  if ((local_28 != '\0') && (local_28 = '\0', local_38 != 0)) {
    FUN_00415ff0(&local_38);
  }
  if ((local_14 != '\0') && (local_14 = 0, local_24 != 0)) {
    FUN_00415ff0(&local_24);
  }
  ExceptionList = local_10;
  return;
}

