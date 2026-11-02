// rea decompile_all
// name: FUN_0042dd30
// address: 0x42dd30
// body: available
// range: 0x42dd30-0x42de89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042dd30(void)

{
  int *_Memory;
  undefined4 *dwNewLong;
  int iVar1;
  undefined4 *in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fde20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("DirectSound",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  *in_ECX = juce::AudioIODeviceType::vftable;
  in_ECX[1] = local_14;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    *_Memory = *_Memory + 1;
    UNLOCK();
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_8 = 0;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  dwNewLong = in_ECX + 5;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  *dwNewLong = juce::DeviceChangeDetector::vftable;
  FUN_00427120(L"DirectSound",FUN_00427320);
  SetWindowLongW((HWND)in_ECX[0xb],-0x15,(LONG)dwNewLong);
  *in_ECX = juce::DSoundAudioIODeviceType::vftable;
  *dwNewLong = juce::DSoundAudioIODeviceType::vftable;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  FUN_005c93a0();
  ExceptionList = local_10;
  return;
}

