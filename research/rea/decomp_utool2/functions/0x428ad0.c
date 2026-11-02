// rea decompile_all
// name: FUN_00428ad0
// address: 0x428ad0
// body: available
// range: 0x428ad0-0x428b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428ad0(char param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd88c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == '\0') {
    if (*(int *)(in_ECX + 0x7c) != 4) {
      if (*(int *)(in_ECX + 0x7c) != 3) {
        FUN_00434aa0(in_ECX);
        ExceptionList = local_10;
        return;
      }
      FUN_00434a30(in_ECX);
      ExceptionList = local_10;
      return;
    }
    local_8 = 1;
    puVar3 = operator_new(0xc);
    uVar4 = *(undefined4 *)(in_ECX + 0x24);
    *puVar3 = juce::AudioData::
              ConverterInstance<juce::AudioData::Pointer<juce::AudioData::Int32,juce::AudioData::LittleEndian,juce::AudioData::Interleaved,juce::AudioData::Const>,juce::AudioData::Pointer<juce::AudioData::Float32,juce::AudioData::NativeEndian,juce::AudioData::NonInterleaved,juce::AudioData::NonConst>_>
              ::vftable;
  }
  else {
    local_8 = 0;
    puVar3 = operator_new(0xc);
    uVar4 = *(undefined4 *)(in_ECX + 0x24);
    *puVar3 = juce::AudioData::
              ConverterInstance<juce::AudioData::Pointer<juce::AudioData::Float32,juce::AudioData::LittleEndian,juce::AudioData::Interleaved,juce::AudioData::Const>,juce::AudioData::Pointer<juce::AudioData::Float32,juce::AudioData::NativeEndian,juce::AudioData::NonInterleaved,juce::AudioData::NonConst>_>
              ::vftable;
  }
  puVar3[1] = uVar4;
  puVar3[2] = 1;
  puVar1 = *(undefined4 **)(in_ECX + 0xac);
  if ((puVar1 != puVar3) && (*(undefined4 **)(in_ECX + 0xac) = puVar3, puVar1 != (undefined4 *)0x0))
  {
    (**(code **)*puVar1)(1,uVar2);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}

