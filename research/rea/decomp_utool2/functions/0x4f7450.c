// rea decompile_all
// name: FUN_004f7450
// address: 0x4f7450
// body: available
// range: 0x4f7450-0x4f753b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f7450(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  undefined4 uStack_24;
  TypeDescriptor *pTStack_20;
  TypeDescriptor *pTStack_1c;
  undefined4 uStack_18;
  
  iVar2 = *(int *)(in_ECX + 0xec);
  if (*(int *)(in_ECX + 0xb4) < 1) {
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0xec) = 1;
    }
    else if ((iVar2 == 1) || (iVar2 == 2)) {
      *(undefined4 *)(in_ECX + 0xec) = 0;
    }
  }
  else {
    if (iVar2 == 0) {
      *(undefined4 *)(in_ECX + 0xec) = 2;
    }
    else if ((iVar2 == 1) || (iVar2 == 2)) {
      *(undefined4 *)(in_ECX + 0xec) = 0;
    }
    uVar3 = 0;
    if (0 < *(int *)(*(int *)(in_ECX + 0xc) + 0x30)) {
      do {
        if (uVar3 < *(uint *)(*(int *)(in_ECX + 0xc) + 0x30)) {
          uVar1 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xc) + 0x28) + uVar3 * 4);
        }
        else {
          uVar1 = 0;
        }
        uStack_18 = 0;
        pTStack_1c = &CheckBoxButton::RTTI_Type_Descriptor;
        pTStack_20 = &juce::Component::RTTI_Type_Descriptor;
        uStack_24 = 0;
        iVar2 = FUN_006f6dd6(uVar1);
        if ((iVar2 != 0) && (iVar2 != in_ECX)) {
          *(undefined4 *)(iVar2 + 0xec) = 0;
          FUN_006e6400(&uStack_24);
          FUN_006ce9f0(1);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(*(int *)(in_ECX + 0xc) + 0x30));
    }
  }
  FUN_006e6400(&uStack_24);
  FUN_006ce9f0(1);
  return;
}

