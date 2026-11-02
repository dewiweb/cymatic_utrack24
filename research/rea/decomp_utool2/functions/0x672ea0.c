// rea decompile_all
// name: FUN_00672ea0
// address: 0x672ea0
// body: available
// range: 0x672ea0-0x672f54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00672ea0(undefined4 *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int *in_ECX;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00720325;
  local_10 = ExceptionList;
  piVar1 = (int *)*in_ECX;
  if ((((piVar1 != (int *)0x0) && (param_2 < (uint)piVar1[3])) && (piVar1 != (int *)0x0)) &&
     (param_3 < (uint)piVar1[4])) {
    local_1c = 1;
    local_18 = 1;
    local_14 = (undefined4 *)0x0;
    local_8 = 0;
    ExceptionList = &local_10;
    (**(code **)(*piVar1 + 0x10))(local_2c,param_2,param_3,0,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    FUN_006730b0(param_1,0,0);
    if (local_14 != (undefined4 *)0x0) {
      (**(code **)*local_14)(1);
    }
    ExceptionList = local_10;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

