// rea decompile_all
// name: FUN_00628f60
// address: 0x628f60
// body: available
// range: 0x628f60-0x62901d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628f60(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dba0;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  puVar4 = operator_new(0x14);
  piVar1 = puVar4 + 1;
  *puVar4 = juce::ReferenceCountedObject::vftable;
  *piVar1 = 0;
  local_8 = 1;
  *puVar4 = juce::var::VariantType_Array::RefCountedArray::vftable;
  FUN_00458ee0(param_1);
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  piVar1 = (int *)*in_ECX;
  *in_ECX = &PTR_vftable_00c7ebe8;
  local_1c = in_ECX[2];
  uVar2 = in_ECX[3];
  in_ECX[3] = local_18;
  in_ECX[2] = puVar4;
  local_18 = uVar2;
  (**(code **)(*piVar1 + 0x54))(&local_1c,uVar3);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

