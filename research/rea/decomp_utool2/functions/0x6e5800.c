// rea decompile_all
// name: FUN_006e5800
// address: 0x6e5800
// body: available
// range: 0x6e5800-0x6e5a7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e5800(void)

{
  undefined4 **ppuVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  undefined4 *local_28;
  void *local_24;
  int local_1c;
  undefined4 *local_18;
  undefined4 **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00728729;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::TextEditor::vftable;
  in_ECX[0x1c] = juce::TextEditor::vftable;
  in_ECX[0x1d] = juce::TextEditor::vftable;
  if (*(char *)(in_ECX + 0x27) != '\0') {
    piVar5 = (int *)FUN_006d1d80(uVar4);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x6c))();
    }
  }
  ppuVar1 = (undefined4 **)(in_ECX + 0x4d);
  FUN_00415ff0(-(uint)(in_ECX[0x20] != 0) & in_ECX[0x20] + 0x84);
  if (in_ECX[0x50] == 0) {
    puVar3 = *ppuVar1;
    local_14 = ppuVar1;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < (uint)puVar3[6]) {
      FUN_00410320(uVar4);
    }
  }
  uVar6 = FUN_0063b600();
  FUN_0063ad60(uVar6);
  puVar3 = local_28;
  if ((0 < local_1c) && (local_28 != (undefined4 *)0x0)) {
    local_14 = &local_28;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < (uint)puVar3[6]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(local_24);
  if (local_28 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = local_28 + 1;
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_28)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x1f];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[0x1f] = 0;
    (**(code **)*puVar3)(1);
  }
  in_ECX[0x20] = 0;
  FID_conflict__free((void *)in_ECX[0x56]);
  FID_conflict__free((void *)in_ECX[0x53]);
  if ((0 < (int)in_ECX[0x50]) && (*ppuVar1 != (undefined4 *)0x0)) {
    local_18 = *ppuVar1 + 4;
    local_14 = ppuVar1;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < (uint)local_18[2]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free((void *)in_ECX[0x4e]);
  puVar3 = *ppuVar1;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar3 + 1;
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  if (*(char *)(in_ECX + 0x4c) == '\0') {
    in_ECX[0x4b] = 0;
  }
  if ((undefined4 *)in_ECX[0x4b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x4b])(1);
  }
  piVar5 = (int *)(in_ECX[0x48] + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_004b0000();
  FID_conflict__free((void *)in_ECX[0x45]);
  puVar3 = (undefined4 *)in_ECX[0x42];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar3 + 1;
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  if ((undefined4 *)in_ECX[0x3c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x3c])(1);
  }
  FUN_0063bc00();
  if ((undefined4 *)in_ECX[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x1f])(1);
  }
  piVar5 = (int *)(in_ECX[0x1e] + -8);
  in_ECX[0x1d] = juce::SettableTooltipClient::vftable;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  in_ECX[0x1d] = juce::TooltipClient::vftable;
  in_ECX[0x1c] = juce::TextInputTarget::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

