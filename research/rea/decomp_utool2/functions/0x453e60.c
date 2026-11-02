// rea decompile_all
// name: FUN_00453e60
// address: 0x453e60
// body: available
// range: 0x453e60-0x453f95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_00453e60(undefined4 *param_1,undefined4 param_2,int param_3,undefined8 param_4,
            undefined4 *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700156;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004525d0(&param_5,param_2,param_3,param_4,param_5);
  local_8 = 0;
  if (param_5 == (undefined4 *)0x0) {
    *param_1 = 0;
    ExceptionList = local_10;
    return param_1;
  }
  if (param_3 == *(int *)(in_ECX + 8)) {
    puVar4 = operator_new(0x10);
    puVar2 = param_5;
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar5 = (**(code **)(**(int **)(in_ECX + 0xc) + 8))();
    puVar4[1] = 0;
    *puVar4 = juce::Expression::Helpers::BinaryTerm::vftable;
    puVar4[2] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = puVar2[1] + 1;
    }
    puVar4[3] = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    }
    *puVar4 = juce::Expression::Helpers::Multiply::vftable;
  }
  else {
    puVar4 = operator_new(0x10);
    puVar2 = param_5;
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar5 = (**(code **)(**(int **)(in_ECX + 8) + 8))(uVar3);
    puVar4[1] = 0;
    *puVar4 = juce::Expression::Helpers::BinaryTerm::vftable;
    puVar4[2] = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    }
    puVar4[3] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = puVar2[1] + 1;
    }
    *puVar4 = juce::Expression::Helpers::Divide::vftable;
  }
  puVar4[1] = puVar4[1] + 1;
  *param_1 = puVar4;
  if (param_5 != (undefined4 *)0x0) {
    piVar1 = param_5 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_5)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

