// rea decompile_all
// name: FUN_00496a90
// address: 0x496a90
// body: available
// range: 0x496a90-0x496b76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00496a90(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int in_ECX;
  int local_c;
  int local_8;
  
  if (**(char **)(in_ECX + 0x8c) == '\0') {
    local_8 = *(int *)(in_ECX + 0x70);
    piVar4 = (int *)(*(int *)(in_ECX + 0x70) + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    piVar4 = &local_8;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x70);
    piVar4 = (int *)(iVar1 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    FUN_006377c0(iVar1);
    piVar4 = (int *)FUN_00637730(in_ECX);
    bVar3 = true;
    bVar2 = false;
  }
  iVar1 = *piVar4;
  *param_1 = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  if (bVar2) {
    piVar4 = (int *)(local_8 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  if ((bVar3) && (piVar4 = (int *)(local_c + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  return param_1;
}

