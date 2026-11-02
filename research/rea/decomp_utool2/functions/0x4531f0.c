// rea decompile_all
// name: FUN_004531f0
// address: 0x4531f0
// body: available
// range: 0x4531f0-0x453322 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004531f0(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int in_ECX;
  uint uStack_48;
  undefined **local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined **local_24;
  undefined8 local_20;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fffa0;
  local_10 = ExceptionList;
  uStack_48 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_48;
  ExceptionList = &local_10;
  puVar2 = &uStack_48;
  if (0x100 < param_4) {
    FUN_0045c990("Recursive symbol references");
    local_8 = 0;
    local_18 = param_1;
    piVar3 = (int *)(param_1 + -8);
    local_20 = 0;
    local_24 = juce::Expression::Helpers::EvaluationError::vftable;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    __CxxThrowException_8(&local_24,&DAT_00c4d140);
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  (**(code **)(**(int **)(in_ECX + 8) + 0x34))(param_1,param_2,param_3,param_4);
  local_34 = *(undefined4 **)(in_ECX + 0xc);
  local_38 = juce::Expression::Helpers::DotOperator::SymbolRenamingVisitor::vftable;
  if (local_34 != (undefined4 *)0x0) {
    local_34[1] = local_34[1] + 1;
  }
  local_30 = param_1;
  local_2c = *param_2;
  piVar3 = (int *)(local_2c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_28 = param_4 + 1;
  local_8 = 2;
  (**(code **)(*param_3 + 0x10))(*(int *)(in_ECX + 8) + 8,&local_38);
  piVar3 = (int *)(local_2c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (local_34 != (undefined4 *)0x0) {
    piVar3 = local_34 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*local_34)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

