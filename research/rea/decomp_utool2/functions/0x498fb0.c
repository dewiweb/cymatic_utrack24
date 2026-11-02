// rea decompile_all
// name: FUN_00498fb0
// address: 0x498fb0
// body: available
// range: 0x498fb0-0x4990f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498fb0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcdb6;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 200) = 1;
  if (*(int *)(in_ECX + 0x70) != 0) {
    FUN_00499100(uVar3);
  }
  local_8 = 0;
  if (*(int *)(in_ECX + 0xd8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0xd8) + 8);
  }
  iVar5 = FUN_006f6dd6(uVar4,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor,0);
  local_8 = 0xffffffff;
  piVar1 = *(int **)(in_ECX + 0x9c);
  for (piVar7 = piVar1; piVar7 != piVar1 + *(int *)(in_ECX + 0xa4); piVar7 = piVar7 + 1) {
    if (iVar5 == *piVar7) {
      iVar5 = (int)piVar7 - (int)piVar1 >> 2;
      goto LAB_00499047;
    }
  }
  iVar5 = -1;
LAB_00499047:
  iVar8 = 0;
  if (0 < iVar5) {
    iVar8 = iVar5;
  }
  iVar5 = *(int *)(in_ECX + 0xa4) + -1;
  if (iVar5 < 0) {
    ExceptionList = local_10;
    return;
  }
  iVar6 = *(int *)(in_ECX + 0xa4);
  iVar8 = iVar6 + iVar8;
  do {
    iVar8 = iVar8 + param_1;
    iVar2 = *(int *)(*(int *)(in_ECX + 0x9c) + (iVar8 % iVar6) * 4);
    iVar6 = *(int *)(in_ECX + 0xa4);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x94) != '\0')) {
      if ((*(int *)(iVar2 + 0x74) != 0) && (*(char *)(iVar2 + 0x97) == '\0')) {
LAB_004990d8:
        FUN_00498ad0(iVar2);
        ExceptionList = local_10;
        return;
      }
      if (*(char *)(iVar2 + 0x94) != '\0') {
        if ((*(int *)(iVar2 + 0x78) != 0) && (0 < *(int *)(*(int *)(iVar2 + 0x78) + 8)))
        goto LAB_004990d8;
        iVar6 = *(int *)(in_ECX + 0xa4);
      }
    }
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

