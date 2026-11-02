// rea decompile_all
// name: FUN_005448f0
// address: 0x5448f0
// body: available
// range: 0x5448f0-0x5453eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00544a87) */
/* WARNING: Removing unreachable block (ram,0x00544ab6) */
/* WARNING: Removing unreachable block (ram,0x00544ac8) */
/* WARNING: Removing unreachable block (ram,0x00544acb) */
/* WARNING: Removing unreachable block (ram,0x00544bb3) */
/* WARNING: Removing unreachable block (ram,0x00544bb6) */
/* WARNING: Removing unreachable block (ram,0x00544bc5) */
/* WARNING: Removing unreachable block (ram,0x00544bcf) */
/* WARNING: Removing unreachable block (ram,0x00544bd5) */
/* WARNING: Removing unreachable block (ram,0x00544c06) */
/* WARNING: Removing unreachable block (ram,0x00544c18) */
/* WARNING: Removing unreachable block (ram,0x00544c1b) */
/* WARNING: Removing unreachable block (ram,0x00544ce9) */
/* WARNING: Removing unreachable block (ram,0x00544cec) */
/* WARNING: Removing unreachable block (ram,0x00544d54) */
/* WARNING: Removing unreachable block (ram,0x00544d6d) */
/* WARNING: Removing unreachable block (ram,0x00544d70) */
/* WARNING: Removing unreachable block (ram,0x00544dc8) */
/* WARNING: Removing unreachable block (ram,0x00544fe2) */
/* WARNING: Removing unreachable block (ram,0x00544ff3) */
/* WARNING: Removing unreachable block (ram,0x0054500c) */
/* WARNING: Removing unreachable block (ram,0x0054501b) */
/* WARNING: Removing unreachable block (ram,0x00545021) */
/* WARNING: Removing unreachable block (ram,0x00545031) */
/* WARNING: Removing unreachable block (ram,0x0054508a) */
/* WARNING: Removing unreachable block (ram,0x0054509d) */

int * FUN_005448f0(undefined4 *param_1)

{
  char cVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *in_ECX;
  undefined4 **extraout_ECX;
  int *in_EDX;
  undefined4 **local_74;
  undefined4 *local_48;
  undefined4 *local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int *local_2c;
  LPCRITICAL_SECTION local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070ef71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = (undefined4 *)&DAT_00bfe12c;
  local_28 = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  local_74 = (undefined4 **)0x544949;
  local_3c = in_EDX;
  local_2c = in_ECX;
  EnterCriticalSection(local_28);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_74 = (undefined4 **)0x544959;
  piVar4 = (int *)FUN_00410ea0();
  if (*piVar4 == *in_EDX) {
    local_24 = 0;
  }
  else {
    local_74 = (undefined4 **)*piVar4;
    local_24 = FUN_0045c1e0();
  }
  piVar4 = (int *)(local_40 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x5449a3;
      FID_conflict__free(piVar4);
    }
  }
  if (local_24 == 0) {
    iVar6 = *in_EDX;
    *in_ECX = iVar6;
    piVar4 = (int *)(iVar6 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_74 = (undefined4 **)0x5449c6;
    LeaveCriticalSection(local_28);
    piVar4 = local_1c + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_74 = (undefined4 **)0x5449e6;
        FID_conflict__free(piVar4);
      }
    }
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = param_1 + 1;
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        local_74 = (undefined4 **)0x5449fe;
        (**(code **)*param_1)();
      }
    }
    ExceptionList = local_10;
    return in_ECX;
  }
  local_74 = (undefined4 **)0x544a1e;
  FUN_00410ea0();
  local_8._0_1_ = 3;
  puVar5 = (undefined4 *)FUN_005b48e0();
  local_48 = (undefined4 *)FUN_005b48e0();
  local_11 = puVar5 != local_48;
  local_74 = (undefined4 **)param_1[3];
  if (local_74 == (undefined4 **)0x0) {
    local_74 = (undefined4 **)0x545109;
    FUN_00410ea0();
    local_8._0_1_ = 0x20;
    local_74 = (undefined4 **)0x545118;
    FUN_00636a10();
    local_8._0_1_ = 0x21;
    local_74 = &local_48;
    FUN_00635a10();
    local_8 = CONCAT31(local_8._1_3_,0x22);
    FUN_005b3be0();
    piVar4 = local_48 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_74 = (undefined4 **)0x54515c;
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = local_44 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_74 = (undefined4 **)0x54517f;
        FID_conflict__free(piVar4);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0x26);
    piVar4 = (int *)(local_40 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_74 = (undefined4 **)0x5451a6;
        FID_conflict__free(piVar4);
      }
    }
    local_74 = (undefined4 **)0x5451b5;
    puVar5 = (undefined4 *)FUN_00634890();
    local_3c = local_3c + -2;
    cVar1 = *(char *)*puVar5;
    if (local_3c != &DAT_00bfe124) {
      LOCK();
      iVar6 = *local_3c;
      *local_3c = *local_3c + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_74 = (undefined4 **)0x5451d9;
        FID_conflict__free(local_3c);
      }
    }
    if (cVar1 == '\0') {
      iVar6 = 0;
      local_11 = 1;
      if (0 < (int)param_1[6]) {
        do {
          local_74 = &local_48;
          FUN_00410f30();
          puVar5 = local_48;
          local_8 = CONCAT31(local_8._1_3_,0x27);
          if (local_48 != (undefined4 *)0x0) {
            LOCK();
            local_48[1] = local_48[1] + 1;
            UNLOCK();
          }
          local_74 = (undefined4 **)0x54521f;
          piVar4 = (int *)FUN_005448f0();
          if (PTR_DAT_00c7ed54 == (undefined *)*piVar4) {
            iVar8 = 0;
          }
          else {
            local_74 = (undefined4 **)PTR_DAT_00c7ed54;
            iVar8 = FUN_0045c1e0();
          }
          piVar4 = local_44 + -2;
          local_11 = local_11 & iVar8 != 0;
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              local_74 = (undefined4 **)0x54526f;
              FID_conflict__free(piVar4);
            }
          }
          if (local_11 == 0) {
            if (puVar5 != (undefined4 *)0x0) {
              LOCK();
              piVar4 = puVar5 + 1;
              iVar6 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                local_74 = (undefined4 **)0x5453e7;
                (**(code **)*puVar5)();
              }
            }
            goto LAB_005452dc;
          }
          if (puVar5 != (undefined4 *)0x0) {
            LOCK();
            piVar4 = puVar5 + 1;
            iVar8 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              local_74 = (undefined4 **)0x545298;
              (**(code **)*puVar5)();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[6]);
      }
      local_74 = (undefined4 **)0x5452ae;
      FUN_00410ea0();
      local_8 = CONCAT31(local_8._1_3_,0x28);
      FUN_00633320();
      piVar4 = local_48 + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_74 = (undefined4 **)0x5452d9;
          FID_conflict__free(piVar4);
        }
      }
LAB_005452dc:
      puVar5 = local_1c;
      piVar4 = local_20 + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      LOCK();
      local_1c = local_20;
      UNLOCK();
      piVar4 = puVar5 + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_74 = (undefined4 **)0x545312;
          FID_conflict__free(piVar4);
        }
      }
    }
    piVar4 = local_20 + -2;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        local_74 = (undefined4 **)0x545335;
        FID_conflict__free(piVar4);
      }
    }
    goto LAB_00545338;
  }
  local_8._0_1_ = 4;
  FUN_005437e0();
  local_8._0_1_ = 5;
  local_74 = (undefined4 **)0x544ddf;
  FUN_00410ea0();
  local_8._0_1_ = 0x11;
  local_74 = (undefined4 **)0x544dee;
  FUN_00636a10();
  local_8._0_1_ = 0x12;
  local_74 = &local_44;
  FUN_00635a10();
  local_8 = CONCAT31(local_8._1_3_,0x13);
  FUN_005b4ba0();
  piVar4 = local_44 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x544e32;
      FID_conflict__free(piVar4);
    }
  }
  local_3c = local_3c + -2;
  if (local_3c != &DAT_00bfe124) {
    LOCK();
    iVar6 = *local_3c;
    *local_3c = *local_3c + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x544e55;
      FID_conflict__free(local_3c);
    }
  }
  local_8._0_1_ = 0x17;
  piVar4 = (int *)(local_38 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x544e7c;
      FID_conflict__free(piVar4);
    }
  }
  ppuVar2 = (undefined4 **)param_1[3];
  local_74 = (undefined4 **)0x544e8f;
  operator_new(0x80);
  local_8._0_1_ = 0x18;
  local_74 = ppuVar2;
  puVar5 = (undefined4 *)FUN_0053e120();
  local_8._0_1_ = 0x19;
  local_74 = (undefined4 **)0x544eb8;
  FUN_006369b0();
  local_8._0_1_ = 0x1a;
  local_74 = (undefined4 **)0x544ec4;
  FUN_00541b50();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  piVar4 = local_44 + -2;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x544ee8;
      FID_conflict__free(piVar4);
    }
  }
  if (local_11 == 0) {
LAB_00544f03:
    iVar6 = FUN_0053c9a0();
    local_48 = (undefined4 *)&stack0xffffff90;
    local_74 = (undefined4 **)&stack0xffffff90;
    FUN_00410a10();
    local_44 = &local_74;
    local_8._0_1_ = 0x1b;
    local_74 = extraout_ECX;
    FUN_0045c990();
    local_8._0_1_ = 0x1c;
    FUN_0045c990("Song Project Error");
    local_8 = CONCAT31(local_8._1_3_,0x19);
    FUN_005bd5a0();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x544f6d;
      puVar7 = (undefined4 *)FUN_00410a10();
      puVar3 = (undefined4 *)*puVar7;
      *puVar7 = local_1c;
      piVar4 = local_48 + -2;
      local_1c = puVar3;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_74 = (undefined4 **)0x544f97;
          FID_conflict__free(piVar4);
        }
      }
      local_74 = (undefined4 **)0x544fa6;
      FUN_00410ea0();
      local_8._0_1_ = 0x1d;
      FUN_00635980();
      local_8 = CONCAT31(local_8._1_3_,0x19);
      piVar4 = local_48 + -2;
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          local_74 = (undefined4 **)0x544fd5;
          FID_conflict__free(piVar4);
        }
      }
    }
  }
  else {
    local_74 = (undefined4 **)0x544efb;
    iVar6 = FUN_0053cab0();
    if (iVar6 == 0) goto LAB_00544f03;
  }
  if (puVar5 != (undefined4 *)0x0) {
    local_74 = (undefined4 **)0x5450ae;
    (**(code **)*puVar5)();
  }
  piVar4 = (int *)(local_40 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x5450d1;
      FID_conflict__free(piVar4);
    }
  }
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_20 + 1;
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      local_74 = (undefined4 **)0x5450eb;
      (**(code **)*local_20)();
    }
  }
  FUN_0040f7f0();
  local_74 = (undefined4 **)0x5450fb;
  FID_conflict__free((void *)0x0);
LAB_00545338:
  FUN_00548700();
  puVar5 = local_1c;
  piVar4 = (int *)(local_24 + -8);
  local_1c = (undefined4 *)&DAT_00bfe12c;
  *local_2c = (int)puVar5;
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x54536c;
      FID_conflict__free(piVar4);
    }
  }
  local_74 = (undefined4 **)0x545378;
  LeaveCriticalSection(local_28);
  piVar4 = (int *)((int)local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      local_74 = (undefined4 **)0x545398;
      FID_conflict__free(piVar4);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_1 + 1;
    iVar6 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      local_74 = (undefined4 **)0x5453b0;
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return local_2c;
}

