// rea decompile_all
// name: FUN_006b13a0
// address: 0x6b13a0
// body: available
// range: 0x6b13a0-0x6b1477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b13a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 *local_8;
  
  if (*(int *)(in_ECX + 4) == 0) {
    uVar6 = 0;
    if (0 < *(int *)(in_ECX + -0x40)) {
      bVar7 = *(int *)(in_ECX + -0x40) != 0;
      do {
        if (bVar7) {
          uVar2 = *(undefined4 *)(*(int *)(in_ECX + -0x48) + uVar6 * 4);
        }
        else {
          uVar2 = 0;
        }
        piVar3 = (int *)FUN_006f6dd6(uVar2,0,&juce::Component::RTTI_Type_Descriptor,
                                     &juce::MultiDocumentPanelWindow::RTTI_Type_Descriptor,0);
        if (piVar3 != (int *)0x0) {
          if (piVar3[0x20] == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(piVar3[0x20] + 8);
          }
          (**(code **)(*piVar3 + 0x24))(iVar4 + 4);
        }
        uVar6 = uVar6 + 1;
        bVar7 = uVar6 < *(uint *)(in_ECX + -0x40);
      } while ((int)uVar6 < (int)*(uint *)(in_ECX + -0x40));
      return;
    }
  }
  else if (*(int *)(in_ECX + 0x14) != 0) {
    iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x70) + 0x98);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      piVar3 = (int *)FUN_0040f020(&local_8,iVar4);
      if (*piVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*piVar3 + 8);
      }
      if (local_8 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_8 + 1;
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_8)(1);
        }
      }
      FUN_006addd0(iVar4,iVar5 + 4);
    }
  }
  return;
}

