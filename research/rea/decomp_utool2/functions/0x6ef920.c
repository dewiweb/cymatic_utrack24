// rea decompile_all
// name: FUN_006ef920
// address: 0x6ef920
// body: available
// range: 0x6ef920-0x6efae0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006ef920(char param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729622;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ee820(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (((char)param_2 != '\0') && (*(int *)(in_ECX + 0x2fc) == 0)) {
    local_38 = *(int *)(in_ECX + 0xc4);
    local_34 = *(undefined4 *)(in_ECX + 200);
    local_30 = *(undefined4 *)(in_ECX + 0xcc);
    local_2c = *(undefined4 *)(in_ECX + 0xd0);
    local_28 = '\0';
    local_24 = *(int *)(in_ECX + 0xd8);
    local_20 = *(undefined4 *)(in_ECX + 0xdc);
    local_1c = *(undefined4 *)(in_ECX + 0xe0);
    local_18 = *(undefined4 *)(in_ECX + 0xe4);
    local_14 = '\0';
    local_8 = 1;
    FUN_006f0a50(&local_24,0);
    FUN_006f0a50(&local_38,1);
    if ((local_14 != '\0') && (local_14 = '\0', local_24 != 0)) {
      FUN_00415ff0(&local_24);
    }
    local_8 = 0xffffffff;
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != 0)) {
      FUN_00415ff0(&local_38);
    }
    *(undefined4 *)(in_ECX + 0x2fc) = 1;
  }
  if (((((*(int *)(in_ECX + 200) == *(int *)(in_ECX + 0xdc)) &&
        (*(int *)(in_ECX + 0xcc) == *(int *)(in_ECX + 0xe0))) &&
       (*(int *)(in_ECX + 0xd0) == *(int *)(in_ECX + 0xe4))) &&
      (*(int *)(in_ECX + 0xc4) == *(int *)(in_ECX + 0xd8))) || ((char)param_2 != '\0')) {
    if (param_1 == '\0') {
      uVar1 = FUN_006f2b80(&local_38,0xffffffff);
      local_8 = 3;
      goto LAB_006efaa6;
    }
  }
  else if (param_1 == '\0') {
    FUN_006f0a50((int *)(in_ECX + 0xc4),0);
    ExceptionList = local_10;
    return 1;
  }
  uVar1 = FUN_006f2060(&local_38,in_ECX + 0xb0);
  local_8 = 2;
LAB_006efaa6:
  FUN_006f0a50(uVar1,param_2);
  if ((local_28 != '\0') && (local_28 = 0, local_38 != 0)) {
    FUN_00415ff0(&local_38);
  }
  ExceptionList = local_10;
  return 1;
}

