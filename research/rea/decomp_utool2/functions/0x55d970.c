// rea decompile_all
// name: FUN_0055d970
// address: 0x55d970
// body: available
// range: 0x55d970-0x55da91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0055d970(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  undefined1 local_20 [8];
  int local_18;
  
  iVar6 = 0;
  if (0 < *(int *)(in_ECX + 100)) {
    do {
      piVar3 = (int *)FUN_00412c20(local_20,iVar6);
      piVar5 = (int *)(local_18 + -8);
      iVar2 = *piVar3;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      if (iVar2 == param_1) {
        return *(int *)(in_ECX + 0x5c) + iVar6 * 0x18;
      }
      piVar3 = (int *)FUN_00412c20(local_20,iVar6);
      piVar5 = (int *)(local_18 + -8);
      iVar2 = *piVar3;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    } while ((iVar2 <= param_1) && (iVar6 = iVar6 + 1, iVar6 < *(int *)(in_ECX + 100)));
  }
  uVar4 = FUN_00558df0(param_1);
  FUN_00418430(iVar6,uVar4);
  piVar3 = (int *)(local_18 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  return *(int *)(in_ECX + 0x5c) + iVar6 * 0x18;
}

