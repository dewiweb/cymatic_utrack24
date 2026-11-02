// rea decompile_all
// name: FUN_00525f20
// address: 0x525f20
// body: available
// range: 0x525f20-0x526b0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00526340) */
/* WARNING: Removing unreachable block (ram,0x00526345) */
/* WARNING: Removing unreachable block (ram,0x00526350) */
/* WARNING: Removing unreachable block (ram,0x00526357) */
/* WARNING: Removing unreachable block (ram,0x00526387) */
/* WARNING: Removing unreachable block (ram,0x00526398) */
/* WARNING: Removing unreachable block (ram,0x00526390) */
/* WARNING: Removing unreachable block (ram,0x0052639a) */
/* WARNING: Removing unreachable block (ram,0x005263c1) */
/* WARNING: Removing unreachable block (ram,0x005263ce) */
/* WARNING: Removing unreachable block (ram,0x005263d7) */
/* WARNING: Removing unreachable block (ram,0x005263dc) */
/* WARNING: Removing unreachable block (ram,0x0052627b) */
/* WARNING: Removing unreachable block (ram,0x005262d0) */
/* WARNING: Removing unreachable block (ram,0x005262da) */
/* WARNING: Removing unreachable block (ram,0x00526301) */
/* WARNING: Removing unreachable block (ram,0x0052630e) */
/* WARNING: Removing unreachable block (ram,0x00526317) */
/* WARNING: Removing unreachable block (ram,0x00526324) */
/* WARNING: Removing unreachable block (ram,0x0052631c) */
/* WARNING: Removing unreachable block (ram,0x00526280) */
/* WARNING: Removing unreachable block (ram,0x00526285) */
/* WARNING: Removing unreachable block (ram,0x00526290) */
/* WARNING: Removing unreachable block (ram,0x00526297) */
/* WARNING: Removing unreachable block (ram,0x005262c7) */
/* WARNING: Removing unreachable block (ram,0x005262d8) */

void FUN_00525f20(void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int in_ECX;
  undefined4 extraout_ECX;
  int *piVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  uint uVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 **ppuVar15;
  undefined1 *puVar16;
  undefined1 **ppuVar17;
  undefined1 *local_60;
  int local_5c;
  undefined1 *local_58;
  void *local_54;
  int local_50;
  undefined1 local_49;
  undefined1 *puStack_48;
  void *local_44;
  undefined4 local_40;
  void *local_3c;
  undefined4 *local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070b57c;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = 0;
  local_3c = param_1;
  if (*(int *)(in_ECX + 0x508) == 0) {
    local_44 = operator_new(0xac);
    local_8 = 0;
    FUN_00637690(param_1);
    FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_40 = 1;
    piVar2 = (int *)FUN_00537fb0(&PTR_DAT_00c7ed68);
    local_8 = 2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))();
      FUN_006e5050();
    }
    piVar2 = (int *)((int)local_3c + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  }
  else {
    local_54 = operator_new(0xac);
    local_8 = 3;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,4);
    local_40 = 2;
    if (*(int *)(in_ECX + 0x508) < 0) {
      puStack_48 = &stack0xffffff6c;
      iVar3 = FUN_006104a0();
      *(undefined1 *)(iVar3 + -1) = 0x2d;
      iVar3 = iVar3 + -1;
    }
    else {
      puStack_48 = &stack0xffffff6c;
      iVar3 = FUN_006104a0();
    }
    puVar16 = &local_15 + -iVar3;
    FUN_004557e0(puVar16);
    local_8 = 5;
    local_40 = 6;
    uVar4 = extraout_ECX;
    uVar14 = extraout_ECX;
    FUN_00637690(local_3c);
    FUN_006377c0(uVar4);
    FUN_00637730(uVar14);
    FUN_006377c0(puVar16);
    FUN_00637730();
    local_8 = 6;
    local_40 = 0xe;
    piVar2 = (int *)FUN_00537fb0(&PTR_DAT_00c7ed68);
    local_8 = 9;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))();
      FUN_006e5050();
    }
    piVar2 = local_38[0] + -2;
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_5c + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_50 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    uVar12 = 0;
    local_8._0_1_ = 0xb;
    local_8._1_3_ = 0;
    local_5c = 0;
    if (0 < *(int *)(in_ECX + 0x508)) {
      bVar13 = *(int *)(in_ECX + 0x508) != 0;
      do {
        if (bVar13) {
          uVar4 = *(undefined4 *)(*(int *)(in_ECX + 0x500) + uVar12 * 4);
        }
        else {
          uVar4 = 0;
        }
        iVar3 = FUN_006f6dd6(uVar4,0,&ProjectExplorerBaseItem::RTTI_Type_Descriptor);
        if (iVar3 != 0) {
          if (local_5c == 0) {
            local_5c = *(int *)(iVar3 + 0x44);
          }
          FUN_004097d0();
          FUN_004097d0();
        }
        uVar12 = uVar12 + 1;
        bVar13 = uVar12 < *(uint *)(in_ECX + 0x508);
      } while ((int)uVar12 < (int)*(uint *)(in_ECX + 0x508));
    }
    local_38[0] = (undefined4 *)&local_49;
    FUN_00413a90();
    local_38[0] = (undefined4 *)&local_49;
    FUN_00413a90(0,local_38);
    local_8._0_1_ = 0x10;
    local_58 = &DAT_00bfe12c;
    local_60 = &DAT_00bfe12c;
    local_38[0] = operator_new(0x180);
    local_8._0_1_ = 0x12;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,0x13);
    local_40 = 0x10;
    FUN_0045c990();
    local_8 = 0x14;
    local_40 = 0x30;
    ppuVar17 = &puStack_48;
    ppuVar15 = &local_60;
    pcVar6 = "";
    FUN_0045c990("",ppuVar15,ppuVar17);
    local_8 = 0x15;
    local_40 = 0x70;
    FUN_00637690(&local_54);
    uVar4 = FUN_006377c0(pcVar6);
    local_8 = 0x16;
    local_40 = 0xf0;
    piVar2 = (int *)FUN_005383e0(uVar4,ppuVar15,ppuVar17);
    iVar3 = in_ECX + 0x480;
    local_8 = 0x1a;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x28))();
      iVar10 = piVar2[3];
      uVar12 = 0xffffffff;
      if (iVar10 != iVar3) {
        if (iVar10 == 0) {
          if ((*(byte *)(piVar2 + 0x1a) & 1) != 0) {
            local_8 = 0x1b;
            local_50 = DAT_00c8a67c;
            if (DAT_00c8a67c == 0) {
              local_38[0] = operator_new(0xd0);
              DAT_00c8a67c = FUN_006cb960();
            }
            iVar10 = DAT_00c8a67c;
            iVar9 = *(int *)(DAT_00c8a67c + 0x50) + -1;
            if (-1 < iVar9) {
              piVar5 = (int *)(*(int *)(DAT_00c8a67c + 0x48) + iVar9 * 4);
              do {
                puVar7 = (undefined4 *)*piVar5;
                if ((int *)puVar7[1] == piVar2) goto LAB_00526581;
                piVar5 = piVar5 + -1;
                iVar9 = iVar9 + -1;
              } while (-1 < iVar9);
            }
            puVar7 = (undefined4 *)0x0;
LAB_00526581:
            local_8 = CONCAT31(local_8._1_3_,0x1a);
            *(byte *)(piVar2 + 0x1a) = *(byte *)(piVar2 + 0x1a) & 0xfe;
            local_50 = iVar10;
            if (puVar7 != (undefined4 *)0x0) {
              (**(code **)*puVar7)();
              iVar10 = DAT_00c8a67c;
            }
            if (iVar10 == 0) {
              local_38[0] = operator_new(0xd0);
              local_8 = 0x1c;
              DAT_00c8a67c = FUN_006cb960();
              local_8 = CONCAT31(local_8._1_3_,0x1a);
            }
            FUN_00415ff0();
          }
        }
        else {
          piVar8 = *(int **)(iVar10 + 0x28);
          piVar5 = piVar8 + *(int *)(iVar10 + 0x30);
          for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
            if (piVar2 == (int *)*piVar8) {
              FUN_006cf0a0((int)piVar8 - *(int *)(iVar10 + 0x28) >> 2);
              goto LAB_005265d3;
            }
          }
          FUN_006cf0a0(0xffffffff);
        }
LAB_005265d3:
        piVar2[3] = iVar3;
        if ((*(byte *)(piVar2 + 0x1a) & 2) != 0) {
          FUN_006ceba0();
        }
        if (((*(byte *)((int)piVar2 + 0x69) & 1) == 0) &&
           (uVar12 = *(uint *)(in_ECX + 0x4b0), 0 < (int)uVar12)) {
          do {
            if ((*(byte *)(*(int *)(*(int *)(in_ECX + 0x4a8) + -4 + uVar12 * 4) + 0x69) & 1) == 0)
            break;
            uVar12 = uVar12 - 1;
          } while (0 < (int)uVar12);
        }
        iVar10 = *(int *)(in_ECX + 0x4b0) + 1;
        if ((*(int *)(in_ECX + 0x4ac) < iVar10) &&
           (local_38[0] = (undefined4 *)(iVar10 / 2 + 8 + iVar10 & 0xfffffff8),
           *(undefined4 **)(in_ECX + 0x4ac) != local_38[0])) {
          if ((int)local_38[0] < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0x4a8));
            *(undefined4 *)(in_ECX + 0x4a8) = 0;
          }
          else if (*(int *)(in_ECX + 0x4a8) == 0) {
            uVar4 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x4a8) = uVar4;
          }
          else {
            uVar4 = FUN_004c553b();
            *(undefined4 *)(in_ECX + 0x4a8) = uVar4;
          }
          *(undefined4 **)(in_ECX + 0x4ac) = local_38[0];
        }
        uVar1 = *(uint *)(in_ECX + 0x4b0);
        if (uVar12 < uVar1) {
          local_38[0] = (undefined4 *)(*(int *)(in_ECX + 0x4a8) + uVar12 * 4);
          if (0 < (int)(uVar1 - uVar12)) {
            FUN_004c1df0(local_38[0] + 1);
          }
          if (local_38[0] != (undefined4 *)0x0) {
            *local_38[0] = piVar2;
          }
          *(int *)(in_ECX + 0x4b0) = *(int *)(in_ECX + 0x4b0) + 1;
        }
        else {
          *(uint *)(in_ECX + 0x4b0) = uVar1 + 1;
          puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x4a8) + uVar1 * 4);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = piVar2;
          }
        }
        FUN_006cedf0();
        FUN_006cef00();
      }
    }
    piVar2 = (int *)((int)local_44 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)((int)local_54 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(puStack_48 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    local_8 = 0x10;
    piVar2 = (int *)((int)local_3c + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    switch(local_5c) {
    default:
      local_38[0] = operator_new(0x180);
      local_8._0_1_ = 0x1d;
      FUN_0045c990();
      local_8 = CONCAT31(local_8._1_3_,0x1e);
      local_40 = 0x100;
      FUN_0045c990();
      local_8 = 0x1f;
      local_40 = 0x300;
      ppuVar17 = &puStack_48;
      ppuVar15 = &local_58;
      pcVar6 = "";
      FUN_0045c990("",ppuVar15,ppuVar17);
      local_8 = 0x20;
      local_40 = 0x700;
      FUN_00637690(&local_3c);
      uVar4 = FUN_006377c0(pcVar6);
      local_8 = 0x21;
      local_40 = 0xf00;
      piVar2 = (int *)FUN_005383e0(uVar4,ppuVar15,ppuVar17);
      local_8 = 0x25;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x28))();
        iVar10 = piVar2[3];
        if (iVar10 != iVar3) {
          if (iVar10 == 0) {
            if ((*(byte *)(piVar2 + 0x1a) & 1) != 0) {
              puVar7 = (undefined4 *)FUN_0068db10();
              *(byte *)(piVar2 + 0x1a) = *(byte *)(piVar2 + 0x1a) & 0xfe;
              if (puVar7 != (undefined4 *)0x0) {
                (**(code **)*puVar7)();
              }
              if (DAT_00c8a67c == 0) {
                local_38[0] = operator_new(0xd0);
                local_8 = 0x26;
                DAT_00c8a67c = FUN_006cb960();
                local_8 = CONCAT31(local_8._1_3_,0x25);
              }
              FUN_00415ff0();
            }
          }
          else {
            piVar8 = *(int **)(iVar10 + 0x28);
            piVar5 = piVar8 + *(int *)(iVar10 + 0x30);
            for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
              if (piVar2 == (int *)*piVar8) {
                FUN_006cf0a0((int)piVar8 - *(int *)(iVar10 + 0x28) >> 2);
                goto LAB_005269b6;
              }
            }
            FUN_006cf0a0(0xffffffff);
          }
LAB_005269b6:
          piVar2[3] = iVar3;
          if ((*(byte *)(piVar2 + 0x1a) & 2) != 0) {
            FUN_006ceba0();
          }
          if (((*(byte *)((int)piVar2 + 0x69) & 1) == 0) &&
             (iVar3 = *(int *)(in_ECX + 0x4b0), 0 < iVar3)) {
            piVar2 = (int *)(*(int *)(in_ECX + 0x4a8) + (iVar3 + -1) * 4);
            do {
              if ((*(byte *)(*piVar2 + 0x69) & 1) == 0) break;
              iVar3 = iVar3 + -1;
              piVar2 = piVar2 + -1;
            } while (0 < iVar3);
          }
          FUN_00410380();
          FUN_006cedf0();
          FUN_006cef00();
        }
      }
      piVar2 = (int *)((int)local_44 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)((int)local_3c + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      piVar2 = (int *)(puStack_48 + -8);
      pvVar11 = local_54;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        pvVar11 = local_54;
        if (iVar3 == 0) {
          FID_conflict__free(piVar2);
          pvVar11 = local_54;
        }
      }
      break;
    case 4:
      local_38[0] = operator_new(0xac);
      local_8._0_1_ = 0x27;
      pcVar6 = "";
      FUN_0045c990("");
      local_8 = CONCAT31(local_8._1_3_,0x28);
      local_40 = 0x1000;
      FUN_00637690(&local_3c);
      uVar4 = FUN_006377c0(pcVar6);
      local_8 = 0x29;
      local_40 = 0x3000;
      piVar2 = (int *)FUN_00537fb0(uVar4);
      local_8 = 0x2b;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x28))();
        FUN_006e5050();
      }
      piVar2 = (int *)((int)local_44 + -8);
      pvVar11 = local_3c;
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar2);
          pvVar11 = local_3c;
        }
      }
    }
    piVar2 = (int *)((int)pvVar11 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_58 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)(local_60 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    FID_conflict__free((void *)0x0);
    FID_conflict__free((void *)0x0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

