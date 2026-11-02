// rea decompile_all
// name: FUN_004a2f00
// address: 0x4a2f00
// body: available
// range: 0x4a2f00-0x4a3083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a2f00(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  uint uVar6;
  bool bVar7;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070352c;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::Toolbar::MissingItemsComponent::vftable;
  in_ECX[0x1c] = juce::Toolbar::MissingItemsComponent::vftable;
  if ((in_ECX[0x1f] != 0) && (*(int *)(in_ECX[0x1f] + 8) != 0)) {
    uVar6 = 0;
    if (0 < (int)in_ECX[0xc]) {
      bVar7 = in_ECX[0xc] != 0;
      do {
        if (bVar7) {
          uVar5 = *(undefined4 *)(in_ECX[10] + uVar6 * 4);
        }
        else {
          uVar5 = 0;
        }
        piVar4 = (int *)FUN_006f6dd6(uVar5,0,&juce::Component::RTTI_Type_Descriptor,
                                     &juce::ToolbarItemComponent::RTTI_Type_Descriptor,0,uVar3);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x28))(0);
          if (uVar6 < (uint)in_ECX[0x23]) {
            local_14 = *(undefined4 *)(in_ECX[0x21] + uVar6 * 4);
            FUN_00410320(uVar6);
          }
          else {
            local_14 = 0;
          }
          local_8 = 0;
          if (in_ECX[0x1f] == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(in_ECX[0x1f] + 8);
          }
          FUN_006f6dd6(uVar5,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::Toolbar::RTTI_Type_Descriptor,0,uVar3);
          local_8 = 0xffffffff;
          FUN_006e5050(piVar4,local_14);
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 + 1;
        bVar7 = uVar6 < (uint)in_ECX[0xc];
      } while ((int)uVar6 < (int)in_ECX[0xc]);
    }
    local_8 = 1;
    if (in_ECX[0x1f] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(in_ECX[0x1f] + 8);
    }
    piVar4 = (int *)FUN_006f6dd6(uVar5,0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::Toolbar::RTTI_Type_Descriptor,0,uVar3);
    local_8 = 0xffffffff;
    (**(code **)(*piVar4 + 0x84))();
  }
  FID_conflict__free((void *)in_ECX[0x21]);
  puVar2 = (undefined4 *)in_ECX[0x1f];
  if (puVar2 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar2 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*puVar2)(1);
    }
  }
  *in_ECX = juce::PopupMenu::CustomComponent::vftable;
  in_ECX[0x1c] = juce::SingleThreadedReferenceCountedObject::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

