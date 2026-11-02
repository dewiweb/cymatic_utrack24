// rea decompile_all
// name: FUN_005572a0
// address: 0x5572a0
// body: available
// range: 0x5572a0-0x557aad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005572a0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *in_ECX;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071147a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)(*in_ECX + 0x40) == 1) {
    cVar2 = FUN_00632c80();
    if ((cVar2 == '\0') && (cVar2 = FUN_00632c80(), cVar2 == '\0')) {
      FUN_0045c990();
      local_8._0_1_ = 0x13;
      piVar5 = (int *)(in_ECX[6] + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      FUN_00637730();
      local_8._0_1_ = 0x14;
      FUN_006329c0(&local_20,&DAT_0073e914);
      local_8._0_1_ = 0x15;
      FUN_005b2560();
      local_8._0_1_ = 0x16;
      FUN_00635a10(&local_28);
      local_8._0_1_ = 0x17;
      FUN_00635a10(&local_2c);
      local_8 = CONCAT31(local_8._1_3_,0x18);
      piVar5 = (int *)FUN_00635a10(&local_30);
      iVar3 = *piVar5;
      *piVar5 = (int)&DAT_00bfe12c;
      piVar5 = local_30 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_2c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_28 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_24 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_20 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_1c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = local_18 + -2;
      goto LAB_0055751c;
    }
    FUN_0045c990();
    local_8._0_1_ = 0xd;
    FUN_006329c0(&local_18,&DAT_0073e908);
    local_8._0_1_ = 0xe;
    FUN_005b2100();
    local_8._0_1_ = 0xf;
    FUN_00635a10(&local_20);
    local_8._0_1_ = 0x10;
    FUN_00635a10(&local_24);
    local_8._0_1_ = 0x11;
    FUN_00635a10(&local_28);
    piVar5 = local_30;
    local_8 = CONCAT31(local_8._1_3_,0x12);
    piVar7 = (int *)FUN_00632830(&local_2c);
    iVar3 = *piVar7;
    *piVar7 = (int)&DAT_00bfe12c;
    piVar7 = (int *)(local_2c + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_28 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_24 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_20 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar6 = (int *)(local_1c + -8);
    piVar7 = local_18;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
        piVar7 = local_18;
      }
    }
LAB_00557a2d:
    piVar7 = piVar7 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar5 = piVar5 + -2;
    if (piVar5 == &DAT_00bfe124) goto LAB_00557a6a;
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
  else {
    cVar2 = FUN_00632c80();
    if ((cVar2 != '\0') || (cVar2 = FUN_00632c80(), cVar2 != '\0')) {
      piVar7 = (int *)in_ECX[7];
      piVar5 = piVar7 + -2;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      local_30 = (int *)0x73e89c;
      local_14 = piVar7;
      FUN_0044ec90();
      piVar6 = piVar7;
      iVar3 = FUN_0045e120(piVar7);
      piVar5 = piVar7;
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)FUN_00634090(&local_30,&DAT_0073e8a4,piVar6);
        piVar5 = (int *)*puVar4;
        *puVar4 = piVar7;
        piVar7 = local_30 + -2;
        local_14 = piVar5;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar7);
          }
        }
      }
      FUN_0045c990();
      local_8._0_1_ = 2;
      FUN_006329c0(&local_1c,&DAT_0073e940);
      local_8._0_1_ = 3;
      FUN_005b2100();
      local_8._0_1_ = 4;
      FUN_00635a10(&local_24);
      local_8._0_1_ = 5;
      FUN_00635a10(&local_28);
      piVar7 = local_30;
      local_8 = CONCAT31(local_8._1_3_,6);
      piVar6 = (int *)FUN_00632830(&local_2c);
      iVar3 = *piVar6;
      *piVar6 = (int)&DAT_00bfe12c;
      piVar6 = (int *)(local_2c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_28 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_24 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_20 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      goto LAB_00557a2d;
    }
    piVar7 = (int *)in_ECX[7];
    piVar5 = piVar7 + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,7);
    local_18 = (int *)0x73e930;
    local_14 = piVar7;
    FUN_0044ec90();
    piVar6 = piVar7;
    iVar3 = FUN_0045e120(piVar7);
    piVar5 = piVar7;
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_00634090(&local_18,&DAT_0073e94c,piVar6);
      piVar5 = (int *)*puVar4;
      *puVar4 = piVar7;
      piVar7 = local_18 + -2;
      local_14 = piVar5;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar7);
        }
      }
    }
    FUN_0045c990();
    local_8._0_1_ = 8;
    FUN_006329c0(&local_2c,&DAT_0073e948);
    local_8._0_1_ = 9;
    local_30 = piVar5 + -2;
    if (local_30 != &DAT_00bfe124) {
      LOCK();
      *local_30 = *local_30 + 1;
      UNLOCK();
    }
    FUN_00637730();
    local_8._0_1_ = 10;
    FUN_005b2560();
    local_8._0_1_ = 0xb;
    FUN_00635a10(&local_20);
    local_8 = CONCAT31(local_8._1_3_,0xc);
    piVar5 = (int *)FUN_00635a10(&local_1c);
    iVar3 = *piVar5;
    *piVar5 = (int)&DAT_00bfe12c;
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_20 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_24 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_28 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_2c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar7 = local_18 + -2;
    piVar5 = local_30;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar7);
        piVar5 = local_30;
      }
    }
LAB_0055751c:
    if (piVar5 == &DAT_00bfe124) goto LAB_00557a6a;
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
  if (iVar1 == 0) {
    FID_conflict__free(piVar5);
  }
LAB_00557a6a:
  *param_1 = iVar3;
  piVar5 = (int *)(iVar3 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

