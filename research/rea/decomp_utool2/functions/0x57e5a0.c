// rea decompile_all
// name: FUN_0057e5a0
// address: 0x57e5a0
// body: available
// range: 0x57e5a0-0x57ee41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0057ed78) */
/* WARNING: Removing unreachable block (ram,0x0057ed83) */

undefined1 FUN_0057e5a0(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int iVar11;
  undefined4 *puVar12;
  int *in_EDX;
  byte *pbVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  float10 fVar18;
  undefined4 *in_XMM0_Da;
  float fVar19;
  undefined4 **ppuVar20;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  float local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  int *local_2c;
  int local_28;
  byte *local_24;
  undefined4 *local_20;
  byte *local_1c;
  undefined4 *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007125ab;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4c = (undefined4 *)0x0;
  local_11 = 0;
  local_2c = in_EDX;
  if (in_EDX[7] == 0) {
    local_44 = (undefined4 *)((float)param_4 * 0.8);
    operator_new(0x28);
    in_XMM0_Da = local_44;
    local_34 = (undefined4 *)FUN_00468a40(0);
    if (local_34 != (undefined4 *)0x0) {
      LOCK();
      local_34[1] = local_34[1] + 1;
      UNLOCK();
    }
    ppuVar10 = &local_34;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    local_30 = *(undefined4 **)(in_EDX[5] + 8);
    if (local_30 != (undefined4 *)0x0) {
      LOCK();
      local_30[1] = local_30[1] + 1;
      UNLOCK();
    }
    ppuVar10 = &local_30;
    bVar5 = true;
    bVar4 = false;
  }
  local_18 = *ppuVar10;
  *ppuVar10 = (undefined4 *)0x0;
  local_8 = 1;
  if ((bVar4) && (local_34 != (undefined4 *)0x0)) {
    LOCK();
    piVar7 = local_34 + 1;
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*local_34)(1,uVar6);
    }
  }
  if ((bVar5) && (local_30 != (undefined4 *)0x0)) {
    LOCK();
    piVar7 = local_30 + 1;
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*local_30)(1);
    }
  }
  local_28 = *in_EDX;
  piVar7 = (int *)(local_28 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  local_8._0_1_ = 3;
  in_EDX[3] = 0;
  FUN_006831f0(&local_28);
  local_54 = (float)param_3;
  if (local_54 < (float)in_XMM0_Da) {
    local_11 = 1;
    FUN_0045c990(&DAT_00740c5c);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_006831f0(&local_34);
    piVar7 = local_34 + -2;
    local_3c = in_XMM0_Da;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    local_30 = (undefined4 *)0x0;
    local_38 = (float)(int)((((float)param_3 - (float)local_3c) - 8.0) * 0.5);
    iVar8 = FUN_0044ec90();
    puVar17 = (undefined4 *)0x1;
    local_1c = &DAT_00bfe12c;
    local_20 = (undefined4 *)0x1;
    iVar8 = iVar8 + -1;
    local_8 = CONCAT31(local_8._1_3_,5);
    fVar19 = 0.0;
    puVar9 = (undefined4 *)0x0;
    if (-1 < iVar8) {
LAB_0057e7d0:
      puVar17 = (undefined4 *)((iVar8 + (int)puVar9) / 2);
      local_20 = puVar17;
      puVar9 = (undefined4 *)FUN_006379a0(&local_3c,0,puVar17);
      pbVar13 = (byte *)*puVar9;
      *puVar9 = local_1c;
      piVar7 = local_3c + -2;
      local_1c = pbVar13;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar16 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar16 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (local_18[2] == 0) {
        ppuVar10 = &local_18;
        ppuVar20 = &local_48;
        FUN_004681b0(ppuVar20,ppuVar10);
        puVar9 = (undefined4 *)FUN_004682f0(ppuVar20,ppuVar10);
        uVar3 = local_18[2];
        local_18[2] = *puVar9;
        *puVar9 = uVar3;
        if (local_48 != (undefined4 *)0x0) {
          LOCK();
          piVar7 = local_48 + 1;
          iVar16 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)*local_48)(1);
          }
        }
      }
      fVar18 = (float10)(**(code **)(*(int *)local_18[2] + 0x14))(&local_1c);
      local_34 = (undefined4 *)(float)fVar18;
      puVar9 = local_34;
      if ((float)local_18[7] != 0.0) {
        iVar16 = 0;
        pbVar13 = local_1c;
LAB_0057e892:
        do {
          bVar2 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          if ((char)bVar2 < '\0') {
            if ((*pbVar13 & 0xc0) == 0x80) {
              do {
                pbVar1 = pbVar13 + 1;
                pbVar13 = pbVar13 + 1;
              } while ((*pbVar1 & 0xc0) == 0x80);
              iVar16 = iVar16 + 1;
              goto LAB_0057e892;
            }
          }
          else if (bVar2 == 0) goto LAB_0057e8b6;
          iVar16 = iVar16 + 1;
        } while( true );
      }
      goto LAB_0057e8cd;
    }
LAB_0057e909:
    local_30 = (undefined4 *)(float)(int)local_38;
    if ((float)local_30 < fVar19) {
      puVar17 = (undefined4 *)((int)puVar17 + -1);
      local_20 = puVar17;
      puVar9 = (undefined4 *)FUN_006379a0(&local_48,0,puVar17);
      pbVar13 = (byte *)*puVar9;
      *puVar9 = local_1c;
      piVar7 = local_48 + -2;
      local_1c = pbVar13;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_006831f0(&local_1c);
    }
    puVar12 = local_30;
    local_3c = puVar17;
    local_34 = puVar17;
    iVar8 = FUN_0044ec90();
    local_24 = &DAT_00bfe12c;
    iVar8 = iVar8 + -1;
    local_8 = CONCAT31(local_8._1_3_,6);
    puVar9 = extraout_ECX;
    puVar14 = puVar17;
    if ((int)puVar17 <= iVar8) {
LAB_0057e995:
      puVar17 = (undefined4 *)((iVar8 + (int)puVar14) / 2);
      local_20 = puVar17;
      puVar9 = (undefined4 *)FUN_00637a90(&local_48,puVar17);
      pbVar13 = (byte *)*puVar9;
      *puVar9 = local_24;
      piVar7 = local_48 + -2;
      local_24 = pbVar13;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar16 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar16 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (local_18[2] == 0) {
        ppuVar10 = &local_18;
        ppuVar20 = &local_4c;
        FUN_004681b0(ppuVar20,ppuVar10);
        puVar9 = (undefined4 *)FUN_004682f0(ppuVar20,ppuVar10);
        uVar3 = local_18[2];
        local_18[2] = *puVar9;
        *puVar9 = uVar3;
        if (local_4c != (undefined4 *)0x0) {
          LOCK();
          piVar7 = local_4c + 1;
          iVar16 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)*local_4c)(1);
          }
        }
      }
      fVar18 = (float10)(**(code **)(*(int *)local_18[2] + 0x14))(&local_24);
      local_38 = (float)fVar18;
      fVar19 = local_38;
      if ((float)local_18[7] != 0.0) {
        iVar16 = 0;
        pbVar13 = local_24;
LAB_0057ea55:
        do {
          bVar2 = *pbVar13;
          pbVar13 = pbVar13 + 1;
          if ((char)bVar2 < '\0') {
            if ((*pbVar13 & 0xc0) == 0x80) {
              do {
                pbVar1 = pbVar13 + 1;
                pbVar13 = pbVar13 + 1;
              } while ((*pbVar1 & 0xc0) == 0x80);
              iVar16 = iVar16 + 1;
              goto LAB_0057ea55;
            }
          }
          else if (bVar2 == 0) goto LAB_0057ea79;
          iVar16 = iVar16 + 1;
        } while( true );
      }
      goto LAB_0057ea90;
    }
LAB_0057eac7:
    if ((float)puVar12 < fVar19) {
      puVar17 = (undefined4 *)((int)puVar17 + 1);
      local_20 = puVar17;
      puVar9 = (undefined4 *)FUN_00637a90(&local_4c,puVar17);
      pbVar13 = (byte *)*puVar9;
      *puVar9 = local_24;
      piVar7 = local_4c + -2;
      local_24 = pbVar13;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar8 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar8 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      FUN_006831f0(&local_24);
      puVar9 = extraout_ECX_00;
    }
    pbVar13 = local_1c + -8;
    if (pbVar13 != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)pbVar13 = *(int *)pbVar13 + 1;
      UNLOCK();
    }
    FUN_006377c0(local_1c);
    FUN_00637730(puVar9);
    local_8._0_1_ = 9;
    FUN_00644d60(&local_44);
    local_8._0_1_ = 10;
    local_3c = (undefined4 *)((int)puVar17 + (-3 - (int)local_34));
    FUN_00681dd0(&local_18);
    iVar8 = 0;
    if (0 < local_2c[7]) {
      local_30 = (undefined4 *)0x0;
      do {
        piVar7 = (int *)(local_2c[5] + (int)local_30);
        puVar9 = (undefined4 *)piVar7[2];
        iVar16 = *piVar7;
        iVar11 = piVar7[1];
        if (puVar9 != (undefined4 *)0x0) {
          LOCK();
          puVar9[1] = puVar9[1] + 1;
          UNLOCK();
        }
        if ((int)local_34 < iVar11) {
          iVar11 = (int)local_34 + 3;
          if (iVar11 < iVar16) {
            iVar16 = iVar11;
          }
          iVar15 = iVar16;
          if (iVar16 < iVar11) {
            iVar15 = iVar11;
          }
          FUN_00680760(iVar16,iVar15,piVar7[3]);
          if (puVar9 != (undefined4 *)0x0) {
            LOCK();
            piVar7 = puVar9 + 1;
            iVar16 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar16 == 1) {
              (**(code **)*puVar9)(1);
            }
          }
          break;
        }
        FUN_00680760(iVar16,iVar11,piVar7[3]);
        iVar8 = iVar8 + 1;
        local_30 = local_30 + 4;
        if (puVar9 != (undefined4 *)0x0) {
          LOCK();
          piVar7 = puVar9 + 1;
          iVar16 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)*puVar9)(1);
          }
        }
      } while (iVar8 < local_2c[7]);
    }
    local_20 = (undefined4 *)((int)local_20 - (int)local_3c);
    if (iVar8 < local_2c[7]) {
      local_34 = (undefined4 *)(iVar8 << 4);
      do {
        piVar7 = (int *)(local_2c[5] + (int)local_34);
        puVar9 = (undefined4 *)piVar7[2];
        local_4c = (undefined4 *)piVar7[1];
        iVar16 = *piVar7;
        if (puVar9 != (undefined4 *)0x0) {
          LOCK();
          puVar9[1] = puVar9[1] + 1;
          UNLOCK();
        }
        puVar14 = (undefined4 *)(iVar16 - (int)local_3c);
        iVar16 = ((int)puVar14 - iVar16) + (int)local_4c;
        puVar17 = puVar14;
        if ((int)puVar14 < iVar16) {
          puVar17 = (undefined4 *)iVar16;
        }
        if ((int)local_20 <= (int)puVar17) {
          if ((int)puVar14 < (int)local_20) {
            puVar12 = local_20;
            if ((int)local_20 < (int)puVar17) {
              puVar12 = puVar17;
            }
            puVar14 = local_20;
            puVar17 = local_20;
            if ((int)local_20 < (int)puVar12) {
              puVar17 = puVar12;
            }
          }
          FUN_00680760(puVar14,puVar17,piVar7[3]);
        }
        iVar8 = iVar8 + 1;
        local_34 = local_34 + 4;
        if (puVar9 != (undefined4 *)0x0) {
          LOCK();
          piVar7 = puVar9 + 1;
          iVar16 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)*puVar9)(1);
          }
        }
      } while (iVar8 < local_2c[7]);
    }
    local_5c = (float)param_1;
    local_58 = (float)param_2;
    local_54 = (float)param_3;
    local_50 = (float)param_4;
    FUN_006807b0(local_40,&local_5c);
    FUN_00471bf0();
    FID_conflict__free((void *)0x0);
    piVar7 = local_44 + -2;
    if (piVar7 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar7);
      }
    }
    pbVar13 = local_24 + -8;
    if (pbVar13 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar8 = *(int *)pbVar13;
      *(int *)pbVar13 = *(int *)pbVar13 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(pbVar13);
      }
    }
    pbVar13 = local_1c + -8;
    if (pbVar13 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar8 = *(int *)pbVar13;
      *(int *)pbVar13 = *(int *)pbVar13 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(pbVar13);
      }
    }
  }
  else {
    local_5c = (float)param_1;
    in_EDX[2] = 0x21;
    local_58 = (float)param_2;
    local_50 = (float)param_4;
    FUN_006807b0(local_40,&local_5c);
  }
  piVar7 = (int *)(local_28 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar7 = local_18 + 1;
    iVar8 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*local_18)(1);
    }
  }
  ExceptionList = local_10;
  return local_11;
LAB_0057e8b6:
  puVar9 = (undefined4 *)((float)iVar16 * (float)local_18[7] + (float)local_34);
LAB_0057e8cd:
  fVar19 = (float)local_18[5] * (float)puVar9 * (float)local_18[6];
  if (fVar19 == (float)(int)local_38) goto LAB_0057e909;
  if ((float)(int)local_38 <= fVar19) {
    iVar8 = (int)puVar17 + -1;
  }
  else {
    local_30 = (undefined4 *)((int)puVar17 + 1);
  }
  puVar9 = local_30;
  if (iVar8 < (int)local_30) goto LAB_0057e909;
  goto LAB_0057e7d0;
LAB_0057ea79:
  fVar19 = (float)iVar16 * (float)local_18[7] + local_38;
LAB_0057ea90:
  fVar19 = (float)local_18[5] * fVar19 * (float)local_18[6];
  puVar9 = local_18;
  puVar12 = local_30;
  if (fVar19 == (float)local_30) goto LAB_0057eac7;
  if ((float)local_30 <= fVar19) {
    local_3c = (undefined4 *)((int)puVar17 + 1);
  }
  else {
    iVar8 = (int)puVar17 + -1;
  }
  puVar14 = local_3c;
  if (iVar8 < (int)local_3c) goto LAB_0057eac7;
  goto LAB_0057e995;
}

