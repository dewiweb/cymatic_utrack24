// rea decompile_all
// name: FUN_0051c060
// address: 0x51c060
// body: available
// range: 0x51c060-0x51c18c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0051c060(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = in_ECX[0x13];
  iVar2 = in_ECX[5];
  uVar5 = uVar4 & 0xc000;
  if (0 < iVar2) {
    do {
      uVar6 = FUN_0051b140();
      uVar5 = uVar5 | (uint)uVar6;
    } while ((int)((ulonglong)uVar6 >> 0x20) + 1 < iVar2);
    uVar4 = in_ECX[0x13];
  }
  iVar2 = FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor,0);
  uVar3 = (uVar4 | uVar5) & 0xffff3800;
  if ((*(uint *)(iVar2 + 0x15c) & 1) != 0) {
    uVar3 = uVar4 | uVar5;
  }
  iVar2 = FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor,0);
  uVar4 = uVar3 & 0xfffff7ff;
  if ((*(uint *)(iVar2 + 0x15c) & 4) != 0) {
    uVar4 = uVar3;
  }
  cVar1 = (**(code **)(*in_ECX + 0x8c))(0);
  if (cVar1 == '\0') {
    uVar4 = uVar4 & 0xffffdfff;
  }
  iVar2 = FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                       &ProjectExplorer::RTTI_Type_Descriptor,0);
  iVar2 = *(int *)(iVar2 + 0x9c);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(byte *)(iVar2 + 0x30) & 1;
    if (-1 < *(int *)(iVar2 + 0x14) + -1) {
      do {
        uVar6 = FUN_0068fb80(0xfffffffe);
        uVar5 = uVar5 + (int)uVar6;
      } while (-1 < (int)((ulonglong)uVar6 >> 0x20) + -1);
      uVar3 = uVar4 & 0x4a00;
      if ((int)uVar5 < 2) {
        uVar3 = uVar4;
      }
      return uVar3;
    }
  }
  uVar3 = uVar4 & 0x4a00;
  if (uVar5 < 2) {
    uVar3 = uVar4;
  }
  return uVar3;
}

