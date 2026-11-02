// rea decompile_all
// name: FUN_005305f0
// address: 0x5305f0
// body: available
// range: 0x5305f0-0x530660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005305f0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = in_ECX[0x11];
  cVar1 = (**(code **)(*in_ECX + 0x58))();
  if (cVar1 == '\0') {
    iVar2 = FUN_006f6dd6(in_ECX[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                         &TargetExplorer::RTTI_Type_Descriptor,0);
    iVar2 = *(int *)(iVar2 + 0x9c);
    if (iVar2 != 0) {
      uVar4 = *(byte *)(iVar2 + 0x30) & 1;
      iVar2 = *(int *)(iVar2 + 0x14);
      while (-1 < iVar2 + -1) {
        uVar5 = FUN_0068fb80(0xfffffffe);
        uVar4 = uVar4 + (int)uVar5;
        iVar2 = (int)((ulonglong)uVar5 >> 0x20);
      }
      if (1 < (int)uVar4) {
        uVar3 = uVar3 & 0xfffffffe;
      }
    }
  }
  return uVar3;
}

