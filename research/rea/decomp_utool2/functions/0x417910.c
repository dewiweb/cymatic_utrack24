// rea decompile_all
// name: FUN_00417910
// address: 0x417910
// body: available
// range: 0x417910-0x4179b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00417910(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  int *in_ECX;
  
  uVar4 = in_ECX[2];
  if (param_1 < uVar4) {
    piVar1 = (int *)(*in_ECX + param_1 * 4);
    piVar6 = (int *)(PTR_DAT_00c7ed54 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = (int)PTR_DAT_00c7ed54;
    UNLOCK();
    piVar6 = (int *)(iVar3 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
        return;
      }
    }
  }
  else if (-1 < (int)param_1) {
    if (in_ECX[1] < (int)(uVar4 + 1)) {
      FUN_00409cf0((int)(uVar4 + 1) / 2 + uVar4 + 9 & 0xfffffff8);
    }
    iVar3 = in_ECX[2];
    in_ECX[2] = iVar3 + 1;
    puVar5 = PTR_DAT_00c7ed54;
    puVar2 = (undefined4 *)(*in_ECX + iVar3 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = PTR_DAT_00c7ed54;
      piVar6 = (int *)(puVar5 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
    }
  }
  return;
}

