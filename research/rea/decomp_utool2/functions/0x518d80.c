// rea decompile_all
// name: FUN_00518d80
// address: 0x518d80
// body: available
// range: 0x518d80-0x518ea1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x518e9d to 0x6e0b20 FUN_006e0b20 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518d80(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  
  piVar3 = (int *)(in_ECX[0x60] + -8);
  *in_ECX = ProjectExplorer::vftable;
  in_ECX[0x1c] = ProjectExplorer::vftable;
  in_ECX[0x1e] = ProjectExplorer::vftable;
  in_ECX[0x1f] = ProjectExplorer::vftable;
  in_ECX[0x2d] = ProjectExplorer::vftable;
  in_ECX[0x30] = ProjectExplorer::vftable;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  in_ECX[0x5a] = PrintableFile::vftable;
  FUN_00412eb0();
  FID_conflict__free((void *)in_ECX[0x5c]);
  piVar3 = (int *)(in_ECX[0x5b] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[0x58] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0051c430();
  in_ECX[0x30] = juce::Timer::vftable;
  FUN_0063eab0();
  in_ECX[0x2d] = juce::DragAndDropContainer::vftable;
  puVar2 = (undefined4 *)in_ECX[0x2e];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x2e] = 0;
    (**(code **)*puVar2)(1);
  }
  if ((undefined4 *)in_ECX[0x2e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x2e])(1);
  }
  FUN_006e0b20();
  return;
}

