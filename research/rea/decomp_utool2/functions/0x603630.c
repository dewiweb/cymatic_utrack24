// rea decompile_all
// name: FUN_00603630
// address: 0x603630
// body: available
// range: 0x603630-0x6038a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00603630(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071bce2;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar2 = operator_new(0x14);
  local_8 = 0;
  *puVar2 = juce::AudioFormat::vftable;
  FUN_0045cb50("WAV file",uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0062b570(".wav .bwf");
  *puVar2 = juce::WavAudioFormat::vftable;
  local_8 = 0xffffffff;
  iVar3 = in_ECX[2];
  in_ECX[3] = iVar3;
  if (in_ECX[1] < iVar3 + 1) {
    FUN_00409cf0((iVar3 + 1) / 2 + iVar3 + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[2];
  in_ECX[2] = iVar3 + 1;
  *(undefined4 **)(*in_ECX + iVar3 * 4) = puVar2;
  puVar2 = operator_new(0x14);
  local_8 = 2;
  *puVar2 = juce::AudioFormat::vftable;
  FUN_0045cb50("AIFF file");
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_0062b570(".aiff .aif");
  *puVar2 = juce::AiffAudioFormat::vftable;
  local_8 = 0xffffffff;
  iVar3 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[2];
  in_ECX[2] = iVar3 + 1;
  *(undefined4 **)(*in_ECX + iVar3 * 4) = puVar2;
  puVar2 = operator_new(0x14);
  local_8 = 4;
  *puVar2 = juce::AudioFormat::vftable;
  FUN_0045cb50("FLAC file");
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_0062b570(".flac");
  *puVar2 = juce::FlacAudioFormat::vftable;
  local_8 = 0xffffffff;
  iVar3 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[2];
  in_ECX[2] = iVar3 + 1;
  *(undefined4 **)(*in_ECX + iVar3 * 4) = puVar2;
  puVar2 = operator_new(0x14);
  local_8 = 6;
  *puVar2 = juce::AudioFormat::vftable;
  FUN_0045cb50("Ogg-Vorbis file");
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_0062b570(&DAT_00a93238);
  *puVar2 = juce::OggVorbisAudioFormat::vftable;
  local_8 = 0xffffffff;
  iVar3 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[2];
  in_ECX[2] = iVar3 + 1;
  *(undefined4 **)(*in_ECX + iVar3 * 4) = puVar2;
  operator_new(0x14);
  local_8 = 8;
  iVar3 = FUN_005cfbe0();
  if (iVar3 != 0) {
    iVar4 = in_ECX[2] + 1;
    if (in_ECX[1] < iVar4) {
      FUN_00409cf0(iVar4 / 2 + in_ECX[2] + 9 & 0xfffffff8);
    }
    iVar4 = in_ECX[2];
    in_ECX[2] = iVar4 + 1;
    *(int *)(*in_ECX + iVar4 * 4) = iVar3;
  }
  ExceptionList = local_10;
  return;
}

