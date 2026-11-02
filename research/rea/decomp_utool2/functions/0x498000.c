// rea decompile_all
// name: FUN_00498000
// address: 0x498000
// body: available
// range: 0x498000-0x498107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00498000(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702802;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    local_18 = operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  iVar1 = FUN_006cac60(param_2,param_3);
  local_28 = *(undefined4 *)(iVar1 + 0x10);
  local_24 = *(undefined4 *)(iVar1 + 0x14);
  local_20 = *(undefined4 *)(iVar1 + 0x18);
  local_1c = *(undefined4 *)(iVar1 + 0x1c);
  if (*(int *)(in_ECX + 0xb0) == 0) {
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = local_20;
    param_1[3] = local_1c;
    ExceptionList = local_10;
    return param_1;
  }
  puVar5 = &local_28;
  puVar4 = local_38;
  uVar3 = 2;
  puVar2 = local_48;
  FUN_006d2360(local_58);
  FUN_00418db0(puVar2,uVar3);
  uVar3 = FUN_0044db90(puVar4,puVar5);
  FUN_006d37f0(param_1,0,uVar3);
  ExceptionList = local_10;
  return param_1;
}

