// rea decompile_all
// name: FUN_00587a80
// address: 0x587a80
// body: available
// range: 0x587a80-0x587b76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587a80(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_007134c0;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = NewsComponent::vftable;
  in_ECX[0x1c] = NewsComponent::vftable;
  in_ECX[0x1e] = NewsComponent::vftable;
  FUN_006322a0(100);
  FUN_0041a780(uVar3);
  piVar4 = (int *)(in_ECX[0x6f] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0041a390();
  FID_conflict__free((void *)in_ECX[0x6c]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x66));
  FUN_00407640();
  FUN_006d2900();
  in_ECX[0x1e] = juce::ScrollBar::Listener::vftable;
  in_ECX[0x1c] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[0x1d] + 0xc) = 0;
  UNLOCK();
  puVar2 = (undefined4 *)in_ECX[0x1d];
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
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

