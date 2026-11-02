// rea decompile_all
// name: FUN_005cc48f
// address: 0x5cc48f
// body: available
// range: 0x5cc48f-0x5ccdb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005cc9cd) */
/* WARNING: Removing unreachable block (ram,0x005cc9d7) */
/* WARNING: Removing unreachable block (ram,0x005cc9dc) */

void FUN_005cc48f(int param_1,uint param_2,ushort param_3,int param_4,byte param_5,short *param_6)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  errno_t eVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  ushort *local_74;
  ushort *local_70;
  undefined *local_6c;
  ushort local_64;
  ushort *local_5c;
  int local_58;
  int local_54;
  short local_50;
  int local_4c;
  int local_48;
  int local_44;
  ushort local_40;
  undefined4 uStack_3e;
  ushort uStack_3a;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined4 local_24;
  undefined4 uStack_20;
  ushort uStack_1c;
  undefined1 local_1a;
  byte bStack_19;
  byte local_14;
  undefined1 uStack_13;
  undefined4 uStack_12;
  undefined4 uStack_e;
  ushort uStack_a;
  uint local_8;
  
  uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
  uVar6 = CONCAT22(local_24._2_2_,(ushort)local_24);
  iVar20 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  local_14 = (byte)param_1;
  uStack_13 = (undefined1)((uint)param_1 >> 8);
  uStack_12._0_2_ = (ushort)((uint)param_1 >> 0x10);
  uStack_12._2_2_ = (ushort)param_2;
  uVar10 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
  uStack_e._0_2_ = (ushort)(param_2 >> 0x10);
  uStack_e._2_2_ = param_3;
  uVar8 = CONCAT22(param_3,(ushort)uStack_e);
  uVar21 = CONCAT22(param_3,(ushort)uStack_e);
  local_64 = param_3 & 0x8000;
  uVar11 = param_3 & 0x7fff;
  local_34 = 0xcccccccc;
  local_30 = 0xcccccccc;
  local_2c._0_1_ = 0xcc;
  local_2c._1_1_ = 0xcc;
  uStack_2a = 0xfb;
  uStack_29 = 0x3f;
  if (local_64 == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((param_3 & 0x7fff) == 0) && (param_2 == 0)) && (param_1 == 0)) {
    *param_6 = 0;
    *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
    iVar1 = iVar20;
    goto LAB_005ccd6a;
  }
  if (uVar11 == 0x7fff) {
    *param_6 = 1;
    if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
      if ((local_64 == 0) || (param_2 != 0xc0000000)) {
        if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_005cc5c6;
        pcVar23 = "1#INF";
      }
      else {
        if (param_1 != 0) {
LAB_005cc5c6:
          pcVar23 = "1#QNAN";
          goto LAB_005cc5cb;
        }
        pcVar23 = "1#IND";
      }
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar5 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 5;
    }
    else {
      pcVar23 = "1#SNAN";
LAB_005cc5cb:
      eVar5 = _strcpy_s((char *)(param_6 + 2),0x16,pcVar23);
      if (eVar5 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(undefined1 *)((int)param_6 + 3) = 6;
    }
    uVar8 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
    uVar16 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20);
    uVar6 = CONCAT22(local_24._2_2_,(ushort)local_24);
    iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e);
    goto LAB_005ccd6a;
  }
  local_50 = (short)((((param_3 & 0x7fff) >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 +
                     (param_3 & 0x7fff) * 0x4d10 >> 0x10);
  local_24._0_2_ = 0;
  uVar15 = -(int)local_50;
  local_1a = (undefined1)uVar11;
  bStack_19 = (byte)(uVar11 >> 8);
  uStack_20._2_2_ = uStack_12._2_2_;
  uVar16 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
  uStack_1c = (ushort)uStack_e;
  local_24._2_2_ = (ushort)param_1;
  uVar6 = param_1 << 0x10;
  local_6c = &DAT_00957068;
  if (uVar15 != 0) {
    iVar1 = iVar20;
    uVar10 = uStack_12;
    uVar21 = uVar8;
    uVar6 = param_1 << 0x10;
    uVar16 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12);
    if ((int)uVar15 < 0) {
      local_6c = &DAT_009571c8;
      uVar15 = (int)local_50;
    }
joined_r0x005cc659:
    if (uVar15 != 0) {
      local_6c = local_6c + 0x54;
      uVar8 = uVar15 & 7;
      uVar15 = (int)uVar15 >> 3;
      if (uVar8 != 0) {
        puVar9 = (ushort *)(local_6c + uVar8 * 0xc);
        if (0x7fff < *puVar9) {
          local_40 = (ushort)*(undefined4 *)puVar9;
          uStack_3e._0_2_ = (undefined2)((uint)*(undefined4 *)puVar9 >> 0x10);
          puVar2 = puVar9 + 4;
          uStack_3e._2_2_ = (undefined2)*(undefined4 *)(puVar9 + 2);
          uStack_3a = (ushort)((uint)*(undefined4 *)(puVar9 + 2) >> 0x10);
          puVar9 = &local_40;
          local_38 = *(int *)puVar2;
          iVar1 = CONCAT22(uStack_3e._2_2_,(undefined2)uStack_3e) + -1;
          uStack_3e._0_2_ = (undefined2)iVar1;
          uStack_3e._2_2_ = (undefined2)((uint)iVar1 >> 0x10);
        }
        local_4c = 0;
        local_14 = 0;
        uStack_13 = 0;
        uStack_12._0_2_ = 0;
        uStack_12._2_2_ = 0;
        uVar10 = 0;
        uStack_e._0_2_ = 0;
        uStack_e._2_2_ = 0;
        uVar21 = 0;
        uStack_a = 0;
        uVar12 = (puVar9[5] ^ CONCAT11(bStack_19,local_1a)) & 0x8000;
        uVar13 = CONCAT11(bStack_19,local_1a) & 0x7fff;
        uVar7 = puVar9[5] & 0x7fff;
        uVar11 = uVar7 + uVar13;
        if (((uVar13 < 0x7fff) && (uVar7 < 0x7fff)) && (uVar11 < 0xbffe)) {
          if (0x3fbf < uVar11) {
            if (((uVar13 == 0) &&
                (uVar11 = uVar11 + 1,
                (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) &&
               ((uVar16 == 0 && (uVar6 == 0)))) {
              local_1a = 0;
              bStack_19 = 0;
              goto joined_r0x005cc659;
            }
            if ((((uVar7 != 0) || (uVar11 = uVar11 + 1, (*(uint *)(puVar9 + 4) & 0x7fffffff) != 0))
                || (*(int *)(puVar9 + 2) != 0)) || (*(int *)puVar9 != 0)) {
              local_58 = 0;
              psVar19 = (short *)((int)&uStack_12 + 2);
              local_44 = 5;
              do {
                local_54 = local_44;
                if (0 < local_44) {
                  local_74 = (ushort *)((int)&local_24 + local_58 * 2);
                  local_70 = puVar9 + 4;
                  do {
                    bVar4 = false;
                    uVar10 = *(uint *)(psVar19 + -2) + (uint)*local_74 * (uint)*local_70;
                    if ((uVar10 < *(uint *)(psVar19 + -2)) ||
                       (uVar10 < (uint)*local_74 * (uint)*local_70)) {
                      bVar4 = true;
                    }
                    *(uint *)(psVar19 + -2) = uVar10;
                    if (bVar4) {
                      *psVar19 = *psVar19 + 1;
                    }
                    local_74 = local_74 + 1;
                    local_70 = local_70 + -1;
                    local_54 = local_54 + -1;
                  } while (0 < local_54);
                }
                psVar19 = psVar19 + 1;
                local_58 = local_58 + 1;
                local_44 = local_44 + -1;
              } while (0 < local_44);
              uVar11 = uVar11 + 0xc002;
              if ((short)uVar11 < 1) {
LAB_005cc80d:
                uVar11 = uVar11 - 1;
                if ((short)uVar11 < 0) {
                  uVar10 = (uint)(ushort)-uVar11;
                  uVar11 = 0;
                  do {
                    if ((local_14 & 1) != 0) {
                      local_4c = local_4c + 1;
                    }
                    iVar3 = CONCAT22(uStack_a,uStack_e._2_2_);
                    uVar6 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    iVar20 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
                    uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
                    uStack_a = uStack_a >> 1;
                    uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10)
                    ;
                    uVar21 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
                    uStack_12._0_2_ =
                         (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
                    uVar10 = uVar10 - 1;
                    uStack_12._2_2_ = (ushort)(uVar6 >> 1);
                    local_14 = (byte)uVar21;
                    uStack_13 = (undefined1)(uVar21 >> 8);
                  } while (uVar10 != 0);
                  if (local_4c != 0) {
                    local_14 = local_14 | 1;
                  }
                }
              }
              else {
                do {
                  uVar13 = (ushort)uStack_e;
                  uVar7 = (ushort)uStack_12;
                  if ((uStack_a & 0x8000) != 0) break;
                  iVar20 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
                  local_14 = (byte)iVar20;
                  uStack_13 = (undefined1)((uint)iVar20 >> 8);
                  uStack_12._0_2_ = (ushort)((uint)iVar20 >> 0x10);
                  iVar20 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
                  uStack_12._2_2_ = (ushort)iVar20 | uVar7 >> 0xf;
                  uStack_e._0_2_ = (ushort)((uint)iVar20 >> 0x10);
                  iVar20 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
                  uStack_e._2_2_ = (ushort)iVar20 | uVar13 >> 0xf;
                  uVar11 = uVar11 - 1;
                  uStack_a = (ushort)((uint)iVar20 >> 0x10);
                } while (0 < (short)uVar11);
                if ((short)uVar11 < 1) goto LAB_005cc80d;
              }
              if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
                 (uVar21 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
                 uVar10 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
                 (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
                if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
                  uVar10 = 0;
                  if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
                    if (uStack_a == 0xffff) {
                      uStack_a = 0x8000;
                      uVar11 = uVar11 + 1;
                      uVar21 = 0;
                      uVar10 = 0;
                    }
                    else {
                      uStack_a = uStack_a + 1;
                      uVar21 = 0;
                      uVar10 = 0;
                    }
                  }
                  else {
                    uVar21 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
                  }
                }
                else {
                  uVar10 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
                  uVar21 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
                }
              }
              if (uVar11 < 0x7fff) {
                bStack_19 = (byte)(uVar11 >> 8) | (byte)(uVar12 >> 8);
                local_24 = uVar10;
                uStack_20 = uVar21;
                uStack_1c = uStack_a;
                local_1a = (undefined1)uVar11;
                uVar6 = uVar10;
                uVar16 = uVar21;
              }
              else {
                uStack_20._0_2_ = 0;
                uStack_20._2_2_ = 0;
                local_24._0_2_ = 0;
                local_24._2_2_ = 0;
                iVar20 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
                uStack_1c = (ushort)iVar20;
                local_1a = (undefined1)((uint)iVar20 >> 0x10);
                bStack_19 = (byte)((uint)iVar20 >> 0x18);
                uVar6 = 0;
                uVar16 = 0;
              }
              goto joined_r0x005cc659;
            }
          }
          uStack_1c = 0;
          local_1a = 0;
          bStack_19 = 0;
        }
        else {
          iVar20 = ((uVar12 == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
        }
        uStack_20._0_2_ = 0;
        uStack_20._2_2_ = 0;
        local_24._0_2_ = 0;
        local_24._2_2_ = 0;
        uVar10 = 0;
        uVar21 = 0;
        uVar6 = 0;
        uVar16 = 0;
      }
      goto joined_r0x005cc659;
    }
  }
  uVar15 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
  uStack_12 = uVar10;
  uVar8 = uVar21;
  if (0x3ffe < (ushort)(uVar15 >> 0x10)) {
    local_50 = local_50 + 1;
    local_54 = 0;
    local_14 = 0;
    uStack_13 = 0;
    uStack_12._0_2_ = 0;
    uStack_12._2_2_ = 0;
    uStack_12 = 0;
    uStack_e._0_2_ = 0;
    uStack_e._2_2_ = 0;
    uVar8 = 0;
    uStack_a = 0;
    uVar10 = uVar15 >> 0x10 & 0x7fff;
    iVar20 = uVar10 + 0x3ffb;
    if (((ushort)uVar10 < 0x7fff) && ((ushort)iVar20 < 0xbffe)) {
      if (0x3fbf < (ushort)iVar20) {
        if (((((ushort)uVar10 == 0) &&
             (iVar20 = uVar10 + 0x3ffc,
             (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) & 0x7fffffff) == 0)) && (uVar16 == 0)
            ) && (uVar6 == 0)) {
          local_1a = 0;
          bStack_19 = 0;
          goto LAB_005ccba2;
        }
        local_58 = 0;
        psVar19 = (short *)((int)&uStack_12 + 2);
        local_44 = 5;
        do {
          local_4c = local_44;
          if (0 < local_44) {
            local_5c = &local_2c;
            puVar9 = (ushort *)((int)&local_24 + local_58 * 2);
            do {
              bVar4 = false;
              uVar10 = *(uint *)(psVar19 + -2) + (uint)*local_5c * (uint)*puVar9;
              if ((uVar10 < *(uint *)(psVar19 + -2)) || (uVar10 < (uint)*local_5c * (uint)*puVar9))
              {
                bVar4 = true;
              }
              *(uint *)(psVar19 + -2) = uVar10;
              if (bVar4) {
                *psVar19 = *psVar19 + 1;
              }
              local_5c = local_5c + -1;
              puVar9 = puVar9 + 1;
              local_4c = local_4c + -1;
            } while (0 < local_4c);
          }
          psVar19 = psVar19 + 1;
          local_58 = local_58 + 1;
          local_44 = local_44 + -1;
        } while (0 < local_44);
        iVar20 = iVar20 + 0xc002;
        if ((short)iVar20 < 1) {
LAB_005cca9b:
          uVar11 = (ushort)(iVar20 + 0xffff);
          if ((short)uVar11 < 0) {
            uVar10 = -(iVar20 + 0xffff);
            uVar6 = uVar10 & 0xffff;
            uVar11 = uVar11 + (short)uVar10;
            do {
              if ((local_14 & 1) != 0) {
                local_54 = local_54 + 1;
              }
              iVar3 = CONCAT22(uStack_a,uStack_e._2_2_);
              uVar10 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              iVar20 = CONCAT22((ushort)uStack_e,uStack_12._2_2_);
              uStack_e._2_2_ = (ushort)(CONCAT22(uStack_a,uStack_e._2_2_) >> 1);
              uStack_a = uStack_a >> 1;
              uStack_e._0_2_ = (ushort)uStack_e >> 1 | (ushort)((uint)(iVar3 << 0x1f) >> 0x10);
              uVar21 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) >> 1;
              uStack_12._0_2_ = (ushort)uStack_12 >> 1 | (ushort)((uint)(iVar20 << 0x1f) >> 0x10);
              uVar6 = uVar6 - 1;
              uStack_12._2_2_ = (ushort)(uVar10 >> 1);
              local_14 = (byte)uVar21;
              uStack_13 = (undefined1)(uVar21 >> 8);
            } while (uVar6 != 0);
            if (local_54 != 0) {
              local_14 = local_14 | 1;
            }
          }
        }
        else {
          do {
            uVar7 = (ushort)uStack_e;
            uVar11 = (ushort)uStack_12;
            if ((short)uStack_a < 0) break;
            iVar3 = CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) << 1;
            local_14 = (byte)iVar3;
            uStack_13 = (undefined1)((uint)iVar3 >> 8);
            uStack_12._0_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22((ushort)uStack_e,uStack_12._2_2_) * 2;
            uStack_12._2_2_ = (ushort)iVar3 | uVar11 >> 0xf;
            uStack_e._0_2_ = (ushort)((uint)iVar3 >> 0x10);
            iVar3 = CONCAT22(uStack_a,uStack_e._2_2_) * 2;
            uStack_e._2_2_ = (ushort)iVar3 | uVar7 >> 0xf;
            iVar20 = iVar20 + 0xffff;
            uStack_a = (ushort)((uint)iVar3 >> 0x10);
          } while (0 < (short)iVar20);
          uVar11 = (ushort)iVar20;
          if ((short)uVar11 < 1) goto LAB_005cca9b;
        }
        if ((0x8000 < CONCAT11(uStack_13,local_14)) ||
           (uVar8 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e),
           uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12),
           (CONCAT22((ushort)uStack_12,CONCAT11(uStack_13,local_14)) & 0x1ffff) == 0x18000)) {
          if (CONCAT22(uStack_12._2_2_,(ushort)uStack_12) == -1) {
            uStack_12 = 0;
            if (CONCAT22(uStack_e._2_2_,(ushort)uStack_e) == -1) {
              if (uStack_a == 0xffff) {
                uStack_a = 0x8000;
                uVar11 = uVar11 + 1;
                uVar8 = 0;
                uStack_12 = 0;
              }
              else {
                uStack_a = uStack_a + 1;
                uVar8 = 0;
                uStack_12 = 0;
              }
            }
            else {
              uVar8 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e) + 1;
            }
          }
          else {
            uStack_12 = CONCAT22(uStack_12._2_2_,(ushort)uStack_12) + 1;
            uVar8 = CONCAT22(uStack_e._2_2_,(ushort)uStack_e);
          }
        }
        if (uVar11 < 0x7fff) {
          bStack_19 = (byte)(uVar11 >> 8) | bStack_19 & 0x80;
          uStack_1c = uStack_a;
          local_1a = (undefined1)uVar11;
          uVar6 = uStack_12;
          uVar16 = uVar8;
        }
        else {
          iVar20 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
          uStack_1c = (ushort)iVar20;
          local_1a = (undefined1)((uint)iVar20 >> 0x10);
          bStack_19 = (byte)((uint)iVar20 >> 0x18);
          uVar6 = 0;
          uVar16 = 0;
        }
        goto LAB_005ccba2;
      }
      iVar20 = 0;
    }
    else {
      iVar20 = (((bStack_19 & 0x80) == 0) - 1 & 0x80000000) + 0x7fff8000;
    }
    uStack_1c = (ushort)iVar20;
    local_1a = (undefined1)((uint)iVar20 >> 0x10);
    bStack_19 = (byte)((uint)iVar20 >> 0x18);
    uStack_12 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar16 = 0;
  }
LAB_005ccba2:
  *param_6 = local_50;
  if (((param_5 & 1) == 0) || (param_4 = param_4 + local_50, 0 < param_4)) {
    if (0x15 < param_4) {
      param_4 = 0x15;
    }
    iVar20 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 0x10) - 0x3ffe;
    local_1a = 0;
    bStack_19 = 0;
    local_48 = 8;
    uVar10 = uVar6;
    uVar21 = uVar16;
    do {
      uVar6 = uVar10 << 1;
      uVar16 = uVar21 * 2 | uVar10 >> 0x1f;
      iVar3 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2;
      uStack_1c = (ushort)iVar3 | (ushort)(uVar21 >> 0x1f);
      local_48 = local_48 + -1;
      uStack_20._0_2_ = (undefined2)uVar16;
      uStack_20._2_2_ = (ushort)(uVar21 * 2 >> 0x10);
      local_1a = (undefined1)((uint)iVar3 >> 0x10);
      bStack_19 = (byte)((uint)iVar3 >> 0x18);
      uVar10 = uVar6;
      uVar21 = uVar16;
    } while (local_48 != 0);
    if ((iVar20 < 0) && (uVar21 = -iVar20 & 0xff, uVar21 != 0)) {
      do {
        iVar20 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
        uVar6 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) >> 1;
        uStack_1c = (ushort)uVar6;
        local_1a = (undefined1)(uVar6 >> 0x10);
        bStack_19 = bStack_19 >> 1;
        uVar15 = CONCAT22(uStack_20._2_2_,(undefined2)uStack_20) >> 1;
        uVar16 = uVar15 | iVar20 << 0x1f;
        uVar6 = uVar10 >> 1 | CONCAT22(uStack_20._2_2_,(undefined2)uStack_20) << 0x1f;
        uVar21 = uVar21 - 1;
        uStack_20._0_2_ = (undefined2)uVar15;
        uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
        local_24._0_2_ = (ushort)(uVar10 >> 1);
        local_24._2_2_ = (ushort)(uVar6 >> 0x10);
        uVar10 = CONCAT22(local_24._2_2_,(ushort)local_24);
      } while (0 < (int)uVar21);
    }
    psVar19 = param_6 + 2;
    psVar17 = psVar19;
    for (param_4 = param_4 + 1; 0 < param_4; param_4 = param_4 + -1) {
      uStack_20._2_2_ = (ushort)(uVar16 >> 0x10);
      uStack_20._0_2_ = (undefined2)uVar16;
      local_24._2_2_ = (ushort)(uVar6 >> 0x10);
      local_24._0_2_ = (ushort)uVar6;
      iVar1 = CONCAT22((undefined2)uStack_20,local_24._2_2_);
      local_38 = CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c));
      uVar21 = (CONCAT13(bStack_19,CONCAT12(local_1a,uStack_1c)) * 2 |
               (uint)(uStack_20._2_2_ >> 0xf)) * 2 | (uVar16 & 0x7fffffff) >> 0x1e;
      uVar15 = (uVar16 * 2 | (uint)(local_24._2_2_ >> 0xf)) * 2 | (uVar6 & 0x7fffffff) >> 0x1e;
      uVar10 = uVar6 * 5;
      if ((uVar10 < uVar6 * 4) || (uVar22 = uVar15, uVar10 < uVar6)) {
        uVar22 = uVar15 + 1;
        bVar4 = false;
        if ((uVar22 < uVar15) || (uVar22 == 0)) {
          bVar4 = true;
        }
        if (bVar4) {
          uVar21 = uVar21 + 1;
        }
      }
      uVar15 = uVar16 + uVar22;
      if ((uVar15 < uVar22) || (uVar15 < uVar16)) {
        uVar21 = uVar21 + 1;
      }
      iVar20 = (uVar21 + local_38) * 2;
      uStack_1c = (ushort)iVar20 | (ushort)(uVar15 >> 0x1f);
      uVar6 = uVar6 * 10;
      local_1a = (undefined1)((uint)iVar20 >> 0x10);
      uVar16 = uVar15 * 2 | uVar10 >> 0x1f;
      *(char *)psVar17 = (char)((uint)iVar20 >> 0x18) + '0';
      psVar17 = (short *)((int)psVar17 + 1);
      bStack_19 = 0;
      local_40 = (ushort)local_24;
      uStack_3a = uStack_20._2_2_;
    }
    psVar18 = psVar17 + -1;
    if (*(char *)((int)psVar17 + -1) < '5') {
      for (; (psVar19 <= psVar18 && ((char)*psVar18 == '0')); psVar18 = (short *)((int)psVar18 + -1)
          ) {
      }
      if (psVar18 < psVar19) {
        *param_6 = 0;
        *(undefined1 *)((int)param_6 + 3) = 1;
        *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
        *(char *)psVar19 = '0';
        *(undefined1 *)((int)param_6 + 5) = 0;
        goto LAB_005ccd6a;
      }
    }
    else {
      for (; (psVar19 <= psVar18 && ((char)*psVar18 == '9')); psVar18 = (short *)((int)psVar18 + -1)
          ) {
        *(char *)psVar18 = '0';
      }
      if (psVar18 < psVar19) {
        psVar18 = (short *)((int)psVar18 + 1);
        *param_6 = *param_6 + 1;
      }
      *(char *)psVar18 = (char)*psVar18 + '\x01';
    }
    cVar14 = ((char)psVar18 - (char)param_6) + -3;
    *(char *)((int)param_6 + 3) = cVar14;
    *(undefined1 *)(cVar14 + 4 + (int)param_6) = 0;
  }
  else {
    *param_6 = 0;
    *(undefined1 *)((int)param_6 + 3) = 1;
    *(byte *)(param_6 + 1) = ((local_64 != 0x8000) - 1U & 0xd) + 0x20;
    *(undefined1 *)(param_6 + 2) = 0x30;
    *(undefined1 *)((int)param_6 + 5) = 0;
  }
LAB_005ccd6a:
  uStack_3e = iVar1;
  local_24 = uVar6;
  uStack_20 = uVar16;
  uStack_e = uVar8;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

