// rea decompile_all
// name: FUN_0049a780
// address: 0x49a780
// body: available
// range: 0x49a780-0x49aa8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0049a780(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  int extraout_EDX;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint local_18;
  
  *(undefined1 *)(in_ECX + 0x334) = 1;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x318) + 0x8c);
  iVar7 = *(int *)(in_ECX + 0x78);
  if (iVar7 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(iVar7 + 8);
  }
  if (0 < iVar2) {
    iVar7 = *(int *)(in_ECX + 0x80);
    piVar1 = (int *)(in_ECX + 0x31c);
    uVar3 = *(undefined4 *)(iVar12 + 0x18);
    iVar4 = *(int *)(in_ECX + 0xbc) / iVar2 + 2;
    FUN_004ade20(iVar4,*(undefined4 *)(in_ECX + 0x324),iVar2);
    if (*(int *)(in_ECX + 0x324) < iVar4) {
      local_18 = iVar12 + 0x28;
      do {
        piVar5 = operator_new(0x84);
        FUN_006ea2c0();
        piVar5[0x1c] = (int)juce::TooltipClient::vftable;
        *piVar5 = (int)juce::ListBox::RowComponent::vftable;
        piVar5[0x1c] = (int)juce::ListBox::RowComponent::vftable;
        piVar5[0x1d] = 0;
        piVar5[0x1e] = extraout_EDX;
        piVar5[0x1f] = -1;
        *(undefined2 *)(piVar5 + 0x20) = 0;
        *(undefined1 *)((int)piVar5 + 0x82) = 0;
        iVar6 = *(int *)(in_ECX + 0x324);
        iVar8 = iVar6 + 1;
        if ((int)*(uint *)(in_ECX + 800) < iVar8) {
          if (iVar8 < 0) {
            iVar8 = iVar6 + 2;
          }
          uVar10 = iVar6 + 9 + (iVar8 >> 1) & 0xfffffff8;
          if (*(uint *)(in_ECX + 800) != uVar10) {
            if ((int)uVar10 < 1) {
              FID_conflict__free((void *)*piVar1);
              *piVar1 = 0;
            }
            else if (*piVar1 == 0) {
              iVar6 = FUN_004c554b();
              *piVar1 = iVar6;
            }
            else {
              iVar6 = FUN_004c553b(*piVar1,uVar10 * 4);
              *piVar1 = iVar6;
            }
            *(uint *)(in_ECX + 800) = uVar10;
          }
        }
        iVar6 = *(int *)(in_ECX + 0x324);
        *(int *)(in_ECX + 0x324) = iVar6 + 1;
        *(int **)(*piVar1 + iVar6 * 4) = piVar5;
        (**(code **)(*piVar5 + 0x28))(1);
        iVar6 = -1;
        if (piVar5[3] != iVar12) {
          if (piVar5[3] == 0) {
            FUN_006cfd60();
          }
          else {
            FUN_006cf2a0(piVar5);
          }
          piVar5[3] = iVar12;
          if ((*(byte *)(piVar5 + 0x1a) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)((int)piVar5 + 0x69) & 1) == 0) &&
             (iVar6 = *(int *)(iVar12 + 0x30), 0 < iVar6)) {
            piVar9 = (int *)(*(int *)(iVar12 + 0x28) + (iVar6 + -1) * 4);
            do {
              if ((*(byte *)(*piVar9 + 0x69) & 1) == 0) break;
              iVar6 = iVar6 + -1;
              piVar9 = piVar9 + -1;
            } while (0 < iVar6);
          }
          FUN_00410380(iVar6,piVar5);
          FUN_006cedf0();
          FUN_006cef00();
        }
      } while (*(int *)(in_ECX + 0x324) < iVar4);
    }
    *(int *)(in_ECX + 0x328) = iVar7 / iVar2;
    *(int *)(in_ECX + 0x32c) = (iVar2 + -1 + iVar7) / iVar2;
    iVar6 = 0;
    iVar7 = (*(int *)(in_ECX + 0xbc) + iVar7 + -1) / iVar2;
    *(int *)(in_ECX + 0x330) = iVar7;
    if (0 < iVar4) {
      do {
        iVar11 = *(int *)(in_ECX + 0x328) + iVar6;
        iVar8 = 1;
        if (1 < *(int *)(in_ECX + 0x324)) {
          iVar8 = *(int *)(in_ECX + 0x324);
        }
        iVar7 = iVar11 / iVar8;
        if ((uint)(iVar11 % iVar8) < *(uint *)(in_ECX + 0x324)) {
          iVar7 = *piVar1;
          if (*(int *)(iVar7 + (iVar11 % iVar8) * 4) != 0) {
            FUN_006e9790(0,iVar11 * iVar2,uVar3,iVar2);
            iVar8 = 0;
            iVar7 = *(int *)(*(int *)(in_ECX + 0x318) + 0xa8);
            if (0 < iVar7) {
              piVar5 = *(int **)(*(int *)(in_ECX + 0x318) + 0xa0);
              do {
                if (iVar11 < *piVar5) {
                  local_18 = CONCAT31(local_18._1_3_,(char)iVar8) & 0xffffff01;
                  goto LAB_0049aa26;
                }
                iVar8 = iVar8 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar8 < iVar7);
            }
            local_18 = (uint)local_18._1_3_ << 8;
LAB_0049aa26:
            iVar7 = FUN_0049a170(iVar11,local_18);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x318);
  if (*(int *)(iVar2 + 0x80) != 0) {
    iVar7 = *(int *)(iVar2 + 0x94);
    iVar4 = *(int *)(iVar2 + 0x18) + iVar7 * -2;
    if (iVar4 < *(int *)(iVar12 + 0x18)) {
      iVar4 = *(int *)(iVar12 + 0x18);
    }
    iVar7 = FUN_006e9790(*(int *)(iVar12 + 0x10) + iVar7,iVar7,iVar4,
                         *(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x1c));
  }
  return iVar7;
}

