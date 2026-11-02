// rea decompile_all
// name: FUN_00583d60
// address: 0x583d60
// body: available
// range: 0x583d60-0x584261 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00583d60(byte *param_1,undefined4 *param_2,int param_3,char param_4)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int *piVar11;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00712f18;
  ExceptionList = &local_10;
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  local_8._1_3_ = 0;
  local_8._0_1_ = 1;
  local_14 = puVar4;
  local_18 = param_2;
  pbVar7 = param_1;
  puVar9 = param_2;
  do {
    if (puVar4 == (undefined4 *)0x0) {
      if (puVar9 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = puVar9 + 1;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar9)();
        }
      }
      if (param_2 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = param_2 + 1;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*param_2)();
        }
      }
      ExceptionList = local_10;
      return;
    }
    iVar5 = puVar4[3];
    piVar1 = (int *)(iVar5 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_8._0_1_ = 2;
    FUN_0045c990();
    iVar8 = local_28;
    if (iVar5 == local_28) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_0045c1e0();
    }
    piVar11 = (int *)(iVar8 + -8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    if (local_20 == 0) {
      FUN_0045c990();
      local_8._0_1_ = 3;
      local_20 = param_3;
      FUN_00636ec0();
      pbVar10 = local_24;
      pbVar6 = local_24;
      do {
        while( true ) {
          bVar3 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          if (-1 < (char)bVar3) break;
          bVar3 = *pbVar6;
          while ((bVar3 & 0xc0) == 0x80) {
            pbVar2 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            bVar3 = *pbVar2;
          }
        }
      } while (bVar3 != 0);
      FUN_00644f50();
      pbVar10 = pbVar10 + -8;
      local_8._0_1_ = 2;
      if (pbVar10 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar5 = *(int *)pbVar10;
        *(int *)pbVar10 = *(int *)pbVar10 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(pbVar10);
        }
      }
      param_4 = '\x01';
    }
    else {
      FUN_0045c990();
      iVar8 = local_2c;
      if (iVar5 == local_2c) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_0045c1e0();
      }
      piVar11 = (int *)(iVar8 + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      if (local_20 == 0) {
        puVar4 = (undefined4 *)FUN_00681f20();
        local_18 = (undefined4 *)*puVar4;
        *puVar4 = puVar9;
        puVar4 = local_30;
      }
      else {
        FUN_0045c990();
        iVar8 = local_34;
        if (iVar5 == local_34) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0045c1e0();
        }
        piVar11 = (int *)(iVar8 + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar8 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar8 == 0) {
            FID_conflict__free(piVar11);
          }
        }
        if (iVar5 != 0) goto LAB_00583fdc;
        puVar4 = (undefined4 *)FUN_00681f20();
        local_18 = (undefined4 *)*puVar4;
        *puVar4 = puVar9;
        puVar4 = local_38;
      }
      puVar9 = local_18;
      if (puVar4 != (undefined4 *)0x0) {
        LOCK();
        piVar11 = puVar4 + 1;
        iVar5 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar4)();
        }
      }
    }
LAB_00583fdc:
    param_1 = pbVar7;
    if (*(char *)local_14[3] == '\0') {
      FUN_0061a410();
      FUN_00631430();
      local_8 = CONCAT31(local_8._1_3_,4);
      if (param_4 != '\0') {
        puVar4 = (undefined4 *)FUN_00632ad0();
        param_1 = (byte *)*puVar4;
        *puVar4 = pbVar7;
        piVar11 = (int *)(local_3c + -8);
        if (piVar11 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar11);
          }
        }
        param_4 = '\0';
      }
      iVar5 = FUN_0045c230();
      pbVar7 = param_1;
      while (param_1 = pbVar7, -1 < iVar5) {
        iVar8 = 0;
        pbVar6 = pbVar7;
        while( true ) {
          while( true ) {
            bVar3 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            if (-1 < (char)bVar3) break;
            if ((*pbVar6 & 0xc0) != 0x80) goto LAB_005840ba;
            do {
              pbVar10 = pbVar6 + 1;
              pbVar6 = pbVar6 + 1;
            } while ((*pbVar10 & 0xc0) == 0x80);
            iVar8 = iVar8 + 1;
          }
          if (bVar3 == 0) break;
LAB_005840ba:
          iVar8 = iVar8 + 1;
        }
        puVar9 = local_18;
        if (iVar8 + -1 <= iVar5) break;
        iVar8 = iVar5 + 1;
        if (iVar8 == 0x20) {
          do {
            iVar8 = iVar8 + 1;
          } while (iVar8 == 0x20);
          if (0x20 < iVar8) {
            puVar4 = (undefined4 *)FUN_00631550(&local_40,iVar5);
            param_1 = (byte *)*puVar4;
            *puVar4 = pbVar7;
            piVar11 = (int *)(local_40 + -8);
            if (piVar11 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar11);
              }
            }
          }
        }
        iVar5 = FUN_00631770();
        puVar9 = local_18;
        pbVar7 = param_1;
      }
      if (*pbVar7 != 0) {
        local_20 = param_3;
        FUN_00636ec0();
        pbVar6 = pbVar7;
        do {
          while( true ) {
            bVar3 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            if (-1 < (char)bVar3) break;
            bVar3 = *pbVar6;
            while ((bVar3 & 0xc0) == 0x80) {
              pbVar10 = pbVar6 + 1;
              pbVar6 = pbVar6 + 1;
              bVar3 = *pbVar10;
            }
          }
        } while (bVar3 != 0);
        FUN_00644f50();
      }
      local_8._0_1_ = 2;
      pbVar7 = pbVar7 + -8;
      if (pbVar7 != (byte *)&DAT_00bfe124) {
        LOCK();
        iVar5 = *(int *)pbVar7;
        *(int *)pbVar7 = *(int *)pbVar7 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(pbVar7);
        }
      }
    }
    puVar4 = local_14;
    if (puVar9 != (undefined4 *)0x0) {
      LOCK();
      puVar9[1] = puVar9[1] + 1;
      UNLOCK();
    }
    FUN_00583d60(local_14,puVar9);
    puVar4 = (undefined4 *)*puVar4;
    local_8._0_1_ = 1;
    local_14 = puVar4;
    pbVar7 = param_1;
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar1);
      }
    }
  } while( true );
}

