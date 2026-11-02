// rea decompile_all
// name: FUN_004527d0
// address: 0x4527d0
// body: available
// range: 0x4527d0-0x452958 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004527d0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined **local_20;
  undefined8 local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ffe90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x100 < param_3) {
    FUN_0045c990("Recursive symbol references",DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    local_14 = param_1;
    piVar3 = param_1 + -2;
    local_1c = 0;
    local_20 = juce::Expression::Helpers::EvaluationError::vftable;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    __CxxThrowException_8(&local_20,&DAT_00c4d140);
  }
  piVar3 = param_2;
  piVar4 = (int *)(**(code **)(*param_2 + 4))(&param_3);
  local_1c = CONCAT44(*piVar4,(undefined4)local_1c);
  piVar4 = (int *)(*piVar4 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  param_2 = (int *)(in_ECX + 8);
  local_14 = (int *)*param_2;
  piVar4 = (int *)((int)local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_8 = 2;
  (**(code **)(*param_1 + 4))((int)&local_1c + 4);
  piVar4 = (int *)((int)local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_1c._4_4_ + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 0xffffffff;
  piVar4 = (int *)(param_3 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  puVar5 = (undefined4 *)(**(code **)(*piVar3 + 8))(&param_2,param_2);
  local_8 = 3;
  (**(code **)(*(int *)*puVar5 + 0x38))(param_1,piVar3,iVar2 + 1);
  if (param_2 != (int *)0x0) {
    piVar3 = param_2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

