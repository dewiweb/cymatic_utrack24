// rea decompile_all
// name: FUN_00543ad0
// address: 0x543ad0
// body: available
// range: 0x543ad0-0x54415e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00543ad0(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  undefined4 extraout_ECX;
  int *in_EDX;
  void *local_3c;
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ed3b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00636040();
  local_8 = 0;
  FUN_00635a10(&local_14);
  local_8._0_1_ = 1;
  cVar4 = FUN_005b4fa0();
  if (cVar4 == '\0') {
    FUN_0045c990();
    local_8._0_1_ = 2;
    FUN_0045c990();
    local_8._0_1_ = 3;
    FUN_0045c990();
    local_8._0_1_ = 4;
    FUN_004ecce0(&local_20);
    param_1 = param_1 + -2;
    if (param_1 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *param_1;
      *param_1 = *param_1 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(param_1);
      }
    }
    piVar7 = (int *)(local_18 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_20 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(*in_EDX + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    puVar2 = (undefined1 *)*in_EDX;
    LOCK();
    UNLOCK();
    piVar7 = (int *)(local_14 + -8);
    local_14 = puVar2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar7);
      }
    }
LAB_0054411a:
    FUN_00548700();
    *in_ECX = (int)local_14;
    local_14 = &DAT_00bfe12c;
  }
  else {
    piVar7 = (int *)FUN_00636a10();
    if (*param_1 == *piVar7) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0045c1e0(*param_1);
    }
    piVar7 = (int *)(local_28 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    piVar7 = (int *)(local_14 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    cVar4 = FUN_005b5020();
    if ((cVar4 != '\0') && (local_20 != 0)) {
      FUN_0045c990();
      local_8._0_1_ = 5;
      FUN_0045c990();
      local_8._0_1_ = 6;
      uVar5 = extraout_ECX;
      FUN_00637690(param_1);
      FUN_006377c0(uVar5);
      local_8._0_1_ = 7;
      FUN_004ecce0();
      piVar7 = (int *)(local_28 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_20 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_18 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar6 = *in_EDX;
      *in_ECX = iVar6;
      piVar7 = (int *)(iVar6 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      piVar7 = (int *)(local_14 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      goto LAB_0054412b;
    }
    piVar7 = (int *)(*in_EDX + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    FUN_005436f0();
    local_8._0_1_ = 8;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 8;
    if (local_34 == 0) {
LAB_00544022:
      local_8._0_1_ = uVar3;
      cVar4 = FUN_006331e0();
      if (cVar4 != '\0') {
        FUN_0040f7f0();
        FID_conflict__free(local_3c);
        goto LAB_0054411a;
      }
      FUN_0045c990();
      local_8._0_1_ = 0x10;
      FUN_0045c990();
      local_8._0_1_ = 0x11;
      FUN_0045c990();
      local_8._0_1_ = 0x12;
      FUN_004ecce0(&local_24);
      param_1 = param_1 + -2;
      if (param_1 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *param_1;
        *param_1 = *param_1 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(param_1);
        }
      }
      piVar7 = (int *)(local_28 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = (int *)(local_24 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      iVar6 = *in_EDX;
      *in_ECX = iVar6;
      piVar7 = (int *)(iVar6 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
    }
    else {
      uVar5 = FUN_00636a10();
      local_8._0_1_ = 9;
      FUN_00637690(uVar5);
      uVar5 = 0x543e22;
      FUN_006377c0();
      local_8._0_1_ = 0xb;
      piVar7 = param_1 + -2;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          uVar5 = 0x543e46;
          FID_conflict__free(piVar7);
        }
      }
      FUN_00636260(&local_28,&DAT_0073d808,uVar5);
      local_8._0_1_ = 0xc;
      FUN_00636ec0();
      local_8._0_1_ = 0xb;
      piVar7 = (int *)(local_28 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_00621830();
      FUN_00621830();
      FUN_0045c990();
      local_8._0_1_ = 0xd;
      FUN_0045c990();
      local_8._0_1_ = 0xe;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      iVar6 = FUN_004ed1f0(&local_24,&local_28,0);
      param_1 = (int *)CONCAT13(iVar6 == 0,param_1._0_3_);
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
      local_8._0_1_ = 0xb;
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
      if (iVar6 != 0) {
        local_8._0_1_ = 8;
        piVar7 = (int *)(local_18 + -8);
        uVar3 = (undefined1)local_8;
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            FID_conflict__free(piVar7);
            uVar3 = (undefined1)local_8;
          }
        }
        goto LAB_00544022;
      }
      iVar6 = *in_EDX;
      *in_ECX = iVar6;
      piVar7 = (int *)(iVar6 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        UNLOCK();
      }
      piVar7 = (int *)(local_18 + -8);
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          FID_conflict__free(piVar7);
        }
      }
    }
    FUN_0040f7f0();
    FID_conflict__free(local_3c);
    piVar7 = (int *)(local_14 + -8);
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        FID_conflict__free(piVar7);
      }
    }
  }
LAB_0054412b:
  piVar7 = (int *)(local_1c + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  ExceptionList = local_10;
  return;
}

