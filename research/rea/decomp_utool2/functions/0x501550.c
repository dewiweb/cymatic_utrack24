// rea decompile_all
// name: FUN_00501550
// address: 0x501550
// body: available
// range: 0x501550-0x5017f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005015c7) */
/* WARNING: Removing unreachable block (ram,0x005015d8) */

void FUN_00501550(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *local_50;
  int *local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int *local_3c;
  char acStack_1b [2];
  int local_19;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00707443;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = (int *)0x0;
  local_48 = 0;
  piVar11 = (int *)0x8;
  local_8 = 0;
  piVar10 = (int *)0x5015b1;
  FUN_00409cf0(8);
  local_44 = 1;
  local_3c = (int *)0x0;
  uVar9 = 0;
  if (0 < *(int *)(local_40 + 0x304)) {
    do {
      uVar1 = 0;
      if (0 < (int)param_2[2]) {
        piVar4 = (int *)*param_2;
        do {
          if ((int)uVar9 < *piVar4) {
            if ((uVar1 & 1) != 0) {
              local_19._0_1_ = 0;
              pcVar6 = acStack_1b + 2;
              uVar1 = uVar9;
              if ((int)uVar9 < 0) {
                uVar1 = -uVar9;
                do {
                  pcVar7 = pcVar6;
                  pcVar6 = pcVar7 + -1;
                  uVar5 = uVar1 / 10;
                  *pcVar6 = (char)uVar1 + (char)uVar5 * -10 + '0';
                  uVar1 = uVar5;
                } while (uVar5 != 0);
                pcVar6 = pcVar7 + -2;
                *pcVar6 = '-';
              }
              else {
                do {
                  pcVar6 = pcVar6 + -1;
                  uVar5 = uVar1 / 10;
                  *pcVar6 = (char)uVar1 + (char)uVar5 * -10 + '0';
                  uVar1 = uVar5;
                } while (uVar5 != 0);
              }
              piVar11 = (int *)(acStack_1b + (2 - (int)pcVar6));
              piVar10 = (int *)0x501686;
              FUN_004557e0(piVar11);
              iVar8 = local_44 + 1;
              if ((int)local_48 < iVar8) {
                iVar2 = iVar8;
                if (iVar8 < 0) {
                  iVar2 = local_44 + 2;
                }
                uVar1 = local_44 + 9 + (iVar2 >> 1) & 0xfffffff8;
                if (local_48 != uVar1) {
                  local_48 = uVar1;
                  if ((int)uVar1 < 1) {
                    piVar10 = (int *)0x5016dd;
                    FID_conflict__free(local_3c);
                    local_4c = (int *)0x0;
                    piVar11 = local_3c;
                    local_3c = local_4c;
                  }
                  else {
                    piVar11 = (int *)(uVar1 * 4);
                    if (local_3c == (int *)0x0) {
                      piVar10 = (int *)0x5016c5;
                      local_4c = (int *)FUN_004c554b();
                      local_3c = local_4c;
                    }
                    else {
                      local_4c = (int *)FUN_004c553b(local_3c,piVar11);
                      piVar10 = local_3c;
                      local_3c = local_4c;
                    }
                  }
                }
              }
              if (local_3c + local_44 != (int *)0x0) {
                local_3c[local_44] = (int)local_50;
                local_50 = &DAT_00bfe12c;
              }
              piVar4 = (int *)(local_50 + -8);
              local_44 = iVar8;
              if (piVar4 != &DAT_00bfe124) {
                LOCK();
                iVar8 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar8 == 0) {
                  piVar10 = (int *)0x50172a;
                  FID_conflict__free(piVar4);
                  piVar11 = piVar4;
                }
              }
            }
            break;
          }
          uVar1 = uVar1 + 1;
          piVar4 = piVar4 + 1;
        } while ((int)uVar1 < (int)param_2[2]);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(local_40 + 0x304));
  }
  puVar3 = (undefined4 *)FUN_00636260(&local_40,&DAT_00739b28,piVar10,piVar11);
  *param_1 = &PTR_vftable_00c7ed4c;
  if (param_1 + 2 != (undefined4 *)0x0) {
    param_1[2] = *puVar3;
    *puVar3 = &DAT_00bfe12c;
  }
  piVar11 = (int *)(local_40 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  iVar8 = 0;
  if (0 < local_44) {
    do {
      piVar11 = (int *)(local_4c[iVar8] + -8);
      if (piVar11 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar11);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_44);
  }
  FID_conflict__free(local_4c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

