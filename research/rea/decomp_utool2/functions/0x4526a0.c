// rea decompile_all
// name: FUN_004526a0
// address: 0x4526a0
// body: available
// range: 0x4526a0-0x452774 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004526a0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  int extraout_ECX;
  undefined **local_24;
  undefined8 local_20;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ffe50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  if (0x100 < param_3) {
    FUN_0045c990("Recursive symbol references",DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    local_18 = param_3;
    piVar2 = (int *)(param_3 + -8);
    local_20 = 0;
    local_24 = juce::Expression::Helpers::EvaluationError::vftable;
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    __CxxThrowException_8(&local_24,&DAT_00c4d140);
    in_ECX = extraout_ECX;
  }
  piVar2 = param_2;
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 8))(&param_2,in_ECX + 8);
  local_8 = 1;
  (**(code **)(*(int *)*puVar3 + 0xc))(param_1,piVar2,iVar1 + 1);
  if (param_2 != (int *)0x0) {
    piVar2 = param_2 + 1;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

