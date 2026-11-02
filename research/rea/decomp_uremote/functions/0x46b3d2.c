// rea decompile_all
// name: FUN_0046b3d2
// address: 0x46b3d2
// body: available
// range: 0x46b3d2-0x46b7c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b3d2(int param_1,int param_2,uint param_3,ushort *param_4)

{
  char cVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  uint *in_ECX;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *unaff_EBX;
  uint uVar12;
  uint local_88;
  ushort *local_84;
  ushort *local_80;
  int local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  ushort *local_68;
  ushort *local_64;
  ushort *local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  ushort auStack_48 [16];
  ushort local_28 [16];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&local_6c;
  local_64 = param_4;
  puVar2 = local_28;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2[0] = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  }
  uVar7 = 0;
  if (param_3 != 0) {
    do {
      local_28[*(ushort *)(param_2 + uVar7 * 2)] = local_28[*(ushort *)(param_2 + uVar7 * 2)] + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3);
  }
  local_58 = *in_ECX;
  local_70 = 0xf;
  do {
    if (local_28[local_70] != 0) break;
    local_70 = local_70 - 1;
  } while (local_70 != 0);
  if (local_70 < local_58) {
    local_58 = local_70;
  }
  if (local_70 == 0) {
    local_4c = 0x140;
    *(undefined4 *)*unaff_EBX = 0x140;
    *unaff_EBX = *unaff_EBX + 4;
    *(undefined4 *)*unaff_EBX = 0x140;
    *unaff_EBX = *unaff_EBX + 4;
    *in_ECX = 1;
  }
  else {
    uVar7 = 1;
    local_5c = 1;
    do {
      if (local_28[local_5c] != 0) break;
      local_5c = local_5c + 1;
    } while (local_5c < 0x10);
    uVar12 = uVar7;
    if (local_58 < local_5c) {
      local_58 = local_5c;
    }
    do {
      uVar12 = uVar12 * 2 - (uint)local_28[uVar7];
      if ((int)uVar12 < 0) goto LAB_0046b7b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x10);
    if (((int)uVar12 < 1) || ((param_1 != 0 && (local_70 == 1)))) {
      auStack_48[1] = 0;
      uVar7 = 2;
      do {
        *(short *)((int)auStack_48 + uVar7 + 2) =
             *(short *)((int)auStack_48 + uVar7) + *(short *)((int)local_28 + uVar7);
        uVar7 = uVar7 + 2;
      } while (uVar7 < 0x1e);
      uVar7 = 0;
      if (param_3 != 0) {
        do {
          puVar2 = (ushort *)(param_2 + uVar7 * 2);
          if (*puVar2 != 0) {
            param_4[auStack_48[*puVar2]] = (ushort)uVar7;
            auStack_48[*puVar2] = auStack_48[*puVar2] + 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_3);
      }
      if (param_1 == 0) {
        local_84 = param_4;
        local_80 = param_4;
        local_78 = 0x13;
      }
      else if (param_1 == 1) {
        local_80 = (ushort *)&DAT_00917bae;
        local_84 = (ushort *)&DAT_00917bee;
        local_78 = 0x100;
      }
      else {
        local_78 = -1;
        local_80 = (ushort *)&DAT_00917e30;
        local_84 = (ushort *)&DAT_00917e70;
      }
      local_54 = 0;
      local_50 = 0;
      local_64 = (ushort *)0xffffffff;
      iVar6 = *unaff_EBX;
      bVar3 = (byte)local_58;
      local_74 = 1 << (bVar3 & 0x1f);
      local_88 = local_5c;
      uVar7 = local_74 - 1;
      local_6c = local_74;
      if ((param_1 != 1) || (local_74 < 0x5b0)) {
        local_68 = param_4;
        uVar12 = local_5c;
LAB_0046b5aa:
        do {
          cVar1 = (char)uVar12;
          bVar4 = cVar1 - (byte)local_50;
          uVar5 = *local_68;
          if ((int)(uint)uVar5 < local_78) {
            local_4c._0_2_ = (ushort)bVar4 << 8;
          }
          else if (local_78 < (int)(uint)uVar5) {
            local_4c._0_2_ = CONCAT11(bVar4,(char)local_84[*local_68]);
            uVar5 = local_80[*local_68];
          }
          else {
            local_4c = CONCAT31((uint3)bVar4,0x60);
            uVar5 = 0;
          }
          local_4c = CONCAT22(uVar5,(ushort)local_4c);
          iVar10 = 1 << (cVar1 - (byte)local_50 & 0x1f);
          local_60 = (ushort *)local_74;
          local_5c = local_74;
          puVar8 = (uint *)(iVar6 + ((local_54 >> ((byte)local_50 & 0x1f)) + local_74) * 4);
          do {
            local_60 = (ushort *)((int)local_60 - iVar10);
            puVar8 = puVar8 + -iVar10;
            *puVar8 = local_4c;
          } while (local_60 != (ushort *)0x0);
          for (uVar11 = 1 << (cVar1 - 1U & 0x1f); (local_54 & uVar11) != 0; uVar11 = uVar11 >> 1) {
          }
          if (uVar11 == 0) {
            local_54 = 0;
          }
          else {
            local_54 = (uVar11 - 1 & local_54) + uVar11;
          }
          local_68 = local_68 + 1;
          puVar2 = local_28 + uVar12;
          *puVar2 = *puVar2 - 1;
          if (*puVar2 == 0) {
            if (uVar12 == local_70) {
              local_4c._0_2_ = CONCAT11(cVar1 - (byte)local_50,0x40);
              local_4c = (uint)(ushort)local_4c;
              while (local_54 != 0) {
                if ((local_50 != 0) && ((ushort *)(uVar7 & local_54) != local_64)) {
                  local_50 = 0;
                  iVar6 = *unaff_EBX;
                  local_4c._0_2_ = CONCAT11(bVar3,(undefined1)local_4c);
                  local_4c = (uint)(ushort)local_4c;
                  uVar12 = local_58;
                }
                *(uint *)(iVar6 + (local_54 >> ((byte)local_50 & 0x1f)) * 4) = local_4c;
                for (uVar11 = 1 << ((char)uVar12 - 1U & 0x1f); (local_54 & uVar11) != 0;
                    uVar11 = uVar11 >> 1) {
                }
                if (uVar11 == 0) {
                  local_54 = 0;
                }
                else {
                  local_54 = (uVar11 - 1 & local_54) + uVar11;
                }
              }
              *unaff_EBX = *unaff_EBX + local_6c * 4;
              *in_ECX = local_58;
              local_60 = (ushort *)0x0;
              local_54 = 0;
              goto LAB_0046b7b3;
            }
            uVar12 = (uint)*(ushort *)(param_2 + (uint)*local_68 * 2);
            local_88 = uVar12;
          }
        } while ((uVar12 <= local_58) ||
                (local_60 = (ushort *)(uVar7 & local_54), local_60 == local_64));
        if (local_50 == 0) {
          local_50 = local_58;
        }
        iVar6 = iVar6 + local_74 * 4;
        iVar9 = uVar12 - local_50;
        uVar12 = local_50 + iVar9;
        iVar10 = 1 << ((byte)iVar9 & 0x1f);
        if (uVar12 < local_70) {
          puVar2 = local_28 + uVar12;
          local_5c = uVar12;
          do {
            uVar5 = *puVar2;
            if ((int)(iVar10 - (uint)uVar5) < 1) break;
            iVar9 = iVar9 + 1;
            local_5c = local_5c + 1;
            puVar2 = puVar2 + 1;
            iVar10 = (iVar10 - (uint)uVar5) * 2;
          } while (local_5c < local_70);
        }
        local_74 = 1 << ((byte)iVar9 & 0x1f);
        local_6c = local_6c + local_74;
        if ((param_1 != 1) || (local_6c < 0x5b0)) {
          iVar10 = (int)local_60 * 4;
          *(byte *)(iVar10 + *unaff_EBX) = (byte)iVar9;
          *(byte *)(iVar10 + 1 + *unaff_EBX) = bVar3;
          *(short *)(iVar10 + 2 + *unaff_EBX) = (short)(iVar6 - *unaff_EBX >> 2);
          uVar12 = local_88;
          local_64 = local_60;
          goto LAB_0046b5aa;
        }
      }
    }
  }
LAB_0046b7b3:
  __security_check_cookie(local_8 ^ (uint)&local_6c);
  return;
}

