// rea decompile_all
// name: FUN_005c9e60
// address: 0x5c9e60
// body: available
// range: 0x5c9e60-0x5c9f25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c9e60(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071ae1e;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::AudioTransportSource::vftable;
  in_ECX[1] = juce::AudioTransportSource::vftable;
  FUN_005cea90(0,0,0,0,2);
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0xd);
  EnterCriticalSection(lpCriticalSection);
  if ((int *)in_ECX[0xc] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xc] + 8))(uVar4);
  }
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection(lpCriticalSection);
  in_ECX[1] = juce::ChangeBroadcaster::vftable;
  FID_conflict__free((void *)in_ECX[5]);
  in_ECX[2] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[3] + 0xc) = 0;
  UNLOCK();
  puVar3 = (undefined4 *)in_ECX[3];
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
  *in_ECX = juce::AudioSource::vftable;
  ExceptionList = local_10;
  return;
}

