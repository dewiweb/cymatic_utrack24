// rea decompile_all
// name: FUN_006324b0
// address: 0x6324b0
// body: available
// range: 0x6324b0-0x6325dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006324b0(int *param_1,undefined4 param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined **ppuVar6;
  int *piVar7;
  int in_ECX;
  int local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x24);
  EnterCriticalSection(lpCriticalSection);
  uVar5 = FUN_0062c730(param_2,*(undefined1 *)(in_ECX + 0x3c),0);
  if (-1 < (int)uVar5) {
    if (uVar5 < *(uint *)(in_ECX + 0x18)) {
      ppuVar6 = (undefined **)(*(int *)(in_ECX + 0x10) + uVar5 * 4);
    }
    else {
      ppuVar6 = &PTR_DAT_00c7ed68;
    }
    puVar1 = *ppuVar6;
    *param_1 = (int)puVar1;
    piVar7 = (int *)(puVar1 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
    return param_1;
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    param_3 = (int *)*param_3;
    piVar7 = param_3 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    piVar7 = (int *)&param_3;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    piVar7 = (int *)FUN_006324b0(&local_8,param_2,param_3);
    bVar4 = true;
    bVar3 = false;
  }
  iVar2 = *piVar7;
  *param_1 = iVar2;
  piVar7 = (int *)(iVar2 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  if (bVar3) {
    piVar7 = param_3 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
  if ((bVar4) && (piVar7 = (int *)(local_8 + -8), piVar7 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_1;
}

