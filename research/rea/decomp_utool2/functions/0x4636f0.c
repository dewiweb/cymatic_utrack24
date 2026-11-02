// rea decompile_all
// name: FUN_004636f0
// address: 0x4636f0
// body: available
// range: 0x4636f0-0x463816 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004636f0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcbb6;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::Timer::TimerThread::vftable;
  in_ECX[0x10] = juce::Timer::TimerThread::vftable;
  in_ECX[0x11] = juce::Timer::TimerThread::vftable;
  *(undefined1 *)(in_ECX + 0xf) = 1;
  SetEvent((HANDLE)in_ECX[0x14]);
  FUN_006322a0(4000);
  if (DAT_00c8a668 == in_ECX) {
    DAT_00c8a668 = (undefined4 *)0x0;
  }
  CloseHandle((HANDLE)in_ECX[0x14]);
  in_ECX[0x11] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[0x12] + 0xc) = 0;
  UNLOCK();
  puVar4 = (undefined4 *)in_ECX[0x12];
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar4 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar4)(1,uVar2);
    }
  }
  in_ECX[0x10] = juce::DeletedAtShutdown::vftable;
  FUN_00637f30();
  puVar4 = in_ECX + 0x10;
  FUN_0063dc00(puVar4);
  FUN_00415ff0(puVar4);
  LOCK();
  DAT_00c8a918 = 0;
  UNLOCK();
  local_8 = 0;
  *in_ECX = juce::Thread::vftable;
  FUN_006322a0(0xffffffff);
  CloseHandle((HANDLE)in_ECX[0xb]);
  CloseHandle((HANDLE)in_ECX[10]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 4));
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

