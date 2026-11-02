// rea decompile_all
// name: FUN_00689f20
// address: 0x689f20
// body: available
// range: 0x689f20-0x68a000 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00689f20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = DAT_00c8a67c;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00721144;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = in_ECX + 2;
  *in_ECX = juce::ApplicationCommandManager::vftable;
  *puVar4 = juce::ApplicationCommandManager::vftable;
  if (iVar2 == 0) {
    operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  FUN_00415ff0(puVar4);
  puVar3 = (undefined4 *)in_ECX[9];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[9] = 0;
    (**(code **)*puVar3)(1,uVar5);
  }
  if ((undefined4 *)in_ECX[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[9])(1);
  }
  FID_conflict__free((void *)in_ECX[6]);
  FUN_004b0250();
  FID_conflict__free((void *)in_ECX[3]);
  *puVar4 = juce::FocusChangeListener::vftable;
  *in_ECX = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[1] + 0xc) = 0;
  UNLOCK();
  puVar4 = (undefined4 *)in_ECX[1];
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

