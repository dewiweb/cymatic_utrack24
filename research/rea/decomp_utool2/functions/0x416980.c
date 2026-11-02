// rea decompile_all
// name: FUN_00416980
// address: 0x416980
// body: available
// range: 0x416980-0x4169ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00416980(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int *piVar4;
  int in_ECX;
  bool bVar5;
  int local_8;
  
  local_8 = 0;
  bVar5 = *(int *)(in_ECX + 8) == 0;
  if (bVar5) {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  else {
    ppuVar3 = (undefined **)FUN_00410a10(&local_8);
  }
  puVar2 = *ppuVar3;
  *param_1 = (int)puVar2;
  piVar4 = (int *)(puVar2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  if ((!bVar5) && (piVar4 = (int *)(local_8 + -8), piVar4 != &DAT_00bfe124)) {
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

