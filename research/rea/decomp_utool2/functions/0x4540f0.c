// rea decompile_all
// name: FUN_004540f0
// address: 0x4540f0
// body: available
// range: 0x4540f0-0x45427f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004540f0(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700190;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)**(undefined4 **)(in_ECX + 4) == '\0') {
    puVar3 = operator_new(0x18);
    *puVar3 = juce::Expression::Helpers::Constant::vftable;
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    *param_1 = (int)puVar3;
    puVar3[1] = 1;
    ExceptionList = local_10;
    return param_1;
  }
  FUN_00454650(&local_18);
  local_8 = 0;
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = FUN_004542d0(&DAT_00c17844,0);
    if ((cVar1 != '\0') || (*(char *)**(undefined4 **)(in_ECX + 4) == '\0')) {
      iVar5 = local_18[1];
      local_18[1] = iVar5;
      *param_1 = (int)local_18;
      if (iVar5 == 0) {
        (**(code **)*local_18)(1);
      }
      ExceptionList = local_10;
      return param_1;
    }
  }
  uVar4 = **(undefined4 **)(in_ECX + 4);
  FUN_0045cb50(uVar4,uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00637690(&local_14);
  uVar4 = FUN_006377c0(uVar4);
  iVar5 = FUN_00454280(uVar4);
  *param_1 = iVar5;
  if (iVar5 != 0) {
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
  }
  piVar6 = (int *)(local_1c + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_14 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  if (local_18 != (undefined4 *)0x0) {
    piVar6 = local_18 + 1;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*local_18)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

