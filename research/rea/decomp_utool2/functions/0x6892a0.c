// rea decompile_all
// name: FUN_006892a0
// address: 0x6892a0
// body: available
// range: 0x6892a0-0x68938a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006892a0(undefined4 param_1,undefined4 param_2)

{
  void **ppvVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721034;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar6 = 0;
  ppvVar1 = &local_10;
  piVar5 = in_ECX;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar1;
    if (piVar5 == (int *)0x0) goto LAB_00689307;
    cVar2 = FUN_00689630(param_1,param_2);
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      return 1;
    }
    if ((undefined **)*piVar5 == PlaylistEditorApplication::vftable) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(*(code *)((undefined **)*piVar5)[1])();
    }
    iVar6 = iVar6 + 1;
  } while ((iVar6 < 0x65) && (ppvVar1 = ExceptionList, piVar5 != in_ECX));
  if (piVar5 == (int *)0x0) {
LAB_00689307:
    local_8 = 0;
    iVar6 = FUN_006f6dd6(DAT_00c8a660,0,&juce::JUCEApplicationBase::RTTI_Type_Descriptor,
                         &juce::JUCEApplication::RTTI_Type_Descriptor,0,uVar3);
    local_8 = 0xffffffff;
    if ((iVar6 != 0) && (iVar6 != -0x10)) {
      uVar4 = FUN_00689630(param_1,param_2);
      ExceptionList = local_10;
      return uVar4;
    }
  }
  ExceptionList = local_10;
  return 0;
}

