// rea decompile_all
// name: FUN_004379d0
// address: 0x4379d0
// body: available
// range: 0x4379d0-0x438894 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0043878a) */
/* WARNING: Removing unreachable block (ram,0x00437cc1) */

void FUN_004379d0(undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  void *_Memory;
  undefined4 *in_ECX;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  void *local_118;
  undefined4 local_114;
  void *local_110;
  undefined4 local_10c;
  int local_108 [2];
  int local_100;
  undefined1 local_fc [4];
  int local_f8;
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc [2];
  int *piStack_b4;
  undefined4 *local_b0;
  int local_ac;
  uint local_a8;
  undefined4 *local_a4;
  int local_a0;
  char local_9b;
  char local_9a;
  char local_99;
  undefined4 *local_98;
  ushort local_40;
  uint local_3e;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe4d2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b0 = in_ECX;
  FUN_0045c990("AIFF file",local_14);
  FUN_00602db0(param_1,&local_ac);
  local_8 = 0;
  piVar9 = (int *)(local_ac + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  *in_ECX = juce::AiffAudioFormatReader::vftable;
  iVar5 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
  lVar15 = CONCAT44(local_bc[0],local_c4);
  if (iVar5 == 0x4d524f46) {
    iVar5 = (**(code **)(*(int *)in_ECX[0x11] + 0x24))();
    lVar15 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
    local_c0 = (uint)(lVar15 + iVar5);
    iVar12 = (int)((ulonglong)(lVar15 + iVar5) >> 0x20);
    local_ac = iVar12;
    iVar5 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
    if ((iVar5 == 0x46464941) || (lVar15 = CONCAT44(local_bc[0],local_c4), iVar5 == 0x43464941)) {
      local_99 = '\0';
      local_9a = '\0';
      local_9b = '\0';
      uVar16 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
      iVar11 = (int)((ulonglong)uVar16 >> 0x20);
      uVar8 = (uint)uVar16;
      bVar14 = SBORROW4(iVar11,iVar12);
      iVar5 = iVar11 - iVar12;
      bVar13 = iVar11 == iVar12;
LAB_00437af2:
      lVar15 = CONCAT44(local_bc[0],local_c4);
      if ((!bVar13 && bVar14 == iVar5 < 0) ||
         ((bVar14 == iVar5 < 0 && (lVar15 = CONCAT44(local_bc[0],local_c4), local_c0 <= uVar8))))
      goto LAB_004387de;
      iVar5 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
      local_98 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x11] + 0x24))();
      lVar15 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
      lVar15 = lVar15 + ZEXT48(local_98);
      local_c4 = (uint)lVar15;
      local_bc[0] = (int)((ulonglong)lVar15 >> 0x20);
      if (iVar5 == 0x52455646) {
        local_99 = '\x01';
        iVar5 = (**(code **)(*(int *)in_ECX[0x11] + 0x24))();
        if (iVar5 != 0) {
          bVar13 = iVar5 == -0x5d7faec0;
LAB_0043879e:
          lVar15 = CONCAT44(local_bc[0],local_c4);
          if (!bVar13) goto LAB_004387de;
        }
      }
      else if (iVar5 == 0x4d4d4f43) {
        local_9b = '\x01';
        sVar3 = (**(code **)(*(int *)in_ECX[0x11] + 0x1c))();
        in_ECX[8] = (int)sVar3;
        iVar5 = (**(code **)(*(int *)in_ECX[0x11] + 0x24))();
        in_ECX[6] = iVar5;
        in_ECX[7] = iVar5 >> 0x1f;
        sVar3 = (**(code **)(*(int *)in_ECX[0x11] + 0x1c))();
        in_ECX[4] = (int)sVar3;
        in_ECX[0x14] = (uint)(in_ECX[8] * (int)sVar3) >> 3;
        (**(code **)(*(int *)in_ECX[0x11] + 0xc))(&local_40,10);
        lVar15 = CONCAT44(local_bc[0],local_c4);
        if ((((char)local_40 < '\0') ||
            (lVar15 = CONCAT44(local_bc[0],local_c4), (local_40 & 0xff) != 0x40)) ||
           (bVar1 = (byte)(local_40 >> 8), lVar15 = CONCAT44(local_bc[0],local_c4), 0x1c < bVar1))
        goto LAB_004387de;
        *(double *)(in_ECX + 2) =
             (double)(int)((local_3e >> 0x18 | (local_3e & 0xff0000) >> 8 | (local_3e & 0xff00) << 8
                           | local_3e << 0x18) >> (0x1e - bVar1 & 0x1f));
        if ((undefined4 *)0x12 < local_98) {
          iVar5 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
          lVar15 = CONCAT44(local_bc[0],local_c4);
          if ((iVar5 != 0x454e4f4e) && (iVar5 != 0x736f7774)) {
            if (iVar5 == 0x74776f73) {
              *(undefined1 *)(in_ECX + 0x18) = 1;
              goto LAB_004387a0;
            }
            if ((iVar5 != 0x32336c66) && (iVar5 != 0x32334c46)) {
              *(undefined8 *)(in_ECX + 2) = 0;
              goto LAB_004387de;
            }
            *(undefined1 *)(in_ECX + 0x18) = 0;
            *(undefined1 *)(in_ECX + 9) = 1;
            goto LAB_004387a0;
          }
        }
        *(undefined1 *)(in_ECX + 0x18) = 0;
      }
      else if (iVar5 == 0x444e5353) {
        local_9a = '\x01';
        iVar12 = (**(code **)(*(int *)in_ECX[0x11] + 0x24))();
        lVar15 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
        iVar5 = in_ECX[0x14];
        *(longlong *)(in_ECX + 0x16) = lVar15 + iVar12 + 4;
        if (iVar5 < 1) {
          stack0xffffff48 = 0;
          lVar15 = 0;
        }
        else {
          lVar15 = __alldiv(local_98,0,iVar5,iVar5 >> 0x1f);
          if (*(longlong *)(in_ECX + 6) <= lVar15) {
            in_ECX[6] = (int)*(longlong *)(in_ECX + 6);
            in_ECX[7] = in_ECX[7];
            goto LAB_004387a0;
          }
        }
        *(longlong *)(in_ECX + 6) = lVar15;
      }
      else if (iVar5 == 0x4b52414d) {
        uVar4 = (**(code **)(*(int *)in_ECX[0x11] + 0x1c))();
        FUN_0045c990("NumCuePoints");
        local_8 = CONCAT31(local_8._1_3_,1);
        local_a4 = (undefined4 *)(uint)uVar4;
        iVar5 = FUN_006104a0();
        FUN_004557e0(&local_15 + -iVar5);
        local_98 = in_ECX + 10;
        FUN_00631980(&local_d0,&local_cc);
        piVar9 = (int *)(local_cc + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        local_8 = local_8 & 0xffffff00;
        piVar9 = (int *)(local_d0 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        FUN_0045c990("NumCueLabels");
        local_8 = CONCAT31(local_8._1_3_,2);
        iVar5 = FUN_006104a0();
        FUN_004557e0(&local_15 + -iVar5);
        FUN_00631980(&local_d8,&local_d4);
        piVar9 = (int *)(local_d4 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        local_8 = local_8 & 0xffffff00;
        piVar9 = (int *)(local_d8 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar5 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar5 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        if (uVar4 != 0) {
          local_a0 = 0;
          do {
            local_c8 = (**(code **)(*(int *)in_ECX[0x11] + 0x1c))();
            local_c8 = local_c8 & 0xffff;
            local_a8 = (**(code **)(*(int *)in_ECX[0x11] + 0x24))();
            bVar1 = (**(code **)(*(int *)in_ECX[0x11] + 0x10))();
            puVar18 = local_b0;
            local_110 = (void *)0x0;
            local_10c = 0;
            local_8 = CONCAT31(local_8._1_3_,3);
            (**(code **)(*(int *)local_b0[0x11] + 0x50))(&local_110,bVar1);
            if ((bVar1 & 1) == 0) {
              (**(code **)(*(int *)puVar18[0x11] + 0x10))();
            }
            iVar5 = FUN_006104a0();
            FUN_004557e0(&local_15 + -iVar5);
            local_8._0_1_ = 4;
            FUN_00637690(&local_dc);
            local_8._0_1_ = 6;
            piVar9 = (int *)(local_dc + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            local_c8 = local_c8 & 0xffff;
            iVar5 = FUN_006104a0();
            FUN_004557e0(&local_15 + -iVar5);
            iVar5 = local_11c;
            piVar10 = &local_e0;
            local_8 = CONCAT31(local_8._1_3_,7);
            piVar9 = (int *)(local_11c + -8);
            stack0xffffff48 = CONCAT44(piVar9,local_bc[1]);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            uVar6 = FUN_006377c0(local_11c);
            FUN_00631980(uVar6,piVar10);
            piVar10 = (int *)(local_120 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar12 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar12 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            local_8._0_1_ = 6;
            piVar10 = (int *)(local_e0 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar12 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar12 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            iVar12 = FUN_006104a0();
            FUN_004557e0(&local_15 + -iVar12);
            local_8 = CONCAT31(local_8._1_3_,8);
            piVar10 = &local_e4;
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            uVar6 = FUN_006377c0(iVar5);
            FUN_00631980(uVar6,piVar10);
            piVar9 = (int *)(local_124 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            local_8._0_1_ = 6;
            piVar9 = (int *)(local_e4 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            iVar5 = FUN_006104a0();
            FUN_004557e0(&local_15 + -iVar5);
            local_8._0_1_ = 9;
            FUN_00637690(&local_e8);
            local_8._0_1_ = 0xb;
            piVar9 = (int *)(local_e8 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            iVar5 = FUN_006104a0();
            FUN_004557e0(&local_15 + -iVar5);
            piVar10 = &local_ec;
            local_8 = CONCAT31(local_8._1_3_,0xc);
            piVar9 = (int *)(local_148 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            uVar6 = FUN_006377c0(local_148);
            FUN_00631980(uVar6,piVar10);
            piVar10 = (int *)(local_144 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            local_8._0_1_ = 0xb;
            piVar10 = (int *)(local_ec + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            uVar6 = FUN_0062aa80(&local_140);
            local_8 = CONCAT31(local_8._1_3_,0xd);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            uVar7 = FUN_006377c0(local_148);
            FUN_00631980(uVar7,uVar6);
            piVar10 = (int *)(local_13c + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            piVar10 = (int *)(local_140 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            if (piStack_b4 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piStack_b4;
              *piStack_b4 = *piStack_b4 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piStack_b4);
              }
            }
            local_8 = local_8 & 0xffffff00;
            FID_conflict__free(local_110);
            local_a0 = local_a0 + 1;
            local_a4 = (undefined4 *)((int)local_a4 + -1);
            in_ECX = local_b0;
          } while (local_a4 != (undefined4 *)0x0);
          local_a4 = (undefined4 *)0x0;
        }
      }
      else if (iVar5 == 0x544d4f43) {
        uVar4 = (**(code **)(*(int *)in_ECX[0x11] + 0x1c))();
        FUN_0045c990("NumCueNotes");
        local_8._0_1_ = 0xe;
        local_98 = (undefined4 *)(uint)uVar4;
        iVar5 = FUN_006104a0();
        FUN_004557e0(&local_15 + -iVar5);
        local_a4 = in_ECX + 10;
        FUN_00631980(local_f0,local_f4);
        FUN_00637c10();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00637c10();
        if (uVar4 != 0) {
          local_a0 = 0;
          do {
            uVar6 = (**(code **)(*(int *)in_ECX[0x11] + 0x24))();
            stack0xffffff48 = CONCAT44(uVar6,local_bc[1]);
            local_a8 = (**(code **)(*(int *)in_ECX[0x11] + 0x1c))();
            local_a8 = local_a8 & 0xffff;
            uVar8 = (**(code **)(*(int *)in_ECX[0x11] + 0x1c))();
            local_118 = (void *)0x0;
            local_114 = 0;
            local_8._0_1_ = 0xf;
            (**(code **)(*(int *)in_ECX[0x11] + 0x50))(&local_118,(uVar8 & 1) + (uVar8 & 0xffff));
            iVar5 = FUN_006104a0();
            FUN_004557e0(&local_15 + -iVar5);
            local_8._0_1_ = 0x10;
            FUN_00637690(&local_100);
            local_8._0_1_ = 0x12;
            piVar9 = (int *)(local_100 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            iVar5 = FUN_006104a0();
            FUN_004557e0(&local_15 + -iVar5);
            iVar5 = local_128;
            piVar10 = &local_f8;
            local_8 = CONCAT31(local_8._1_3_,0x13);
            piVar9 = (int *)(local_128 + -8);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            uVar6 = FUN_006377c0(local_128);
            FUN_00631980(uVar6,piVar10);
            piVar10 = (int *)(local_12c + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar12 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar12 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            local_8._0_1_ = 0x12;
            piVar10 = (int *)(local_f8 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar12 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar12 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            iVar12 = FUN_006104a0();
            FUN_004557e0(&local_15 + -iVar12);
            local_8 = CONCAT31(local_8._1_3_,0x14);
            piVar10 = local_108;
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            uVar6 = FUN_006377c0(iVar5);
            FUN_00631980(uVar6,piVar10);
            piVar10 = (int *)(local_130 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar12 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar12 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            local_8._0_1_ = 0x12;
            piVar10 = (int *)(local_108[0] + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar12 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar12 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            uVar6 = FUN_0062aa80(&local_138);
            local_8 = CONCAT31(local_8._1_3_,0x15);
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              *piVar9 = *piVar9 + 1;
              UNLOCK();
            }
            uVar7 = FUN_006377c0(iVar5);
            FUN_00631980(uVar7,uVar6);
            piVar10 = (int *)(local_134 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            piVar10 = (int *)(local_138 + -8);
            if (piVar10 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar10);
              }
            }
            if (piVar9 != &DAT_00bfe124) {
              LOCK();
              iVar5 = *piVar9;
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (iVar5 == 0) {
                FID_conflict__free(piVar9);
              }
            }
            local_8 = local_8 & 0xffffff00;
            FID_conflict__free(local_118);
            local_a0 = local_a0 + 1;
            local_98 = (undefined4 *)((int)local_98 + -1);
            in_ECX = local_b0;
          } while (local_98 != (undefined4 *)0x0);
          local_98 = (undefined4 *)0x0;
        }
      }
      else if (iVar5 == 0x54534e49) {
        local_8._0_1_ = 0x16;
        uVar8 = (int)local_98 + 1;
        FID_conflict__free((void *)0x0);
        if (uVar8 < 0x14) {
          uVar8 = 0x14;
        }
        _Memory = (void *)FUN_004c5556(uVar8,1);
        stack0xffffff48 = CONCAT44(_Memory,local_bc[1]);
        (**(code **)(*(int *)in_ECX[0x11] + 0xc))(_Memory,local_98);
        FUN_004367d0(in_ECX + 10);
        local_8 = (uint)local_8._1_3_ << 8;
        FID_conflict__free(_Memory);
      }
      else if (iVar5 == 0x63736162) {
        puVar18 = in_ECX + 10;
        FUN_004373a0(in_ECX[0x11]);
        FUN_00437570(puVar18);
      }
      else {
        if (iVar5 != 0x65746163) {
          if (((local_99 == '\0') || (local_9a == '\0')) || (local_9b == '\0')) {
            lVar17 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
            lVar15 = CONCAT44(local_bc[0],local_c4);
            if (lVar17 <= CONCAT44(local_bc[0],local_c4)) {
              cVar2 = (**(code **)(*(int *)in_ECX[0x11] + 8))();
              bVar13 = cVar2 == '\0';
              goto LAB_0043879e;
            }
          }
          goto LAB_004387de;
        }
        FUN_0045c990("apple tag");
        local_8._0_1_ = 0x17;
        uVar6 = FUN_00600ca0(local_98);
        FUN_00631980(local_fc,uVar6);
        FUN_00637c10();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00637c10();
      }
LAB_004387a0:
      (**(code **)(*(int *)in_ECX[0x11] + 0x58))
                ((local_c4 & 1) + local_c4,local_bc[0] + (uint)CARRY4(local_c4 & 1,local_c4));
      uVar16 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
      iVar5 = (int)((ulonglong)uVar16 >> 0x20);
      uVar8 = (uint)uVar16;
      bVar14 = SBORROW4(iVar5,local_ac);
      iVar5 = iVar5 - local_ac;
      bVar13 = iVar5 == 0;
      goto LAB_00437af2;
    }
  }
LAB_004387de:
  local_bc[0] = (int)((ulonglong)lVar15 >> 0x20);
  local_c4 = (uint)lVar15;
  if (0 < (int)in_ECX[0xc]) {
    FUN_0045c990(&DAT_00c14708);
    local_8 = CONCAT31(local_8._1_3_,0x18);
    FUN_0045c990("MetaDataSource");
    FUN_00631980(&local_c0,local_bc);
    piVar9 = (int *)(local_c0 - 8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 0) {
        FID_conflict__free(piVar9);
      }
    }
    piVar9 = (int *)(local_bc[0] + -8);
    lVar15 = CONCAT44(local_bc[0],local_c4);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      lVar15 = CONCAT44(local_bc[0],local_c4);
      if (iVar5 == 0) {
        FID_conflict__free(piVar9);
        lVar15 = CONCAT44(local_bc[0],local_c4);
      }
    }
  }
  local_bc[0] = (int)((ulonglong)lVar15 >> 0x20);
  local_c4 = (uint)lVar15;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

