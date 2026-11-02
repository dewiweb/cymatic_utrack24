// rea decompile_all
// name: FUN_006c5cf0
// address: 0x6c5cf0
// body: available
// range: 0x6c5cf0-0x6c5d6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c5cf0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 local_2c [16];
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 0xc),0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::DrawableComposite::RTTI_Type_Descriptor,0);
  iVar2 = 0;
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x70);
    iVar3 = *(int *)(iVar1 + 0x74);
  }
  piVar4 = &local_1c;
  iVar1 = iVar2;
  iVar5 = iVar3;
  FUN_0046f710(local_2c);
  FUN_0046fc10(piVar4,iVar1,iVar5);
  *(int *)(in_ECX + 0x70) = iVar2 - local_1c;
  *(int *)(in_ECX + 0x74) = iVar3 - local_18;
  FUN_006e9790(local_1c,local_18,local_14,local_10);
  return;
}

