// rea decompile_all
// name: FUN_00545ed0
// address: 0x545ed0
// body: available
// range: 0x545ed0-0x546478 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00545ed0(undefined4 *param_1)

{
  undefined4 ***pppuVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 ***pppuVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 **ppuVar8;
  undefined4 ***extraout_ECX;
  int *in_EDX;
  int iVar9;
  undefined4 ***local_50;
  undefined4 ***local_34;
  undefined4 **local_30;
  undefined1 *local_2c;
  undefined4 **local_28;
  LPCRITICAL_SECTION local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f1e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = &DAT_00bfe12c;
  local_24 = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  local_50 = (undefined4 ***)0x545f24;
  EnterCriticalSection(local_24);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_50 = (undefined4 ***)0x545f34;
  piVar4 = (int *)FUN_00410ea0();
  if (*piVar4 == *in_EDX) {
    iVar9 = 0;
  }
  else {
    local_50 = (undefined4 ***)*piVar4;
    iVar9 = FUN_0045c1e0();
  }
  piVar4 = (int *)(local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      local_50 = (undefined4 ***)0x545f78;
      FID_conflict__free(piVar4);
    }
  }
  puVar3 = PTR_DAT_00c7ed54;
  if (iVar9 == 0) {
    *local_20 = PTR_DAT_00c7ed54;
    piVar4 = (int *)(puVar3 + -8);
    puVar6 = local_20;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
  }
  else {
    if (param_1[3] == 0) {
      local_50 = (undefined4 ***)0x5461af;
      FUN_00410ea0();
      local_8._0_1_ = 0x10;
      local_50 = (undefined4 ***)0x5461be;
      FUN_00636a10();
      local_8._0_1_ = 0x11;
      local_50 = &local_30;
      FUN_00635a10();
      local_8 = CONCAT31(local_8._1_3_,0x12);
      FUN_005b3be0();
      ppuVar8 = local_30 + -2;
      if (ppuVar8 != (undefined4 **)&DAT_00bfe124) {
        LOCK();
        puVar6 = *ppuVar8;
        *ppuVar8 = (undefined4 *)((int)*ppuVar8 + -1);
        UNLOCK();
        if (puVar6 == (undefined4 *)0x0) {
          local_50 = (undefined4 ***)0x546202;
          FID_conflict__free(ppuVar8);
        }
      }
      piVar4 = (int *)(local_2c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          local_50 = (undefined4 ***)0x546225;
          FID_conflict__free(piVar4);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,0x16);
      local_28 = local_28 + -2;
      if (local_28 != (undefined4 **)&DAT_00bfe124) {
        LOCK();
        puVar6 = *local_28;
        *local_28 = (undefined4 *)((int)*local_28 + -1);
        UNLOCK();
        if (puVar6 == (undefined4 *)0x0) {
          local_50 = (undefined4 ***)0x54624c;
          FID_conflict__free(local_28);
        }
      }
      local_50 = (undefined4 ***)0x54625b;
      puVar6 = (undefined4 *)FUN_00634890();
      pppuVar5 = local_34 + -2;
      local_11 = *(byte *)*puVar6;
      if (pppuVar5 != (undefined4 ***)&DAT_00bfe124) {
        LOCK();
        ppuVar8 = *pppuVar5;
        *pppuVar5 = (undefined4 **)((int)*pppuVar5 + -1);
        UNLOCK();
        if (ppuVar8 == (undefined4 **)0x0) {
          local_50 = (undefined4 ***)0x546282;
          FID_conflict__free(pppuVar5);
        }
      }
      if (local_11 == 0) {
        iVar9 = 0;
        local_11 = 1;
        if (0 < (int)param_1[6]) {
          do {
            local_50 = &local_34;
            FUN_00410f30();
            pppuVar5 = local_34;
            local_8 = CONCAT31(local_8._1_3_,0x17);
            if (local_34 != (undefined4 ***)0x0) {
              LOCK();
              local_34[1] = (undefined4 **)((int)local_34[1] + 1);
              UNLOCK();
            }
            local_50 = (undefined4 ***)0x5462cc;
            piVar4 = (int *)FUN_00545ed0();
            if (PTR_DAT_00c7ed54 == (undefined *)*piVar4) {
              iVar7 = 0;
            }
            else {
              local_50 = (undefined4 ***)PTR_DAT_00c7ed54;
              iVar7 = FUN_0045c1e0();
            }
            ppuVar8 = local_30 + -2;
            local_11 = local_11 & iVar7 != 0;
            if (ppuVar8 != (undefined4 **)&DAT_00bfe124) {
              LOCK();
              puVar6 = *ppuVar8;
              *ppuVar8 = (undefined4 *)((int)*ppuVar8 + -1);
              UNLOCK();
              if (puVar6 == (undefined4 *)0x0) {
                local_50 = (undefined4 ***)0x546321;
                FID_conflict__free(ppuVar8);
              }
            }
            local_8 = CONCAT31(local_8._1_3_,0x16);
            if (local_11 == 0) {
              if (pppuVar5 != (undefined4 ***)0x0) {
                LOCK();
                pppuVar1 = pppuVar5 + 1;
                ppuVar8 = *pppuVar1;
                *pppuVar1 = (undefined4 **)((int)*pppuVar1 + -1);
                UNLOCK();
                if (ppuVar8 == (undefined4 **)0x1) {
                  local_50 = (undefined4 ***)0x546374;
                  (*(code *)**pppuVar5)();
                }
              }
              break;
            }
            if (pppuVar5 != (undefined4 ***)0x0) {
              LOCK();
              pppuVar1 = pppuVar5 + 1;
              ppuVar8 = *pppuVar1;
              *pppuVar1 = (undefined4 **)((int)*pppuVar1 + -1);
              UNLOCK();
              if (ppuVar8 == (undefined4 **)0x1) {
                local_50 = (undefined4 ***)0x54634a;
                (*(code *)**pppuVar5)();
              }
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)param_1[6]);
        }
        puVar2 = local_18;
        piVar4 = (int *)(local_1c + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        LOCK();
        local_18 = local_1c;
        UNLOCK();
        piVar4 = (int *)(puVar2 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar9 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar9 == 0) {
            local_50 = (undefined4 ***)0x5463aa;
            FID_conflict__free(piVar4);
          }
        }
        if (local_11 != 0) {
          local_50 = (undefined4 ***)0x5463bf;
          FUN_00410ea0();
          local_8 = CONCAT31(local_8._1_3_,0x18);
          FUN_00633320();
          pppuVar5 = local_34 + -2;
          if (pppuVar5 != (undefined4 ***)&DAT_00bfe124) {
            LOCK();
            ppuVar8 = *pppuVar5;
            *pppuVar5 = (undefined4 **)((int)*pppuVar5 + -1);
            UNLOCK();
            if (ppuVar8 == (undefined4 **)0x0) {
              local_50 = (undefined4 ***)0x5463ea;
              FID_conflict__free(pppuVar5);
            }
          }
        }
      }
    }
    else {
      local_50 = (undefined4 ***)0x545fb5;
      FUN_00410ea0();
      local_8._0_1_ = 3;
      local_50 = (undefined4 ***)0x545fc4;
      FUN_00636a10();
      local_8._0_1_ = 4;
      local_50 = &local_28;
      FUN_00635a10();
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_005b4ba0();
      local_28 = local_28 + -2;
      if (local_28 != (undefined4 **)&DAT_00bfe124) {
        LOCK();
        puVar6 = *local_28;
        *local_28 = (undefined4 *)((int)*local_28 + -1);
        UNLOCK();
        if (puVar6 == (undefined4 *)0x0) {
          local_50 = (undefined4 ***)0x546008;
          FID_conflict__free(local_28);
        }
      }
      piVar4 = (int *)(local_2c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          local_50 = (undefined4 ***)0x54602b;
          FID_conflict__free(piVar4);
        }
      }
      local_8._0_1_ = 9;
      ppuVar8 = local_30 + -2;
      if (ppuVar8 != (undefined4 **)&DAT_00bfe124) {
        LOCK();
        puVar6 = *ppuVar8;
        *ppuVar8 = (undefined4 *)((int)*ppuVar8 + -1);
        UNLOCK();
        if (puVar6 == (undefined4 *)0x0) {
          local_50 = (undefined4 ***)0x546052;
          FID_conflict__free(ppuVar8);
        }
      }
      local_50 = (undefined4 ***)0x546062;
      local_34 = operator_new(0x30);
      local_8._0_1_ = 10;
      local_50 = (undefined4 ***)0x546074;
      pppuVar5 = (undefined4 ***)FUN_0054a790();
      local_8._0_1_ = 0xb;
      local_50 = (undefined4 ***)0x546089;
      local_34 = pppuVar5;
      FUN_006369b0();
      local_8._0_1_ = 0xc;
      local_50 = (undefined4 ***)0x546095;
      FUN_0054bb90();
      local_8._0_1_ = 0xb;
      local_30 = local_30 + -2;
      if (local_30 != (undefined4 **)&DAT_00bfe124) {
        LOCK();
        puVar6 = *local_30;
        *local_30 = (undefined4 *)((int)*local_30 + -1);
        UNLOCK();
        if (puVar6 == (undefined4 *)0x0) {
          local_50 = (undefined4 ***)0x5460b9;
          FID_conflict__free(local_30);
        }
      }
      local_50 = (undefined4 ***)0x5460c4;
      iVar9 = FUN_0054ac90();
      local_30 = (undefined4 **)&stack0xffffffb4;
      local_50 = (undefined4 ***)&stack0xffffffb4;
      FUN_00411300();
      local_2c = (undefined1 *)&local_50;
      local_8._0_1_ = 0xd;
      local_50 = extraout_ECX;
      FUN_0045c990();
      local_8._0_1_ = 0xe;
      FUN_0045c990("Playlist Project Error");
      local_8 = CONCAT31(local_8._1_3_,0xb);
      FUN_005bd5a0();
      if (iVar9 == 0) {
        local_50 = (undefined4 ***)0x546120;
        puVar6 = (undefined4 *)FUN_00411300();
        puVar2 = (undefined1 *)*puVar6;
        *puVar6 = local_18;
        ppuVar8 = local_30 + -2;
        local_18 = puVar2;
        if (ppuVar8 != (undefined4 **)&DAT_00bfe124) {
          LOCK();
          puVar6 = *ppuVar8;
          *ppuVar8 = (undefined4 *)((int)*ppuVar8 + -1);
          UNLOCK();
          if (puVar6 == (undefined4 *)0x0) {
            local_50 = (undefined4 ***)0x54614a;
            FID_conflict__free(ppuVar8);
          }
        }
        local_50 = (undefined4 ***)0x546159;
        FUN_00410ea0();
        local_8 = CONCAT31(local_8._1_3_,0xf);
        FUN_00635980();
        ppuVar8 = local_30 + -2;
        if (ppuVar8 != (undefined4 **)&DAT_00bfe124) {
          LOCK();
          puVar6 = *ppuVar8;
          *ppuVar8 = (undefined4 *)((int)*ppuVar8 + -1);
          UNLOCK();
          if (puVar6 == (undefined4 *)0x0) {
            local_50 = (undefined4 ***)0x546184;
            FID_conflict__free(ppuVar8);
          }
        }
      }
      if (pppuVar5 != (undefined4 ***)0x0) {
        FUN_0054be70();
        local_50 = pppuVar5;
        FUN_004bfe14();
      }
    }
    piVar4 = (int *)(local_1c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        local_50 = (undefined4 ***)0x54640d;
        FID_conflict__free(piVar4);
      }
    }
    FUN_00548700();
    puVar2 = local_18;
    local_18 = &DAT_00bfe12c;
    *local_20 = puVar2;
    puVar6 = local_20;
  }
  local_50 = (undefined4 ***)0x54642d;
  LeaveCriticalSection(local_24);
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      local_50 = (undefined4 ***)0x54644d;
      FID_conflict__free(piVar4);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_1 + 1;
    iVar9 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      local_50 = (undefined4 ***)0x546465;
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return puVar6;
}

