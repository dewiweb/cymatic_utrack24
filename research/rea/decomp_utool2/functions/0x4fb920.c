// rea decompile_all
// name: FUN_004fb920
// address: 0x4fb920
// body: available
// range: 0x4fb920-0x4fbabb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb920(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706aa7;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_1 == 3) || (param_1 == 2)) && (*(int *)(in_ECX + 0xdec) == 0))
  goto switchD_004fb96f_default;
  *(int *)(in_ECX + 0xdec) = param_1;
  switch(param_1) {
  case 0:
    FUN_0045c990(&DAT_0073990c,uVar1);
    local_8 = 0;
    FUN_006e4900(&param_1,0);
    local_8 = 0xffffffff;
    FUN_00637c10();
    uVar2 = DAT_00c7ef78;
    break;
  case 1:
    FUN_006e4900(&PTR_DAT_00c7ed68,0);
    FUN_006e6170(0x1000280,DAT_00c8a948);
    uVar2 = DAT_00c8a948;
    goto LAB_004fba8d;
  case 2:
  case 3:
    FUN_0045c990("Modified",uVar1);
    local_8 = 1;
    FUN_006e4900(&param_1,0);
    local_8 = 0xffffffff;
    FUN_00637c10();
    uVar2 = DAT_00c7ebb0;
    break;
  case 4:
    FUN_0045c990("Saved",uVar1);
    local_8 = 2;
    FUN_006e4900(&param_1,0);
    local_8 = 0xffffffff;
    FUN_00637c10();
    uVar2 = DAT_00c7ef74;
    break;
  default:
    goto switchD_004fb96f_default;
  }
  FUN_006e6170(0x1000280,uVar2);
  uVar2 = DAT_00c7ef94;
LAB_004fba8d:
  FUN_006e6170(0x1000281,uVar2);
switchD_004fb96f_default:
  FUN_004fbe50();
  ExceptionList = local_10;
  return;
}

