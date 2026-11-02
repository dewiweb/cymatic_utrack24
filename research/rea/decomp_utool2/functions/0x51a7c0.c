// rea decompile_all
// name: FUN_0051a7c0
// address: 0x51a7c0
// body: available
// range: 0x51a7c0-0x51ae8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051a7c0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  int extraout_ECX_12;
  int *piVar5;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_c0 [40];
  undefined1 local_98 [40];
  undefined1 local_70 [40];
  undefined1 local_48 [40];
  int local_20;
  int local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709c1f;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((uint)param_1[4] >> 5 & 1) != 0) {
    local_14 = in_ECX;
    if ((*(byte *)(in_ECX + 0xc) & 1) == 0) {
      FUN_006dff00(1,1,in_ECX);
    }
    FUN_004b00e0(uVar1);
    if (in_ECX[0x15] != 0) {
      FID_conflict__free((void *)in_ECX[0x14]);
      in_ECX[0x14] = 0;
      in_ECX[0x15] = 0;
    }
    in_ECX[0x16] = 0;
    uVar1 = FUN_0051c060();
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 0;
      FUN_006dfcb0(1,uVar2,1,0,extraout_ECX);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 2) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 1;
      FUN_006dfcb0(2,uVar2,1,0,extraout_ECX_00);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 4) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 2;
      FUN_006dfcb0(4,uVar2,1,0,extraout_ECX_01);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 8) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 3;
      FUN_006dfcb0(8,uVar2,1,0,extraout_ECX_02);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x10) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 4;
      FUN_006dfcb0(0x10,uVar2,1,0,extraout_ECX_03);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x20) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 5;
      FUN_006dfcb0(0x20,uVar2,1,0,extraout_ECX_04);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x40) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 6;
      FUN_006dfcb0(0x40,uVar2,1,0,extraout_ECX_05);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((char)uVar1 < '\0') {
      uVar2 = FUN_0051bf80();
      local_8 = 7;
      FUN_006dfcb0(0x80,uVar2,1,0,extraout_ECX_06);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x100) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 8;
      FUN_006dfcb0(0x100,uVar2,1,0,extraout_ECX_07);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x200) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 9;
      FUN_006dfcb0(0x200,uVar2,1,0,extraout_ECX_08);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x400) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 10;
      FUN_006dfcb0(0x400,uVar2,1,0,extraout_ECX_09);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x800) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 0xb;
      FUN_006dfcb0(0x800,uVar2,1,0,extraout_ECX_10);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 0xc;
      FUN_006dfcb0(0x1000,uVar2,1,0,extraout_ECX_11);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x2000) != 0) {
      FUN_006f6dd6(local_14[1],0,&juce::TreeView::RTTI_Type_Descriptor,
                   &ProjectExplorer::RTTI_Type_Descriptor,0);
      param_1 = (int *)FUN_004130a0(&local_20);
      local_8 = 0xd;
      local_18 = FUN_0051bf80();
      local_8 = CONCAT31(local_8._1_3_,0xe);
      iVar4 = local_14[0xf];
      if (*param_1 == iVar4) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0045c1e0(*param_1,iVar4);
        iVar4 = extraout_ECX_12;
      }
      FUN_006dfcb0(0x2000,local_18,1,iVar3 == 0,iVar4);
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = 0xffffffff;
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x4000) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 0xf;
      FUN_006dfcb0(0x4000,uVar2,1,0,extraout_ECX_13);
      local_8 = 0xffffffff;
      piVar5 = param_1 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar5);
        }
      }
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar2 = FUN_0051bf80();
      local_8 = 0x10;
      FUN_006dfcb0(0x8000,uVar2,1,0,extraout_ECX_14);
      local_8 = 0xffffffff;
      param_1 = param_1 + -2;
      if (param_1 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *param_1;
        *param_1 = *param_1 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(param_1);
        }
      }
    }
    uVar14 = 1;
    uVar13 = 0;
    uVar12 = 0;
    puVar11 = local_48;
    uVar10 = 0;
    puVar9 = local_70;
    uVar8 = 0;
    puVar7 = local_98;
    uVar2 = 0;
    puVar6 = local_c0;
    FUN_006d1110(puVar6,0,puVar7,0,puVar9,0,puVar11,0,0,1);
    FUN_006a0310(puVar6,uVar2);
    FUN_006a0400(puVar7,uVar8);
    FUN_006a03b0(puVar9,uVar10);
    uVar2 = FUN_006a0360(puVar11,uVar12);
    iVar4 = FUN_006a0120(uVar2,uVar13,uVar14);
    if (iVar4 != 0) {
      (**(code **)(*local_14 + 0x6c))(iVar4);
    }
  }
  ExceptionList = local_10;
  return;
}

