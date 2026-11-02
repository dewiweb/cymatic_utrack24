// rea decompile_all
// name: FUN_005d2a30
// address: 0x5d2a30
// body: available
// range: 0x5d2a30-0x5d2b43 inclusive
// range: 0x5d2b50-0x5d2e7c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d2a30(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int extraout_ECX;
  uint uVar8;
  undefined4 extraout_EDX;
  int iVar9;
  int extraout_EDX_00;
  uint uVar10;
  byte bVar11;
  bool bVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint local_1bc;
  uint local_1b8;
  int iStack_1b4;
  int local_1b0;
  int local_1a8;
  uint local_1a4;
  uint local_1a0;
  int iStack_19c;
  uint local_180;
  uint local_17c;
  
  if (1 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0xffffff76;
    }
    if (((-1 < param_3) && (param_3 <= *(int *)(param_1 + 0x14))) &&
       ((param_3 < *(int *)(param_1 + 0x14) || (param_2 <= *(uint *)(param_1 + 0x10))))) {
      if (2 < *(int *)(param_1 + 0x58)) {
        iVar3 = *(int *)(param_1 + 0x60);
        iVar2 = *(int *)(param_1 + 0x38);
        iVar1 = *(int *)(iVar2 + 4 + iVar3 * 8);
        if (((param_3 < iVar1) || ((param_3 <= iVar1 && (param_2 < *(uint *)(iVar2 + iVar3 * 8)))))
           || ((iVar1 = *(int *)(iVar2 + 0xc + iVar3 * 8), iVar1 <= param_3 &&
               ((iVar1 < param_3 || (*(uint *)(iVar2 + 8 + iVar3 * 8) <= param_2)))))) {
          FUN_005d3730();
        }
      }
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      FUN_005e9e70();
      *(undefined4 *)(extraout_ECX + 0x150) = extraout_EDX;
      FUN_005e83c0();
      iVar1 = FUN_005d4a10(param_2,param_3);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
        FUN_005ea9b0();
        FUN_005d3730();
        return 0xffffff77;
      }
      iVar1 = 0;
      local_1a4 = 0;
      bVar11 = 0;
      bVar12 = false;
      FUN_005eaa00();
      FUN_005e9e70();
      iVar3 = 0;
      do {
        while ((*(int *)(param_1 + 0x58) < 3 || (iVar2 = FUN_005e9d40(1), iVar2 < 1))) {
LAB_005d2c0c:
          if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
            goto LAB_005d2e58;
          }
          lVar13 = FUN_005d4950(0xffffffff,0xffffffff);
          iVar1 = (int)((ulonglong)lVar13 >> 0x20);
          if (lVar13 < 0) {
            uVar14 = FUN_005d2f10();
            *(undefined8 *)(param_1 + 0x50) = uVar14;
            goto LAB_005d2e58;
          }
          if (*(int *)(param_1 + 0x58) < 3) {
LAB_005d2c79:
            iVar4 = FUN_005eaaa0();
            iVar2 = *(int *)(param_1 + 0x34);
            iVar9 = 0;
            if (0 < iVar2) {
              piVar5 = *(int **)(param_1 + 0x40);
              do {
                if (*piVar5 == iVar4) break;
                iVar9 = iVar9 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar9 < iVar2);
            }
            if (iVar9 != iVar2) {
              *(int *)(param_1 + 0x60) = iVar9;
              *(int *)(param_1 + 0x5c) = iVar4;
              FUN_005e9e70();
              *(int *)(param_1 + 0x1c8) = iVar4;
              FUN_005e9e70();
              *(undefined4 *)(param_1 + 0x58) = 3;
              iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 4 + extraout_EDX_00 * 8);
              if ((iVar2 < iVar1) ||
                 ((iVar2 <= iVar1 &&
                  (*(uint *)(*(int *)(param_1 + 0x3c) + extraout_EDX_00 * 8) < (uint)lVar13)))) {
                bVar12 = false;
              }
              else {
                bVar12 = true;
              }
              goto LAB_005d2cf8;
            }
          }
          else {
            iVar2 = FUN_005eaaa0();
            if ((*(int *)(param_1 + 0x5c) != iVar2) && ((*(byte *)(local_1a0 + 5) & 2) != 0)) {
              FUN_005d3730();
              FUN_005ea9b0();
            }
            if (*(int *)(param_1 + 0x58) < 3) goto LAB_005d2c79;
LAB_005d2cf8:
            FUN_005e9f20();
            FUN_005e9f20();
            bVar11 = *(byte *)(local_1a0 + 5) & 4;
          }
          iVar1 = 0;
        }
        if (*(int *)(*(int *)(param_1 + 0x60) * 0x20 + *(int *)(param_1 + 0x48) + 0x1c) == 0) {
          FUN_005e9d40(1);
          goto LAB_005d2c0c;
        }
        iVar3 = FUN_005d6eb0();
        if (iVar3 < 0) {
          FUN_005e9d40(1);
          iVar3 = 0;
        }
        else if ((bVar11 == 0) || (bVar12)) {
          if (iVar1 != 0) {
            local_1a4 = local_1a4 + (iVar3 + iVar1 >> 2);
          }
        }
        else {
          FUN_005e9d40(1);
        }
        iVar1 = iVar3;
        iVar3 = iVar1;
      } while ((local_180 & local_17c) == 0xffffffff);
      iVar1 = *(int *)(param_1 + 0x44);
      iVar3 = *(int *)(param_1 + 0x60) * 0x10;
      puVar6 = (uint *)(iVar3 + iVar1);
      uVar8 = local_180 - *puVar6;
      local_1b0 = (local_17c - *(int *)(iVar3 + 4 + iVar1)) - (uint)(local_180 < *puVar6);
      if ((local_1b0 < 1) && (local_1b0 < 0)) {
        local_1a0 = 0;
        local_1b0 = 0;
        uVar8 = local_1a0;
      }
      iVar3 = 0;
      local_1a0 = 0;
      iStack_19c = 0;
      local_1b8 = 0;
      if (*(int *)(param_1 + 0x60) < 2) {
        local_1a8 = 0;
        local_1bc = 0;
        local_1b8 = 0;
        uVar7 = local_1b8;
      }
      else {
        puVar6 = (uint *)(iVar1 + 0x18);
        iStack_1b4 = 0;
        uVar10 = (*(int *)(param_1 + 0x60) - 2U >> 1) + 1;
        iVar3 = uVar10 * 2;
        do {
          local_1bc = uVar10;
          bVar12 = CARRY4(local_1b8,puVar6[-4]);
          local_1b8 = local_1b8 + puVar6[-4];
          iStack_1b4 = iStack_1b4 + puVar6[-3] + (uint)bVar12;
          bVar12 = CARRY4(local_1a0,*puVar6);
          local_1a0 = local_1a0 + *puVar6;
          iStack_19c = iStack_19c + puVar6[1] + (uint)bVar12;
          puVar6 = puVar6 + 8;
          uVar10 = local_1bc + -1;
          local_1bc = local_1b8;
          local_1a8 = iStack_1b4;
          uVar7 = local_1a0;
        } while (uVar10 != 0);
      }
      local_1b8 = uVar7;
      if (iVar3 < *(int *)(param_1 + 0x60)) {
        puVar6 = (uint *)(iVar3 * 0x10 + 8 + *(int *)(param_1 + 0x44));
        bVar12 = CARRY4(uVar8,*puVar6);
        uVar8 = uVar8 + *puVar6;
        local_1b0 = local_1b0 + *(int *)(iVar3 * 0x10 + 0xc + *(int *)(param_1 + 0x44)) +
                    (uint)bVar12;
      }
      uVar7 = (local_1b8 - local_1a4) + local_1bc;
      *(uint *)(param_1 + 0x50) = uVar7 + uVar8;
      iVar1 = ((iStack_19c - ((int)local_1a4 >> 0x1f)) - (uint)(local_1b8 < local_1a4)) + local_1a8
              + (uint)CARRY4(local_1b8 - local_1a4,local_1bc) + local_1b0 +
              (uint)CARRY4(uVar7,uVar8);
      *(int *)(param_1 + 0x54) = iVar1;
      if ((iVar1 < 1) && (iVar1 < 0)) {
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
LAB_005d2e58:
      FUN_005ea9b0();
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      return 0;
    }
  }
  return 0xffffff7d;
}

