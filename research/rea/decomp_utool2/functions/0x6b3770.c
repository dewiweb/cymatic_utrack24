// rea decompile_all
// name: FUN_006b3770
// address: 0x6b3770
// body: available
// range: 0x6b3770-0x6b37cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006b3770(void)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = in_ECX;
  FUN_0063aae0(&local_8);
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x1c)) {
    piVar1 = *(int **)(in_ECX + 0x14);
    do {
      iVar3 = *piVar1;
      if (*(int *)(iVar3 + 4) == local_8) goto LAB_006b37a4;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x1c));
  }
  iVar3 = 0;
LAB_006b37a4:
  piVar1 = (int *)(local_8 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  return iVar3;
}

