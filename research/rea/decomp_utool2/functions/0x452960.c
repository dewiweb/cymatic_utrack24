// rea decompile_all
// name: FUN_00452960
// address: 0x452960
// body: available
// range: 0x452960-0x452a3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00452960(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  
  bVar2 = false;
  if (param_1[1] == *(int *)(in_ECX + 8)) {
LAB_00452997:
    piVar4 = (int *)(**(code **)(*param_3 + 4))();
    bVar2 = true;
    if (*piVar4 != *param_1) {
      iVar3 = FUN_00448730(*piVar4);
      if (iVar3 != 0) goto LAB_004529ca;
    }
    bVar1 = true;
  }
  else {
    iVar3 = FUN_00448730(param_1[1]);
    if (iVar3 == 0) goto LAB_00452997;
LAB_004529ca:
    bVar1 = false;
  }
  if ((bVar2) && (param_1 = param_1 + -2, param_1 != &DAT_00bfe124)) {
    LOCK();
    iVar3 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(param_1);
    }
  }
  if (bVar1) {
    piVar4 = (int *)(*param_2 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    LOCK();
    iVar3 = *(int *)(in_ECX + 8);
    *(int *)(in_ECX + 8) = *param_2;
    UNLOCK();
    piVar4 = (int *)(iVar3 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  return;
}

