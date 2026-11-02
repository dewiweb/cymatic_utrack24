// rea decompile_all
// name: FUN_006b19b0
// address: 0x6b19b0
// body: available
// range: 0x6b19b0-0x6b1a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006b19b0(void)

{
  uint uVar1;
  void **ppvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0072390a;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0x74) == 0) {
    uVar1 = *(uint *)(in_ECX + 0x30);
    ppvVar2 = &local_10;
    do {
      ExceptionList = ppvVar2;
      uVar1 = uVar1 - 1;
      if ((int)uVar1 < 0) goto LAB_006b1a19;
      if (uVar1 < *(uint *)(in_ECX + 0x30)) {
        uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x28) + uVar1 * 4);
      }
      else {
        uVar4 = 0;
      }
      iVar5 = FUN_006f6dd6(uVar4,0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::MultiDocumentPanelWindow::RTTI_Type_Descriptor,0,uVar3);
      ppvVar2 = ExceptionList;
    } while ((iVar5 == 0) || (*(char *)(iVar5 + 0x72) == '\0'));
    if (*(int *)(iVar5 + 0x80) != 0) {
      ExceptionList = local_10;
      return *(undefined4 *)(*(int *)(iVar5 + 0x80) + 8);
    }
  }
  else {
LAB_006b1a19:
    if (0 < *(int *)(in_ECX + 0x80)) {
      ExceptionList = local_10;
      return *(undefined4 *)(*(int *)(in_ECX + 0x78) + -4 + *(int *)(in_ECX + 0x80) * 4);
    }
  }
  ExceptionList = local_10;
  return 0;
}

