// rea decompile_all
// name: FUN_00494670
// address: 0x494670
// body: available
// range: 0x494670-0x494777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00494670(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  bool bVar6;
  
  if ((*(int *)(in_ECX + 0x54) == *param_1) ||
     (iVar2 = FUN_0045c1e0(*(int *)(in_ECX + 0x54)), iVar2 == 0)) {
    FUN_006dff00(1,1);
    return 1;
  }
  cVar1 = FUN_00635500();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar3 = *(uint *)(in_ECX + 0x34) & 3;
  if (uVar3 == 0) {
    if ((*(int *)(in_ECX + 4) != 0) && (*(char *)(*(int *)(in_ECX + 4) + 0xac) != '\0'))
    goto LAB_004946e5;
  }
  else if (uVar3 == 2) goto LAB_004946e5;
  FUN_006dffc0();
LAB_004946e5:
  iVar2 = 499;
  while( true ) {
    uVar3 = 0;
    if (0 < *(int *)(in_ECX + 0x14)) {
      bVar6 = *(int *)(in_ECX + 0x14) != 0;
      do {
        if (bVar6) {
          uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + uVar3 * 4);
        }
        else {
          uVar4 = 0;
        }
        iVar5 = FUN_006f6dd6(uVar4,0,&juce::TreeViewItem::RTTI_Type_Descriptor,
                             &juce::FileListTreeItem::RTTI_Type_Descriptor);
        if ((iVar5 != 0) && (cVar1 = FUN_00494670(), cVar1 != '\0')) {
          return 1;
        }
        uVar3 = uVar3 + 1;
        bVar6 = uVar3 < *(uint *)(in_ECX + 0x14);
      } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x14));
    }
    if (*(int *)(in_ECX + 100) == 0) {
      return 0;
    }
    if (*(int *)(*(int *)(in_ECX + 100) + 100) == 0) break;
    Sleep(10);
    FUN_00494790();
    iVar2 = iVar2 + -1;
    if (iVar2 < 1) {
      return 0;
    }
  }
  return 0;
}

