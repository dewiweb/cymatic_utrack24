// rea decompile_all
// name: FUN_004942f0
// address: 0x4942f0
// body: available
// range: 0x4942f0-0x494468 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004942f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  puVar2 = in_ECX + 0xe;
  *in_ECX = juce::FileListTreeItem::vftable;
  if (in_ECX == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  in_ECX[0xe] = juce::FileListTreeItem::vftable;
  in_ECX[0x12] = juce::FileListTreeItem::vftable;
  in_ECX[0x14] = juce::FileListTreeItem::vftable;
  FUN_006320f0(puVar2);
  if (in_ECX[1] == 0) {
    FUN_006906c0();
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX[1] + 0x84);
    EnterCriticalSection(lpCriticalSection);
    if (0 < (int)in_ECX[5]) {
      FUN_006906c0();
      if (in_ECX[1] != 0) {
        FUN_00690c60();
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  if (in_ECX[0x19] != 0) {
    FUN_00415ff0(in_ECX + 0x14);
    if (*(char *)(in_ECX + 0x1a) == '\0') {
      in_ECX[0x19] = 0;
    }
  }
  piVar3 = (int *)(in_ECX[0x1f] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[0x1e] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x1d];
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
  if (*(char *)(in_ECX + 0x1a) == '\0') {
    in_ECX[0x19] = 0;
  }
  if ((undefined4 *)in_ECX[0x19] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x19])(1);
  }
  piVar3 = (int *)(in_ECX[0x15] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  in_ECX[0x14] = juce::ChangeListener::vftable;
  in_ECX[0x12] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[0x13] + 0xc) = 0;
  UNLOCK();
  puVar2 = (undefined4 *)in_ECX[0x13];
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
  in_ECX[0xe] = juce::TimeSliceClient::vftable;
  *in_ECX = juce::TreeViewItem::vftable;
  FUN_00407640();
  return;
}

