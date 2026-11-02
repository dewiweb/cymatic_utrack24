// rea decompile_all
// name: FUN_005b2a40
// address: 0x5b2a40
// body: available
// range: 0x5b2a40-0x5b2bbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b2a40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  char *pcVar5;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718f6c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00634690(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_00635a10(&local_1c,"Cymatic");
  local_8._0_1_ = 1;
  uVar1 = FUN_00635a10(&local_18,"ProjectLib");
  pcVar5 = "ProjectLibraryPath2";
  local_8._0_1_ = 3;
  uVar2 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                       &juce::JUCEApplication::RTTI_Type_Descriptor,0,"ProjectLibraryPath2",uVar1);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar3 = FUN_006f6dd6(uVar2,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                       &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
  if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
    FUN_006394c0();
  }
  FUN_006324b0(&local_14,pcVar5,uVar1);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00627bf0();
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(in_ECX + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

