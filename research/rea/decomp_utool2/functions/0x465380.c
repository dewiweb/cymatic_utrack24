// rea decompile_all
// name: FUN_00465380
// address: 0x465380
// body: available
// range: 0x465380-0x46544c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465380(int param_1)

{
  int *in_ECX;
  int *piVar1;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  int local_24;
  int local_20;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700f88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((int *)*in_ECX != (int *)0x0) {
    (**(code **)(*(int *)*in_ECX + 0x2c))(&local_24,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if ((int *)in_ECX[0x15] == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)(**(code **)(*(int *)in_ECX[0x15] + 4))();
    }
    local_8 = 0;
    local_14 = piVar1;
    (**(code **)(*piVar1 + 0x48))(*(undefined4 *)(param_1 + 0x50));
    local_34 = (float)local_24;
    local_3c = 0x3f800000;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0x3f800000;
    local_28 = (float)local_20;
    (**(code **)(*piVar1 + 0x60))(param_1 + 0x54,&local_3c);
    (**(code **)*piVar1)(1);
  }
  ExceptionList = local_10;
  return;
}

