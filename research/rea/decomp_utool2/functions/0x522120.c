// rea decompile_all
// name: FUN_00522120
// address: 0x522120
// body: available
// range: 0x522120-0x522247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00522120(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070ab90;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &DAT_00bfe12c;
  local_8 = 0;
  iVar3 = FUN_006f6dd6(param_2,0,&juce::ReferenceCountedObject::RTTI_Type_Descriptor,
                       &SongProjectLibraryNode::RTTI_Type_Descriptor,0,uVar2);
  if ((char)param_3 == '\0') {
    FUN_00410ea0(&param_2);
    local_8 = 2;
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    puVar4 = (undefined4 *)FUN_005448f0(iVar3);
    uVar1 = *param_1;
    *param_1 = *puVar4;
    *puVar4 = uVar1;
  }
  else {
    FUN_00410ea0(&param_2);
    local_8 = 1;
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    puVar4 = (undefined4 *)FUN_005454f0(iVar3);
    uVar1 = *param_1;
    *param_1 = *puVar4;
    *puVar4 = uVar1;
  }
  piVar5 = (int *)(param_3 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(param_2 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

