// rea decompile_all
// name: FUN_00542c30
// address: 0x542c30
// body: available
// range: 0x542c30-0x542ce6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00542c30(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = DAT_00c8a5e4;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070eaa9;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = SongProjectLibrary::vftable;
  in_ECX[3] = SongProjectLibrary::vftable;
  if (iVar2 != 0) {
    FUN_005b5d40(0x1001);
  }
  puVar3 = (undefined4 *)in_ECX[0xb];
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1,uVar4);
    }
  }
  in_ECX[3] = juce::ChangeBroadcaster::vftable;
  FID_conflict__free((void *)in_ECX[7]);
  in_ECX[4] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[5] + 0xc) = 0;
  UNLOCK();
  puVar3 = (undefined4 *)in_ECX[5];
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
  *in_ECX = GlobalProgressThread::Job::vftable;
  ExceptionList = local_10;
  return;
}

