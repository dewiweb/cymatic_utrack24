// rea decompile_all
// name: FUN_0062c0f0
// address: 0x62c0f0
// body: available
// range: 0x62c0f0-0x62c6bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062c0f0(undefined4 param_1,char param_2,char *param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined **ppuVar9;
  int *in_ECX;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  int local_9c;
  int local_90;
  int local_7c;
  int local_78;
  int local_74;
  uint local_6c;
  char *local_64;
  char acStack_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071dfcc;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 == (char *)0x0) {
    param_3 = " (";
  }
  if (param_4 == (char *)0x0) {
    param_4 = ")";
  }
  iVar10 = 0;
  if (in_ECX[2] != 1 && -1 < in_ECX[2] + -1) {
    do {
      piVar8 = (int *)(*in_ECX + iVar10 * 4);
      iVar10 = iVar10 + 1;
      local_6c = FUN_0062c730(*piVar8);
      if (-1 < (int)local_6c) {
        iVar2 = *piVar8;
        piVar4 = (int *)(iVar2 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        local_8 = 0;
        if (param_2 != '\0') {
          FUN_0045cb50();
          local_8._0_1_ = 1;
          FUN_006104a0();
          FUN_004557e0();
          local_8._0_1_ = 2;
          FUN_0045cb50();
          local_8 = CONCAT31(local_8._1_3_,3);
          piVar4 = (int *)(iVar2 + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
          }
          FUN_00637730(iVar2);
          FUN_00637730();
          piVar4 = (int *)FUN_00637730();
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
          piVar8 = (int *)(local_90 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          piVar8 = (int *)(local_74 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          piVar8 = (int *)(local_78 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          local_8 = local_8 & 0xffffff00;
          piVar8 = (int *)(local_7c + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
        }
        uVar5 = 1;
        do {
          uVar5 = uVar5 + 1;
          if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
            local_64 = "";
          }
          else {
            iVar6 = FUN_0045d1e0();
            puVar7 = (undefined4 *)FUN_004bfe22();
            *puVar7 = 0;
            local_64 = (char *)(puVar7 + 2);
            puVar7[1] = iVar6 + 4U & 0xfffffffc;
            cVar1 = *param_4;
            *local_64 = cVar1;
            if (cVar1 != '\0') {
              pcVar12 = local_64;
              do {
                cVar1 = pcVar12[(int)(param_4 + (1 - (int)local_64))];
                pcVar12 = pcVar12 + 1;
                *pcVar12 = cVar1;
              } while (cVar1 != '\0');
            }
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          pcVar12 = acStack_1b + 2;
          acStack_1b[2] = 0;
          uVar14 = uVar5;
          if ((int)uVar5 < 0) {
            uVar14 = -uVar5;
            do {
              pcVar13 = pcVar12;
              pcVar12 = pcVar13 + -1;
              uVar11 = uVar14 / 10;
              *pcVar12 = (char)uVar14 + (char)uVar11 * -10 + '0';
              uVar14 = uVar11;
            } while (uVar11 != 0);
            pcVar12 = pcVar13 + -2;
            *pcVar12 = '-';
          }
          else {
            do {
              pcVar12 = pcVar12 + -1;
              uVar11 = uVar14 / 10;
              *pcVar12 = (char)uVar14 + (char)uVar11 * -10 + '0';
              uVar14 = uVar11;
            } while (uVar11 != 0);
          }
          pcVar13 = acStack_1b + -(int)pcVar12 + 2;
          piVar8 = (int *)FUN_004bfe22();
          *piVar8 = 0;
          piVar8[1] = (uint)(&uStack_15 + -(int)pcVar12) & 0xfffffffc;
          while ((0 < (int)pcVar13 && (iVar6 = FUN_00443260(), iVar6 != 0))) {
            FUN_0044ecc0();
            pcVar13 = pcVar13 + -1;
          }
          *(undefined1 *)(piVar8 + 2) = 0;
          local_8._0_1_ = 5;
          if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
            pcVar12 = "";
          }
          else {
            iVar6 = FUN_0045d1e0();
            uVar14 = iVar6 + 4U & 0xfffffffc;
            puVar7 = (undefined4 *)FUN_004bfe22(uVar14 + 0xb);
            puVar7[1] = uVar14;
            pcVar12 = (char *)(puVar7 + 2);
            *puVar7 = 0;
            cVar1 = *param_3;
            *pcVar12 = cVar1;
            if (cVar1 != '\0') {
              pcVar13 = pcVar12;
              do {
                cVar1 = pcVar13[(int)(param_3 + (1 - (int)pcVar12))];
                pcVar13 = pcVar13 + 1;
                *pcVar13 = cVar1;
              } while (cVar1 != '\0');
            }
          }
          local_8 = CONCAT31(local_8._1_3_,6);
          if (local_6c < (uint)in_ECX[2]) {
            ppuVar9 = (undefined **)(*in_ECX + local_6c * 4);
          }
          else {
            ppuVar9 = &PTR_DAT_00c7ed68;
          }
          puVar3 = *ppuVar9;
          piVar4 = (int *)(puVar3 + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
          }
          FUN_00637730(puVar3);
          FUN_00637730();
          FUN_00637730();
          FUN_00459080();
          piVar4 = (int *)(local_9c + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar4);
            }
          }
          piVar4 = (int *)(pcVar12 + -8);
          if (piVar4 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar4);
            }
          }
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          local_8 = local_8 & 0xffffff00;
          piVar8 = (int *)(local_64 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar8);
            }
          }
          local_6c = FUN_0062c730(iVar2);
        } while (-1 < (int)local_6c);
        piVar8 = (int *)(iVar2 + -8);
        local_8 = 0xffffffff;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar8);
          }
        }
      }
    } while (iVar10 < in_ECX[2] + -1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

