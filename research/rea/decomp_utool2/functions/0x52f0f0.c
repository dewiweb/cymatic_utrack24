// rea decompile_all
// name: FUN_0052f0f0
// address: 0x52f0f0
// body: available
// range: 0x52f0f0-0x52f2a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f0f0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 uStack_30;
  TypeDescriptor *pTStack_2c;
  TypeDescriptor *pTStack_28;
  int *piStack_24;
  
  if ((*(uint *)(param_1 + 0x10) >> 4 & 1) != 0) {
    *(undefined2 *)(in_ECX + 0x7c) = 0;
    if (*(int *)(*(int *)(in_ECX + 0x98) + 0x9c) == 0) {
      uVar3 = 0;
    }
    else {
      piStack_24 = (int *)(in_ECX + 0x9c);
      pTStack_28 = (TypeDescriptor *)0x52f135;
      uVar3 = FUN_0068f6f0();
    }
    piStack_24 = (int *)0x0;
    pTStack_28 = &TargetExplorerBaseItem::RTTI_Type_Descriptor;
    pTStack_2c = &juce::TreeViewItem::RTTI_Type_Descriptor;
    uStack_30 = 0;
    piVar4 = (int *)FUN_006f6dd6(uVar3);
    piStack_24 = (int *)(*(uint *)(param_1 + 0x10) >> 1);
    if (((uint)piStack_24 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        if ((*(byte *)(piVar4 + 0xc) & 1) == 0) {
          pTStack_28 = (TypeDescriptor *)0x1;
          pTStack_2c = (TypeDescriptor *)0x1;
          uStack_30 = 0x52f291;
          FUN_006dff00();
        }
      }
      else {
        if (*(int *)(piVar4[1] + 0x9c) == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piStack_24 = (int *)0x0;
          pTStack_28 = (TypeDescriptor *)0x52f1ae;
          piVar6 = (int *)FUN_0068fb00();
        }
        piStack_24 = (int *)0x0;
        pTStack_28 = &TargetExplorerBaseItem::RTTI_Type_Descriptor;
        pTStack_2c = &juce::TreeViewItem::RTTI_Type_Descriptor;
        uStack_30 = 0;
        iVar5 = FUN_006f6dd6(piVar6);
        if ((piVar6[2] == piVar4[2]) && (*(int *)(iVar5 + 0x40) == piVar4[0x10])) {
          piStack_24 = (int *)0x52f1ea;
          uVar7 = FUN_006df9b0();
          piStack_24 = (int *)0x52f1f3;
          iVar8 = FUN_006df9b0();
          iVar5 = extraout_ECX;
          piVar1 = piStack_24;
          do {
            piStack_24 = (int *)iVar5;
            if (piVar6 == piVar4) {
              pTStack_28 = (TypeDescriptor *)0x0;
              pTStack_2c = (TypeDescriptor *)0x1;
              uStack_30 = 0x52f276;
              FUN_006dff00();
              return;
            }
            iVar5 = *piVar6;
            piStack_24 = piVar1;
            if (*(code **)(iVar5 + 0x18) == FUN_00412fc0) {
LAB_0052f211:
              if ((*(byte *)(piVar6 + 0xc) & 1) == 0) {
                *(byte *)(piVar6 + 0xc) = *(byte *)(piVar6 + 0xc) | 1;
                if (piVar6[1] != 0) {
                  FUN_006e6400(&uStack_30);
                  FUN_006ce9f0(1);
                }
                piStack_24 = (int *)0x1;
                pTStack_28 = (TypeDescriptor *)0x52f245;
                (**(code **)(*piVar6 + 0x38))();
                iVar5 = extraout_ECX_00;
              }
            }
            else {
              piStack_24 = (int *)0x52f29e;
              cVar2 = (**(code **)(iVar5 + 0x18))();
              iVar5 = extraout_ECX_01;
              if (cVar2 != '\0') goto LAB_0052f211;
            }
            uVar7 = (uVar7 + (uint)((int)uVar7 < iVar8) * 2) - 1;
            piVar1 = piStack_24;
            if (uVar7 < *(uint *)(piVar6[2] + 0x14)) {
              piVar6 = *(int **)(*(int *)(piVar6[2] + 0xc) + uVar7 * 4);
            }
            else {
              piVar6 = (int *)0x0;
            }
          } while( true );
        }
      }
    }
    else {
      piStack_24 = (int *)0x0;
      pTStack_28 = &TargetExplorer::RTTI_Type_Descriptor;
      pTStack_2c = &juce::TreeView::RTTI_Type_Descriptor;
      uStack_30 = 0;
      iVar5 = FUN_006f6dd6(piVar4[1]);
      if ((*(uint *)(iVar5 + 0xd8) >> 1 & 1) == 0) {
        pTStack_28 = (TypeDescriptor *)0x52f187;
        piStack_24 = piVar4;
        FUN_0052e450();
        return;
      }
    }
  }
  return;
}

