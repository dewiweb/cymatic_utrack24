// rea decompile_all
// name: FUN_0067a6f0
// address: 0x67a6f0
// body: available
// range: 0x67a6f0-0x67b083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0067a6f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int *in_ECX;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float in_XMM2_Da;
  double dVar20;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  float local_98;
  int local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  uint local_74;
  int local_6c;
  int local_58;
  
  if (0.01 < in_XMM2_Da) {
    bVar8 = false;
    iVar12 = 0;
    bVar9 = false;
    local_6c = 0;
    local_74 = 0;
    local_58 = 0;
    if (in_ECX[2] != 0) {
      local_9c = -0xc;
      local_94 = -0x14;
      local_a0 = -0x18;
      local_a4 = -0x10;
      local_a8 = -0x1c;
      local_ac = -0x20;
      iVar13 = iVar12;
      iVar14 = -8;
      uVar16 = 0;
      do {
        iVar10 = local_9c + 4;
        iVar1 = local_ac + 4;
        iVar11 = local_94 + 4;
        iVar2 = local_a8 + 4;
        iVar15 = iVar14 + 4;
        iVar3 = local_a4 + 4;
        iVar7 = *in_ECX;
        iVar4 = local_a0 + 4;
        fVar5 = *(float *)(iVar7 + uVar16 * 4);
        uVar17 = uVar16 + 1;
        iVar12 = local_58;
        if (fVar5 == 100002.0) {
          iVar15 = iVar14 + 0xc;
          uVar17 = uVar16 + 3;
          FUN_00682e50();
          bVar8 = false;
          iVar1 = local_ac + 0xc;
          iVar2 = local_a8 + 0xc;
          iVar3 = local_a4 + 0xc;
          iVar4 = local_a0 + 0xc;
          iVar10 = local_9c + 0xc;
          iVar11 = local_94 + 0xc;
          local_74 = uVar16;
          local_6c = iVar13;
          if (*(float *)(*in_ECX + uVar17 * 4) == 100001.0) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
        }
        else {
          iVar12 = iVar13;
          if ((fVar5 == 100001.0) || (fVar5 == 100005.0)) {
            local_7c = 0.0;
            local_78 = 0.0;
            local_84 = 0.0;
            local_88 = 0.0;
            if (fVar5 == 100001.0) {
              local_98 = *(float *)(iVar7 + uVar17 * 4);
              local_94 = local_94 + 0xc;
              iVar15 = iVar14 + 0xc;
              local_8c = *(float *)(iVar7 + 4 + uVar17 * 4);
              uVar17 = uVar16 + 3;
              local_ac = local_ac + 0xc;
              local_a8 = local_a8 + 0xc;
              local_a4 = local_a4 + 0xc;
              local_a0 = local_a0 + 0xc;
              local_9c = local_9c + 0xc;
              if (8 < uVar17) {
                local_84 = *(float *)(local_94 + iVar7);
                local_7c = *(float *)(local_ac + iVar7);
                local_78 = *(float *)(local_a8 + iVar7);
                local_88 = *(float *)(local_a4 + iVar7);
              }
            }
            else {
              local_98 = *(float *)(iVar7 + 4 + local_74 * 4);
              local_8c = *(float *)(iVar7 + 8 + local_74 * 4);
              local_ac = iVar1;
              local_a8 = iVar2;
              local_a4 = iVar3;
              local_a0 = iVar4;
              local_9c = iVar10;
              local_94 = iVar11;
              if (6 < uVar17) {
                local_78 = *(float *)(iVar11 + iVar7);
                local_88 = *(float *)(iVar15 + iVar7);
                local_7c = *(float *)(iVar4 + iVar7);
                local_84 = *(float *)(iVar10 + iVar7);
              }
            }
            if (bVar8) {
              dVar20 = __hypot((double)(local_7c - local_84),(double)(local_78 - local_88));
              if (0.0 < dVar20) {
                dVar20 = (double)in_XMM2_Da / dVar20;
                if (0.5 <= dVar20) {
                  dVar20 = 0.5;
                }
                *(float *)(iVar13 * 4 + -8) =
                     (float)((double)local_84 - (double)(local_84 - local_7c) * dVar20);
                *(float *)(iVar13 * 4 + -4) =
                     (float)((double)local_88 - (double)(local_88 - local_78) * dVar20);
              }
              dVar20 = __hypot((double)(local_98 - local_84),(double)(local_8c - local_88));
              if (0.0 < dVar20) {
                FUN_0067c1c0();
              }
              FUN_00682d90();
              iVar12 = local_58;
            }
            else if (fVar5 == 100001.0) {
              FUN_00682d90();
              bVar8 = true;
              iVar12 = local_58;
            }
            iVar1 = local_ac;
            iVar2 = local_a8;
            iVar3 = local_a4;
            iVar4 = local_a0;
            iVar10 = local_9c;
            iVar11 = local_94;
            if (fVar5 == 100005.0) {
              if (bVar9) {
                iVar13 = *in_ECX;
                fVar5 = *(float *)(local_9c + iVar13);
                fVar6 = *(float *)(iVar15 + iVar13);
                fVar19 = *(float *)(iVar13 + 0x10 + local_74 * 4);
                fVar18 = *(float *)(iVar13 + 0x14 + local_74 * 4);
                dVar20 = __hypot((double)(fVar5 - local_98),(double)(fVar6 - local_8c));
                if (0.0 < dVar20) {
                  dVar20 = (double)in_XMM2_Da / dVar20;
                  if (0.5 <= dVar20) {
                    dVar20 = 0.5;
                  }
                  *(float *)(iVar12 * 4 + -8) =
                       (float)((double)local_98 - (double)(local_98 - fVar5) * dVar20);
                  *(float *)(iVar12 * 4 + -4) =
                       (float)((double)local_8c - (double)(local_8c - fVar6) * dVar20);
                }
                fVar18 = fVar18 - local_8c;
                fVar19 = fVar19 - local_98;
                dVar20 = __hypot((double)fVar19,(double)fVar18);
                if (0.0 < dVar20) {
                  dVar20 = (double)in_XMM2_Da / dVar20;
                  if (0.5 <= dVar20) {
                    dVar20 = 0.5;
                  }
                  FUN_0067c1c0();
                  *(float *)(local_6c * 4 + 4) = (float)((double)fVar19 * dVar20 + (double)local_98)
                  ;
                  *(float *)(local_6c * 4 + 8) = (float)((double)fVar18 * dVar20 + (double)local_8c)
                  ;
                  iVar12 = local_58;
                }
              }
              if ((iVar12 != 0) && (*(float *)(iVar12 * 4 + -4) != 100005.0)) {
                iVar13 = iVar12;
                if (0 < iVar12 + 1) {
                  FUN_00409cf0();
                  iVar13 = local_58;
                }
                iVar12 = iVar13 + 1;
                *(undefined4 *)(iVar13 * 4) = 0x47c35280;
                local_58 = iVar12;
              }
            }
          }
          else if (fVar5 == 100003.0) {
            iVar15 = iVar14 + 0x14;
            bVar8 = false;
            uVar17 = uVar16 + 5;
            FUN_0067c1c0();
            iVar12 = local_58;
            iVar1 = local_ac + 0x14;
            iVar2 = local_a8 + 0x14;
            iVar3 = local_a4 + 0x14;
            iVar4 = local_a0 + 0x14;
            iVar10 = local_9c + 0x14;
            iVar11 = local_94 + 0x14;
          }
          else if (fVar5 == 100004.0) {
            bVar8 = false;
            iVar15 = iVar14 + 0x1c;
            uVar17 = uVar16 + 7;
            FUN_0067c020();
            iVar12 = local_58;
            iVar1 = local_ac + 0x1c;
            iVar2 = local_a8 + 0x1c;
            iVar3 = local_a4 + 0x1c;
            iVar4 = local_a0 + 0x1c;
            iVar10 = local_9c + 0x1c;
            iVar11 = local_94 + 0x1c;
          }
        }
        local_94 = iVar11;
        local_9c = iVar10;
        local_a0 = iVar4;
        local_a4 = iVar3;
        local_a8 = iVar2;
        local_ac = iVar1;
        iVar13 = iVar12;
        iVar14 = iVar15;
        uVar16 = uVar17;
      } while (uVar17 < (uint)in_ECX[2]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = iVar12;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    FID_conflict__free((void *)0x0);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    iVar12 = in_ECX[2];
    param_1[2] = iVar12;
    iVar13 = in_ECX[4];
    iVar14 = in_ECX[5];
    iVar1 = in_ECX[6];
    param_1[3] = in_ECX[3];
    param_1[4] = iVar13;
    param_1[5] = iVar14;
    param_1[6] = iVar1;
    *(char *)(param_1 + 7) = (char)in_ECX[7];
    if (iVar12 != 0) {
      FUN_00409cf0();
      FUN_004c2c30();
      return param_1;
    }
  }
  return param_1;
}

