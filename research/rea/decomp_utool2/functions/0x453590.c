// rea decompile_all
// name: FUN_00453590
// address: 0x453590
// body: available
// range: 0x453590-0x4536b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00453590(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  bool bVar4;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700068;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_00453fa0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_14 = operator_new(0xc);
  local_8 = 0;
  bVar4 = piVar3 != (int *)0x0;
  if (bVar4) {
    piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))(&local_18,param_2);
  }
  else {
    param_5 = operator_new(0x18);
    *param_5 = juce::Expression::Helpers::Constant::vftable;
    *(undefined8 *)(param_5 + 2) = param_4;
    *(undefined1 *)(param_5 + 4) = 0;
    param_5[1] = 1;
    piVar3 = (int *)&param_5;
  }
  puVar2 = param_5;
  local_14[1] = 0;
  *local_14 = juce::Expression::Helpers::Negate::vftable;
  iVar1 = *piVar3;
  local_14[2] = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  local_14[1] = local_14[1] + 1;
  *param_1 = local_14;
  if (bVar4) {
    if (local_18 != (undefined4 *)0x0) {
      piVar3 = local_18 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*local_18)(1);
      }
    }
  }
  if ((!bVar4) && (puVar2 != (undefined4 *)0x0)) {
    piVar3 = puVar2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

