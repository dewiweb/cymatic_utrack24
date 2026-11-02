// rea decompile_all
// name: FUN_005d21b0
// address: 0x5d21b0
// body: available
// range: 0x5d21b0-0x5d2a21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005d2735) */
/* WARNING: Removing unreachable block (ram,0x005d2214) */
/* WARNING: Removing unreachable block (ram,0x005d299c) */
/* WARNING: Removing unreachable block (ram,0x005d2774) */

int FUN_005d21b0(int *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int extraout_EDX;
  uint extraout_EDX_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  int iStack_90;
  uint local_8c;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_60;
  int local_5c;
  int iStack_44;
  uint uStack_18;
  uint uStack_14;
  
  lVar12 = FUN_005d2f10();
  if (1 < param_1[0x16]) {
    if (param_1[1] == 0) {
      return -0x8a;
    }
    if ((-1 < param_3) && (CONCAT44(param_3,param_2) <= lVar12)) {
      iVar7 = param_1[0xd] + -1;
      if (-1 < iVar7) {
        puVar2 = (uint *)(param_1[0x11] + 8 + iVar7 * 0x10);
        do {
          uVar9 = (uint)lVar12 - *puVar2;
          iVar6 = ((int)((ulonglong)lVar12 >> 0x20) - puVar2[1]) - (uint)((uint)lVar12 < *puVar2);
          lVar12 = CONCAT44(iVar6,uVar9);
          if ((iVar6 < param_3) || ((iVar6 <= param_3 && (uVar9 <= param_2)))) break;
          puVar2 = puVar2 + -4;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      local_5c = (int)((ulonglong)lVar12 >> 0x20);
      local_60 = (uint)lVar12;
      iVar6 = param_1[0xe];
      uVar9 = *(uint *)(iVar6 + 8 + iVar7 * 8);
      iVar8 = *(int *)(iVar6 + 0xc + iVar7 * 8);
      local_84 = *(uint *)(iVar6 + iVar7 * 8);
      local_7c = *(int *)(iVar6 + 4 + iVar7 * 8);
      lVar13 = CONCAT44(local_7c,local_84);
      uVar10 = *(uint *)(param_1[0x11] + iVar7 * 0x10);
      uVar4 = uVar10 - local_60;
      uVar5 = uVar4 + param_2;
      iVar6 = ((*(int *)(param_1[0x11] + 4 + iVar7 * 0x10) - local_5c) - (uint)(uVar10 < local_60))
              + param_3 + (uint)CARRY4(uVar4,param_2);
      lVar12 = lVar13;
      if ((local_7c <= iVar8) &&
         ((lVar1 = CONCAT44(iVar8,uVar9), lVar12 = CONCAT44(local_7c,local_84), local_7c < iVar8 ||
          (lVar1 = CONCAT44(iVar8,uVar9), lVar12 = lVar13, local_84 < uVar9)))) {
        do {
          local_80 = (int)((ulonglong)lVar1 >> 0x20);
          local_8c = (uint)lVar1;
          bVar11 = -1 < (int)((local_80 - local_7c) - (uint)(local_8c < local_84));
          if ((local_80 - local_7c != (uint)(local_8c < local_84) && bVar11) ||
             ((bVar11 && (0xffff < local_8c - local_84)))) {
            FUN_006f5730();
            FUN_006f5730();
            FUN_006f5730();
            lVar13 = FUN_006f55df();
            lVar13 = lVar13 + CONCAT44(local_7c,local_84);
            uVar10 = (uint)lVar13;
            uVar9 = uVar10 - 0x10000;
            iVar8 = (int)((ulonglong)lVar13 >> 0x20) - (uint)(uVar10 < 0x10000);
            iVar3 = local_7c + (uint)(0xfffeffff < local_84);
            if ((iVar8 <= iVar3) && ((iVar8 < iVar3 || (uVar9 < local_84 + 0x10000))))
            goto LAB_005d23a2;
          }
          else {
LAB_005d23a2:
            iVar8 = local_7c;
            uVar9 = local_84;
          }
          if ((uVar9 != param_1[2]) || (iVar8 != param_1[3])) {
            if (*param_1 == 0) {
              iStack_90 = -0x81;
            }
            else if (((code *)param_1[0xb1] == (code *)0x0) ||
                    (iVar3 = (*(code *)param_1[0xb1])(*param_1,uVar9,iVar8,0), iVar3 == -1)) {
              iStack_90 = -0x80;
            }
            else {
              param_1[2] = uVar9;
              iStack_90 = 0;
              param_1[3] = iVar8;
              param_1[8] = 0;
              param_1[9] = 0;
              param_1[10] = 0;
              param_1[0xb] = 0;
              param_1[0xc] = 0;
            }
            if (iStack_90 != 0) goto LAB_005d29c0;
          }
LAB_005d2420:
          local_80 = (int)((ulonglong)lVar1 >> 0x20);
          local_8c = (uint)lVar1;
          lVar13 = FUN_005d4950(local_8c - param_1[2],
                                (local_80 - param_1[3]) - (uint)(local_8c < (uint)param_1[2]));
          iStack_90 = (int)lVar13;
          if (lVar13 == -0x80) goto LAB_005d29c0;
          if ((lVar13 < 0x100000000) && (lVar13 < 0)) {
            iVar3 = local_7c + (uint)(0xfffffffe < local_84);
            if ((iVar8 < iVar3) || ((iVar8 <= iVar3 && (uVar9 <= local_84 + 1)))) break;
            if (uVar9 == 0 && iVar8 == 0) goto LAB_005d29c0;
            uVar10 = uVar9 - 0x10000;
            iVar8 = iVar8 + -1 + (uint)(0xffff < uVar9);
            uVar9 = uVar10;
            if ((iVar8 <= local_7c) && ((iVar8 < local_7c || (uVar10 <= local_84)))) {
              iVar8 = iVar3;
              uVar9 = local_84 + 1;
            }
            lVar13 = lVar1;
            if (*param_1 == 0) {
              iStack_90 = -0x81;
            }
            else if (((code *)param_1[0xb1] == (code *)0x0) ||
                    (iVar3 = (*(code *)param_1[0xb1])(*param_1,uVar9,iVar8,0), iVar3 == -1)) {
              iStack_90 = -0x80;
            }
            else {
              param_1[2] = uVar9;
              iStack_90 = 0;
              param_1[3] = iVar8;
              param_1[8] = 0;
              param_1[9] = 0;
              param_1[10] = 0;
              param_1[0xb] = 0;
              param_1[0xc] = 0;
            }
LAB_005d2710:
            lVar1 = lVar13;
            if (iStack_90 != 0) goto LAB_005d29c0;
LAB_005d2721:
            if (lVar1 <= CONCAT44(local_7c,local_84)) break;
            goto LAB_005d2420;
          }
          if (*(int *)(iStack_44 + 0xe) != *(int *)(param_1[0x10] + iVar7 * 4)) goto LAB_005d2721;
          uVar10 = *(uint *)(iStack_44 + 10);
          uVar4 = (((uint)*(byte *)(iStack_44 + 0xd) << 8 | (uVar10 & 0xffffff) >> 0x10) << 8 |
                  (uVar10 & 0xffff) >> 8) << 8 | (uint)*(byte *)(iStack_44 + 10);
          uVar10 = *(uint *)(iStack_44 + 6);
          if ((uVar10 & uVar4) == 0xffffffff) goto LAB_005d2721;
          if (((int)uVar4 <= iVar6) && (((int)uVar4 < iVar6 || (uVar10 < uVar5)))) {
            uVar9 = param_1[2];
            iVar8 = param_1[3];
            bVar11 = -1 < (int)((iVar6 - uVar4) - (uint)(uVar5 < uVar10));
            local_84 = uVar9;
            local_7c = iVar8;
            lVar12 = lVar13;
            if ((iVar6 - uVar4 != (uint)(uVar5 < uVar10) && bVar11) ||
               ((bVar11 && (0xac44 < uVar5 - uVar10)))) goto LAB_005d2762;
            goto LAB_005d2721;
          }
          iVar3 = local_7c + (uint)(0xfffffffe < local_84);
          if ((iVar8 < iVar3) || ((iVar8 <= iVar3 && (uVar9 <= local_84 + 1)))) break;
          lVar1 = CONCAT44(iVar8,uVar9);
          if ((local_8c == param_1[2]) && (lVar1 = CONCAT44(iVar8,uVar9), local_80 == param_1[3])) {
            uVar10 = uVar9 - 0x10000;
            iVar8 = iVar8 + -1 + (uint)(0xffff < uVar9);
            uVar9 = uVar10;
            if ((iVar8 <= local_7c) && ((iVar8 < local_7c || (uVar10 <= local_84)))) {
              iVar8 = iVar3;
              uVar9 = local_84 + 1;
            }
            iStack_90 = FUN_005d4a10(uVar9,iVar8);
            goto LAB_005d2710;
          }
LAB_005d2762:
        } while (CONCAT44(local_7c,local_84) < lVar1);
      }
      iStack_90 = FUN_005d4a10(lVar12);
      param_1[0x14] = -1;
      param_1[0x15] = -1;
      if (iStack_90 == 0) {
        lVar13 = FUN_005d4950(0xffffffff,0xffffffff);
        iStack_90 = (int)lVar13;
        if (-1 < lVar13) {
          if (iVar7 == param_1[0x18]) {
            FUN_005e83c0();
          }
          else {
            FUN_005d3730();
            param_1[0x18] = iVar7;
            param_1[0x17] = *(int *)(param_1[0x10] + iVar7 * 4);
            param_1[0x16] = 3;
          }
          FUN_005e9e70();
          param_1[0x72] = extraout_EDX;
          FUN_005e9f20();
          iVar7 = FUN_005e9d40(0);
          while (iVar7 != 0) {
            if (iVar7 >> 0x1f < 0) {
              iStack_90 = -0x88;
              goto LAB_005d29c0;
            }
            if ((uStack_18 & uStack_14) != 0xffffffff) {
              puVar2 = (uint *)(param_1[0x18] * 0x10 + param_1[0x11]);
              iVar7 = (uStack_14 - *(int *)(param_1[0x18] * 0x10 + 4 + param_1[0x11])) -
                      (uint)(uStack_18 < *puVar2);
              param_1[0x14] = uStack_18 - *puVar2;
              param_1[0x15] = iVar7;
              if ((iVar7 < 1) && (iVar7 < 0)) {
                param_1[0x14] = 0;
                param_1[0x15] = 0;
              }
              puVar2 = (uint *)(param_1 + 0x14);
              uVar9 = *puVar2;
              *puVar2 = *puVar2 + local_60;
              param_1[0x15] = param_1[0x15] + local_5c + (uint)CARRY4(uVar9,local_60);
              if ((param_1[0x15] <= param_3) &&
                 (((param_1[0x15] < param_3 || ((uint)param_1[0x14] <= param_2)) &&
                  (lVar12 = FUN_005d2f10(), CONCAT44(param_3,param_2) <= lVar12)))) {
                param_1[0x1a] = 0;
                param_1[0x1b] = 0;
                param_1[0x1c] = 0;
                param_1[0x1d] = 0;
                return 0;
              }
              iStack_90 = -0x81;
              goto LAB_005d29c0;
            }
            FUN_005e9d40(1);
            iVar7 = FUN_005e9d40(0);
          }
          iStack_90 = FUN_005d4a10(lVar12);
          if (-1 < iStack_90 >> 0x1f) {
            while( true ) {
              lVar12 = FUN_005d47a0();
              iStack_90 = (int)lVar12;
              if (lVar12 < 0) break;
              if ((*(int *)(iStack_44 + 0xe) == param_1[0x17]) &&
                 ((FUN_005eaad0(), extraout_EDX_00 < 0x80000000 ||
                  ((*(byte *)(iStack_44 + 5) & 1) == 0)))) {
                iVar7 = FUN_005d2a30(param_1,lVar12);
                return iVar7;
              }
              *(longlong *)(param_1 + 2) = lVar12;
            }
          }
        }
      }
LAB_005d29c0:
      param_1[0x14] = -1;
      param_1[0x15] = -1;
      FUN_005e8a50();
      FUN_005e9260();
      param_1[0x16] = 2;
      return iStack_90;
    }
  }
  return -0x83;
}

