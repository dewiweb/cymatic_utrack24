// rea decompile_all
// name: FUN_00499480
// address: 0x499480
// body: available
// range: 0x499480-0x4996c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499480(uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  double dVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702886;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((param_2 != *(int *)(in_ECX + 0x1c)) || (param_3 != *(int *)(in_ECX + 0x20))) ||
     (*(int *)(in_ECX + 0x34) + 0x15eU < param_1)) {
    cVar2 = FUN_006d01e0();
    if (cVar2 != '\0') {
      *(undefined1 *)(*(int *)(in_ECX + 0x14) + 0xc4) = 1;
    }
    dVar9 = __hypot((double)(*(int *)(in_ECX + 0x1c) - param_2),
                    (double)(*(int *)(in_ECX + 0x20) - param_3));
    if (2 < (int)dVar9) {
      *(uint *)(in_ECX + 0x34) = param_1;
      if ((*(char *)(*(int *)(in_ECX + 0x14) + 200) != '\0') && (cVar2 != '\0')) {
        *(undefined1 *)(*(int *)(in_ECX + 0x14) + 200) = 0;
      }
    }
    iVar5 = *(int *)(in_ECX + 0x14);
    if ((*(char *)(iVar5 + 200) == '\0') &&
       (((*(int *)(iVar5 + 0xdc) == 0 ||
         (iVar5 = *(int *)(iVar5 + 0xdc), (*(byte *)(iVar5 + 0x68) & 2) == 0)) ||
        ((cVar3 = FUN_00497d00(uVar4), cVar3 == '\0' &&
         ((*(int *)(iVar5 + 0xdc) == 0 || (cVar3 = FUN_00497cd0(), cVar3 == '\0')))))))) {
      if ((cVar2 == '\0') ||
         (((param_2 == *(int *)(in_ECX + 0x1c) && (param_3 == *(int *)(in_ECX + 0x20))) ||
          (cVar3 = FUN_004996d0(param_2,param_3), cVar3 == '\0')))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      *(int *)(in_ECX + 0x1c) = param_2;
      *(int *)(in_ECX + 0x20) = param_3;
      if (!bVar1) {
        iVar5 = FUN_006cf2f0(param_4,param_5);
        if (iVar5 == *(int *)(in_ECX + 0x14)) {
          iVar5 = 0;
        }
        iVar6 = FUN_006f6dd6(iVar5,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor,0)
        ;
        if ((iVar6 == 0) && (iVar5 != 0)) {
          iVar6 = FUN_004b1c70();
        }
        local_8 = 0;
        iVar8 = *(int *)(*(int *)(in_ECX + 0x14) + 0xd8);
        if (iVar8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar8 + 8);
        }
        iVar8 = FUN_006f6dd6(uVar7,0,&juce::Component::RTTI_Type_Descriptor,
                             &juce::PopupMenu::HelperClasses::ItemComponent::RTTI_Type_Descriptor,0)
        ;
        local_8 = 0xffffffff;
        if (iVar6 != iVar8) {
          if (cVar2 == '\0') {
            iVar5 = *(int *)(*(int *)(in_ECX + 0x14) + 0xdc);
            if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x68) & 2) != 0)) {
              ExceptionList = local_10;
              return;
            }
          }
          else if ((iVar5 != 0) && (*(int *)(*(int *)(in_ECX + 0x14) + 0xdc) != 0)) {
            FUN_004973b0(0,1);
          }
          FUN_00498ad0();
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

