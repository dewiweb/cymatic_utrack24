// rea decompile_all
// name: FUN_0049ae40
// address: 0x49ae40
// body: available
// range: 0x49ae40-0x49b11f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049ae40(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *_Memory;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702a76;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = juce::Slider::Pimpl::vftable;
  in_ECX[2] = juce::Slider::Pimpl::vftable;
  in_ECX[3] = juce::Slider::Pimpl::vftable;
  in_ECX[4] = juce::Slider::Pimpl::vftable;
  FUN_00415ff0(in_ECX + 4);
  if (in_ECX[0xd] == 0) {
    iVar2 = in_ECX[10];
    local_14 = in_ECX + 10;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < *(uint *)(iVar2 + 0x18)) {
      FUN_00410320(uVar4);
    }
  }
  FUN_00415ff0(in_ECX + 4);
  if (in_ECX[0x11] == 0) {
    iVar2 = in_ECX[0xe];
    local_14 = in_ECX + 0xe;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < *(uint *)(iVar2 + 0x18)) {
      FUN_00410320(uVar4);
    }
  }
  piVar1 = in_ECX + 0x12;
  FUN_00415ff0(in_ECX + 4);
  if (in_ECX[0x15] == 0) {
    iVar2 = *piVar1;
    local_14 = piVar1;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < *(uint *)(iVar2 + 0x18)) {
      FUN_00410320(uVar4);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0x53];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[0x53] = 0;
    (**(code **)*puVar3)(1);
  }
  if ((undefined4 *)in_ECX[0x53] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x53])(1);
  }
  if ((undefined4 *)in_ECX[0x52] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x52])(1);
  }
  if ((undefined4 *)in_ECX[0x51] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x51])(1);
  }
  if ((undefined4 *)in_ECX[0x50] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x50])(1);
  }
  _Memory = (int *)(in_ECX[0x48] + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  local_14 = (int *)in_ECX[0x46];
  if (local_14 != (int *)0x0) {
    local_8 = 0;
    FUN_0049bd00();
    FUN_004bfe14(local_14,4);
  }
  if ((0 < (int)in_ECX[0x15]) && (*piVar1 != 0)) {
    local_18 = (int *)(*piVar1 + 0x10);
    local_14 = piVar1;
    uVar4 = FUN_00447770(&local_14);
    if (uVar4 < (uint)local_18[2]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free((void *)in_ECX[0x13]);
  puVar3 = (undefined4 *)*piVar1;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  piVar1 = in_ECX + 0xe;
  if ((0 < (int)in_ECX[0x11]) && (*piVar1 != 0)) {
    local_14 = (int *)(*piVar1 + 0x10);
    local_18 = piVar1;
    uVar4 = FUN_00447770(&local_18);
    if (uVar4 < (uint)local_14[2]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free((void *)in_ECX[0xf]);
  puVar3 = (undefined4 *)*piVar1;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  piVar1 = in_ECX + 10;
  if ((0 < (int)in_ECX[0xd]) && (*piVar1 != 0)) {
    local_18 = piVar1;
    uVar4 = FUN_00447770(&local_18);
    if (uVar4 < *(uint *)(*piVar1 + 0x18)) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free((void *)in_ECX[0xb]);
  puVar3 = (undefined4 *)*piVar1;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  FID_conflict__free((void *)in_ECX[7]);
  in_ECX[4] = juce::Value::Listener::vftable;
  in_ECX[3] = juce::Label::Listener::vftable;
  in_ECX[2] = juce::Button::Listener::vftable;
  *in_ECX = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[1] + 0xc) = 0;
  UNLOCK();
  puVar3 = (undefined4 *)in_ECX[1];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

