// rea decompile_all
// name: FUN_00697320
// address: 0x697320
// body: available
// range: 0x697320-0x6973e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00697320(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  uint local_8;
  
  if ((*(int *)(in_ECX + 0x18) == 0) ||
     (local_8 = (*(int *)(*(int *)(in_ECX + 0x7c) + 0x80) - *(int *)(*(int *)(in_ECX + 0x7c) + 0x14)
                ) / *(int *)(in_ECX + 0x8c), *(uint *)(in_ECX + 0x88) <= local_8)) {
    local_8 = 0xffffffff;
  }
  iVar6 = *(int *)(*(int *)(in_ECX + 0x7c) + 0xbc) / *(int *)(in_ECX + 0x8c) + 1 + local_8;
  do {
    if (iVar6 < (int)local_8) {
      return;
    }
    iVar2 = *(int *)(in_ECX + 0x7c);
    if ((iVar6 < *(int *)(iVar2 + 0x328)) ||
       (iVar1 = *(int *)(iVar2 + 0x324), *(int *)(iVar2 + 0x328) + iVar1 <= iVar6)) {
LAB_006973ab:
      iVar2 = 0;
    }
    else {
      iVar5 = 1;
      if (1 < iVar1) {
        iVar5 = iVar1;
      }
      if (*(uint *)(iVar2 + 0x324) <= (uint)(iVar6 % iVar5)) goto LAB_006973ab;
      iVar2 = *(int *)(*(int *)(iVar2 + 0x31c) + (iVar6 % iVar5) * 4);
    }
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x74);
    }
    piVar4 = (int *)FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::TableListBox::RowComp::RTTI_Type_Descriptor,0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x84))();
    }
    iVar6 = iVar6 + -1;
  } while( true );
}

