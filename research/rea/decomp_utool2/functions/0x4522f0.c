// rea decompile_all
// name: FUN_004522f0
// address: 0x4522f0
// body: available
// range: 0x4522f0-0x452406 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004522f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *in_ECX;
  float10 fVar6;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ffdd1;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18._4_4_ = in_ECX;
  local_20 = operator_new(0x18);
  local_8 = 0;
  puVar5 = (undefined4 *)(**(code **)(*(int *)in_ECX[3] + 0xc))(&local_28,param_2,param_3,uVar4);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)*puVar5;
  local_1c = 1;
  puVar5 = (undefined4 *)(**(code **)(*(int *)local_18._4_4_[2] + 0xc))(&local_24,param_2,param_3);
  local_8 = 2;
  piVar2 = (int *)*puVar5;
  local_1c = 3;
  iVar3 = *local_18._4_4_;
  fVar6 = (float10)(**(code **)(*piVar1 + 0x14))();
  fVar6 = (float10)(**(code **)(*piVar2 + 0x14))((double)fVar6);
  fVar6 = (float10)(**(code **)(iVar3 + 0x3c))((double)fVar6);
  local_18 = (double)fVar6;
  *local_20 = juce::Expression::Helpers::Constant::vftable;
  *(double *)(local_20 + 2) = local_18;
  *(undefined1 *)(local_20 + 4) = 0;
  local_20[1] = 1;
  *param_1 = local_20;
  if (local_24 != (undefined4 *)0x0) {
    piVar1 = local_24 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_24)(1);
    }
  }
  if (local_28 != (undefined4 *)0x0) {
    piVar1 = local_28 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_28)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

