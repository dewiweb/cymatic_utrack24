// rea decompile_all
// name: FUN_005810f0
// address: 0x5810f0
// body: available
// range: 0x5810f0-0x5812a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005810f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00712957;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = MainContentComponent::vftable;
  in_ECX[0x1c] = MainContentComponent::vftable;
  in_ECX[0x1d] = MainContentComponent::vftable;
  in_ECX[0x22] = MainContentComponent::vftable;
  FUN_004e9180(uVar4);
  FUN_00544260();
  FUN_006322a0(10000);
  if (DAT_00c8a5e4 != 0) {
    FUN_005b60d0();
  }
  FUN_00407fe0();
  if (in_ECX[0x117] != 0) {
    FID_conflict__free((void *)in_ECX[0x116]);
    in_ECX[0x116] = 0;
    in_ECX[0x117] = 0;
  }
  in_ECX[0x118] = 0;
  FUN_00407fe0();
  if (in_ECX[0x11a] != 0) {
    FID_conflict__free((void *)in_ECX[0x119]);
    in_ECX[0x119] = 0;
    in_ECX[0x11a] = 0;
  }
  in_ECX[0x11b] = 0;
  DAT_00c8a5d4 = 0;
  FUN_00589530();
  FUN_005801d0();
  FUN_006d2f40();
  puVar3 = (undefined4 *)in_ECX[0x1e7];
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
  FUN_005b7490();
  FUN_00407640();
  FUN_00407640();
  FUN_006321e0();
  FUN_00544490();
  FUN_005b6530();
  in_ECX[0x23] = PopupManager::vftable;
  DAT_00c8a5c0 = 0;
  FUN_00407640();
  in_ECX[0x22] = FolderStructureUpgrader_To_2_0::Listener::vftable;
  in_ECX[0x1d] = juce::Timer::vftable;
  FUN_0063eab0();
  in_ECX[0x1c] = juce::Button::Listener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

