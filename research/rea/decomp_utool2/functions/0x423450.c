// rea decompile_all
// name: thunk_FUN_006e3470
// address: 0x423450
// body: available
// range: 0x423450-0x423454 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_006e3470(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00728472;
  pvStack_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  *in_ECX = (int)juce::Button::vftable;
  in_ECX[0x1c] = (int)juce::Button::vftable;
  piStack_14 = in_ECX;
  if (in_ECX[0x1f] != 0) {
    FID_conflict__free((void *)in_ECX[0x1e]);
    in_ECX[0x1e] = 0;
    in_ECX[0x1f] = 0;
  }
  in_ECX[0x20] = 0;
  (**(code **)(*in_ECX + 0x40))(uVar3);
  if (in_ECX[0x29] != 0) {
    FUN_00415ff0(-(uint)(in_ECX[0x26] != 0) & in_ECX[0x26] + 0x14U);
  }
  piVar4 = in_ECX + 0x32;
  FUN_00415ff0(-(uint)(in_ECX[0x26] != 0) & in_ECX[0x26] + 0x18U);
  if (in_ECX[0x35] == 0) {
    iVar1 = *piVar4;
    piStack_14 = piVar4;
    uVar3 = FUN_00447770(&piStack_14);
    if (uVar3 < *(uint *)(iVar1 + 0x18)) {
      FUN_00410320(uVar3);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x26];
  if (puVar2 != (undefined4 *)0x0) {
    in_ECX[0x26] = 0;
    (**(code **)*puVar2)(1);
  }
  if ((0 < in_ECX[0x35]) && (iVar1 = *piVar4, iVar1 != 0)) {
    piStack_14 = piVar4;
    uVar3 = FUN_00447770(&piStack_14);
    if (uVar3 < *(uint *)(iVar1 + 0x18)) {
      FUN_00410320(uVar3);
    }
  }
  FID_conflict__free((void *)in_ECX[0x33]);
  puVar2 = (undefined4 *)*piVar4;
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  if ((undefined4 *)in_ECX[0x26] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x26])(1);
  }
  FID_conflict__free((void *)in_ECX[0x23]);
  piVar4 = (int *)(in_ECX[0x22] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x21];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  FID_conflict__free((void *)in_ECX[0x1e]);
  piVar4 = (int *)(in_ECX[0x1d] + -8);
  in_ECX[0x1c] = (int)juce::SettableTooltipClient::vftable;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[0x1c] = (int)juce::TooltipClient::vftable;
  FUN_006ea0b0();
  ExceptionList = pvStack_10;
  return;
}

