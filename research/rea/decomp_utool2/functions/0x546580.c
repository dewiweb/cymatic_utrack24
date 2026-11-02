// rea decompile_all
// name: FUN_00546580
// address: 0x546580
// body: available
// range: 0x546580-0x546a2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00546580(undefined4 *param_1)

{
  undefined4 ***pppuVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 ***pppuVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  undefined4 **ppuVar7;
  undefined4 ***extraout_ECX;
  undefined4 ***local_4c;
  undefined4 ***local_30;
  undefined4 **local_2c;
  undefined1 *local_28;
  undefined4 **local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  byte local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070f2d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  *in_ECX = (int)&DAT_00bfe12c;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  local_20 = 1;
  local_4c = (undefined4 ***)0x5465dc;
  local_18 = in_ECX;
  EnterCriticalSection(lpCriticalSection);
  if (param_1[3] == 0) {
    local_4c = (undefined4 ***)0x546809;
    FUN_00410ea0();
    local_8._0_1_ = 0xf;
    local_4c = (undefined4 ***)0x546818;
    FUN_00636a10();
    local_8._0_1_ = 0x10;
    local_4c = &local_2c;
    FUN_00635a10();
    local_8 = CONCAT31(local_8._1_3_,0x11);
    FUN_005b3230();
    ppuVar7 = local_2c + -2;
    if (ppuVar7 != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar4 = *ppuVar7;
      *ppuVar7 = (undefined4 *)((int)*ppuVar7 + -1);
      UNLOCK();
      if (puVar4 == (undefined4 *)0x0) {
        local_4c = (undefined4 ***)0x54685e;
        FID_conflict__free(ppuVar7);
      }
    }
    piVar6 = (int *)(local_28 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_4c = (undefined4 ***)0x546881;
        FID_conflict__free(piVar6);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0x15);
    local_24 = local_24 + -2;
    if (local_24 != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar4 = *local_24;
      *local_24 = (undefined4 *)((int)*local_24 + -1);
      UNLOCK();
      if (puVar4 == (undefined4 *)0x0) {
        local_4c = (undefined4 ***)0x5468a8;
        FID_conflict__free(local_24);
      }
    }
    local_4c = (undefined4 ***)0x5468b7;
    puVar4 = (undefined4 *)FUN_00634890();
    pppuVar2 = local_30 + -2;
    local_11 = *(byte *)*puVar4;
    if (pppuVar2 != (undefined4 ***)&DAT_00bfe124) {
      LOCK();
      ppuVar7 = *pppuVar2;
      *pppuVar2 = (undefined4 **)((int)*pppuVar2 + -1);
      UNLOCK();
      if (ppuVar7 == (undefined4 **)0x0) {
        local_4c = (undefined4 ***)0x5468de;
        FID_conflict__free(pppuVar2);
      }
    }
    if (local_11 == 0) {
      iVar3 = 0;
      local_11 = 1;
      if (0 < (int)param_1[6]) {
        do {
          local_4c = &local_30;
          FUN_00410f30();
          pppuVar2 = local_30;
          local_8 = CONCAT31(local_8._1_3_,0x16);
          if (local_30 != (undefined4 ***)0x0) {
            LOCK();
            local_30[1] = (undefined4 **)((int)local_30[1] + 1);
            UNLOCK();
          }
          local_4c = (undefined4 ***)0x54692b;
          piVar6 = (int *)FUN_00546580();
          if (PTR_DAT_00c7ed54 == (undefined *)*piVar6) {
            iVar5 = 0;
          }
          else {
            local_4c = (undefined4 ***)PTR_DAT_00c7ed54;
            iVar5 = FUN_0045c1e0();
          }
          ppuVar7 = local_2c + -2;
          local_11 = local_11 & iVar5 != 0;
          if (ppuVar7 != (undefined4 **)&DAT_00bfe124) {
            LOCK();
            puVar4 = *ppuVar7;
            *ppuVar7 = (undefined4 *)((int)*ppuVar7 + -1);
            UNLOCK();
            if (puVar4 == (undefined4 *)0x0) {
              local_4c = (undefined4 ***)0x54697b;
              FID_conflict__free(ppuVar7);
            }
          }
          if (local_11 == 0) {
            in_ECX = local_18;
            if (pppuVar2 != (undefined4 ***)0x0) {
              LOCK();
              pppuVar1 = pppuVar2 + 1;
              ppuVar7 = *pppuVar1;
              *pppuVar1 = (undefined4 **)((int)*pppuVar1 + -1);
              UNLOCK();
              if (ppuVar7 == (undefined4 **)0x1) {
                local_4c = (undefined4 ***)0x5469c4;
                (*(code *)**pppuVar2)();
                in_ECX = local_18;
              }
            }
            break;
          }
          local_8 = CONCAT31(local_8._1_3_,0x15);
          if (pppuVar2 != (undefined4 ***)0x0) {
            LOCK();
            pppuVar1 = pppuVar2 + 1;
            ppuVar7 = *pppuVar1;
            *pppuVar1 = (undefined4 **)((int)*pppuVar1 + -1);
            UNLOCK();
            if (ppuVar7 == (undefined4 **)0x1) {
              local_4c = (undefined4 ***)0x54699f;
              (*(code *)**pppuVar2)();
            }
          }
          iVar3 = iVar3 + 1;
          in_ECX = local_18;
        } while (iVar3 < (int)param_1[6]);
      }
      piVar6 = (int *)(local_1c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      iVar3 = *in_ECX;
      *in_ECX = local_1c;
      UNLOCK();
      piVar6 = (int *)(iVar3 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          local_4c = (undefined4 ***)0x5469fa;
          FID_conflict__free(piVar6);
        }
      }
    }
    piVar6 = (int *)(local_1c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_4c = (undefined4 ***)0x546a25;
        FID_conflict__free(piVar6);
      }
    }
  }
  else {
    local_4c = (undefined4 ***)0x5465f2;
    FUN_00410ea0();
    local_8._0_1_ = 3;
    local_4c = (undefined4 ***)0x546601;
    FUN_00636a10();
    local_8._0_1_ = 4;
    local_4c = &local_24;
    FUN_00635a10();
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_005b3520();
    local_24 = local_24 + -2;
    if (local_24 != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar4 = *local_24;
      *local_24 = (undefined4 *)((int)*local_24 + -1);
      UNLOCK();
      if (puVar4 == (undefined4 *)0x0) {
        local_4c = (undefined4 ***)0x546647;
        FID_conflict__free(local_24);
      }
    }
    piVar6 = (int *)(local_28 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_4c = (undefined4 ***)0x54666a;
        FID_conflict__free(piVar6);
      }
    }
    local_8._0_1_ = 9;
    ppuVar7 = local_2c + -2;
    if (ppuVar7 != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar4 = *ppuVar7;
      *ppuVar7 = (undefined4 *)((int)*ppuVar7 + -1);
      UNLOCK();
      if (puVar4 == (undefined4 *)0x0) {
        local_4c = (undefined4 ***)0x546691;
        FID_conflict__free(ppuVar7);
      }
    }
    local_4c = (undefined4 ***)0x5466a1;
    local_30 = operator_new(0x30);
    local_8._0_1_ = 10;
    local_4c = (undefined4 ***)0x5466b3;
    pppuVar2 = (undefined4 ***)FUN_0054a790();
    local_8._0_1_ = 0xb;
    local_4c = (undefined4 ***)0x5466c8;
    local_30 = pppuVar2;
    FUN_006369b0();
    local_8._0_1_ = 0xc;
    local_4c = (undefined4 ***)0x5466d4;
    FUN_0054bb90();
    local_8._0_1_ = 0xb;
    local_2c = local_2c + -2;
    if (local_2c != (undefined4 **)&DAT_00bfe124) {
      LOCK();
      puVar4 = *local_2c;
      *local_2c = (undefined4 *)((int)*local_2c + -1);
      UNLOCK();
      if (puVar4 == (undefined4 *)0x0) {
        local_4c = (undefined4 ***)0x5466f8;
        FID_conflict__free(local_2c);
      }
    }
    local_4c = (undefined4 ***)0x546703;
    iVar3 = FUN_0054ac90();
    local_2c = (undefined4 **)&stack0xffffffb8;
    local_4c = (undefined4 ***)&stack0xffffffb8;
    FUN_00411300();
    local_28 = (undefined1 *)&local_4c;
    local_8._0_1_ = 0xd;
    local_4c = extraout_ECX;
    FUN_0045c990();
    local_8._0_1_ = 0xe;
    FUN_0045c990("Playlist Project Error");
    local_8 = CONCAT31(local_8._1_3_,0xb);
    FUN_005bd5a0();
    if (iVar3 == 0) {
      local_4c = (undefined4 ***)0x54675f;
      piVar6 = (int *)FUN_00411300();
      iVar3 = *local_18;
      *local_18 = *piVar6;
      *piVar6 = iVar3;
      ppuVar7 = local_2c + -2;
      if (ppuVar7 != (undefined4 **)&DAT_00bfe124) {
        LOCK();
        puVar4 = *ppuVar7;
        *ppuVar7 = (undefined4 *)((int)*ppuVar7 + -1);
        UNLOCK();
        if (puVar4 == (undefined4 *)0x0) {
          local_4c = (undefined4 ***)0x54678a;
          FID_conflict__free(ppuVar7);
        }
      }
    }
    if (pppuVar2 != (undefined4 ***)0x0) {
      FUN_0054be70();
      local_4c = pppuVar2;
      FUN_004bfe14();
    }
    piVar6 = (int *)(local_1c + -8);
    in_ECX = local_18;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        local_4c = (undefined4 ***)0x5467c3;
        FID_conflict__free(piVar6);
        in_ECX = local_18;
      }
    }
  }
  FUN_00548700();
  local_4c = (undefined4 ***)0x5467d7;
  LeaveCriticalSection(lpCriticalSection);
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar6 = param_1 + 1;
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      local_4c = (undefined4 ***)0x5467ec;
      (**(code **)*param_1)();
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

