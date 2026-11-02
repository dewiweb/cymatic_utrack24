// rea decompile_all
// name: FUN_00435efb
// address: 0x435efb
// body: available
// range: 0x435efb-0x436290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00435efb(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
            int param_7,uint *param_8,uint *param_9)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *in_EAX;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int local_100 [15];
  uint local_c4 [16];
  uint local_84 [17];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_14 = 0;
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0;
  local_84[3] = 0;
  local_84[4] = 0;
  local_84[5] = 0;
  local_84[6] = 0;
  local_84[7] = 0;
  local_84[8] = 0;
  local_84[9] = 0;
  local_84[10] = 0;
  local_84[0xb] = 0;
  local_84[0xc] = 0;
  local_84[0xd] = 0;
  local_84[0xe] = 0;
  local_84[0xf] = 0;
  piVar5 = (int *)param_1;
  uVar11 = param_2;
  do {
    local_84[*piVar5] = local_84[*piVar5] + 1;
    piVar5 = piVar5 + 1;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if (local_84[0] == param_2) {
    *param_6 = 0;
    *in_EAX = 0;
  }
  else {
    local_c = *in_EAX;
    uVar6 = 1;
    uVar11 = 0xf;
    do {
      if (local_84[uVar6] != 0) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
    local_8 = uVar6;
    if (*in_EAX < uVar6) {
      local_c = uVar6;
    }
    do {
      if (local_84[uVar11] != 0) break;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    local_28 = uVar11;
    if (uVar11 < local_c) {
      local_c = uVar11;
    }
    *in_EAX = local_c;
    iVar13 = 1 << ((byte)uVar6 & 0x1f);
    for (; uVar6 < uVar11; uVar6 = uVar6 + 1) {
      if ((int)(iVar13 - local_84[uVar6]) < 0) {
        return 0xfffffffd;
      }
      iVar13 = (iVar13 - local_84[uVar6]) * 2;
    }
    uVar6 = local_84[uVar11];
    iVar13 = iVar13 - uVar6;
    local_38 = iVar13;
    if (iVar13 < 0) {
      return 0xfffffffd;
    }
    local_84[uVar11] = uVar6 + iVar13;
    iVar3 = 0;
    iVar12 = uVar11 - 1;
    local_c4[1] = 0;
    if (iVar12 != 0) {
      iVar7 = 0;
      do {
        iVar3 = iVar3 + *(int *)((int)local_84 + iVar7 + 4);
        iVar12 = iVar12 + -1;
        *(int *)((int)local_c4 + iVar7 + 8) = iVar3;
        iVar7 = iVar7 + 4;
      } while (iVar12 != 0);
    }
    uVar6 = 0;
    do {
      iVar12 = local_38;
      iVar3 = *param_1;
      param_1 = param_1 + 1;
      if (iVar3 != 0) {
        uVar8 = local_c4[iVar3];
        param_9[uVar8] = uVar6;
        local_c4[iVar3] = uVar8 + 1;
        iVar13 = iVar12;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
    uVar11 = local_c4[uVar11];
    local_10 = -1;
    param_1 = param_9;
    iVar3 = -local_c;
    local_20 = 0;
    local_c4[0] = 0;
    local_100[0] = 0;
    local_30 = 0;
    local_1c = 0;
    if ((int)local_8 <= (int)local_28) {
      local_34 = local_8 - 1;
      local_2c = local_84 + local_8;
      do {
        local_24 = *local_2c;
        uVar1 = local_18;
        while (local_18 = uVar1, local_24 != 0) {
          local_18._2_2_ = (undefined2)((uint)uVar1 >> 0x10);
          local_24 = local_24 - 1;
          local_3c = iVar3 + local_c;
          if (local_3c < (int)local_8) {
            local_40 = iVar3 - local_c;
            do {
              iVar13 = local_10;
              local_10 = local_10 + 1;
              local_3c = local_3c + local_c;
              iVar3 = iVar3 + local_c;
              local_40 = local_40 + local_c;
              uVar6 = local_28 - iVar3;
              if (local_c < local_28 - iVar3) {
                uVar6 = local_c;
              }
              uVar8 = local_8 - iVar3;
              uVar4 = 1 << ((byte)uVar8 & 0x1f);
              if ((local_24 + 1 < uVar4) &&
                 (iVar12 = uVar4 + (-1 - local_24), puVar2 = local_2c, uVar8 < uVar6)) {
                while (uVar8 = uVar8 + 1, uVar8 < uVar6) {
                  uVar4 = puVar2[1];
                  if ((uint)(iVar12 * 2) <= uVar4) break;
                  iVar12 = iVar12 * 2 - uVar4;
                  puVar2 = puVar2 + 1;
                }
              }
              local_1c = 1 << ((byte)uVar8 & 0x1f);
              uVar6 = *param_8 + local_1c;
              if (0x5a0 < uVar6) {
                return 0xfffffffd;
              }
              local_30 = param_7 + *param_8 * 8;
              local_100[local_10] = local_30;
              uVar4 = local_20;
              *param_8 = uVar6;
              if (local_10 == 0) {
                *param_6 = local_30;
              }
              else {
                local_c4[local_10] = local_20;
                local_18 = CONCAT31(CONCAT21(local_18._2_2_,(undefined1)local_c),(byte)uVar8);
                uVar4 = uVar4 >> ((byte)local_40 & 0x1f);
                iVar13 = local_100[iVar13];
                local_14 = (local_30 - iVar13 >> 3) - uVar4;
                *(undefined4 *)(iVar13 + uVar4 * 8) = local_18;
                *(uint *)(iVar13 + 4 + uVar4 * 8) = local_14;
              }
              iVar13 = local_38;
            } while (local_3c < (int)local_8);
          }
          bVar10 = (byte)iVar3;
          if (param_1 < param_9 + uVar11) {
            local_14 = *param_1;
            if (local_14 < param_3) {
              local_18._0_1_ = (local_14 < 0x100) - 1U & 0x60;
            }
            else {
              iVar12 = (local_14 - param_3) * 4;
              local_18._0_1_ = *(char *)(iVar12 + param_5) + 0x50;
              local_14 = *(uint *)(iVar12 + param_4);
            }
            param_1 = param_1 + 1;
          }
          else {
            local_18._0_1_ = 0xc0;
          }
          local_18 = CONCAT31(CONCAT21(local_18._2_2_,(char)local_8 - bVar10),(byte)local_18);
          iVar12 = 1 << ((char)local_8 - bVar10 & 0x1f);
          uVar6 = local_20 >> (bVar10 & 0x1f);
          if (uVar6 < local_1c) {
            puVar9 = (undefined4 *)(local_30 + uVar6 * 8);
            do {
              *puVar9 = local_18;
              puVar9[1] = local_14;
              uVar6 = uVar6 + iVar12;
              puVar9 = puVar9 + iVar12 * 2;
              iVar13 = local_38;
            } while (uVar6 < local_1c);
          }
          uVar6 = 1 << ((byte)local_34 & 0x1f);
          while ((local_20 & uVar6) != 0) {
            local_20 = local_20 ^ uVar6;
            uVar6 = uVar6 >> 1;
          }
          local_20 = local_20 ^ uVar6;
          uVar1 = local_18;
          if (((1 << (bVar10 & 0x1f)) - 1U & local_20) != local_c4[local_10]) {
            do {
              iVar3 = iVar3 - local_c;
              local_10 = local_10 + -1;
            } while (((1 << ((byte)iVar3 & 0x1f)) - 1U & local_20) != local_c4[local_10]);
          }
        }
        local_8 = local_8 + 1;
        local_2c = local_2c + 1;
        local_34 = local_34 + 1;
      } while ((int)local_8 <= (int)local_28);
    }
    if ((iVar13 != 0) && (local_28 != 1)) {
      return 0xfffffffb;
    }
  }
  return 0;
}

