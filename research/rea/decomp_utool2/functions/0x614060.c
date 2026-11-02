// rea decompile_all
// name: FUN_00614060
// address: 0x614060
// body: available
// range: 0x614060-0x61412d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00614060(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined8 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0071cd8e;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::GZIPDecompressorInputStream::vftable;
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 2) = 1;
  local_8 = 1;
  uStack_7 = 0;
  in_ECX[4] = param_4;
  in_ECX[5] = param_5;
  in_ECX[6] = 1;
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[8] = 0;
  if ((undefined **)*param_1 == juce::ZipFile::ZipInputStream::vftable) {
    uVar3 = *(undefined8 *)(param_1 + 0xe);
  }
  else {
    uVar3 = (*(code *)((undefined **)*param_1)[0x15])(uVar1);
  }
  *(undefined8 *)(in_ECX + 10) = uVar3;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  uVar2 = FUN_004c554b(0x8000);
  in_ECX[0xe] = uVar2;
  local_8 = 2;
  operator_new(0x44);
  _local_8 = CONCAT31(uStack_7,3);
  uVar2 = FUN_00456040(1);
  in_ECX[0xf] = uVar2;
  ExceptionList = local_10;
  return;
}

