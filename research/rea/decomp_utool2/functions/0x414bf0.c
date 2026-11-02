// rea decompile_all
// name: FUN_00414bf0
// address: 0x414bf0
// body: available
// range: 0x414bf0-0x414ca5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00414bf0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  undefined **ppuVar5;
  int *piVar6;
  int in_ECX;
  int local_c;
  undefined *local_8;
  
  local_c = 0;
  if (*(int *)(in_ECX + 8) == 0) {
    local_8 = PTR_DAT_00c7ed68;
    piVar6 = (int *)(PTR_DAT_00c7ed68 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    ppuVar5 = &local_8;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    ppuVar5 = (undefined **)FUN_00410ad0(&local_c);
    bVar4 = true;
    bVar3 = false;
  }
  puVar2 = *ppuVar5;
  *param_1 = (int)puVar2;
  piVar6 = (int *)(puVar2 + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  if (bVar3) {
    piVar6 = (int *)(local_8 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if ((bVar4) && (piVar6 = (int *)(local_c + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  return param_1;
}

