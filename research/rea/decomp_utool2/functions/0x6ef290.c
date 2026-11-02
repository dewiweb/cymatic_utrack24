// rea decompile_all
// name: FUN_006ef290
// address: 0x6ef290
// body: available
// range: 0x6ef290-0x6ef36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006ef290(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729543;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ee820(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_24 = *(int **)(in_ECX + 0x7c);
  local_14 = '\0';
  local_1c = local_24[2];
  if (local_1c == 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
  }
  else {
    if (local_1c < 1) {
      local_1c = local_1c + -1;
      iVar1 = *(int *)(*local_24 + local_1c * 4);
      local_18 = *(int *)(iVar1 + 0xc);
      local_20 = *(int *)(iVar1 + 4);
    }
    else {
      local_1c = 0;
      iVar1 = *(int *)(*(int *)*local_24 + 0xc);
      local_18 = 0;
      if ((0 < iVar1) && (iVar1 < 0)) {
        local_18 = iVar1;
      }
      local_20 = *(int *)(*(int *)*local_24 + 4);
    }
    local_20 = local_20 + local_18;
  }
  local_8 = 0;
  FUN_006f0a50(&local_24,param_1);
  if ((local_14 != '\0') && (local_14 = 0, local_24 != (int *)0x0)) {
    FUN_00415ff0(&local_24);
  }
  ExceptionList = local_10;
  return 1;
}

