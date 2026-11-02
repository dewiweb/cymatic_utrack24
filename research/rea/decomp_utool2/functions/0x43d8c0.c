// rea decompile_all
// name: FUN_0043d8c0
// address: 0x43d8c0
// body: available
// range: 0x43d8c0-0x43e97d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0043e565) */
/* WARNING: Removing unreachable block (ram,0x0043dad8) */
/* WARNING: Removing unreachable block (ram,0x0043dfd6) */
/* WARNING: Removing unreachable block (ram,0x0043e671) */
/* WARNING: Removing unreachable block (ram,0x0043e6ef) */

void FUN_0043d8c0(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  void *_Memory;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 *in_ECX;
  int *piVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  int *piVar12;
  undefined1 *puVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined1 local_110 [16];
  undefined1 local_100 [40];
  undefined1 local_d8 [4];
  void *local_d4;
  undefined4 local_d0;
  void *local_cc;
  undefined4 local_c8;
  void *local_c4;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  undefined1 local_b4 [4];
  uint local_b0;
  int local_ac;
  ulonglong local_a8 [2];
  int local_98;
  int local_94;
  int local_90;
  undefined8 local_8c;
  uint local_84;
  undefined8 local_80;
  uint local_78;
  int local_74;
  undefined1 local_70 [4];
  undefined4 *local_6c;
  uint local_68;
  uint local_64;
  uint *local_60;
  int local_5c;
  undefined1 *local_58;
  int local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 local_4c [39];
  undefined1 local_25;
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  uint local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_006fea6b;
  local_1c = ExceptionList;
  local_24 = DAT_00c76070 ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  local_6c = in_ECX;
  FUN_0045c990("WAV file",local_24);
  FUN_00602db0(param_1,&local_74);
  local_14 = 0;
  piVar11 = (int *)(local_74 + -8);
  if (piVar11 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar11);
    }
  }
  *in_ECX = juce::WavAudioFormatReader::vftable;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x1d) = 0;
  local_a8[0] = 0;
  local_98 = 0;
  local_94 = 0;
  local_74 = 0;
  iVar3 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
  if (iVar3 == 0x34364652) {
    (**(code **)(*(int *)in_ECX[0x11] + 0x5c))(4,0);
    *(undefined1 *)(in_ECX + 0x1d) = 1;
    local_8c = local_a8[0];
  }
  else {
    if (iVar3 != 0x46464952) goto LAB_0043e95c;
    uVar4 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
    lVar17 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
    local_8c = lVar17 + (ulonglong)uVar4;
  }
  uVar16 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
  local_90 = (int)((ulonglong)uVar16 >> 0x20);
  local_64 = (uint)uVar16;
  iVar3 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
  if (iVar3 == 0x45564157) {
    if (*(char *)(in_ECX + 0x1d) != '\0') {
      iVar3 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
      if (iVar3 == 0x34367364) {
        local_68 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
        if (local_68 < 0x1c) goto LAB_0043e95c;
        uVar16 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
        uVar4 = local_68 & 1;
        uVar14 = (uint)uVar16 + uVar4;
        bVar15 = CARRY4(uVar14,local_68);
        iVar3 = uVar14 + local_68;
        lVar17 = (**(code **)(*(int *)local_6c[0x11] + 0x28))();
        local_8c = lVar17 + CONCAT44(local_90,local_64);
        uVar18 = (**(code **)(*(int *)local_6c[0x11] + 0x28))();
        *(undefined8 *)(local_6c + 0x1a) = uVar18;
        (**(code **)(*(int *)local_6c[0x11] + 0x58))
                  (iVar3,(int)((ulonglong)uVar16 >> 0x20) + (uint)CARRY4((uint)uVar16,uVar4) +
                         (uint)bVar15);
        in_ECX = local_6c;
      }
    }
    uVar19 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
    if (uVar19 < local_8c) {
LAB_0043dae1:
      cVar1 = (**(code **)(*(int *)in_ECX[0x11] + 8))();
      if (cVar1 != '\0') goto LAB_0043e6f8;
      local_64 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
      puVar5 = (uint *)(**(code **)(*(int *)in_ECX[0x11] + 0x20))();
      local_60 = puVar5;
      uVar16 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
      uVar4 = (uint)uVar16 + ((uint)puVar5 & 1);
      local_58 = (undefined1 *)(uVar4 + (int)puVar5);
      local_5c = (int)((ulonglong)uVar16 >> 0x20) + (uint)CARRY4((uint)uVar16,(uint)puVar5 & 1) +
                 (uint)CARRY4(uVar4,(uint)puVar5);
      if (local_64 == 0x20746d66) {
        local_84 = (**(code **)(*(int *)in_ECX[0x11] + 0x18))();
        local_84 = local_84 & 0xffff;
        local_60 = in_ECX + 8;
        sVar2 = (**(code **)(*(int *)in_ECX[0x11] + 0x18))();
        *local_60 = (int)sVar2;
        iVar3 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
        *(double *)(in_ECX + 2) = (double)iVar3;
        local_64 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
        (**(code **)(*(int *)in_ECX[0x11] + 0x5c))(2,0);
        sVar2 = (**(code **)(*(int *)in_ECX[0x11] + 0x18))();
        uVar4 = (uint)sVar2;
        in_ECX[4] = uVar4;
        if (uVar4 < 0x41) {
          in_ECX[0x1c] = *local_60 * uVar4 >> 3;
        }
        else {
          in_ECX[0x1c] = (int)local_64 / (int)*(double *)(in_ECX + 2);
          in_ECX[4] = (uint)((int)local_64 / (int)*(double *)(in_ECX + 2) << 3) / *local_60;
        }
        sVar2 = (short)local_84;
        if (sVar2 == 3) {
          *(undefined1 *)(in_ECX + 9) = 1;
        }
        else if (sVar2 == -2) {
          if (puVar5 < (uint *)0x28) {
            in_ECX[0x1c] = 0;
          }
          else {
            (**(code **)(*(int *)in_ECX[0x11] + 0x5c))(4,0);
            FUN_0045c990("ChannelMask");
            local_14 = CONCAT31(local_14._1_3_,1);
            iVar3 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
            if (iVar3 < 0) {
              iVar3 = FUN_006104a0();
              *(undefined1 *)(iVar3 + -1) = 0x2d;
              iVar3 = iVar3 + -1;
            }
            else {
              iVar3 = FUN_006104a0();
            }
            FUN_004557e0(&local_25 + -iVar3);
            FUN_00631980(&local_90,&local_ac);
            piVar11 = (int *)(local_ac + -8);
            if (piVar11 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar11);
              }
            }
            local_14 = local_14 & 0xffffff00;
            piVar11 = (int *)(local_90 + -8);
            if (piVar11 != &DAT_00bfe124) {
              LOCK();
              iVar3 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar3 == 0) {
                FID_conflict__free(piVar11);
              }
            }
            local_54 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
            local_50 = (**(code **)(*(int *)in_ECX[0x11] + 0x18))();
            local_4e = (**(code **)(*(int *)in_ECX[0x11] + 0x18))();
            (**(code **)(*(int *)in_ECX[0x11] + 0xc))(local_4c,8);
            piVar11 = &local_54;
            piVar12 = &DAT_00bfd918;
            uVar4 = 0xc;
            do {
              if (*piVar11 != *piVar12) {
                bVar15 = false;
                goto LAB_0043dd27;
              }
              piVar11 = piVar11 + 1;
              piVar12 = piVar12 + 1;
              bVar15 = 3 < uVar4;
              uVar4 = uVar4 - 4;
            } while (bVar15);
            bVar15 = true;
LAB_0043dd27:
            if (bVar15) {
              *(undefined1 *)(in_ECX + 9) = 1;
            }
            else {
              piVar11 = &local_54;
              piVar12 = &DAT_00bfd928;
              uVar4 = 0xc;
              do {
                if (*piVar11 != *piVar12) {
                  bVar15 = false;
                  goto LAB_0043dd58;
                }
                piVar11 = piVar11 + 1;
                piVar12 = piVar12 + 1;
                bVar15 = 3 < uVar4;
                uVar4 = uVar4 - 4;
              } while (bVar15);
              bVar15 = true;
LAB_0043dd58:
              if (!bVar15) {
                cVar1 = FUN_0043d880(&DAT_00bfd908);
                if (cVar1 != '\0') {
                  in_ECX[0x1c] = 0;
                }
              }
            }
          }
        }
        else if (sVar2 != 1) {
          in_ECX[0x1c] = 0;
        }
      }
      else if (local_64 == 0x61746164) {
        if (*(char *)(in_ECX + 0x1d) == '\0') {
          in_ECX[0x1a] = puVar5;
          in_ECX[0x1b] = 0;
        }
        uVar16 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
        iVar3 = in_ECX[0x1c];
        *(undefined8 *)(in_ECX + 0x18) = uVar16;
        if (iVar3 < 1) {
          local_80 = 0;
          in_ECX[6] = 0;
          in_ECX[7] = 0;
        }
        else {
          uVar16 = __alldiv(in_ECX[0x1a],in_ECX[0x1b],iVar3,iVar3 >> 0x1f);
          *(undefined8 *)(in_ECX + 6) = uVar16;
        }
      }
      else {
        if (local_64 == 0x74786562) {
          uVar16 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
          *(undefined8 *)(in_ECX + 0x14) = uVar16;
          in_ECX[0x16] = puVar5;
          in_ECX[0x17] = 0;
          local_14 = CONCAT31(local_14._1_3_,2);
          puVar13 = (undefined1 *)((int)puVar5 + 1);
          FID_conflict__free((void *)0x0);
          if (puVar13 < (undefined1 *)0x25b) {
            puVar13 = (undefined1 *)0x25b;
          }
          _Memory = (void *)FUN_004c5556(puVar13,1);
          local_80 = CONCAT44(_Memory,(undefined4)local_80);
          (**(code **)(*(int *)in_ECX[0x11] + 0xc))(_Memory,local_60);
          FUN_0043b370(in_ECX + 10,local_60);
LAB_0043e6bd:
          local_14 = local_14 & 0xffffff00;
        }
        else {
          if (local_64 == 0x6c706d73) {
            local_14 = CONCAT31(local_14._1_3_,3);
            puVar13 = (undefined1 *)((int)puVar5 + 1);
            FID_conflict__free((void *)0x0);
            if (puVar13 < (undefined1 *)0x3c) {
              puVar13 = (undefined1 *)0x3c;
            }
            _Memory = (void *)FUN_004c5556(puVar13,1);
            local_80 = CONCAT44(_Memory,(undefined4)local_80);
            (**(code **)(*(int *)in_ECX[0x11] + 0xc))(_Memory,local_60);
            FUN_0043bbb0(in_ECX + 10,local_60);
            goto LAB_0043e6bd;
          }
          if ((local_64 == 0x74736e69) || (local_64 == 0x54534e49)) {
            local_14 = CONCAT31(local_14._1_3_,4);
            puVar13 = (undefined1 *)((int)puVar5 + 1);
            FID_conflict__free((void *)0x0);
            if (puVar13 < (undefined1 *)0x7) {
              puVar13 = (undefined1 *)0x7;
            }
            _Memory = (void *)FUN_004c5556(puVar13,1);
            local_80 = CONCAT44(_Memory,(undefined4)local_80);
            (**(code **)(*(int *)in_ECX[0x11] + 0xc))(_Memory,local_60);
            FUN_0043c180(in_ECX + 10);
            goto LAB_0043e6bd;
          }
          if (local_64 == 0x20657563) {
            local_14 = CONCAT31(local_14._1_3_,5);
            puVar13 = (undefined1 *)((int)puVar5 + 1);
            FID_conflict__free((void *)0x0);
            if (puVar13 < (undefined1 *)0x1c) {
              puVar13 = (undefined1 *)0x1c;
            }
            _Memory = (void *)FUN_004c5556(puVar13,1);
            local_80 = CONCAT44(_Memory,(undefined4)local_80);
            (**(code **)(*(int *)in_ECX[0x11] + 0xc))(_Memory,local_60);
            FUN_0043c4d0(in_ECX + 10,local_60);
            goto LAB_0043e6bd;
          }
          if (local_64 != 0x6c6d7861) {
            if (local_64 == 0x5453494c) {
              iVar3 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
              if ((iVar3 == 0x6f666e69) || (iVar3 == 0x4f464e49)) {
                FUN_005d0340(local_58,local_5c);
              }
              else if (iVar3 == 0x6c746461) {
                lVar17 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
                if (lVar17 < CONCAT44(local_5c,local_58)) {
                  do {
                    iVar6 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
                    local_78 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
                    lVar17 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
                    iVar3 = local_74;
                    lVar17 = lVar17 + (ulonglong)((local_78 & 1) + local_78);
                    local_84 = (uint)lVar17;
                    local_64 = (uint)((ulonglong)lVar17 >> 0x20);
                    if ((iVar6 == 0x6c62616c) || (iVar6 == 0x65746f6e)) {
                      local_60 = (uint *)&DAT_00bfe12c;
                      local_14._0_1_ = 8;
                      if (iVar6 == 0x6c62616c) {
                        FUN_00621830("CueLabel");
                        iVar3 = local_94;
                        FUN_0045d120();
                        lVar17 = CONCAT44(local_64,local_84);
                        local_94 = iVar3 + 1;
                      }
                      else if (iVar6 == 0x65746f6e) {
                        FUN_00621830("CueNote");
                        iVar3 = local_98;
                        FUN_0045d120();
                        lVar17 = CONCAT44(local_64,local_84);
                        local_98 = iVar3 + 1;
                      }
                      local_64 = (uint)((ulonglong)lVar17 >> 0x20);
                      local_84 = (uint)lVar17;
                      uVar7 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
                      local_c4 = (void *)0x0;
                      local_c0 = 0;
                      local_14._0_1_ = 9;
                      (**(code **)(*(int *)local_6c[0x11] + 0x50))(&local_c4,local_78 - 4);
                      uVar8 = FUN_0062d290(uVar7);
                      local_14._0_1_ = 10;
                      uVar7 = extraout_ECX_07;
                      FUN_00637c50(&local_60);
                      uVar7 = FUN_006377c0(uVar7);
                      in_ECX = local_6c;
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      local_14._0_1_ = 9;
                      FUN_00637c10();
                      uVar8 = FUN_0062aa80(local_110);
                      local_14._0_1_ = 0xb;
                      uVar7 = extraout_ECX_08;
                      FUN_00637c50(&local_60);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      FUN_00637c10();
                      FID_conflict__free(local_c4);
                      local_14 = (uint)local_14._1_3_ << 8;
                      FUN_00637c10();
                      lVar17 = CONCAT44(local_64,local_84);
                    }
                    else if (iVar6 == 0x7478746c) {
                      uVar7 = FUN_00637c90(local_74);
                      local_14._0_1_ = 0xc;
                      FUN_00637690(uVar7);
                      local_74 = iVar3 + 1;
                      local_14._0_1_ = 0xe;
                      FUN_00637c10();
                      uVar7 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
                      uVar8 = (**(code **)(*(int *)in_ECX[0x11] + 0x20))();
                      local_60 = (uint *)(**(code **)(*(int *)local_6c[0x11] + 0x20))();
                      local_b0 = (**(code **)(*(int *)local_6c[0x11] + 0x20))();
                      local_b0 = local_b0 & 0xffff;
                      local_bc = (**(code **)(*(int *)local_6c[0x11] + 0x20))();
                      local_bc = local_bc & 0xffff;
                      local_b8 = (**(code **)(*(int *)local_6c[0x11] + 0x20))();
                      local_b8 = local_b8 & 0xffff;
                      uVar9 = (**(code **)(*(int *)local_6c[0x11] + 0x20))();
                      local_80 = CONCAT44(uVar9,(undefined4)local_80) & 0xffffffffffff;
                      local_d4 = (void *)0x0;
                      local_d0 = 0;
                      local_14._0_1_ = 0xf;
                      (**(code **)(*(int *)local_6c[0x11] + 0x50))(&local_d4,local_78 - 0x14);
                      uVar9 = FUN_0062d290(uVar7);
                      local_14._0_1_ = 0x10;
                      uVar7 = extraout_ECX;
                      FUN_00637c50(local_70);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar9);
                      FUN_00637c10();
                      local_14._0_1_ = 0xf;
                      FUN_00637c10();
                      uVar8 = FUN_0062d290(uVar8);
                      local_14._0_1_ = 0x11;
                      uVar7 = extraout_ECX_00;
                      FUN_00637c50(local_70);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      local_14._0_1_ = 0xf;
                      FUN_00637c10();
                      uVar8 = FUN_0062d290(local_60);
                      local_14._0_1_ = 0x12;
                      uVar7 = extraout_ECX_01;
                      FUN_00637c50(local_70);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      local_14._0_1_ = 0xf;
                      FUN_00637c10();
                      uVar8 = FUN_0062b480(local_b0);
                      local_14._0_1_ = 0x13;
                      uVar7 = extraout_ECX_02;
                      FUN_00637c50(local_70);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      local_14._0_1_ = 0xf;
                      FUN_00637c10();
                      uVar8 = FUN_0062b480(local_bc);
                      local_14._0_1_ = 0x14;
                      uVar7 = extraout_ECX_03;
                      FUN_00637c50(local_70);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      local_14._0_1_ = 0xf;
                      FUN_00637c10();
                      uVar8 = FUN_0062b480(local_b8);
                      local_14._0_1_ = 0x15;
                      uVar7 = extraout_ECX_04;
                      FUN_00637c50(local_70);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      local_14._0_1_ = 0xf;
                      FUN_00637c10();
                      uVar8 = FUN_0062b480(local_80._4_4_);
                      local_14._0_1_ = 0x16;
                      uVar7 = extraout_ECX_05;
                      FUN_00637c50(local_70);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      local_14._0_1_ = 0xf;
                      FUN_00637c10();
                      uVar8 = FUN_0062aa80(local_100);
                      local_14._0_1_ = 0x17;
                      uVar7 = extraout_ECX_06;
                      FUN_00637c50(local_70);
                      uVar7 = FUN_006377c0(uVar7);
                      FUN_00631980(uVar7,uVar8);
                      FUN_00637c10();
                      FUN_00637c10();
                      FID_conflict__free(local_d4);
                      local_14 = (uint)local_14._1_3_ << 8;
                      FUN_00637c10();
                      lVar17 = CONCAT44(local_64,local_84);
                      in_ECX = local_6c;
                    }
                    local_64 = (uint)((ulonglong)lVar17 >> 0x20);
                    local_84 = (uint)lVar17;
                    (**(code **)(*(int *)in_ECX[0x11] + 0x58))(lVar17);
                    lVar17 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
                  } while (lVar17 < CONCAT44(local_5c,local_58));
                }
              }
            }
            else {
              if (local_64 != 0x64696361) {
                if (local_64 == 0x6e6b7254) {
                  local_a8[0] = 0;
                  local_14._0_1_ = 0x18;
                  (**(code **)(*(int *)in_ECX[0x11] + 0x50))(local_a8,puVar5);
                  FUN_0045c990("tracktion loop info");
                  local_14._0_1_ = 0x19;
                  uVar7 = FUN_0062aa80(local_b4);
                  FUN_00631980(&local_68,uVar7);
                  FUN_00637c10();
                  FUN_00637c10();
                  local_14 = (uint)local_14._1_3_ << 8;
                  _Memory = (void *)local_a8[0];
                  goto LAB_0043e6c2;
                }
                lVar17 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
                if (lVar17 < CONCAT44(local_5c,local_58)) goto LAB_0043e6d0;
                goto LAB_0043e6f8;
              }
              local_148 = ZEXT816(0);
              puVar10 = (uint *)0x18;
              if (puVar5 < (uint *)0x18) {
                puVar10 = puVar5;
              }
              local_138 = 0;
              (**(code **)(*(int *)in_ECX[0x11] + 0xc))(local_148,puVar10);
              FUN_0043d2f0(in_ECX + 10);
            }
            goto LAB_0043e6d0;
          }
          local_cc = (void *)0x0;
          local_c8 = 0;
          local_14._0_1_ = 6;
          (**(code **)(*(int *)in_ECX[0x11] + 0x50))(&local_cc,puVar5);
          FUN_0062aa80(local_d8);
          local_14._0_1_ = 7;
          FUN_005cff40();
          FUN_00637c10();
          local_14 = (uint)local_14._1_3_ << 8;
          _Memory = local_cc;
        }
LAB_0043e6c2:
        FID_conflict__free(_Memory);
      }
LAB_0043e6d0:
      (**(code **)(*(int *)in_ECX[0x11] + 0x58))(local_58,local_5c);
      uVar19 = (**(code **)(*(int *)in_ECX[0x11] + 0x54))();
      if (local_8c <= uVar19) goto LAB_0043e6f8;
      goto LAB_0043dae1;
    }
  }
  goto LAB_0043e8d2;
LAB_0043e6f8:
  if (0 < local_94) {
    FUN_0045c990("NumCueLabels");
    local_14 = CONCAT31(local_14._1_3_,0x1a);
    iVar3 = FUN_006104a0();
    FUN_004557e0(&local_25 + -iVar3);
    FUN_00631980(&local_64,&local_68);
    piVar11 = (int *)(local_68 - 8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    local_14 = local_14 & 0xffffff00;
    piVar11 = (int *)(local_64 - 8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar11);
      }
    }
  }
  if (0 < local_98) {
    FUN_0045c990("NumCueNotes");
    local_14 = CONCAT31(local_14._1_3_,0x1b);
    iVar3 = FUN_006104a0();
    FUN_004557e0(&local_25 + -iVar3);
    FUN_00631980(&local_64,&local_68);
    piVar11 = (int *)(local_68 - 8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    local_14 = local_14 & 0xffffff00;
    piVar11 = (int *)(local_64 - 8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar11);
      }
    }
  }
  if (0 < local_74) {
    FUN_0045c990("NumCueRegions");
    local_14 = CONCAT31(local_14._1_3_,0x1c);
    iVar3 = FUN_006104a0();
    FUN_004557e0(&local_25 + -iVar3);
    FUN_00631980(&local_64,&local_68);
    piVar11 = (int *)(local_68 - 8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    local_14 = local_14 & 0xffffff00;
    piVar11 = (int *)(local_64 - 8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar11);
      }
    }
  }
LAB_0043e8d2:
  if (0 < (int)in_ECX[0xc]) {
    FUN_0045c990(&DAT_00c148b4);
    local_14 = CONCAT31(local_14._1_3_,0x1d);
    FUN_0045c990("MetaDataSource");
    FUN_00631980(&local_68,&local_64);
    piVar11 = (int *)(local_68 - 8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar11);
      }
    }
    piVar11 = (int *)(local_64 - 8);
    if (piVar11 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar11);
      }
    }
  }
LAB_0043e95c:
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

