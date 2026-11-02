// rea decompile_all
// name: FUN_0047a9dd
// address: 0x47a9dd
// body: available
// range: 0x47a9dd-0x47b103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0047a9dd(int *param_1,undefined4 param_2,float param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  int local_80 [2];
  int local_78;
  int local_60;
  int local_5c;
  float local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  char local_12;
  char local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x47a9e9;
  local_60 = 0;
  if (0.01 < param_3) {
    local_5c = 0;
    local_18 = 0;
    local_11 = '\0';
    local_12 = '\0';
    FUN_0047888f();
    local_8 = 0;
    if (param_1[2] != 0) {
      local_54 = 0;
      local_24 = -8;
      local_20 = -0xc;
      local_1c = -0x14;
      local_34 = -0x18;
      local_30 = -0x10;
      local_2c = -0x1c;
      local_28 = -0x20;
      iVar12 = 0;
      iVar14 = -4;
      do {
        iVar9 = *param_1;
        local_58 = *(float *)(iVar12 + iVar9);
        uVar2 = local_18 + 1;
        iVar3 = local_28 + 4;
        iVar4 = local_2c + 4;
        iVar5 = local_30 + 4;
        iVar6 = local_34 + 4;
        iVar7 = local_1c + 4;
        iVar8 = local_20 + 4;
        iVar11 = local_24 + 4;
        local_60 = iVar12 + 4;
        iVar15 = iVar14 + 4;
        if (local_58 == 100002.0) {
          local_28 = local_28 + 0xc;
          local_2c = local_2c + 0xc;
          local_30 = local_30 + 0xc;
          local_34 = local_34 + 0xc;
          local_1c = local_1c + 0xc;
          local_20 = local_20 + 0xc;
          local_24 = local_24 + 0xc;
          local_5c = local_78;
          local_50 = iVar14 + 0xc;
          local_18 = local_18 + 3;
          iVar13 = iVar12 + 0xc;
          local_54 = iVar15;
          FUN_00478b0d(*(undefined4 *)(iVar9 + local_60),*(undefined4 *)(iVar9 + iVar12 + 8));
          local_11 = '\0';
          iVar15 = local_50;
          iVar6 = local_34;
          iVar5 = local_30;
          iVar4 = local_2c;
          iVar3 = local_28;
          iVar11 = local_24;
          iVar8 = local_20;
          iVar7 = local_1c;
          uVar2 = local_18;
          if (*(float *)(iVar13 + *param_1) == 100001.0) {
            local_12 = '\x01';
          }
          else {
            local_12 = '\0';
          }
        }
        else {
          local_50 = iVar15;
          if ((local_58 == 100001.0) || (local_58 == 100005.0)) {
            local_48 = 0.0;
            local_4c = 0.0;
            local_3c = 0.0;
            local_38 = 0.0;
            if (local_58 == 100001.0) {
              local_40 = *(float *)(local_60 + iVar9);
              local_28 = local_28 + 0xc;
              local_2c = local_2c + 0xc;
              iVar11 = local_30 + 0xc;
              local_34 = local_34 + 0xc;
              local_1c = local_1c + 0xc;
              local_20 = local_20 + 0xc;
              local_24 = local_24 + 0xc;
              local_44 = *(float *)(iVar12 + 8 + iVar9);
              iVar15 = iVar14 + 0xc;
              local_18 = local_18 + 3;
              local_60 = iVar12 + 0xc;
              local_50 = iVar15;
              local_30 = iVar11;
              if (8 < local_18) {
                local_48 = *(float *)(iVar9 + local_28);
                local_4c = *(float *)(iVar9 + local_2c);
                local_3c = *(float *)(iVar9 + local_1c);
LAB_0047ae02:
                local_38 = *(float *)(iVar9 + iVar11);
                local_50 = iVar15;
              }
            }
            else {
              local_40 = *(float *)(local_54 + 4 + iVar9);
              local_44 = *(float *)(local_54 + 8 + iVar9);
              local_34 = iVar6;
              local_30 = iVar5;
              local_2c = iVar4;
              local_28 = iVar3;
              local_24 = iVar11;
              local_20 = iVar8;
              local_1c = iVar7;
              local_18 = uVar2;
              if (6 < uVar2) {
                local_48 = *(float *)(iVar9 + iVar6);
                local_4c = *(float *)(iVar9 + iVar7);
                local_3c = *(float *)(iVar9 + iVar8);
                goto LAB_0047ae02;
              }
            }
            iVar15 = local_50;
            iVar13 = local_60;
            if (local_11 == '\0') {
              if (local_58 == 100001.0) {
                FUN_00478ba1(local_40,local_44);
                local_11 = '\x01';
              }
            }
            else {
              fVar16 = (float10)FUN_00478706(local_48,local_4c,local_3c);
              if ((float10)0 < fVar16) {
                fVar16 = (float10)FUN_00470687(0x3fe0000000000000,
                                               (double)((float10)param_3 / fVar16));
                *(float *)(local_80[0] + -8 + local_78 * 4) =
                     (float)((float10)local_3c - ((float10)local_3c - (float10)local_48) * fVar16);
                *(float *)(local_80[0] + -4 + local_78 * 4) =
                     (float)((float10)local_38 - ((float10)local_38 - (float10)local_4c) * fVar16);
              }
              fVar16 = (float10)FUN_00478706(local_40,local_44,local_3c);
              if ((float10)0 < fVar16) {
                fVar16 = (float10)FUN_00470687(0x3fe0000000000000,
                                               (double)((float10)param_3 / fVar16));
                local_4c = (float)(((float10)local_40 - (float10)local_3c) * fVar16 +
                                  (float10)local_3c);
                FUN_00478c33(local_3c,local_38,local_4c,
                             (float)(((float10)local_44 - (float10)local_38) * fVar16 +
                                    (float10)local_38));
              }
              FUN_00478ba1(local_40,local_44);
            }
            fVar10 = local_40;
            iVar6 = local_34;
            iVar5 = local_30;
            iVar4 = local_2c;
            iVar3 = local_28;
            iVar11 = local_24;
            iVar8 = local_20;
            iVar7 = local_1c;
            uVar2 = local_18;
            if (local_58 == 100005.0) {
              if (local_12 != '\0') {
                iVar12 = *param_1;
                local_48 = *(float *)(iVar12 + local_20);
                local_4c = *(float *)(iVar12 + local_24);
                local_3c = local_40;
                local_38 = local_44;
                local_40 = *(float *)(local_54 + 0x10 + iVar12);
                local_44 = *(float *)(local_54 + 0x14 + iVar12);
                fVar16 = (float10)FUN_00478706(local_48,local_4c,fVar10);
                if ((float10)0 < fVar16) {
                  fVar16 = (float10)FUN_00470687(0x3fe0000000000000,
                                                 (double)((float10)param_3 / fVar16));
                  *(float *)(local_80[0] + -8 + local_78 * 4) =
                       (float)((float10)local_3c - ((float10)local_3c - (float10)local_48) * fVar16)
                  ;
                  *(float *)(local_80[0] + -4 + local_78 * 4) =
                       (float)((float10)local_38 - ((float10)local_38 - (float10)local_4c) * fVar16)
                  ;
                }
                fVar16 = (float10)FUN_00478706(local_40,local_44,local_3c);
                if ((float10)0 < fVar16) {
                  fVar16 = (float10)FUN_00470687(0x3fe0000000000000,
                                                 (double)((float10)param_3 / fVar16));
                  local_40 = (float)(((float10)local_40 - (float10)local_3c) * fVar16 +
                                    (float10)local_3c);
                  local_44 = (float)(((float10)local_44 - (float10)local_38) * fVar16 +
                                    (float10)local_38);
                  FUN_00478c33(local_3c,local_38,local_40,local_44);
                  *(float *)(local_80[0] + 4 + local_5c * 4) = local_40;
                  *(float *)(local_80[0] + 8 + local_5c * 4) = local_44;
                }
              }
              FUN_00478e1f();
              iVar13 = local_60;
              iVar15 = local_50;
              iVar6 = local_34;
              iVar5 = local_30;
              iVar4 = local_2c;
              iVar3 = local_28;
              iVar11 = local_24;
              iVar8 = local_20;
              iVar7 = local_1c;
              uVar2 = local_18;
            }
          }
          else if (local_58 == 100003.0) {
            local_28 = local_28 + 0x14;
            local_2c = local_2c + 0x14;
            local_30 = local_30 + 0x14;
            local_34 = local_34 + 0x14;
            local_1c = local_1c + 0x14;
            local_20 = local_20 + 0x14;
            local_24 = local_24 + 0x14;
            local_50 = iVar12 + 8;
            iVar3 = *(int *)(iVar12 + 0x10 + iVar9);
            local_18 = local_18 + 5;
            puVar1 = (undefined4 *)(iVar9 + local_60);
            local_11 = '\0';
            local_60 = iVar3;
            FUN_00478c33(*puVar1,*(undefined4 *)(iVar9 + local_50),
                         *(undefined4 *)(iVar9 + iVar12 + 0xc),iVar3);
            iVar13 = iVar12 + 0x14;
            iVar15 = iVar14 + 0x14;
            iVar6 = local_34;
            iVar5 = local_30;
            iVar4 = local_2c;
            iVar3 = local_28;
            iVar11 = local_24;
            iVar8 = local_20;
            iVar7 = local_1c;
            uVar2 = local_18;
          }
          else {
            iVar13 = local_60;
            if (local_58 == 100004.0) {
              local_48 = *(float *)(local_60 + iVar9);
              local_28 = local_28 + 0x1c;
              local_2c = local_2c + 0x1c;
              local_30 = local_30 + 0x1c;
              local_34 = local_34 + 0x1c;
              local_1c = local_1c + 0x1c;
              local_20 = local_20 + 0x1c;
              local_24 = local_24 + 0x1c;
              local_4c = (float)(iVar12 + 0xc);
              local_50 = iVar12 + 0x10;
              local_58 = (float)(iVar12 + 0x14);
              local_18 = local_18 + 7;
              local_11 = '\0';
              FUN_00478d07(local_48,*(undefined4 *)(iVar12 + 8 + iVar9),
                           *(undefined4 *)((int)local_4c + iVar9),*(undefined4 *)(local_50 + iVar9),
                           *(undefined4 *)(iVar9 + (int)local_58),
                           *(undefined4 *)(iVar9 + iVar12 + 0x18));
              iVar13 = iVar12 + 0x1c;
              iVar15 = iVar14 + 0x1c;
              iVar6 = local_34;
              iVar5 = local_30;
              iVar4 = local_2c;
              iVar3 = local_28;
              iVar11 = local_24;
              iVar8 = local_20;
              iVar7 = local_1c;
              uVar2 = local_18;
            }
          }
        }
        local_18 = uVar2;
        local_1c = iVar7;
        local_20 = iVar8;
        local_24 = iVar11;
        local_28 = iVar3;
        local_2c = iVar4;
        local_30 = iVar5;
        local_34 = iVar6;
        iVar12 = iVar13;
        iVar14 = iVar15;
      } while (local_18 < (uint)param_1[2]);
    }
    FUN_004788a8(param_2,local_80);
    FUN_004f7994();
  }
  else {
    FUN_004788a8(param_2,param_1);
  }
  return param_2;
}

