// rea decompile_all
// name: FUN_00613070
// address: 0x613070
// body: available
// range: 0x613070-0x6131e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613070(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_ECX;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071cb56;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pcVar1 = (char *)*param_3;
  if (*pcVar1 == '\0') {
    param_3 = (undefined4 *)*param_1;
    piVar6 = (undefined4 *)*param_1 + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    piVar6 = (int *)&param_3;
    bVar4 = true;
    bVar3 = false;
  }
  else {
    piVar6 = (int *)(pcVar1 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    puVar7 = in_ECX;
    puVar8 = in_ECX;
    FUN_006377c0(pcVar1);
    FUN_00637730(puVar7);
    piVar6 = (int *)FUN_006377c0(puVar8);
    bVar4 = false;
    bVar3 = true;
  }
  puVar7 = param_3;
  *in_ECX = juce::FileFilter::vftable;
  iVar2 = *piVar6;
  in_ECX[1] = iVar2;
  piVar6 = (int *)(iVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  local_8 = 1;
  if (bVar3) {
    piVar6 = (int *)(local_14 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if ((bVar4) && (piVar6 = puVar7 + -2, piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  *in_ECX = juce::WildcardFileFilter::vftable;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_00613270(uVar5);
  FUN_00613270();
  ExceptionList = local_10;
  return;
}

