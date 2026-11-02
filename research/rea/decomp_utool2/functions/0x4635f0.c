// rea decompile_all
// name: FUN_004635f0
// address: 0x4635f0
// body: available
// range: 0x4635f0-0x4636e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004635f0(void)

{
  int *_Memory;
  char cVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined4 *in_ECX;
  char *pcVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700e93;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar4 = "Juce Timer";
  FUN_0045c990("Juce Timer",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_00630a80(&local_14,pcVar4);
  local_8 = 0;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar3 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_0063e930();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0063ea10();
  *in_ECX = juce::Timer::TimerThread::vftable;
  in_ECX[0x10] = juce::Timer::TimerThread::vftable;
  in_ECX[0x11] = juce::Timer::TimerThread::vftable;
  in_ECX[0x13] = 0;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  in_ECX[0x14] = pvVar2;
  LOCK();
  iVar3 = *(int *)(in_ECX[0x12] + 0xc);
  if (iVar3 == 0) {
    *(int *)(in_ECX[0x12] + 0xc) = 1;
    iVar3 = 0;
  }
  UNLOCK();
  if ((iVar3 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
    LOCK();
    *(undefined4 *)(in_ECX[0x12] + 0xc) = 0;
    UNLOCK();
  }
  ExceptionList = local_10;
  return;
}

