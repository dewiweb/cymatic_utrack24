// rea decompile_all
// name: FUN_00434aa0
// address: 0x434aa0
// body: available
// range: 0x434aa0-0x434b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00434aa0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006fe220;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = operator_new(0xc);
  uVar1 = *(undefined4 *)(in_ECX + 0x24);
  *puVar4 = juce::AudioData::
            ConverterInstance<juce::AudioData::Pointer<juce::AudioData::Int16,juce::AudioData::LittleEndian,juce::AudioData::Interleaved,juce::AudioData::Const>,juce::AudioData::Pointer<juce::AudioData::Float32,juce::AudioData::NativeEndian,juce::AudioData::NonInterleaved,juce::AudioData::NonConst>_>
            ::vftable;
  puVar4[1] = uVar1;
  puVar4[2] = 1;
  puVar2 = *(undefined4 **)(in_ECX + 0xac);
  if ((puVar2 != puVar4) && (*(undefined4 **)(in_ECX + 0xac) = puVar4, puVar2 != (undefined4 *)0x0))
  {
    (**(code **)*puVar2)(1,uVar3);
  }
  ExceptionList = local_10;
  return;
}

