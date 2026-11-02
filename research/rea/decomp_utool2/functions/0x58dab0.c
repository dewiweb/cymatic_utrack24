// rea decompile_all
// name: FUN_0058dab0
// address: 0x58dab0
// body: available
// range: 0x58dab0-0x58e131 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058dab0(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_84;
  double local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined1 *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714082;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = 0;
  uStack_84._4_4_ = (uint *)in_ECX[10];
  uStack_84._0_4_ = 0x58db0c;
  local_1c = in_ECX;
  FUN_00633c20();
  (**(code **)(*in_ECX + 8))();
  local_8 = 0;
  uStack_84._4_4_ = (uint *)0x58db2f;
  FUN_00637690();
  FUN_006377c0();
  local_8._0_1_ = 2;
  piVar7 = (int *)(local_30 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  (**(code **)(*in_ECX + 0xc))();
  local_8._0_1_ = 3;
  uStack_84._4_4_ = (uint *)0x58db82;
  FUN_00637690();
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_005893a0();
  piVar7 = (int *)(local_2c - 8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      uStack_84._4_4_ = (uint *)0x58dbad;
      FID_conflict__free(piVar7);
    }
  }
  local_8._0_1_ = 2;
  piVar7 = (int *)(local_28 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      uStack_84._4_4_ = (uint *)0x58dbd4;
      FID_conflict__free(piVar7);
    }
  }
  uStack_84._4_4_ = (uint *)0x58dbe8;
  FUN_0045c990();
  local_8._0_1_ = 5;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 5;
  if (in_ECX[0x19] == 0) {
    if (*(char *)in_ECX[7] == '\0') {
      uStack_84._4_4_ = (uint *)0x58dc2c;
      FUN_0045c990();
      local_8._0_1_ = 6;
      uStack_84._4_4_ = &local_2c;
      uStack_84._0_4_ = 0x58dc43;
      FUN_006334c0();
      local_8._0_1_ = 7;
      uStack_84._4_4_ = (uint *)0x58dc55;
      FUN_00637690();
      local_8 = CONCAT31(local_8._1_3_,8);
      uStack_84._4_4_ = (uint *)0x58dc62;
      FUN_00636ec0();
      piVar7 = (int *)(local_30 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58dc82;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_2c - 8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58dca5;
          FID_conflict__free(piVar7);
        }
      }
      local_8._0_1_ = 5;
      local_20 = local_20 + -2;
      if (local_20 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *local_20;
        *local_20 = *local_20 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58dccc;
          FID_conflict__free(local_20);
        }
      }
      if (local_60 <= 0.0) {
        uStack_84._4_4_ = (uint *)0x58dd2c;
        FUN_0045c990();
        local_20 = &local_30;
        local_8 = 10;
        local_2c = 2;
      }
      else {
        FUN_006f56f0();
        uStack_84 = FUN_006f55df();
        FUN_00636d50();
        uStack_84._4_4_ = (uint *)0x58dd0d;
        local_20 = (int *)FUN_006377c0();
        local_8 = CONCAT31(local_8._1_3_,9);
        local_2c = 1;
      }
      uStack_84._4_4_ = (uint *)0x58dd58;
      local_24 = local_2c;
      FUN_0045c990();
      local_8 = 0xb;
      uStack_84._4_4_ = (uint *)in_ECX[0xf];
      uStack_84._0_4_ = in_ECX[0xe];
      local_40 = &stack0xffffff84;
      local_38 = FUN_00636d50();
      local_3c = (undefined1 *)((int)&uStack_84 + 4);
      local_8._0_1_ = 0xc;
      local_34 = (undefined1 *)&uStack_84;
      iVar6 = in_ECX[0xd];
      FUN_00636d50(in_ECX[0xc],iVar6);
      local_8._0_1_ = 0xd;
      uVar12 = extraout_ECX;
      uVar3 = FUN_006334c0(&local_48,&local_28);
      local_8._0_1_ = 0xe;
      uVar11 = extraout_ECX_00;
      FUN_00637690(uVar3);
      FUN_006377c0(uVar11);
      FUN_00637730(uVar12);
      FUN_006377c0(iVar6);
      FUN_00637730();
      uStack_84._0_4_ = 0x58ddf9;
      FUN_006377c0();
      uStack_84._4_4_ = (uint *)0x58de04;
      FUN_00637730();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      uStack_84._4_4_ = (uint *)0x58de11;
      FUN_00636ec0();
      piVar7 = (int *)(local_44 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58de33;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_48 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58de56;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_4c + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58de79;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_50 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58de9c;
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_28 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58debf;
          FID_conflict__free(piVar7);
        }
      }
      uVar10 = local_2c;
      if ((local_2c & 2) != 0) {
        uVar10 = local_2c & 0xfffffffd;
        piVar7 = (int *)(local_30 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            uStack_84._4_4_ = (uint *)0x58deed;
            FID_conflict__free(piVar7);
          }
        }
      }
      local_8._0_1_ = 5;
      local_8._1_3_ = 0;
      in_ECX = local_1c;
      if (((uVar10 & 1) != 0) && (piVar7 = (int *)(local_54 + -8), piVar7 != &DAT_00bfe124)) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58df1c;
          FID_conflict__free(piVar7);
          in_ECX = local_1c;
        }
      }
    }
    else {
      uStack_84._4_4_ = (uint *)0x58dc0d;
      FUN_00636ec0();
      uStack_84._4_4_ = (uint *)0x58dc16;
      FUN_00636ec0();
    }
  }
  else {
    uStack_84._4_4_ = (uint *)0x58dfa6;
    local_8._0_1_ = uVar2;
    FUN_00621830();
    uStack_84._4_4_ = (uint *)0x58dfb7;
    FUN_00621830();
  }
  FUN_005893a0();
  piVar7 = in_ECX + 0x32;
  if (in_ECX[0x33] < in_ECX[0x34] + 1) {
    uStack_84._4_4_ = (uint *)0x58df53;
    FUN_00409cf0();
  }
  iVar6 = in_ECX[0x34];
  in_ECX[0x34] = iVar6 + 1;
  piVar4 = (int *)(*piVar7 + iVar6 * 4);
  if (piVar4 != (int *)0x0) {
    *piVar4 = local_14;
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
  }
  local_1c = (int *)0x0;
  if (0 < in_ECX[0x19]) {
    do {
      piVar4 = local_1c;
      uStack_84._4_4_ = (uint *)0x58dfcf;
      puVar5 = (undefined4 *)FUN_00637690();
      iVar6 = in_ECX[0x34];
      iVar9 = iVar6 + 1;
      if (in_ECX[0x33] < iVar9) {
        if (iVar9 < 0) {
          iVar9 = iVar6 + 2;
        }
        uVar10 = iVar6 + 9 + (iVar9 >> 1) & 0xfffffff8;
        piVar4 = local_1c;
        if (in_ECX[0x33] != uVar10) {
          if ((int)uVar10 < 1) {
            uStack_84._4_4_ = (uint *)0x58e026;
            FID_conflict__free((void *)*piVar7);
            *piVar7 = 0;
          }
          else {
            uStack_84._4_4_ = (uint *)*piVar7;
            if (uStack_84._4_4_ == (uint *)0x0) {
              uStack_84._4_4_ = (uint *)0x58e00b;
              iVar6 = FUN_004c554b();
              *piVar7 = iVar6;
            }
            else {
              uStack_84._0_4_ = 0x58e018;
              iVar6 = FUN_004c553b();
              *piVar7 = iVar6;
            }
          }
          in_ECX[0x33] = uVar10;
          piVar4 = local_1c;
        }
      }
      iVar6 = in_ECX[0x34];
      in_ECX[0x34] = iVar6 + 1;
      puVar1 = (undefined4 *)(*piVar7 + iVar6 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar5;
        *puVar5 = &DAT_00bfe12c;
      }
      piVar8 = (int *)(local_50 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58e075;
          FID_conflict__free(piVar8);
        }
      }
      uStack_84._4_4_ = (uint *)0x58e098;
      FUN_00637690();
      local_8._0_1_ = 0x10;
      FUN_005893a0();
      local_8._0_1_ = 5;
      piVar8 = (int *)(local_4c + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uStack_84._4_4_ = (uint *)0x58e0c8;
          FID_conflict__free(piVar8);
        }
      }
      local_1c = (int *)((int)piVar4 + 1);
    } while ((int)local_1c < in_ECX[0x19]);
  }
  piVar7 = (int *)(local_18 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      uStack_84._4_4_ = (uint *)0x58e0fa;
      FID_conflict__free(piVar7);
    }
  }
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      uStack_84._4_4_ = (uint *)0x58e11d;
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

