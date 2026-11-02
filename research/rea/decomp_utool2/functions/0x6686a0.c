// rea decompile_all
// name: FUN_006686a0
// address: 0x6686a0
// body: available
// range: 0x6686a0-0x668df4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006686a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  short *psVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int local_fc;
  int local_f4;
  int local_f0;
  uint local_d8;
  int local_d4;
  int local_d0;
  uint local_cc;
  int local_c8;
  short *local_c4;
  short *local_c0;
  int local_b8;
  int local_b4;
  int local_ac;
  int local_a8;
  int local_a0;
  int local_9c;
  undefined1 local_88 [2];
  short local_86;
  short local_84;
  short local_78;
  short local_76;
  short local_68;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 0x11c);
  iVar2 = *(int *)(param_1 + 0x188);
  if (*(int *)(param_1 + 0x7c) <= *(int *)(param_1 + 0x84)) {
    do {
      if ((*(char *)((int)*(undefined4 **)(param_1 + 400) + 0x11) != '\0') ||
         ((*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x84) &&
          ((uint)(*(int *)(param_1 + 0x16c) == 0) + *(int *)(param_1 + 0x88) <
           *(uint *)(param_1 + 0x80))))) break;
      iVar9 = (*(code *)**(undefined4 **)(param_1 + 400))(param_1);
      if (iVar9 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    } while (*(int *)(param_1 + 0x7c) <= *(int *)(param_1 + 0x84));
  }
  iVar9 = *(int *)(param_1 + 0xc4);
  local_d4 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    local_ac = 0;
    puVar19 = (undefined4 *)(iVar2 + 0x48);
    do {
      if (*(char *)(iVar9 + 0x30) != '\0') {
        uVar3 = *(uint *)(param_1 + 0x88);
        uVar11 = *(uint *)(iVar9 + 0xc);
        if (uVar3 < iVar1 - 1U) {
          bVar6 = false;
          uVar12 = uVar11 * 2;
          local_d8 = uVar11;
        }
        else {
          uVar12 = *(uint *)(iVar9 + 0x20) % uVar11;
          bVar6 = true;
          local_d8 = uVar12;
          if (uVar12 == 0) {
            uVar12 = uVar11;
            local_d8 = uVar11;
          }
        }
        if (uVar3 == 0) {
          iVar10 = (**(code **)(*(int *)(param_1 + 4) + 0x20))(param_1,*puVar19,0,uVar12,0);
        }
        else {
          iVar10 = (**(code **)(*(int *)(param_1 + 4) + 0x20))
                             (param_1,*puVar19,(uVar3 - 1) * uVar11,uVar12 + uVar11);
          iVar10 = iVar10 + *(int *)(iVar9 + 0xc) * 4;
        }
        local_fc = 0;
        iVar23 = *(int *)(iVar2 + 0x70) + local_ac;
        puVar4 = *(ushort **)(iVar9 + 0x4c);
        uVar11 = (uint)*puVar4;
        uVar12 = (uint)puVar4[1];
        uVar13 = (uint)puVar4[8];
        uVar14 = (uint)puVar4[0x10];
        uVar15 = (uint)puVar4[9];
        uVar16 = (uint)puVar4[2];
        pcVar5 = *(code **)((*(int *)(param_1 + 0x19c) - iVar2) + -0x44 + (int)puVar19);
        local_d0 = *(int *)(param_2 + local_d4 * 4);
        if (0 < (int)local_d8) {
          do {
            psVar21 = *(short **)(iVar10 + local_fc * 4);
            if ((uVar3 != 0) || (local_c0 = psVar21, local_fc != 0)) {
              local_c0 = *(short **)(iVar10 + -4 + local_fc * 4);
            }
            if ((!bVar6) || (local_c4 = psVar21, local_fc != local_d8 - 1)) {
              local_c4 = *(short **)(iVar10 + 4 + local_fc * 4);
            }
            local_f4 = (int)*local_c4;
            local_9c = (int)*local_c0;
            local_f0 = (int)*psVar21;
            uVar24 = *(int *)(iVar9 + 0x1c) - 1;
            local_c8 = 0;
            local_cc = 0;
            iVar18 = local_9c;
            local_a8 = local_f4;
            local_a0 = local_f0;
            do {
              iVar8 = local_9c;
              iVar7 = local_a0;
              local_c0 = local_c0 + 0x40;
              local_c4 = local_c4 + 0x40;
              FUN_004c2c30(local_88,psVar21,0x80);
              local_b8 = local_a8;
              local_b4 = local_9c;
              if (local_cc < uVar24) {
                local_b4 = (int)*local_c0;
                local_a0 = (int)psVar21[0x40];
                local_b8 = (int)*local_c4;
              }
              iVar22 = *(int *)(iVar23 + 4);
              if ((iVar22 != 0) && (local_86 == 0)) {
                iVar17 = (local_f0 - local_a0) * uVar11;
                iVar20 = iVar17 * 0x24;
                if (iVar20 < 0) {
                  iVar17 = (int)(uVar12 * 0x80 + iVar17 * -0x24) / (int)(uVar12 << 8);
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar17)) {
                    iVar17 = iVar22 + -1;
                  }
                  iVar17 = -iVar17;
                }
                else {
                  iVar17 = (int)(uVar12 * 0x80 + iVar20) / (int)(uVar12 << 8);
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar17)) {
                    iVar17 = iVar22 + -1;
                  }
                }
                local_86 = (short)iVar17;
              }
              iVar22 = *(int *)(iVar23 + 8);
              if ((iVar22 != 0) && (local_78 == 0)) {
                iVar17 = (local_9c - local_a8) * uVar11;
                iVar20 = iVar17 * 0x24;
                if (iVar20 < 0) {
                  iVar17 = (int)(uVar13 * 0x80 + iVar17 * -0x24) / (int)(uVar13 << 8);
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar17)) {
                    iVar17 = iVar22 + -1;
                  }
                  iVar17 = -iVar17;
                }
                else {
                  iVar17 = (int)(uVar13 * 0x80 + iVar20) / (int)(uVar13 << 8);
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar17)) {
                    iVar17 = iVar22 + -1;
                  }
                }
                local_78 = (short)iVar17;
              }
              iVar22 = *(int *)(iVar23 + 0xc);
              if ((iVar22 != 0) && (local_68 == 0)) {
                iVar20 = (local_a8 + iVar7 * -2 + local_9c) * uVar11;
                iVar17 = iVar20 * 9;
                if (iVar17 < 0) {
                  iVar17 = (int)(uVar14 * 0x80 + iVar20 * -9) / (int)(uVar14 << 8);
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar17)) {
                    iVar17 = iVar22 + -1;
                  }
                  iVar17 = -iVar17;
                }
                else {
                  iVar17 = (int)(uVar14 * 0x80 + iVar17) / (int)(uVar14 << 8);
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar17)) {
                    iVar17 = iVar22 + -1;
                  }
                }
                local_68 = (short)iVar17;
              }
              iVar22 = *(int *)(iVar23 + 0x10);
              if ((iVar22 != 0) && (local_76 == 0)) {
                iVar17 = (((local_b8 - local_f4) - local_b4) + iVar18) * uVar11;
                iVar18 = iVar17 * 5;
                if (iVar18 < 0) {
                  iVar18 = (int)(uVar15 * 0x80 + iVar17 * -5) / (int)(uVar15 << 8);
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar18)) {
                    iVar18 = iVar22 + -1;
                  }
                  iVar18 = -iVar18;
                }
                else {
                  iVar18 = (int)(uVar15 * 0x80 + iVar18) / (int)(uVar15 << 8);
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar18)) {
                    local_76 = (short)iVar22 + -1;
                    goto LAB_00668c18;
                  }
                }
                local_76 = (short)iVar18;
              }
LAB_00668c18:
              iVar18 = *(int *)(iVar23 + 0x14);
              if ((iVar18 != 0) && (local_84 == 0)) {
                iVar17 = (local_a0 + iVar7 * -2 + local_f0) * uVar11;
                iVar22 = iVar17 * 9;
                if (iVar22 < 0) {
                  iVar22 = (int)(uVar16 * 0x80 + iVar17 * -9) / (int)(uVar16 << 8);
                  if ((0 < iVar18) && (iVar18 = 1 << ((byte)iVar18 & 0x1f), iVar18 <= iVar22)) {
                    iVar22 = iVar18 + -1;
                  }
                  iVar22 = -iVar22;
                }
                else {
                  iVar22 = (int)(uVar16 * 0x80 + iVar22) / (int)(uVar16 << 8);
                  if ((0 < iVar18) && (iVar18 = 1 << ((byte)iVar18 & 0x1f), iVar18 <= iVar22)) {
                    iVar22 = iVar18 + -1;
                  }
                }
                local_84 = (short)iVar22;
              }
              (*pcVar5)(param_1,iVar9,local_88,local_d0,local_c8);
              psVar21 = psVar21 + 0x40;
              local_9c = local_b4;
              local_f4 = local_a8;
              local_a8 = local_b8;
              local_c8 = local_c8 + *(int *)(iVar9 + 0x24);
              local_cc = local_cc + 1;
              local_f0 = iVar7;
              iVar18 = iVar8;
            } while (local_cc <= uVar24);
            local_fc = local_fc + 1;
            local_d0 = local_d0 + *(int *)(iVar9 + 0x24) * 4;
          } while (local_fc < (int)local_d8);
        }
      }
      local_d4 = local_d4 + 1;
      local_ac = local_ac + 0x18;
      puVar19 = puVar19 + 1;
      iVar9 = iVar9 + 0x54;
    } while (local_d4 < *(int *)(param_1 + 0x24));
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

