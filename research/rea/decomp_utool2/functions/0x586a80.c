// rea decompile_all
// name: FUN_00586a80
// address: 0x586a80
// body: available
// range: 0x586a80-0x586bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00586a80(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 uVar4;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007133dd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  piVar2 = (int *)FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor);
  local_8 = 0xffffffff;
  piVar2 = (int *)(**(code **)(*piVar2 + 4))();
  local_8 = 1;
  bVar1 = false;
  if (*(int *)(in_ECX + 0x2c) == *piVar2) {
LAB_00586b19:
    local_8 = 2;
    piVar2 = (int *)FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                                 &juce::JUCEApplication::RTTI_Type_Descriptor);
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar2 = (int *)(**(code **)(*piVar2 + 8))();
    bVar1 = true;
    if (*(int *)(in_ECX + 0x30) != *piVar2) {
      iVar3 = FUN_00448730(*(undefined4 *)(in_ECX + 0x30));
      if (0 < iVar3) {
        uVar4 = 1;
        goto LAB_00586b7a;
      }
    }
  }
  else {
    iVar3 = FUN_00448730(*(undefined4 *)(in_ECX + 0x2c));
    if (iVar3 == 0) goto LAB_00586b19;
  }
  uVar4 = 0;
LAB_00586b7a:
  if ((bVar1) && (piVar2 = (int *)(local_1c + -8), piVar2 != &DAT_00bfe124)) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_20 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return uVar4;
}

