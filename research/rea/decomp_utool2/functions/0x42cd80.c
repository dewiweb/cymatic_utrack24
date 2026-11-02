// rea decompile_all
// name: FUN_0042cd80
// address: 0x42cd80
// body: available
// range: 0x42cd80-0x42cf29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042cd80(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcf26;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::DSoundAudioIODevice::vftable;
  in_ECX[3] = juce::DSoundAudioIODevice::vftable;
  FUN_0042cfc0(uVar2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x85));
  FID_conflict__free((void *)in_ECX[0x62]);
  FID_conflict__free((void *)in_ECX[0x3c]);
  FID_conflict__free((void *)in_ECX[0x30]);
  FID_conflict__free((void *)in_ECX[0x28]);
  CloseHandle((HANDLE)in_ECX[0x23]);
  FUN_00433260();
  FID_conflict__free((void *)in_ECX[0x20]);
  FUN_00433330();
  FID_conflict__free((void *)in_ECX[0x1d]);
  piVar3 = (int *)(in_ECX[0x1c] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x16]);
  FUN_0040f7f0();
  FID_conflict__free((void *)in_ECX[0x13]);
  local_8 = 0;
  in_ECX[3] = juce::Thread::vftable;
  FUN_006322a0(0xffffffff);
  CloseHandle((HANDLE)in_ECX[0xe]);
  CloseHandle((HANDLE)in_ECX[0xd]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 7));
  piVar3 = (int *)(in_ECX[4] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[2] + -8);
  *in_ECX = juce::AudioIODevice::vftable;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(in_ECX[1] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

