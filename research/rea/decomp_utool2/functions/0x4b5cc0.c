// rea decompile_all
// name: FUN_004b5cc0
// address: 0x4b5cc0
// body: available
// range: 0x4b5cc0-0x4b5e50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5cc0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_ECX;
  int *local_4c;
  int *local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00703ff7;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0x8856f961;
  uStack_20 = 0x11d0340a;
  uStack_1c = 0xc0006ba9;
  uStack_18 = 0xa205d74f;
  local_14 = uVar1;
  FUN_006ea9d0(&local_24);
  iVar2 = *(int *)(in_ECX + 0x70);
  local_48 = (int *)0x0;
  local_34 = 0xd30c1661;
  uStack_30 = 0x11d0cdaf;
  uStack_2c = 0xc0003e8a;
  uStack_28 = 0x6ee2c94f;
  local_44 = 0xb196b284;
  uStack_40 = 0x101abab4;
  uStack_3c = 0xaa009cb6;
  uStack_38 = 0x71d3400;
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x3c) == 0)) ||
     (iVar2 = (**(code **)**(undefined4 **)(iVar2 + 0x3c))
                        (*(undefined4 **)(iVar2 + 0x3c),&local_34,&local_48,uVar1),
     piVar3 = local_48, iVar2 < 0)) {
    piVar3 = (int *)0x0;
  }
  *(int **)(in_ECX + 0x78) = piVar3;
  iVar2 = *(int *)(in_ECX + 0x70);
  local_4c = (int *)0x0;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x3c) != 0)) &&
     ((iVar2 = (**(code **)**(undefined4 **)(iVar2 + 0x3c))
                         (*(undefined4 **)(iVar2 + 0x3c),&local_44,&local_4c), -1 < iVar2 &&
      (local_4c != (int *)0x0)))) {
    piVar3 = (int *)(in_ECX + 0x7c);
    local_48 = piVar3;
    (**(code **)(*local_4c + 0x10))(local_4c,&DAT_00c21080,piVar3);
    if (*piVar3 != 0) {
      iVar2 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 0xc),0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::WebBrowserComponent::RTTI_Type_Descriptor,0);
      piVar4 = operator_new(0x38);
      piVar4[1] = 1;
      *piVar4 = (int)juce::ComBaseClassHelper<IDispatch>::vftable;
      local_8 = 1;
      FUN_006b3120(iVar2);
      *piVar4 = (int)juce::WebBrowserComponent::Pimpl::EventHandler::vftable;
      piVar4[2] = (int)juce::WebBrowserComponent::Pimpl::EventHandler::vftable;
      piVar4[0xd] = iVar2;
      local_8 = 0xffffffff;
      (**(code **)(*(int *)*piVar3 + 0x14))((int *)*piVar3,piVar4,in_ECX + 0x80);
      if ((undefined **)*piVar4 == juce::WebBrowserComponent::Pimpl::EventHandler::vftable) {
        piVar4 = piVar4 + 1;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          FUN_004b61f0(1);
        }
      }
      else {
        (*(code *)((undefined **)*piVar4)[2])(piVar4);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

