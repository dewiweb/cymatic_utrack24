// rea decompile_all
// name: FUN_004865e6
// address: 0x4865e6
// body: available
// range: 0x4865e6-0x486974 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004865e6(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_3c;
  int local_38;
  int local_30 [4];
  undefined2 *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar11 = *(int *)(param_1 + 0x198);
  local_14 = iVar11;
  if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(iVar11 + 0x24) == 0)) &&
     (cVar6 = FUN_00486583(), cVar6 == '\0')) {
    return 0;
  }
  if (*(char *)(iVar11 + 8) == '\0') {
    uVar2 = **(undefined4 **)(param_1 + 0x18);
    uVar3 = (*(undefined4 **)(param_1 + 0x18))[1];
    local_c = 0;
    local_30[0] = *(int *)(iVar11 + 0x14);
    local_30[1] = *(undefined4 *)(iVar11 + 0x18);
    local_30[2] = *(undefined4 *)(iVar11 + 0x1c);
    iVar10 = *(int *)(iVar11 + 0xc);
    iVar8 = *(int *)(iVar11 + 0x10);
    local_30[3] = *(undefined4 *)(iVar11 + 0x20);
    if (0 < *(int *)(param_1 + 0x140)) {
      local_1c = (int *)(param_1 + 0x144);
      local_18 = (int *)(iVar11 + 0x70);
      do {
        iVar4 = local_18[-10];
        local_20 = *(undefined2 **)(param_2 + local_c * 4);
        local_10 = *local_18;
        if (iVar8 < 8) {
          cVar6 = FUN_004863c3(iVar10,iVar8,0);
          if (cVar6 == '\0') {
            return 0;
          }
          iVar8 = local_38;
          iVar10 = local_3c;
          if (7 < local_38) goto LAB_004866ab;
          uVar9 = 1;
LAB_004866d2:
          uVar7 = FUN_004864bd(iVar4,uVar9);
          iVar8 = local_38;
          iVar10 = local_3c;
          if ((int)uVar7 < 0) {
            return 0;
          }
        }
        else {
LAB_004866ab:
          uVar7 = iVar10 >> ((char)iVar8 - 8U & 0x1f) & 0xff;
          iVar5 = *(int *)(iVar4 + 0x90 + uVar7 * 4);
          if (iVar5 == 0) {
            uVar9 = 9;
            goto LAB_004866d2;
          }
          uVar7 = (uint)*(byte *)(uVar7 + 0x490 + iVar4);
          iVar8 = iVar8 - iVar5;
        }
        uVar12 = 0;
        if (uVar7 != 0) {
          if ((iVar8 < (int)uVar7) &&
             (cVar6 = FUN_004863c3(iVar10,iVar8,uVar7), iVar8 = local_38, iVar10 = local_3c,
             cVar6 == '\0')) {
            return 0;
          }
          iVar8 = iVar8 - uVar7;
          uVar12 = (1 << ((byte)uVar7 & 0x1f)) - 1U & iVar10 >> ((byte)iVar8 & 0x1f);
          iVar11 = local_14;
          if ((int)uVar12 < *(int *)(&DAT_005ff308 + uVar7 * 4)) {
            uVar12 = *(int *)(&DAT_005ff348 + uVar7 * 4) + uVar12;
          }
        }
        iVar4 = local_c;
        if (*(char *)(local_c + 0x98 + iVar11) != '\0') {
          piVar1 = local_30 + *local_1c;
          *piVar1 = *piVar1 + uVar12;
          *local_20 = (short)*piVar1;
        }
        local_8 = 1;
        if (*(char *)(iVar4 + 0xa2 + iVar11) == '\0') {
          do {
            if (iVar8 < 8) {
              cVar6 = FUN_004863c3(iVar10,iVar8,0);
              if (cVar6 == '\0') {
                return 0;
              }
              iVar8 = local_38;
              iVar10 = local_3c;
              if (7 < local_38) goto LAB_004868a1;
              uVar9 = 1;
LAB_004868cb:
              uVar7 = FUN_004864bd(local_10,uVar9);
              iVar8 = local_38;
              iVar10 = local_3c;
              if ((int)uVar7 < 0) {
                return 0;
              }
            }
            else {
LAB_004868a1:
              uVar7 = iVar10 >> ((char)iVar8 - 8U & 0x1f) & 0xff;
              iVar4 = *(int *)(local_10 + 0x90 + uVar7 * 4);
              if (iVar4 == 0) {
                uVar9 = 9;
                goto LAB_004868cb;
              }
              uVar7 = (uint)*(byte *)(uVar7 + 0x490 + local_10);
              iVar8 = iVar8 - iVar4;
            }
            uVar12 = uVar7 & 0xf;
            if (uVar12 == 0) {
              if ((int)uVar7 >> 4 != 0xf) break;
              local_8 = local_8 + 0xf;
            }
            else {
              local_8 = local_8 + ((int)uVar7 >> 4);
              if ((iVar8 < (int)uVar12) &&
                 (cVar6 = FUN_004863c3(iVar10,iVar8,uVar12), iVar8 = local_38, iVar10 = local_3c,
                 cVar6 == '\0')) {
                return 0;
              }
              iVar8 = iVar8 - uVar12;
            }
            local_8 = local_8 + 1;
          } while (local_8 < 0x40);
        }
        else {
          do {
            if (iVar8 < 8) {
              cVar6 = FUN_004863c3(iVar10,iVar8,0);
              if (cVar6 == '\0') {
                return 0;
              }
              iVar8 = local_38;
              iVar10 = local_3c;
              if (7 < local_38) goto LAB_004867a2;
              uVar9 = 1;
LAB_004867cc:
              uVar7 = FUN_004864bd(local_10,uVar9);
              iVar8 = local_38;
              iVar10 = local_3c;
              if ((int)uVar7 < 0) {
                return 0;
              }
            }
            else {
LAB_004867a2:
              uVar7 = iVar10 >> ((char)iVar8 - 8U & 0x1f) & 0xff;
              iVar4 = *(int *)(local_10 + 0x90 + uVar7 * 4);
              if (iVar4 == 0) {
                uVar9 = 9;
                goto LAB_004867cc;
              }
              uVar7 = (uint)*(byte *)(uVar7 + 0x490 + local_10);
              iVar8 = iVar8 - iVar4;
            }
            uVar12 = uVar7 & 0xf;
            if (uVar12 == 0) {
              if ((int)uVar7 >> 4 != 0xf) break;
              local_8 = local_8 + 0xf;
            }
            else {
              local_8 = local_8 + ((int)uVar7 >> 4);
              if ((iVar8 < (int)uVar12) &&
                 (cVar6 = FUN_004863c3(iVar10,iVar8,uVar12), iVar8 = local_38, iVar10 = local_3c,
                 cVar6 == '\0')) {
                return 0;
              }
              iVar8 = iVar8 - uVar12;
              uVar7 = (1 << (sbyte)uVar12) - 1U & iVar10 >> ((byte)iVar8 & 0x1f);
              if ((int)uVar7 < *(int *)(&DAT_005ff308 + uVar12 * 4)) {
                uVar7 = *(int *)(&DAT_005ff348 + uVar12 * 4) + uVar7;
              }
              local_20[(&DAT_005ff498)[local_8]] = (short)uVar7;
              iVar11 = local_14;
            }
            local_8 = local_8 + 1;
          } while (local_8 < 0x40);
        }
        local_c = local_c + 1;
        local_18 = local_18 + 1;
        local_1c = local_1c + 1;
      } while (local_c < *(int *)(param_1 + 0x140));
    }
    **(undefined4 **)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = uVar3;
    *(int *)(iVar11 + 0x14) = local_30[0];
    *(int *)(iVar11 + 0x18) = local_30[1];
    *(int *)(iVar11 + 0x1c) = local_30[2];
    *(int *)(iVar11 + 0xc) = iVar10;
    *(int *)(iVar11 + 0x10) = iVar8;
    *(int *)(iVar11 + 0x20) = local_30[3];
  }
  *(int *)(iVar11 + 0x24) = *(int *)(iVar11 + 0x24) + -1;
  return 1;
}

