// rea decompile_all
// name: FUN_006bcd50
// address: 0x6bcd50
// body: available
// range: 0x6bcd50-0x6bcdd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006bcd50(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_ECX;
  int *piVar4;
  int local_8;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    piVar4 = *(int **)(iVar1 + 0xc);
    piVar3 = piVar4 + *(int *)(iVar1 + 0x14) * 6;
    for (; (piVar4 != piVar3 && (*piVar4 != DAT_00c8aa78)); piVar4 = piVar4 + 6) {
    }
  }
  puVar2 = (undefined4 *)FUN_00635650(&local_8);
  FUN_0067f030(*puVar2);
  piVar3 = (int *)(local_8 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  return param_1;
}

