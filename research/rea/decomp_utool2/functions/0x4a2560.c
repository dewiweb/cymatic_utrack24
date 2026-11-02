// rea decompile_all
// name: FUN_004a2560
// address: 0x4a2560
// body: available
// range: 0x4a2560-0x4a2643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a2560(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puStack_40;
  TypeDescriptor *pTStack_3c;
  TypeDescriptor *pTStack_38;
  undefined1 *puStack_34;
  uint uStack_30;
  undefined1 local_24 [20];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00702886;
  local_10 = ExceptionList;
  uStack_30 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_34 = (undefined1 *)0x0;
  pTStack_38 = &juce::ToolbarItemComponent::RTTI_Type_Descriptor;
  pTStack_3c = &juce::Component::RTTI_Type_Descriptor;
  local_8 = 0;
  puStack_40 = (undefined1 *)0x0;
  iVar2 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 0xc));
  local_8 = 0xffffffff;
  if (iVar2 != 0) {
    pTStack_38 = (TypeDescriptor *)0x4a25be;
    cVar1 = FUN_006cbfa0();
    if ((cVar1 != '\0') && (*(int *)(iVar2 + 0xe4) == 1)) {
      puStack_40 = (undefined1 *)&puStack_34;
      pTStack_38 = (TypeDescriptor *)0x1;
      pTStack_3c = (TypeDescriptor *)0x1003250;
      FUN_006e8e70();
      pTStack_38 = (TypeDescriptor *)0x4a25e7;
      FUN_00684c50();
      puStack_34 = local_24;
      pTStack_38 = (TypeDescriptor *)0x4a25f2;
      FUN_006e6400();
      FUN_0040e4d0(&puStack_40);
      FUN_00677150();
    }
  }
  ExceptionList = local_10;
  return;
}

