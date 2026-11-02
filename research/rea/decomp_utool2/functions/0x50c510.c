// rea decompile_all
// name: FUN_0050c510
// address: 0x50c510
// body: available
// range: 0x50c510-0x50c95c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050c510(int param_1)

{
  uint *puVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  uint local_5c;
  int local_58;
  int local_50;
  void *local_40;
  int local_3c;
  uint local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  int local_28;
  int local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00708703;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_0050d130(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_0045c990("Mutes:");
  local_8 = 0;
  FUN_0045c990("Solos:");
  local_28 = 0;
  local_40 = (void *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_8._0_1_ = 2;
  pcVar11 = local_1c;
  pcVar12 = local_20;
  do {
    pvVar2 = local_40;
    iVar9 = *(int *)(in_ECX + 0xb0);
    if (*(int *)(iVar9 + 0x10) == 0) {
      if (*(int *)(iVar9 + 8) == 0) {
        iVar9 = *(int *)(*(int *)(iVar9 + 0xc) + 100);
      }
      else {
        iVar9 = *(int *)(*(int *)(iVar9 + 8) + 0x5c);
      }
    }
    else {
      iVar9 = *(int *)(*(int *)(iVar9 + 0x10) + 0x4bc);
    }
    if (iVar9 <= local_28) {
      uVar10 = 0;
      if (0 < (int)local_38) {
        bVar13 = local_38 != 0;
        do {
          if (bVar13) {
            uVar5 = *(undefined4 *)((int)pvVar2 + uVar10 * 4);
          }
          else {
            uVar5 = 0;
          }
          FUN_0050da40(uVar5,1);
          uVar10 = uVar10 + 1;
          bVar13 = uVar10 < local_38;
          pcVar11 = local_1c;
          pcVar12 = local_20;
        } while ((int)uVar10 < (int)local_38);
      }
      *(undefined1 *)(local_14 + 0x9e4) = *(undefined1 *)(param_1 + 0x3c);
      FUN_0050d880();
      *(undefined1 *)(local_14 + 0xb9) = 1;
      FUN_00515db0(1);
      FID_conflict__free(local_40);
      piVar8 = (int *)(pcVar11 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      piVar8 = (int *)(pcVar12 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          FID_conflict__free(piVar8);
        }
      }
      ExceptionList = local_10;
      return;
    }
    FUN_00513680(&local_5c,local_28);
    local_8._0_1_ = 3;
    if ((local_5c < *(uint *)(local_14 + 0x140)) &&
       (iVar9 = *(int *)(*(int *)(local_14 + 0x138) + local_5c * 4), iVar9 != 0)) {
      FUN_0050b1c0(1);
      if ((int)local_5c < (int)*(uint *)(param_1 + 0x14)) {
        if (local_5c < *(uint *)(param_1 + 0x14)) {
          fVar14 = *(float *)(*(int *)(param_1 + 0xc) + local_5c * 4);
        }
        else {
          fVar14 = 0.0;
        }
        *(float *)(iVar9 + 0x7bc) = fVar14;
        if (0.0 < fVar14) {
LAB_0050c664:
          FUN_0050a760();
        }
        else {
          fVar15 = -64.0;
          if (-64.0 <= fVar14) {
            fVar15 = fVar14;
          }
          if (*(float *)(iVar9 + 0x330) != fVar15) {
            *(float *)(iVar9 + 0x330) = fVar15;
            cVar3 = FUN_006e2bd0();
            if (cVar3 == '\0') goto LAB_0050c664;
          }
        }
        FUN_0050b640();
        if (local_5c < *(uint *)(param_1 + 0x38)) {
          cVar3 = *(char *)(*(int *)(param_1 + 0x30) + local_5c);
        }
        else {
          cVar3 = '\0';
        }
        if (*(char *)(iVar9 + 0x7b8) == '\0') {
          *(char *)(iVar9 + 0x7ba) = cVar3;
          if ((*(char *)(iVar9 + 0x7bb) == '\0') &&
             ((cVar3 != '\0' || (*(char *)(iVar9 + 0x7b9) != '\0')))) {
            local_24 = CONCAT31(local_24._1_3_,1);
          }
          else {
            local_24 = (uint)local_24._1_3_ << 8;
          }
          FUN_006e5380(local_24,0);
        }
        if ((local_5c < *(uint *)(param_1 + 0x2c)) &&
           (*(char *)(*(int *)(param_1 + 0x24) + local_5c) != '\0')) {
          iVar9 = local_38 + 1;
          if (local_3c < iVar9) {
            iVar4 = iVar9;
            if (iVar9 < 0) {
              iVar4 = local_38 + 2;
            }
            FUN_00409cf0((iVar4 >> 1) + 8 + iVar9 & 0xfffffff8);
          }
          uVar10 = local_38 + 1;
          puVar1 = (uint *)((int)local_40 + local_38 * 4);
          local_38 = uVar10;
          if (puVar1 != (uint *)0x0) {
            *puVar1 = local_5c;
          }
        }
        if (local_5c < *(uint *)(param_1 + 0x38)) {
          cVar3 = *(char *)(*(int *)(param_1 + 0x30) + local_5c);
        }
        else {
          cVar3 = '\0';
        }
        local_30 = " Y";
        if (cVar3 == '\0') {
          local_30 = " N";
        }
        pcVar6 = local_30;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        local_18 = (int)pcVar6 - (int)(local_30 + 1);
        if (0 < local_18) {
          pcVar6 = pcVar12 + 1;
          pcVar7 = pcVar12;
          do {
            cVar3 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          FUN_00455850(pcVar12);
          pcVar12 = local_2c;
          pcVar6 = local_2c + ((int)pcVar7 - (int)pcVar6);
          local_20 = local_2c;
          FUN_004c2c30(pcVar6,local_30,local_18);
          pcVar6[local_18] = '\0';
        }
        if (local_5c < *(uint *)(param_1 + 0x2c)) {
          cVar3 = *(char *)(*(int *)(param_1 + 0x24) + local_5c);
        }
        else {
          cVar3 = '\0';
        }
        local_30 = " Y";
        if (cVar3 == '\0') {
          local_30 = " N";
        }
        pcVar6 = local_30;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        local_18 = (int)pcVar6 - (int)(local_30 + 1);
        if (0 < local_18) {
          pcVar6 = pcVar11 + 1;
          pcVar7 = pcVar11;
          do {
            cVar3 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          FUN_00455850(pcVar11);
          pcVar11 = local_34;
          pcVar6 = local_34 + ((int)pcVar7 - (int)pcVar6);
          local_1c = local_34;
          FUN_004c2c30(pcVar6,local_30,local_18);
          pcVar6[local_18] = '\0';
        }
      }
    }
    local_8._0_1_ = 2;
    piVar8 = (int *)(local_50 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    piVar8 = (int *)(local_58 + -8);
    if (piVar8 != &DAT_00bfe124) {
      LOCK();
      iVar9 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        FID_conflict__free(piVar8);
      }
    }
    local_28 = local_28 + 1;
    in_ECX = local_14;
  } while( true );
}

