// rea decompile_all
// name: FUN_00438a00
// address: 0x438a00
// body: available
// range: 0x438a00-0x438b59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00438a00(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *_Memory;
  int iVar1;
  undefined4 *in_ECX;
  undefined8 in_XMM2_Qa;
  undefined8 uVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe534;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("AIFF file",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[4] = param_2;
  in_ECX[5] = param_3;
  in_ECX[7] = param_1;
  *in_ECX = juce::AudioFormatWriter::vftable;
  *(undefined8 *)(in_ECX + 2) = in_XMM2_Qa;
  *(undefined1 *)(in_ECX + 6) = 0;
  _Memory = (int *)(local_14 + -8);
  in_ECX[8] = local_14;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    *_Memory = *_Memory + 1;
    UNLOCK();
  }
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
  *in_ECX = juce::AiffAudioFormatWriter::vftable;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  if (0 < *(int *)(param_4 + 8)) {
    FUN_005ffd70();
    FUN_005ff7a0();
    FUN_00437230();
  }
  uVar2 = (**(code **)(*param_1 + 0xc))();
  *(undefined8 *)(in_ECX + 0x16) = uVar2;
  FUN_00438d80();
  ExceptionList = local_10;
  return;
}

