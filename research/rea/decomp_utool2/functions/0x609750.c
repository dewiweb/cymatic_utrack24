// rea decompile_all
// name: FUN_00609750
// address: 0x609750
// body: available
// range: 0x609750-0x60984c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00609750(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  int local_8;
  
  piVar4 = (int *)(*(int *)(in_ECX + 0x80) + -8);
  local_8 = in_ECX;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *(undefined1 **)(in_ECX + 0x80) = &DAT_00bfe12c;
  piVar4 = (int *)(*(int *)(in_ECX + 0x84) + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  *(undefined1 **)(in_ECX + 0x84) = &DAT_00bfe12c;
  if (0 < *(int *)(in_ECX + 0x10)) {
    puVar3 = (undefined4 *)FUN_00608e40(&local_8);
    uVar2 = *(undefined4 *)(in_ECX + 0x80);
    *(undefined4 *)(in_ECX + 0x80) = *puVar3;
    *puVar3 = uVar2;
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
  if (0 < *(int *)(in_ECX + 0x1c)) {
    puVar3 = (undefined4 *)FUN_00608e40(&local_8);
    uVar2 = *(undefined4 *)(in_ECX + 0x84);
    *(undefined4 *)(in_ECX + 0x84) = *puVar3;
    *puVar3 = uVar2;
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
  return;
}

