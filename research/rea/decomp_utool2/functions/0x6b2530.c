// rea decompile_all
// name: FUN_006b2530
// address: 0x6b2530
// body: available
// range: 0x6b2530-0x6b25ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006b2530(void)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined **ppuVar4;
  int in_ECX;
  int *piVar5;
  char *pcVar6;
  int local_8;
  
  piVar5 = &local_8;
  pcVar6 = "mdiDocumentDelete_";
  local_8 = in_ECX;
  FUN_0061f730(piVar5,"mdiDocumentDelete_");
  FUN_0061fa00(piVar5,pcVar6);
  piVar3 = *(int **)(in_ECX + 0x58);
  piVar5 = piVar3 + *(int *)(in_ECX + 0x60) * 6;
  do {
    if (piVar3 == piVar5) {
LAB_006b2572:
      ppuVar4 = &PTR_PTR_00c7ed58;
LAB_006b2577:
      uVar2 = (**(code **)(*(int *)*ppuVar4 + 0x14))(ppuVar4 + 2);
      piVar5 = (int *)(local_8 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      return uVar2;
    }
    if (*piVar3 == local_8) {
      ppuVar4 = (undefined **)(piVar3 + 2);
      if (ppuVar4 != (undefined **)0x0) goto LAB_006b2577;
      goto LAB_006b2572;
    }
    piVar3 = piVar3 + 6;
  } while( true );
}

