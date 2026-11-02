// rea decompile_all
// name: FUN_00429420
// address: 0x429420
// body: available
// range: 0x429420-0x429648 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429420(int *param_1,int *param_2,int *param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_ECX;
  char *pcVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fd8f3;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::AudioIODevice::vftable;
  iVar1 = *param_1;
  in_ECX[1] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar1 = *param_2;
  in_ECX[2] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8 = 0;
  pcVar4 = "Juce WASAPI";
  FUN_0045c990("Juce WASAPI",uVar2);
  FUN_00630a80(&param_1,pcVar4);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar3 = param_1 + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0063ea10();
  *in_ECX = juce::WasapiClasses::WASAPIAudioIODevice::vftable;
  in_ECX[3] = juce::WasapiClasses::WASAPIAudioIODevice::vftable;
  in_ECX[0x13] = juce::WasapiClasses::WASAPIAudioIODevice::vftable;
  iVar1 = *param_3;
  in_ECX[0x15] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  iVar1 = *param_4;
  in_ECX[0x16] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  in_ECX[0x17] = &DAT_00bfe12c;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x1a) = param_5;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  *(undefined2 *)(in_ECX + 0x28) = 0;
  in_ECX[0x29] = 0;
  *(undefined8 *)(in_ECX + 0x2a) = 0;
  in_ECX[0x2d] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x2e));
  in_ECX[0x34] = 0;
  in_ECX[0x39] = 4;
  in_ECX[0x3a] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x3b) = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x41] = 4;
  in_ECX[0x42] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x43) = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  ExceptionList = local_10;
  return;
}

