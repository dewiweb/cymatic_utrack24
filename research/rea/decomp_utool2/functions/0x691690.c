// rea decompile_all
// name: FUN_00691690
// address: 0x691690
// body: available
// range: 0x691690-0x6919fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00691690(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  void *local_64;
  void *local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  void *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007219cd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  local_14 = in_ECX;
  iVar1 = FUN_006f6dd6(uVar3,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::ToolbarItemComponent::RTTI_Type_Descriptor,0,
                       DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar1 != 0) {
    piVar9 = *(int **)(in_ECX + 0x14);
    piVar7 = (int *)(in_ECX + 0x14);
    piVar4 = piVar9 + *(int *)(in_ECX + 0x1c);
    for (; local_34 = iVar1, local_18 = piVar7, piVar9 != piVar4; piVar9 = piVar9 + 1) {
      if (iVar1 == *piVar9) goto LAB_0069176f;
    }
    if ((*(int *)(iVar1 + 0xe4) == 2) && (iVar2 = FUN_004b2160(), iVar2 != 0)) {
      FUN_00691440(iVar1);
    }
    iVar2 = *(int *)(in_ECX + 0x1c) + 1;
    if (*(int *)(in_ECX + 0x18) < iVar2) {
      FUN_00409cf0(iVar2 / 2 + *(int *)(in_ECX + 0x1c) + 9 & 0xfffffff8);
    }
    iVar2 = *(int *)(in_ECX + 0x1c);
    *(int *)(in_ECX + 0x1c) = iVar2 + 1;
    *(int *)(*piVar7 + iVar2 * 4) = iVar1;
    FUN_006e5050(iVar1,0xffffffff);
    FUN_00691b60(1);
LAB_0069176f:
    if (DAT_00c8a67c == 0) {
      local_30 = operator_new(0xd0);
      local_8 = 0;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = 0xffffffff;
    }
    local_20 = DAT_00c8a67c + 0x90;
    local_2c = *(int *)(local_14 + 0x1c);
    while (local_2c = local_2c + -1, -1 < local_2c) {
      piVar4 = (int *)*piVar7;
      for (piVar9 = piVar4; piVar9 != piVar4 + piVar7[2]; piVar9 = piVar9 + 1) {
        if (iVar1 == *piVar9) {
          piVar7 = (int *)((int)piVar9 - (int)piVar4 >> 2);
          goto LAB_006917de;
        }
      }
      piVar7 = (int *)0xffffffff;
LAB_006917de:
      if (*(char *)(local_14 + 0xc) == '\0') {
        local_24 = *(int *)(param_1 + 0x14) - *(int *)(iVar1 + 0xf0);
        local_28 = *(int *)(iVar1 + 0x18);
      }
      else {
        local_24 = *(int *)(param_1 + 0x18) - *(int *)(iVar1 + 0xf4);
        local_28 = *(int *)(iVar1 + 0x1c);
      }
      local_28 = local_28 + local_24;
      if (piVar7 < *(int **)(local_14 + -0x48)) {
        uVar3 = *(undefined4 *)(*(int *)(local_14 + -0x50) + (int)piVar7 * 4);
      }
      else {
        uVar3 = 0;
      }
      FUN_006b4320(&local_44,uVar3);
      piVar4 = piVar7;
      do {
        piVar4 = (int *)((int)piVar4 + -1);
        local_1c = local_44;
        piVar8 = piVar7;
        piVar9 = piVar7;
        if (((int *)local_18[2] <= piVar4) ||
           (iVar1 = *(int *)(*local_18 + (int)piVar4 * 4), iVar1 == 0)) goto LAB_006918d3;
      } while (*(char *)(iVar1 + 0xf8) == '\0');
      FUN_006b4320(&local_64,iVar1);
      if (*(char *)(local_14 + 0xc) == '\0') {
        iVar2 = local_1c + local_3c;
        local_30 = local_64;
      }
      else {
        iVar2 = local_40 + local_38;
        local_30 = local_60;
      }
      uVar5 = local_28 - iVar2 >> 0x1f;
      uVar6 = local_24 - (int)local_30 >> 0x1f;
      if ((int)((local_24 - (int)local_30 ^ uVar6) - uVar6) <
          (int)((local_28 - iVar2 ^ uVar5) - uVar5)) {
        piVar4 = *(int **)(local_14 + -0x50);
        for (piVar9 = piVar4; piVar9 != piVar4 + *(int *)(local_14 + -0x48); piVar9 = piVar9 + 1) {
          if (iVar1 == *piVar9) {
            piVar8 = (int *)((int)piVar9 - (int)piVar4 >> 2);
            piVar9 = piVar8;
            goto LAB_006918d3;
          }
        }
        piVar8 = (int *)0xffffffff;
        piVar9 = piVar8;
      }
LAB_006918d3:
      do {
        piVar8 = (int *)((int)piVar8 + 1);
        if (((int *)local_18[2] <= piVar8) ||
           (iVar1 = *(int *)(*local_18 + (int)piVar8 * 4), iVar1 == 0)) goto LAB_00691970;
      } while (*(char *)(iVar1 + 0xf8) == '\0');
      FUN_006b4320(&local_54,iVar1);
      if (*(char *)(local_14 + 0xc) == '\0') {
        iVar2 = local_54 + local_4c;
      }
      else {
        iVar2 = local_50 + local_48;
        local_1c = local_40;
      }
      uVar5 = local_28 - iVar2 >> 0x1f;
      piVar8 = (int *)((local_28 - iVar2 ^ uVar5) - uVar5);
      uVar5 = local_24 - local_1c >> 0x1f;
      if ((int)piVar8 < (int)((local_24 - local_1c ^ uVar5) - uVar5)) {
        piVar4 = *(int **)(local_14 + -0x50);
        piVar8 = piVar4 + *(int *)(local_14 + -0x48);
        for (piVar9 = piVar4; piVar9 != piVar8; piVar9 = piVar9 + 1) {
          if (iVar1 == *piVar9) {
            iVar1 = (int)piVar9 - (int)piVar4 >> 2;
            goto LAB_0069196a;
          }
        }
        iVar1 = -1;
LAB_0069196a:
        piVar9 = (int *)(iVar1 + 1);
      }
LAB_00691970:
      iVar1 = local_34;
      if (piVar9 == piVar7) {
        ExceptionList = local_10;
        return;
      }
      FUN_0040e370(local_34,piVar8);
      piVar7 = *(int **)(local_14 + -0x50);
      for (piVar4 = piVar7; piVar4 != piVar7 + *(int *)(local_14 + -0x48); piVar4 = piVar4 + 1) {
        if (iVar1 == *piVar4) {
          iVar2 = (int)piVar4 - (int)piVar7 >> 2;
          goto LAB_006919a3;
        }
      }
      iVar2 = -1;
LAB_006919a3:
      FUN_006cf0a0(iVar2,1,1);
      FUN_006e5050(iVar1,piVar9);
      piVar7 = local_18;
      FUN_00411110(piVar9,iVar1);
      FUN_00691b60(1);
    }
  }
  ExceptionList = local_10;
  return;
}

