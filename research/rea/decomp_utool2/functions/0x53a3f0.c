// rea decompile_all
// name: FUN_0053a3f0
// address: 0x53a3f0
// body: available
// range: 0x53a3f0-0x53ab67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053a3f0(void)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  int *piVar8;
  undefined4 **_Memory;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 **ppuStack_84;
  undefined4 **local_6c;
  uint local_68;
  undefined4 *local_64;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 **local_40;
  char *local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  char *local_18;
  undefined4 **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070dead;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppuStack_84 = (undefined4 **)0x53a426;
  FUN_00410ad0();
  local_8 = 0;
  FUN_005b2c70();
  local_8._0_1_ = 1;
  ppuStack_84 = &local_2c;
  FUN_00635a10();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_005b3be0();
  piVar8 = local_2c + -2;
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_84 = (undefined4 **)0x53a47d;
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(local_28 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_84 = (undefined4 **)0x53a4a0;
      FID_conflict__free(piVar8);
    }
  }
  piVar8 = (int *)(local_24 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_84 = (undefined4 **)0x53a4c3;
      FID_conflict__free(piVar8);
    }
  }
  local_14 = (undefined4 **)0x0;
  local_6c = (undefined4 **)0x0;
  local_68 = 0;
  local_64 = (undefined4 *)0x0;
  local_8._0_1_ = 7;
  local_2c = (undefined4 *)0x0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    do {
      if (*(char *)(in_ECX + 0x14) != '\0') {
        ppuStack_84 = (undefined4 **)0x53a8c3;
        FUN_0045c990();
        iVar6 = *(int *)(in_ECX + 0x2c) + 1;
        if ((*(int *)(in_ECX + 0x28) < iVar6) &&
           (uVar11 = *(int *)(in_ECX + 0x2c) + 9 + iVar6 / 2 & 0xfffffff8,
           *(uint *)(in_ECX + 0x28) != uVar11)) {
          if ((int)uVar11 < 1) {
            ppuStack_84 = (undefined4 **)0x53a919;
            FID_conflict__free(*(void **)(in_ECX + 0x24));
            *(undefined4 *)(in_ECX + 0x24) = 0;
          }
          else {
            ppuStack_84 = *(undefined4 ***)(in_ECX + 0x24);
            if (ppuStack_84 == (undefined4 **)0x0) {
              ppuStack_84 = (undefined4 **)0x53a8fb;
              uVar4 = FUN_004c554b();
              *(undefined4 *)(in_ECX + 0x24) = uVar4;
            }
            else {
              uVar4 = FUN_004c553b();
              *(undefined4 *)(in_ECX + 0x24) = uVar4;
            }
          }
          *(uint *)(in_ECX + 0x28) = uVar11;
        }
        iVar6 = *(int *)(in_ECX + 0x2c);
        *(int *)(in_ECX + 0x2c) = iVar6 + 1;
        puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x24) + iVar6 * 4);
        puVar7 = local_2c;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = local_2c;
          puVar7 = (undefined4 *)&DAT_00bfe12c;
        }
        piVar8 = puVar7 + -2;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            ppuStack_84 = (undefined4 **)0x53a960;
            FID_conflict__free(piVar8);
          }
        }
        break;
      }
      ppuStack_84 = &local_20;
      FUN_0040f6b0();
      local_28 = &DAT_00bfe12c;
      local_8._0_1_ = 9;
      ppuStack_84 = (undefined4 **)0x53a512;
      ppuStack_84 = (undefined4 **)FUN_00636a10();
      local_8._0_1_ = 10;
      FUN_00637690();
      ppuStack_84 = (undefined4 **)0x53a531;
      FUN_006377c0();
      local_8._0_1_ = 0xc;
      piVar8 = (int *)(local_34 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppuStack_84 = (undefined4 **)0x53a555;
          FID_conflict__free(piVar8);
        }
      }
      FUN_00633420();
      ppuStack_84 = (undefined4 **)0x53a56c;
      FUN_00636a10();
      local_8._0_1_ = 0xd;
      ppuStack_84 = &local_1c;
      FUN_00635a10();
      local_8._0_1_ = 0xf;
      piVar8 = (int *)(local_38 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppuStack_84 = (undefined4 **)0x53a5a7;
          FID_conflict__free(piVar8);
        }
      }
      ppuStack_84 = &local_48;
      cVar3 = FUN_0053a020(&local_20,&local_1c);
      if (cVar3 == '\0') {
        *(undefined1 *)(in_ECX + 0x14) = 1;
        pcVar1 = local_18 + 1;
        pcVar10 = local_18;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        ppuStack_84 = (undefined4 **)0x53a5ec;
        FUN_00455850();
        ppuStack_84 = (undefined4 **)0x20;
        local_18 = local_3c;
        pcVar1 = local_3c + ((int)pcVar10 - (int)pcVar1);
        FUN_004c2c30(pcVar1,"{#CR}Error copying the file{#CD}");
        pcVar1[0x20] = '\0';
      }
      else {
        FUN_00633420();
        ppuStack_84 = (undefined4 **)0x53a62a;
        FUN_0045c990();
        local_8._0_1_ = 0x10;
        ppuStack_84 = &local_44;
        FUN_00633c20(local_58,local_54,local_50,local_4c);
        FUN_006334c0();
        local_8._0_1_ = 0x11;
        ppuStack_84 = (undefined4 **)0x53a67d;
        FUN_00637690();
        local_8._0_1_ = 0x12;
        ppuStack_84 = (undefined4 **)0x53a68a;
        FUN_00636ec0();
        _Memory = local_40 + -2;
        if (_Memory != (undefined4 **)&DAT_00bfe124) {
          LOCK();
          puVar5 = *_Memory;
          *_Memory = (undefined4 *)((int)*_Memory + -1);
          UNLOCK();
          if (puVar5 == (undefined4 *)0x0) {
            ppuStack_84 = (undefined4 **)0x53a6aa;
            FID_conflict__free(_Memory);
          }
        }
        piVar8 = local_44 + -2;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            ppuStack_84 = (undefined4 **)0x53a6cd;
            FID_conflict__free(piVar8);
          }
        }
        piVar8 = (int *)(local_24 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            ppuStack_84 = (undefined4 **)0x53a6f0;
            FID_conflict__free(piVar8);
          }
        }
      }
      iVar6 = *(int *)(in_ECX + 0x2c);
      iVar9 = iVar6 + 1;
      if ((int)*(uint *)(in_ECX + 0x28) < iVar9) {
        if (iVar9 < 0) {
          iVar9 = iVar6 + 2;
        }
        uVar11 = iVar6 + 9 + (iVar9 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x28) != uVar11) {
          if ((int)uVar11 < 1) {
            ppuStack_84 = (undefined4 **)0x53a74b;
            FID_conflict__free(*(void **)(in_ECX + 0x24));
            *(undefined4 *)(in_ECX + 0x24) = 0;
          }
          else {
            ppuStack_84 = *(undefined4 ***)(in_ECX + 0x24);
            if (ppuStack_84 == (undefined4 **)0x0) {
              ppuStack_84 = (undefined4 **)0x53a72d;
              uVar4 = FUN_004c554b();
              *(undefined4 *)(in_ECX + 0x24) = uVar4;
            }
            else {
              uVar4 = FUN_004c553b();
              *(undefined4 *)(in_ECX + 0x24) = uVar4;
            }
          }
          *(uint *)(in_ECX + 0x28) = uVar11;
        }
      }
      iVar6 = *(int *)(in_ECX + 0x2c);
      *(int *)(in_ECX + 0x2c) = iVar6 + 1;
      puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x24) + iVar6 * 4);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = local_18;
        piVar8 = (int *)(local_18 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
      }
      local_48 = (undefined4 *)((int)local_64 + 1);
      if ((int)local_68 < (int)local_48) {
        puVar5 = local_48;
        if ((int)local_48 < 0) {
          puVar5 = (undefined4 *)((int)local_64 + 2);
        }
        uVar11 = (int)local_64 + ((int)puVar5 >> 1) + 9 & 0xfffffff8;
        if (local_68 != uVar11) {
          local_68 = uVar11;
          if ((int)uVar11 < 1) {
            ppuStack_84 = (undefined4 **)0x53a7d5;
            FID_conflict__free(local_14);
            local_6c = (undefined4 **)0x0;
            local_14 = local_6c;
          }
          else if (local_14 == (undefined4 **)0x0) {
            ppuStack_84 = (undefined4 **)0x53a7bd;
            local_6c = (undefined4 **)FUN_004c554b();
            local_14 = local_6c;
          }
          else {
            ppuStack_84 = local_14;
            local_6c = (undefined4 **)FUN_004c553b();
            local_14 = local_6c;
          }
        }
      }
      puVar5 = local_48;
      if (local_14 + (int)local_64 != (undefined4 **)0x0) {
        local_14[(int)local_64] = local_1c;
        piVar8 = local_1c + -2;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
      }
      piVar8 = local_1c + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppuStack_84 = (undefined4 **)0x53a82d;
          FID_conflict__free(piVar8);
        }
      }
      piVar8 = (int *)(local_18 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppuStack_84 = (undefined4 **)0x53a850;
          FID_conflict__free(piVar8);
        }
      }
      piVar8 = (int *)(local_28 + -8);
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppuStack_84 = (undefined4 **)0x53a873;
          FID_conflict__free(piVar8);
        }
      }
      local_8._0_1_ = 7;
      piVar8 = local_20 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppuStack_84 = (undefined4 **)0x53a89a;
          FID_conflict__free(piVar8);
        }
      }
      local_2c = (undefined4 *)((int)local_2c + 1);
      local_64 = puVar5;
    } while ((int)local_2c < *(int *)(in_ECX + 0x20));
  }
  if (*(char *)(in_ECX + 0x14) == '\0') {
    uVar11 = 0;
    if (0 < *(int *)(*(int *)(in_ECX + 0xc) + 0x5c)) {
      do {
        uVar2 = *(uint *)(*(int *)(in_ECX + 0xc) + 0x5c);
        if (((int)uVar11 < (int)uVar2) && (uVar11 < uVar2)) {
          local_20 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0xc) + 0x54) + uVar11 * 4);
        }
        else {
          local_20 = (undefined4 *)0x0;
        }
        ppuStack_84 = (undefined4 **)0x53a9a2;
        FUN_0053f050();
        ppuStack_84 = (undefined4 **)0x53a9ad;
        FUN_00410ea0();
        ppuStack_84 = (undefined4 **)0x53a9b6;
        local_40 = (undefined4 **)FUN_004154b0();
        piVar8 = local_48 + -2;
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            ppuStack_84 = (undefined4 **)0x53a9d9;
            FID_conflict__free(piVar8);
          }
        }
        if (local_44 != (undefined4 *)0x0) {
          LOCK();
          piVar8 = local_44 + 1;
          iVar6 = *piVar8;
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            ppuStack_84 = (undefined4 **)0x53a9f3;
            (**(code **)*local_44)();
          }
        }
        if (-1 < (int)local_40) {
          ppuStack_84 = local_40;
          FUN_0040f6b0(&ppuStack_84,local_40);
          FUN_00548e50();
          ppuStack_84 = (undefined4 **)0x53aa1c;
          FUN_0053aef0();
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(*(int *)(in_ECX + 0xc) + 0x5c));
      local_14 = local_6c;
    }
    ppuStack_84 = (undefined4 **)0x53aa39;
    iVar6 = FUN_005406f0();
    if (iVar6 != 0) {
      ppuStack_84 = (undefined4 **)0x53aa52;
      FUN_0045c990();
      iVar6 = *(int *)(in_ECX + 0x2c) + 1;
      if ((*(int *)(in_ECX + 0x28) < iVar6) &&
         (uVar11 = *(int *)(in_ECX + 0x2c) + 9 + iVar6 / 2 & 0xfffffff8,
         *(uint *)(in_ECX + 0x28) != uVar11)) {
        if ((int)uVar11 < 1) {
          ppuStack_84 = (undefined4 **)0x53aaa8;
          FID_conflict__free(*(void **)(in_ECX + 0x24));
          *(undefined4 *)(in_ECX + 0x24) = 0;
        }
        else {
          ppuStack_84 = *(undefined4 ***)(in_ECX + 0x24);
          if (ppuStack_84 == (undefined4 **)0x0) {
            ppuStack_84 = (undefined4 **)0x53aa8a;
            uVar4 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x24) = uVar4;
          }
          else {
            uVar4 = FUN_004c553b();
            *(undefined4 *)(in_ECX + 0x24) = uVar4;
          }
        }
        *(uint *)(in_ECX + 0x28) = uVar11;
      }
      iVar6 = *(int *)(in_ECX + 0x2c);
      *(int *)(in_ECX + 0x2c) = iVar6 + 1;
      puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x24) + iVar6 * 4);
      puVar7 = local_2c;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = local_2c;
        puVar7 = (undefined4 *)&DAT_00bfe12c;
      }
      piVar8 = puVar7 + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          ppuStack_84 = (undefined4 **)0x53aaef;
          FID_conflict__free(piVar8);
        }
      }
      *(undefined1 *)(in_ECX + 0x14) = 1;
    }
  }
  iVar6 = 0;
  if (0 < (int)local_64) {
    do {
      piVar8 = local_14[iVar6] + -2;
      if (piVar8 != &DAT_00bfe124) {
        LOCK();
        iVar9 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar9 == 0) {
          ppuStack_84 = (undefined4 **)0x53ab23;
          FID_conflict__free(piVar8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_64);
  }
  ppuStack_84 = (undefined4 **)0x53ab33;
  FID_conflict__free(local_14);
  piVar8 = (int *)(local_30 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      ppuStack_84 = (undefined4 **)0x53ab53;
      FID_conflict__free(piVar8);
    }
  }
  ExceptionList = local_10;
  return;
}

