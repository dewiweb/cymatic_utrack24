// rea decompile_all
// name: FUN_005b0900
// address: 0x5b0900
// body: available
// range: 0x5b0900-0x5b0ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0900(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  int local_34;
  int local_30;
  int local_2c;
  char local_25;
  undefined **local_24;
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718985;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar2 = false;
  bVar1 = false;
  local_2c = 0;
  if ((undefined *)*in_ECX != PTR_DAT_00c7ed54) {
    iVar3 = FUN_0045c1e0(*in_ECX);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_005b2c70();
      local_8 = 0;
      bVar2 = true;
      bVar1 = false;
      local_2c = 1;
      if (*piVar4 != *in_ECX) {
        iVar3 = FUN_0045c1e0(*piVar4);
        if (iVar3 != 0) {
          puVar5 = (undefined4 *)FUN_00634890();
          bVar2 = true;
          bVar1 = true;
          local_25 = '\x01';
          if (*(char *)*puVar5 == '\0') goto LAB_005b09a5;
        }
      }
    }
  }
  local_25 = '\0';
LAB_005b09a5:
  if (bVar1) {
    piVar4 = (int *)(local_34 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  local_8 = 0xffffffff;
  if ((bVar2) && (piVar4 = (int *)(local_30 + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (local_25 != '\0') {
    local_1c = *in_ECX;
    piVar4 = (int *)(local_1c + -8);
    local_24 = &PTR_vftable_00c7ed4c;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_8 = 1;
    FUN_0045c990();
    local_8._0_1_ = 3;
    uVar6 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                         &juce::JUCEApplication::RTTI_Type_Descriptor,0);
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar3 = FUN_006f6dd6(uVar6,0,&juce::JUCEApplication::RTTI_Type_Descriptor,
                         &PlaylistEditorApplication::RTTI_Type_Descriptor,0);
    if (*(int *)(*(int *)(iVar3 + 0x24) + 0x20) == 0) {
      FUN_006394c0();
    }
    FUN_006323b0(&local_2c);
    piVar4 = (int *)(local_2c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = 0xffffffff;
    (**(code **)(*local_24 + 0x54))();
    FUN_00560770();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

