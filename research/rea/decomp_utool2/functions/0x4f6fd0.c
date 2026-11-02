// rea decompile_all
// name: FUN_004f6fd0
// address: 0x4f6fd0
// body: available
// range: 0x4f6fd0-0x4f728d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6fd0(undefined4 param_1,float param_2,undefined4 param_3,int param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706408;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_2 = param_2 * 0.9;
  FUN_00684c50();
  FUN_00472db0(param_2);
  FUN_00684310();
  FUN_00684d10();
  FUN_00684c50();
  FUN_00472db0(param_2);
  FUN_00683310();
  FUN_00684c50();
  if (param_4 == 1) {
    local_8 = 0;
    FUN_00682e50();
    FUN_00682d90();
    FUN_00682d90();
    FUN_00682be0();
    FID_conflict__free((void *)0x0);
  }
  else if (param_4 == 2) {
    FUN_00472db0(param_2 - 4.0);
    FUN_00684310();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}

