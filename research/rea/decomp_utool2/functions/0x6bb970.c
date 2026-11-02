// rea decompile_all
// name: FUN_006bb970
// address: 0x6bb970
// body: available
// range: 0x6bb970-0x6bba5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bb970(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  
  puVar2 = in_ECX + 8;
  *in_ECX = juce::DirectoryContentsList::vftable;
  if (in_ECX == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  in_ECX[8] = juce::DirectoryContentsList::vftable;
  *(undefined1 *)(in_ECX + 0x1a) = 1;
  FUN_006320f0(puVar2);
  iVar1 = in_ECX[0x19];
  if (iVar1 != 0) {
    in_ECX[0x19] = 0;
    FUN_006285d0();
    FUN_004bfe14(iVar1,0x30);
  }
  iVar1 = in_ECX[0x19];
  if (iVar1 != 0) {
    FUN_006285d0();
    FUN_004bfe14(iVar1,0x30);
  }
  FUN_004aff40();
  FID_conflict__free((void *)in_ECX[0x16]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10));
  piVar3 = (int *)(in_ECX[0xc] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  in_ECX[8] = juce::TimeSliceClient::vftable;
  *in_ECX = juce::ChangeBroadcaster::vftable;
  FID_conflict__free((void *)in_ECX[4]);
  in_ECX[1] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[2] + 0xc) = 0;
  UNLOCK();
  puVar2 = (undefined4 *)in_ECX[2];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar2 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

