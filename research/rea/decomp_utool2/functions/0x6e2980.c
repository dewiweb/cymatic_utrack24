// rea decompile_all
// name: FUN_006e2980
// address: 0x6e2980
// body: available
// range: 0x6e2980-0x6e2ba1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e2980(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *piVar5;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007283ff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = juce::ComboBox::vftable;
  piVar4 = in_ECX + 0x25;
  in_ECX[0x1c] = juce::ComboBox::vftable;
  in_ECX[0x1e] = juce::ComboBox::vftable;
  in_ECX[0x1f] = juce::ComboBox::vftable;
  in_ECX[0x20] = juce::ComboBox::vftable;
  uStack_30 = 0x6e29e0;
  FUN_00415ff0();
  if (in_ECX[0x28] == 0) {
    iVar1 = *piVar4;
    uStack_30 = 0x6e29f7;
    uVar3 = FUN_00447770();
    if (uVar3 < *(uint *)(iVar1 + 0x18)) {
      uStack_30 = 0x6e2a05;
      FUN_00410320();
    }
  }
  if (*(char *)((int)in_ECX + 0xaa) != '\0') {
    *(undefined1 *)((int)in_ECX + 0xaa) = 0;
    FUN_006a00c0();
    FUN_006e6400(auStack_38);
    FUN_006ce9f0(1);
  }
  puVar2 = (undefined4 *)in_ECX[0x2f];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x2f] = 0;
    uStack_30 = 0x6e2a48;
    (**(code **)*puVar2)();
  }
  piVar5 = (int *)(in_ECX[0x31] + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_30 = 0x6e2a6d;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(in_ECX[0x30] + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_30 = 0x6e2a93;
      FID_conflict__free(piVar5);
    }
  }
  if ((undefined4 *)in_ECX[0x2f] != (undefined4 *)0x0) {
    uStack_30 = 0x6e2aa6;
    (*(code *)**(undefined4 **)in_ECX[0x2f])();
  }
  uStack_30 = 0x6e2ab1;
  FID_conflict__free((void *)in_ECX[0x2c]);
  if ((0 < (int)in_ECX[0x28]) && (iVar1 = *piVar4, iVar1 != 0)) {
    uStack_30 = 0x6e2ad4;
    uVar3 = FUN_00447770();
    if (uVar3 < *(uint *)(iVar1 + 0x18)) {
      uStack_30 = 0x6e2ae2;
      FUN_00410320();
    }
  }
  uStack_30 = 0x6e2aea;
  FID_conflict__free((void *)in_ECX[0x26]);
  puVar2 = (undefined4 *)*piVar4;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      uStack_30 = 0x6e2b03;
      (**(code **)*puVar2)();
    }
  }
  FUN_004afe50();
  uStack_30 = 0x6e2b19;
  FID_conflict__free((void *)in_ECX[0x22]);
  in_ECX[0x20] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[0x21] + 0xc) = 0;
  UNLOCK();
  puVar2 = (undefined4 *)in_ECX[0x21];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      uStack_30 = 0x6e2b4d;
      (**(code **)*puVar2)();
    }
  }
  in_ECX[0x1f] = juce::Value::Listener::vftable;
  in_ECX[0x1e] = juce::Label::Listener::vftable;
  piVar4 = (int *)(in_ECX[0x1d] + -8);
  in_ECX[0x1c] = juce::SettableTooltipClient::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      uStack_30 = 0x6e2b7f;
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[0x1c] = juce::TooltipClient::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

