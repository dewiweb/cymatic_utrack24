// rea decompile_all
// name: FUN_0054ef10
// address: 0x54ef10
// body: available
// range: 0x54ef10-0x54f558 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054ef10(int *param_1,int *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  DWORD DVar5;
  int in_ECX;
  void **ppvStack_5c;
  undefined1 *local_58;
  int *local_54;
  void *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071036d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  if (*(int *)(in_ECX + 0x4c) != -1) {
    if (*param_1 == *(int *)(in_ECX + 0x48)) goto LAB_0054f542;
    local_54 = (int *)*param_1;
    local_58 = (undefined1 *)0x54ef62;
    iVar2 = FUN_00448730();
    if (iVar2 == 0) goto LAB_0054f542;
  }
  piVar3 = (int *)(*param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar2 = *(int *)(in_ECX + 0x48);
  *(int *)(in_ECX + 0x48) = *param_1;
  UNLOCK();
  piVar3 = (int *)(iVar2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_54 = (int *)0x54efa2;
      FID_conflict__free(piVar3);
    }
  }
  local_54 = &local_14;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  local_58 = (undefined1 *)0x54efb8;
  FUN_0054e0c0();
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar2 = *(int *)(in_ECX + 8);
  if (iVar2 == 2) {
    piVar3 = (int *)(local_14 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    local_54 = (int *)0x54f2bf;
    cVar1 = FUN_005b5020();
    if (((cVar1 != '\0') && ((char)param_3 != '\0')) &&
       (puVar4 = (undefined4 *)FUN_0053d3e0(), puVar4 != (undefined4 *)0x0)) {
      local_58 = (undefined1 *)&local_54;
      ppvStack_5c = (void **)0x54f2e8;
      FUN_0040eb40();
      FUN_00413680(&ppvStack_5c);
      cVar1 = FUN_006338c0();
      if (cVar1 == '\0') {
        local_58 = (undefined1 *)&local_54;
        ppvStack_5c = (void **)0x54f314;
        FUN_0040eb40();
        FUN_00413680(&ppvStack_5c);
        cVar1 = FUN_00632fc0();
        *(uint *)(in_ECX + 0x4c) = (cVar1 == '\0') + 2;
      }
      else {
        *(undefined4 *)(in_ECX + 0x4c) = 1;
      }
      local_54 = (int *)0x54f33c;
      (**(code **)*puVar4)();
    }
    if ((undefined *)*param_2 != PTR_DAT_00c7ed54) {
      local_54 = (int *)*param_2;
      local_58 = (undefined1 *)0x54f35d;
      iVar2 = FUN_0045c1e0();
      if (iVar2 != 0) {
        local_54 = (int *)0x54f374;
        FUN_0040eb20();
        local_54 = (int *)0x54f382;
        FUN_0040eb20();
        local_8._0_1_ = 2;
        local_54 = &local_28;
        local_58 = (undefined1 *)0x54f39e;
        FUN_00635a10();
        local_8._0_1_ = 3;
        local_54 = &local_2c;
        local_58 = (undefined1 *)0x54f3b4;
        FUN_00635a10();
        local_8 = CONCAT31(local_8._1_3_,4);
        local_54 = (int *)&param_3;
        local_58 = (undefined1 *)0x54f3ca;
        FUN_00635a10();
        piVar3 = (int *)(local_2c + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f3ec;
            FID_conflict__free(piVar3);
          }
        }
        piVar3 = (int *)(local_28 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f40f;
            FID_conflict__free(piVar3);
          }
        }
        piVar3 = (int *)(local_24 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f432;
            FID_conflict__free(piVar3);
          }
        }
        local_8._0_1_ = 9;
        piVar3 = (int *)(local_20 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f459;
            FID_conflict__free(piVar3);
          }
        }
        piVar3 = (int *)(param_3 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        local_54 = (int *)0x54f479;
        cVar1 = FUN_005b5020();
        if ((cVar1 != '\0') && (cVar1 = FUN_00636120(), cVar1 != '\0')) {
          local_3c = (void *)0x0;
          local_38 = 0;
          local_34 = 0;
          local_8._0_1_ = 10;
          local_54 = (int *)0x54f4b6;
          FUN_0045c990();
          local_8._0_1_ = 0xb;
          local_54 = (int *)0x0;
          local_58 = (undefined1 *)0x2;
          ppvStack_5c = &local_3c;
          iVar2 = FUN_00635ea0();
          FUN_00637c10();
          if (0 < iVar2) {
            *(int *)(local_18 + 0x4c) = *(int *)(local_18 + 0x4c) + 0x10;
          }
          FUN_0040f7f0();
          local_54 = (int *)0x54f4f9;
          FID_conflict__free(local_3c);
        }
        piVar3 = (int *)(param_3 + -8);
        in_ECX = local_18;
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f51c;
            FID_conflict__free(piVar3);
            in_ECX = local_18;
          }
        }
      }
    }
  }
  else if (iVar2 == 3) {
    piVar3 = (int *)(local_14 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    local_54 = (int *)0x54f0af;
    cVar1 = FUN_005b5020();
    if ((cVar1 != '\0') && ((char)param_3 != '\0')) {
      *(undefined4 *)(in_ECX + 0x4c) = 2;
    }
    if ((undefined *)*param_2 != PTR_DAT_00c7ed54) {
      local_54 = (int *)*param_2;
      local_58 = (undefined1 *)0x54f0e4;
      iVar2 = FUN_0045c1e0();
      if (iVar2 != 0) {
        local_54 = (int *)0x54f0fb;
        FUN_00410ea0();
        local_8._0_1_ = 0xc;
        local_54 = (int *)0x54f10a;
        FUN_00636a10();
        local_54 = (int *)0x54f117;
        FUN_0040eb20();
        local_54 = &local_20;
        local_8._0_1_ = 0xe;
        local_58 = (undefined1 *)0x54f132;
        FUN_00635a10();
        local_8._0_1_ = 0xf;
        local_54 = &local_1c;
        local_58 = (undefined1 *)0x54f14b;
        FUN_00635a10();
        local_8._0_1_ = 0x10;
        local_54 = &local_18;
        local_58 = (undefined1 *)0x54f161;
        FUN_00635a10();
        local_8 = CONCAT31(local_8._1_3_,0x11);
        local_54 = (int *)&param_3;
        local_58 = (undefined1 *)0x54f177;
        FUN_00635a10();
        piVar3 = (int *)(local_18 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f199;
            FID_conflict__free(piVar3);
          }
        }
        piVar3 = (int *)(local_1c + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f1bc;
            FID_conflict__free(piVar3);
          }
        }
        piVar3 = (int *)(local_20 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f1df;
            FID_conflict__free(piVar3);
          }
        }
        piVar3 = (int *)(local_24 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f202;
            FID_conflict__free(piVar3);
          }
        }
        piVar3 = (int *)(local_28 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f225;
            FID_conflict__free(piVar3);
          }
        }
        local_8._0_1_ = 0x18;
        piVar3 = (int *)(local_2c + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f24c;
            FID_conflict__free(piVar3);
          }
        }
        if (*param_3 != '\0') {
          puVar4 = (undefined4 *)FUN_00458890();
          local_54 = (int *)0x54f26a;
          DVar5 = GetFileAttributesW((LPCWSTR)*puVar4);
          if ((DVar5 & 0x10) == 0) {
            *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + 0x10;
          }
        }
        piVar3 = (int *)(param_3 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            local_54 = (int *)0x54f29a;
            FID_conflict__free(piVar3);
          }
        }
      }
    }
  }
  else if (iVar2 == 4) {
    piVar3 = (int *)(local_14 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    local_54 = (int *)0x54effa;
    cVar1 = FUN_005b5020();
    if ((cVar1 != '\0') && ((char)param_3 != '\0')) {
      piVar3 = (int *)FUN_0054a630();
      local_54 = (int *)0x54f025;
      FUN_0040eb40();
      local_54 = (int *)0x54f030;
      FUN_00413390();
      if ((local_38 == local_30) && (local_34 == local_2c)) {
        *(undefined4 *)(in_ECX + 0x4c) = 1;
      }
      else {
        local_58 = (undefined1 *)&local_54;
        ppvStack_5c = (void **)0x54f055;
        FUN_0040eb40();
        FUN_00413390(&ppvStack_5c);
        cVar1 = FUN_00632fc0();
        if (cVar1 != '\0') {
          *(undefined4 *)(in_ECX + 0x4c) = 2;
        }
      }
      if (piVar3 != (int *)0x0) {
        FUN_0054be70();
        local_58 = (undefined1 *)0x54f08a;
        local_54 = piVar3;
        FUN_004bfe14();
      }
    }
  }
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_54 = (int *)0x54f53f;
      FID_conflict__free(piVar3);
    }
  }
LAB_0054f542:
  ExceptionList = local_10;
  return *(undefined4 *)(in_ECX + 0x4c);
}

