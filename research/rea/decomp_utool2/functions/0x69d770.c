// rea decompile_all
// name: FUN_0069d770
// address: 0x69d770
// body: available
// range: 0x69d770-0x69dcb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069d770(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *in_ECX;
  int iVar8;
  uint uVar9;
  undefined4 local_84;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  void *local_28;
  void *local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0072271a;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar9 = 0;
  local_18 = (undefined4 *)0x0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  local_14 = (undefined4 *)0x0;
  in_ECX[2] = 0;
  local_8 = 0;
  *(undefined1 *)(in_ECX + 3) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined1 *)((int)in_ECX + 0xd) = 0;
  cVar3 = FUN_00679f40(uVar4);
  while (cVar3 != '\0') {
    switch(local_84) {
    case 0:
      puVar5 = operator_new(0x10);
      local_8._0_1_ = 1;
      FUN_0069f0a0();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_0069f0a0();
      puVar7 = local_2c;
      puVar5[1] = 1;
      *puVar5 = juce::RelativePointPath::StartSubPath::vftable;
      puVar5[2] = local_30;
      if (local_30 != (undefined4 *)0x0) {
        local_30[1] = local_30[1] + 1;
      }
      puVar5[3] = local_2c;
      if (local_2c != (undefined4 *)0x0) {
        local_2c[1] = local_2c[1] + 1;
      }
      local_8 = local_8 & 0xffffff00;
      iVar2 = in_ECX[2];
      iVar8 = iVar2 + 1;
      if (in_ECX[1] < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar2 + 2;
        }
        FUN_00409cf0((iVar8 >> 1) + iVar2 + 9 & 0xfffffff8);
      }
      iVar2 = in_ECX[2];
      uVar9 = uVar9 & 0xfffffffe;
      in_ECX[2] = iVar2 + 1;
      *(undefined4 **)(*in_ECX + iVar2 * 4) = puVar5;
      local_14 = (undefined4 *)uVar9;
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = puVar7 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(1);
        }
      }
      if (local_30 != (undefined4 *)0x0) {
        piVar1 = local_30 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_30)(1);
        }
      }
      break;
    case 1:
      puVar5 = operator_new(0x10);
      local_8._0_1_ = 3;
      local_1c = puVar5;
      FUN_0069f0a0();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_0069f0a0();
      puVar7 = local_34;
      puVar5[1] = 3;
      *puVar5 = juce::RelativePointPath::LineTo::vftable;
      puVar5[2] = local_38;
      if (local_38 != (undefined4 *)0x0) {
        local_38[1] = local_38[1] + 1;
      }
      local_1c[3] = local_34;
      if (local_34 != (undefined4 *)0x0) {
        local_34[1] = local_34[1] + 1;
      }
      local_8 = local_8 & 0xffffff00;
      iVar2 = in_ECX[2];
      iVar8 = iVar2 + 1;
      if (in_ECX[1] < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar2 + 2;
        }
        FUN_00409cf0((iVar8 >> 1) + iVar2 + 9 & 0xfffffff8);
      }
      iVar2 = in_ECX[2];
      uVar9 = uVar9 & 0xfffffffd;
      in_ECX[2] = iVar2 + 1;
      *(undefined4 **)(*in_ECX + iVar2 * 4) = local_1c;
      local_14 = (undefined4 *)uVar9;
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = puVar7 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(1);
        }
      }
      if (local_38 != (undefined4 *)0x0) {
        piVar1 = local_38 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_38)(1);
        }
      }
      break;
    case 2:
      local_24 = operator_new(0x18);
      local_8._0_1_ = 5;
      FUN_0069f0a0();
      local_8._0_1_ = 6;
      FUN_0069f0a0();
      puVar7 = local_14;
      local_8 = CONCAT31(local_8._1_3_,7);
      local_18 = (undefined4 *)((uint)local_14 | 4);
      FUN_0069f0a0();
      local_8 = 8;
      FUN_0069f0a0();
      local_8 = 9;
      local_18 = (undefined4 *)((uint)puVar7 | 0xc);
      local_14 = local_18;
      uVar6 = FUN_0069ce60(&local_40,&local_48);
      iVar2 = in_ECX[2];
      iVar8 = iVar2 + 1;
      if (in_ECX[1] < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar2 + 2;
        }
        FUN_00409cf0(iVar2 + 9 + (iVar8 >> 1) & 0xfffffff8);
      }
      puVar7 = local_14;
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      *(undefined4 *)(*in_ECX + iVar2 * 4) = uVar6;
      if (local_3c != (undefined4 *)0x0) {
        piVar1 = local_3c + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_3c)(1);
        }
      }
      if (local_40 != (undefined4 *)0x0) {
        piVar1 = local_40 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_40)(1);
        }
      }
      local_8 = 0;
      uVar9 = (uint)puVar7 & 0xfffffff3;
      local_14 = (undefined4 *)uVar9;
      if (local_44 != (undefined4 *)0x0) {
        piVar1 = local_44 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_44)(1);
        }
      }
      if (local_48 != (undefined4 *)0x0) {
        piVar1 = local_48 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_48)(1);
        }
      }
      break;
    case 3:
      local_28 = operator_new(0x20);
      local_8._0_1_ = 0xc;
      FUN_0069f0a0();
      local_8._0_1_ = 0xd;
      FUN_0069f0a0();
      local_8 = CONCAT31(local_8._1_3_,0xe);
      local_18 = (undefined4 *)(uVar9 | 0x10);
      local_14 = local_18;
      FUN_0069f0a0();
      local_8 = 0xf;
      FUN_0069f0a0();
      local_8 = 0x10;
      local_18 = (undefined4 *)(uVar9 | 0x30);
      FUN_0069f0a0();
      local_8 = 0x11;
      FUN_0069f0a0();
      local_8 = 0x12;
      local_18 = (undefined4 *)(uVar9 | 0x70);
      uVar6 = FUN_0069ca70(&local_50,&local_58,&local_60);
      iVar2 = in_ECX[2];
      iVar8 = iVar2 + 1;
      if (in_ECX[1] < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar2 + 2;
        }
        FUN_00409cf0((iVar8 >> 1) + iVar2 + 9 & 0xfffffff8);
      }
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      *(undefined4 *)(*in_ECX + iVar2 * 4) = uVar6;
      if (local_4c != (undefined4 *)0x0) {
        piVar1 = local_4c + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_4c)(1);
        }
      }
      if (local_50 != (undefined4 *)0x0) {
        piVar1 = local_50 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_50)(1);
        }
      }
      if (local_54 != (undefined4 *)0x0) {
        piVar1 = local_54 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_54)(1);
        }
      }
      if (local_58 != (undefined4 *)0x0) {
        piVar1 = local_58 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_58)(1);
        }
      }
      local_8 = 0;
      uVar9 = uVar9 & 0xffffff8f;
      local_14 = (undefined4 *)uVar9;
      if (local_5c != (undefined4 *)0x0) {
        piVar1 = local_5c + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_5c)(1);
        }
      }
      if (local_60 != (undefined4 *)0x0) {
        piVar1 = local_60 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_60)(1);
        }
      }
      break;
    case 4:
      puVar7 = operator_new(8);
      puVar7[1] = 2;
      *puVar7 = juce::RelativePointPath::CloseSubPath::vftable;
      iVar2 = in_ECX[2];
      iVar8 = iVar2 + 1;
      local_18 = puVar7;
      if (in_ECX[1] < iVar8) {
        if (iVar8 < 0) {
          iVar8 = iVar2 + 2;
        }
        FUN_00409cf0((iVar8 >> 1) + iVar2 + 9 & 0xfffffff8);
      }
      iVar2 = in_ECX[2];
      in_ECX[2] = iVar2 + 1;
      *(undefined4 **)(*in_ECX + iVar2 * 4) = puVar7;
    }
    cVar3 = FUN_00679f40(uVar4);
  }
  ExceptionList = local_10;
  return;
}

