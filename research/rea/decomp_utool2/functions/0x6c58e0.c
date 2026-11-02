// rea decompile_all
// name: FUN_006c58e0
// address: 0x6c58e0
// body: available
// range: 0x6c58e0-0x6c5995 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006c58e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_ECX;
  undefined1 local_38 [32];
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725d83;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006b3960(in_ECX);
  local_8 = 0;
  local_18 = 0;
  FUN_006c59a0(uVar1);
  iVar2 = FUN_006b3770(local_38);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006b3b20(0);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_14 = puVar3;
  iVar2 = FUN_006f6dd6(puVar3,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::Drawable::RTTI_Type_Descriptor,0);
  if ((iVar2 == 0) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  FUN_006b38a0();
  ExceptionList = local_10;
  return iVar2;
}

