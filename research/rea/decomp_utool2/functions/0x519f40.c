// rea decompile_all
// name: FUN_00519f40
// address: 0x519f40
// body: available
// range: 0x519f40-0x519fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00519f40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int *in_ECX;
  uint uVar4;
  
  cVar1 = (**(code **)(*in_ECX + 0xb0))();
  if (cVar1 != '\0') {
    if (*(int *)(in_ECX[0x28] + 0x9c) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0068f6f0(in_ECX + 0x29);
    }
    piVar3 = (int *)FUN_006f6dd6(uVar2,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                                 &ProjectExplorerBaseItem::RTTI_Type_Descriptor,0);
    uVar4 = *(uint *)(param_1 + 0x10) >> 4;
    if ((uVar4 & 1) != 0) {
      if ((char)in_ECX[0x1f] != '\0') {
        return;
      }
      if ((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
          FUN_006dff00(1,1,uVar4);
        }
      }
      else {
        cVar1 = FUN_0051bff0();
        if (cVar1 != '\0') {
          FUN_00519cf0(piVar3);
          (**(code **)(*piVar3 + 0x30))(param_1);
          return;
        }
      }
    }
    (**(code **)(*piVar3 + 0x30))(param_1);
  }
  return;
}

