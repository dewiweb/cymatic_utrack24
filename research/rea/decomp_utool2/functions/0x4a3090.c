// rea decompile_all
// name: FUN_004a3090
// address: 0x4a3090
// body: available
// range: 0x4a3090-0x4a3190 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a3090(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = 8;
  local_8 = 8;
  uVar5 = 0;
  local_10 = 0;
  if (0 < *(int *)(in_ECX + 0x30)) {
    bVar6 = *(int *)(in_ECX + 0x30) != 0;
    do {
      if (bVar6) {
        uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x28) + uVar5 * 4);
      }
      else {
        uVar2 = 0;
      }
      piVar3 = (int *)FUN_006f6dd6(uVar2,0,&juce::Component::RTTI_Type_Descriptor,
                                   &juce::ToolbarItemComponent::RTTI_Type_Descriptor,0);
      if (piVar3 != (int *)0x0) {
        local_c = 1;
        local_18 = 1;
        local_14 = 1;
        cVar1 = (**(code **)(*piVar3 + 0xcc))
                          (*(undefined4 *)(in_ECX + 0x80),0,&local_c,&local_18,&local_14);
        if (cVar1 != '\0') {
          if ((400 < local_c + iVar4) && (8 < iVar4)) {
            local_8 = local_8 + *(int *)(in_ECX + 0x80);
            iVar4 = 8;
          }
          FUN_006e9790(iVar4,local_8,local_c,*(undefined4 *)(in_ECX + 0x80));
          iVar4 = iVar4 + local_c;
          if (local_10 < iVar4) {
            local_10 = iVar4;
          }
        }
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < *(uint *)(in_ECX + 0x30);
    } while ((int)uVar5 < (int)*(uint *)(in_ECX + 0x30));
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),local_10 + 8,
               *(int *)(in_ECX + 0x80) + local_8 + 8);
  return;
}

