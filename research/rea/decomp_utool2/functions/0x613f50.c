// rea decompile_all
// name: FUN_00613f50
// address: 0x613f50
// body: available
// range: 0x613f50-0x614056 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613f50(int *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined8 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0071cd46;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::GZIPDecompressorInputStream::vftable;
  in_ECX[1] = param_1;
  *(undefined1 *)(in_ECX + 2) = 0;
  local_8 = 1;
  uStack_7 = 0;
  in_ECX[4] = 0xffffffff;
  in_ECX[5] = 0xffffffff;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[8] = 0;
  uVar6 = (**(code **)(*param_1 + 0x54))(uVar2);
  *(undefined8 *)(in_ECX + 10) = uVar6;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  uVar3 = FUN_004c554b(0x8000);
  in_ECX[0xe] = uVar3;
  local_8 = 2;
  puVar4 = operator_new(0x44);
  _local_8 = CONCAT31(uStack_7,3);
  *puVar4 = 0x10001;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  _memset(puVar4 + 1,0,0x38);
  iVar5 = FUN_00617980("1.2.3");
  bVar1 = iVar5 != 0;
  *(bool *)((int)puVar4 + 3) = iVar5 == 0;
  *(bool *)((int)puVar4 + 2) = bVar1;
  *(bool *)puVar4 = bVar1;
  in_ECX[0xf] = puVar4;
  ExceptionList = local_10;
  return;
}

