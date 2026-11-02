// rea decompile_all
// name: FUN_005ee730
// address: 0x5ee730
// body: available
// range: 0x5ee730-0x5eeab6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ee730(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  int iVar16;
  longlong lVar15;
  int iVar17;
  int iVar19;
  longlong lVar18;
  int iVar20;
  int iVar22;
  longlong lVar21;
  int iVar23;
  int iVar25;
  longlong lVar24;
  int local_44;
  uint local_40;
  int iStack_3c;
  uint local_34;
  int local_30;
  uint local_28;
  int iStack_1c;
  
  iVar5 = DAT_00c89e14;
  uVar2 = (uint)(param_3 + param_4) >> ((byte)param_6 & 0x1f);
  uVar9 = -param_4;
  iVar14 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar14 == 0; iVar14 = iVar14 + -1) {
    }
  }
  uVar6 = 1 << ((byte)param_6 & 0x1f);
  if ((uint)(iVar14 + param_7 + 4) < 0x20) {
    uVar8 = 0;
    local_28 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar9 - 1;
      do {
        uVar3 = uVar3 + uVar2;
        uVar9 = uVar9 + uVar2;
        uVar4 = uVar9 - uVar8;
        local_44 = 0;
        if (((uVar8 < uVar9) && (7 < uVar4)) && (1 < iVar5)) {
          iVar20 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar25 = 0;
          iVar14 = 0;
          iVar16 = 0;
          iVar17 = 0;
          iVar19 = 0;
          do {
            auVar11 = *(undefined1 (*) [16])(param_1 + uVar8 * 4);
            auVar11 = pabsd(auVar11,auVar11);
            iVar20 = iVar20 + auVar11._0_4_;
            iVar22 = iVar22 + auVar11._4_4_;
            iVar23 = iVar23 + auVar11._8_4_;
            iVar25 = iVar25 + auVar11._12_4_;
            auVar11 = *(undefined1 (*) [16])(param_1 + 0x10 + uVar8 * 4);
            uVar8 = uVar8 + 8;
            auVar11 = pabsd(auVar11,auVar11);
            iVar14 = iVar14 + auVar11._0_4_;
            iVar16 = iVar16 + auVar11._4_4_;
            iVar17 = iVar17 + auVar11._8_4_;
            iVar19 = iVar19 + auVar11._12_4_;
          } while (uVar8 < uVar9 - (uVar4 & 7));
          local_44 = iVar14 + iVar20 + iVar17 + iVar23 + iVar16 + iVar22 + iVar19 + iVar25;
        }
        local_30 = 0;
        local_34 = 0;
        if (uVar8 < uVar9) {
          if (1 < uVar9 - uVar8) {
            local_30 = 0;
            local_34 = local_30;
            do {
              uVar4 = *(uint *)(param_1 + uVar8 * 4);
              uVar7 = (int)uVar4 >> 0x1f;
              local_30 = local_30 + ((uVar4 ^ uVar7) - uVar7);
              uVar4 = *(uint *)(param_1 + 4 + uVar8 * 4);
              uVar7 = (int)uVar4 >> 0x1f;
              uVar8 = uVar8 + 2;
              local_34 = local_34 + ((uVar4 ^ uVar7) - uVar7);
            } while (uVar8 < uVar3);
          }
          if (uVar8 < uVar9) {
            uVar4 = *(uint *)(param_1 + uVar8 * 4);
            uVar7 = (int)uVar4 >> 0x1f;
            local_44 = local_44 + ((uVar4 ^ uVar7) - uVar7);
            uVar8 = uVar8 + 1;
          }
          local_44 = local_44 + local_30 + local_34;
        }
        *(int *)(param_2 + local_28 * 8) = local_44;
        *(undefined4 *)(param_2 + 4 + local_28 * 8) = 0;
        local_28 = local_28 + 1;
      } while (local_28 < uVar6);
    }
  }
  else {
    uVar8 = 0;
    local_28 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar9 - 1;
      do {
        uVar3 = uVar3 + uVar2;
        uVar9 = uVar9 + uVar2;
        uVar4 = uVar9 - uVar8;
        if (((uVar8 < uVar9) && (3 < uVar4)) && (1 < DAT_00c89e14)) {
          lVar21 = 0;
          lVar24 = 0;
          lVar15 = 0;
          lVar18 = 0;
          do {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = *(ulonglong *)(param_1 + uVar8 * 4);
            auVar11 = pabsd(auVar11,auVar11);
            auVar11 = pmovsxdq(auVar11,auVar11);
            lVar21 = lVar21 + auVar11._0_8_;
            lVar24 = lVar24 + auVar11._8_8_;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = *(ulonglong *)(param_1 + 8 + uVar8 * 4);
            auVar11 = pabsd(auVar12,auVar12);
            uVar8 = uVar8 + 4;
            auVar11 = pmovsxdq(auVar11,auVar11);
            lVar15 = lVar15 + auVar11._0_8_;
            lVar18 = lVar18 + auVar11._8_8_;
          } while (uVar8 < uVar9 - (uVar4 & 3));
          auVar13._8_4_ = (int)(lVar18 + lVar24);
          auVar13._0_8_ = lVar15 + lVar21;
          auVar13._12_4_ = (int)((ulonglong)(lVar18 + lVar24) >> 0x20);
          lVar15 = lVar15 + lVar21 + auVar13._8_8_;
        }
        else {
          lVar15 = 0;
        }
        if (uVar8 < uVar9) {
          iStack_1c = 0;
          local_40 = 0;
          iStack_3c = 0;
          if (uVar9 - uVar8 < 2) {
            local_34 = 0;
          }
          else {
            local_34 = 0;
            local_40 = 0;
            do {
              uVar4 = *(uint *)(param_1 + uVar8 * 4);
              uVar7 = (int)uVar4 >> 0x1f;
              uVar7 = (uVar4 ^ uVar7) - uVar7;
              bVar10 = CARRY4(local_34,uVar7);
              local_34 = local_34 + uVar7;
              uVar4 = *(uint *)(param_1 + 4 + uVar8 * 4);
              iStack_1c = iStack_1c + ((int)uVar7 >> 0x1f) + (uint)bVar10;
              uVar7 = (int)uVar4 >> 0x1f;
              uVar7 = (uVar4 ^ uVar7) - uVar7;
              bVar10 = CARRY4(local_40,uVar7);
              local_40 = local_40 + uVar7;
              iStack_3c = iStack_3c + ((int)uVar7 >> 0x1f) + (uint)bVar10;
              uVar8 = uVar8 + 2;
            } while (uVar8 < uVar3);
          }
          if (uVar8 < uVar9) {
            uVar4 = *(uint *)(param_1 + uVar8 * 4);
            uVar7 = (int)uVar4 >> 0x1f;
            lVar15 = lVar15 + (int)((uVar4 ^ uVar7) - uVar7);
            uVar8 = uVar8 + 1;
          }
          lVar15 = lVar15 + CONCAT44(iStack_3c + iStack_1c + (uint)CARRY4(local_40,local_34),
                                     local_40 + local_34);
        }
        local_44 = (int)lVar15;
        *(int *)(param_2 + local_28 * 8) = local_44;
        *(int *)(param_2 + 4 + local_28 * 8) = (int)((ulonglong)lVar15 >> 0x20);
        local_28 = local_28 + 1;
      } while (local_28 < uVar6);
    }
  }
  iVar14 = 0;
  if (param_5 <= param_6 + -1) {
    iVar5 = ((param_6 + -1) - param_5) + 1;
    uVar2 = uVar6;
    do {
      uVar6 = uVar6 >> 1;
      for (uVar9 = uVar6; uVar9 != 0; uVar9 = uVar9 - 1) {
        uVar8 = *(uint *)(param_2 + 8 + iVar14 * 8);
        puVar1 = (uint *)(param_2 + iVar14 * 8);
        uVar3 = *puVar1;
        iVar16 = *(int *)(param_2 + 0xc + iVar14 * 8);
        iVar17 = *(int *)(param_2 + 4 + iVar14 * 8);
        iVar14 = iVar14 + 2;
        *(uint *)(param_2 + uVar2 * 8) = uVar8 + *puVar1;
        *(uint *)(param_2 + 4 + uVar2 * 8) = iVar16 + iVar17 + (uint)CARRY4(uVar8,uVar3);
        uVar2 = uVar2 + 1;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

