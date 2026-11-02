// rea decompile_all
// name: FUN_0059a750
// address: 0x59a750
// body: available
// range: 0x59a750-0x59a8a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059a750(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar5 = DAT_00c8a5e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007156f7;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = in_ECX + 0x1c;
  *in_ECX = PanelExternalEditComponent::vftable;
  *puVar1 = PanelExternalEditComponent::vftable;
  in_ECX[0x1d] = PanelExternalEditComponent::vftable;
  in_ECX[0x1e] = PanelExternalEditComponent::vftable;
  if (iVar5 != 0) {
    FUN_005b5d40(0x1000);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x2e));
  puVar3 = (undefined4 *)in_ECX[0x35];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[0x35] = 0;
    LOCK();
    piVar2 = puVar3 + 1;
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar3)(1,uVar4);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x2e));
  FUN_0052dcd0();
  FUN_00508010();
  FUN_004f0510();
  FUN_004f9930();
  FUN_004f9930();
  FUN_005532c0();
  in_ECX[0x1e] = TargetSelector::Listener::vftable;
  in_ECX[0x1d] = juce::ChangeListener::vftable;
  local_8 = 0;
  *puVar1 = GlobalNotifierListener::vftable;
  iVar5 = FUN_00560890();
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x18));
  local_14 = puVar1;
  uVar4 = FUN_00447770(&local_14);
  if (uVar4 < *(uint *)(iVar5 + 0x14)) {
    FUN_00410320(uVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar5 + 0x18));
  *puVar1 = juce::ActionListener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

