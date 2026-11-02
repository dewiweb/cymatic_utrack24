// rea decompile_all
// name: FUN_00588160
// address: 0x588160
// body: available
// range: 0x588160-0x588931 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0058890e) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00588160(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *extraout_ECX;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_70;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  int *local_60;
  undefined4 *local_5c;
  int local_58 [16];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007136c5;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00637f30();
  FUN_00636040();
  local_8 = 0;
  FUN_00634890();
  piVar5 = (int *)(local_70 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = 0xffffffff;
  piVar5 = (int *)(local_58[0] + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_5c = operator_new(0x30);
  local_8 = 1;
  piVar5 = (int *)FUN_0062aec0();
  if (*(char *)piVar5[4] == '\0') {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = piVar5;
    piVar5 = (int *)0x0;
  }
  local_60 = piVar5;
  if (piVar6 != (int *)0x0) {
    (**(code **)*piVar6)();
  }
  local_8 = 2;
  if (piVar5 != (int *)0x0) {
    FUN_0045c990();
    local_8._0_1_ = 3;
    FUN_0045c990();
    FUN_006377c0();
    FUN_00637730();
    FUN_006377c0();
    piVar5 = local_60;
    local_8 = CONCAT31(local_8._1_3_,4);
    (**(code **)(*local_60 + 0x50))();
    piVar6 = (int *)(local_68 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8._0_1_ = 2;
    piVar6 = (int *)(local_58[0] + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_0045c990();
    local_8._0_1_ = 5;
    (**(code **)(*piVar5 + 0x50))();
    local_8._0_1_ = 2;
    piVar5 = (int *)(local_58[0] + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    FUN_00630850();
    FUN_0045c990();
    local_8._0_1_ = 6;
    FUN_006308a0();
    local_8._0_1_ = 7;
    uStack_bc = 0x58839c;
    FUN_00637690();
    FUN_006377c0();
    FUN_00637730();
    FUN_006377c0();
    piVar5 = local_60;
    local_8 = CONCAT31(local_8._1_3_,8);
    (**(code **)(*local_60 + 0x50))();
    piVar6 = (int *)(local_68 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        uStack_bc = 0x5883f2;
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = (int *)(local_64 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        uStack_bc = 0x588415;
        FID_conflict__free(piVar6);
      }
    }
    local_8._0_1_ = 2;
    piVar6 = (int *)(local_58[0] + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        uStack_bc = 0x58843c;
        FID_conflict__free(piVar6);
      }
    }
    FUN_006306a0();
    local_8 = CONCAT31(local_8._1_3_,9);
    local_68 = (undefined1 *)&uStack_bc;
    iVar2 = FUN_00630730();
    if (iVar2 < 0) {
      iVar2 = FUN_006104a0();
      *(undefined1 *)(iVar2 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    FUN_004557e0();
    local_8 = CONCAT31(local_8._1_3_,10);
    local_64 = &stack0xffffff3c;
    iVar2 = FUN_006307e0();
    if (iVar2 < 0) {
      iVar2 = FUN_006104a0();
      *(undefined1 *)(iVar2 + -1) = 0x2d;
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_006104a0();
    }
    puVar8 = &local_15 + -iVar2;
    FUN_004557e0(puVar8);
    local_8._0_1_ = 0xb;
    FUN_00637690(local_58);
    FUN_006377c0(puVar8);
    FUN_00637730();
    FUN_006377c0();
    FUN_00637730();
    uStack_bc = 0x58851a;
    iVar2 = FUN_006377c0();
    uStack_bc = 0;
    local_8 = CONCAT31(local_8._1_3_,0xc);
    (**(code **)(*piVar5 + 0x50))();
    piVar6 = (int *)(local_6c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = (int *)(local_58[0] + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = local_60 + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar6 = local_5c + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    iVar3 = FUN_00630650();
    if (iVar3 < 0) {
      iVar3 = FUN_006104a0();
      *(undefined1 *)(iVar3 + -1) = 0x2d;
    }
    else {
      FUN_006104a0();
    }
    FUN_004557e0();
    local_8._0_1_ = 0xd;
    FUN_00637690(local_58);
    uVar4 = FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,0xe);
    (**(code **)(*piVar5 + 0x50))(uVar4,0);
    piVar6 = local_5c + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    local_8._0_1_ = 2;
    piVar6 = (int *)(local_58[0] + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_0045c990("############################################################\n");
    local_8._0_1_ = 0xf;
    (**(code **)(*piVar5 + 0x50))(local_58,0,0);
    local_8._0_1_ = 2;
    piVar6 = (int *)(local_58[0] + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_0061f300();
    iVar3 = *(int *)ThreadLocalStoragePointer;
    local_6c = *(int *)(iVar3 + 8);
    if (local_5c != (undefined4 *)0x0) {
      LOCK();
      piVar6 = local_5c + 1;
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*local_5c)(1);
      }
    }
    if (local_6c != 0) {
      FUN_0061f300();
      iVar3 = *(int *)(iVar3 + 8);
      puVar7 = local_5c;
      if (local_5c != (undefined4 *)0x0) {
        LOCK();
        piVar6 = local_5c + 1;
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_5c)(1);
          puVar7 = extraout_ECX;
        }
      }
      local_6c = *(int *)(iVar3 + 4);
      piVar6 = (int *)(local_6c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      local_8._0_1_ = 0x10;
      FUN_00637690(&local_6c);
      uVar4 = FUN_006377c0(puVar7);
      local_8 = CONCAT31(local_8._1_3_,0x11);
      (**(code **)(*piVar5 + 0x50))(uVar4,0,0);
      if (&uStack_c0 != &DAT_00bfe124) {
        LOCK();
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(&uStack_c0);
        }
      }
      local_8._0_1_ = 2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar6);
        }
      }
    }
    uVar4 = FUN_006302c0();
    local_8._0_1_ = 0x12;
    (**(code **)(*piVar5 + 0x50))(uVar4,0,0);
    local_8._0_1_ = 2;
    piVar6 = local_5c + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_0045c990("\n############################################################\n");
    local_8 = CONCAT31(local_8._1_3_,0x13);
    (**(code **)(*piVar5 + 0x50))(local_58,0,0);
    piVar6 = (int *)(local_58[0] + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_00589360();
    local_8._0_1_ = 0x14;
    FUN_0045c990("Last log file:\n");
    local_8._0_1_ = 0x15;
    (**(code **)(*piVar5 + 0x50))(local_58,0,0);
    local_8._0_1_ = 0x14;
    piVar6 = (int *)(local_58[0] + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    FUN_00630b10(&local_70);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    (**(code **)(*piVar5 + 0x50))(&local_70,0,0);
    (**(code **)(*piVar5 + 4))();
    (**(code **)*piVar5)(1);
    piVar5 = (int *)(local_70 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = local_60 + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  LOCK();
  UNLOCK();
  DAT_00c8a790 = 0;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

