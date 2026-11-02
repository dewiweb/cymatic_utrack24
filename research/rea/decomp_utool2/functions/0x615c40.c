// rea decompile_all
// name: FUN_00615c40
// address: 0x615c40
// body: available
// range: 0x615c40-0x61614b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x61614b with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00615c40(uint param_1,int *param_2,uint *param_3,ushort *param_4)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int in_ECX;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  byte bVar12;
  int in_EDX;
  int iVar13;
  char cVar14;
  uint uVar15;
  uint local_90;
  uint local_88;
  uint local_84;
  ushort *local_80;
  ushort *local_7c;
  uint local_78;
  int local_70;
  ushort *local_6c;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  ushort auStack_48 [16];
  ushort local_28 [16];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_6c = param_4;
  uVar4 = 0;
  do {
    if (0x1f < uVar4) {
      ___report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar9 = 0;
    *(undefined2 *)((int)local_28 + uVar4) = 0;
    uVar4 = uVar4 + 2;
  } while (uVar4 < 0x1f);
  if (param_1 != 0) {
    do {
      iVar13 = uVar9 * 2;
      uVar9 = uVar9 + 1;
      local_28[*(ushort *)(in_EDX + iVar13)] = local_28[*(ushort *)(in_EDX + iVar13)] + 1;
    } while (uVar9 < param_1);
  }
  puVar5 = local_28 + 0xd;
  local_54 = 0xf;
  do {
    if (puVar5[2] != 0) break;
    if (puVar5[1] != 0) {
      local_54 = local_54 - 1;
      break;
    }
    if (*puVar5 != 0) {
      local_54 = local_54 - 2;
      break;
    }
    if (puVar5[-1] != 0) {
      local_54 = local_54 - 3;
      break;
    }
    if (puVar5[-2] != 0) {
      local_54 = local_54 - 4;
      break;
    }
    local_54 = local_54 - 5;
    puVar5 = puVar5 + -5;
  } while (local_54 != 0);
  uVar4 = *param_3;
  if (local_54 < *param_3) {
    uVar4 = local_54;
  }
  if (local_54 == 0) {
    *(undefined4 *)*param_2 = 0x140;
    *param_2 = *param_2 + 4;
    *(undefined4 *)*param_2 = 0x140;
    *param_2 = *param_2 + 4;
    *param_3 = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_58 = 1;
  do {
    if (local_28[local_58] != 0) break;
    if (local_28[local_58 + 1] != 0) {
      local_58 = local_58 + 1;
      break;
    }
    if (local_28[local_58 + 2] != 0) {
      local_58 = local_58 + 2;
      break;
    }
    if (local_28[local_58 + 3] != 0) {
      local_58 = local_58 + 3;
      break;
    }
    if (local_28[local_58 + 4] != 0) {
      local_58 = local_58 + 4;
      break;
    }
    local_58 = local_58 + 5;
  } while (local_58 < 0x10);
  iVar13 = 1;
  if (uVar4 < local_58) {
    uVar4 = local_58;
  }
  uVar9 = 1;
  do {
    iVar13 = iVar13 * 2 - (uint)local_28[uVar9];
    if (iVar13 < 0) goto LAB_00616132;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  if ((0 < iVar13) && ((in_ECX == 0 || (local_54 != 1)))) {
LAB_00616132:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar9 = 2;
  auStack_48[1] = 0;
  do {
    *(short *)((int)auStack_48 + uVar9 + 2) =
         *(short *)((int)auStack_48 + uVar9) + *(short *)((int)local_28 + uVar9);
    uVar9 = uVar9 + 2;
  } while (uVar9 < 0x1e);
  uVar9 = 0;
  if (param_1 != 0) {
    do {
      uVar3 = *(ushort *)(in_EDX + uVar9 * 2);
      if (uVar3 != 0) {
        param_4[auStack_48[uVar3]] = (ushort)uVar9;
        auStack_48[*(ushort *)(in_EDX + uVar9 * 2)] =
             auStack_48[*(ushort *)(in_EDX + uVar9 * 2)] + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_1);
  }
  if (in_ECX == 0) {
    local_80 = param_4;
    local_70 = 0x13;
    local_7c = param_4;
  }
  else if (in_ECX == 1) {
    local_70 = 0x100;
    local_80 = (ushort *)((int)juce::var::VariantType_Array::vftable + 0x36);
    local_7c = (ushort *)((int)juce::var::VariantType_Object::vftable + 0x42);
  }
  else {
    local_80 = (ushort *)&DAT_00c167a8;
    local_7c = (ushort *)&DAT_00c16878;
    local_70 = -1;
  }
  local_78 = 0;
  local_50 = 0;
  local_84 = 0xffffffff;
  local_5c = *param_2;
  bVar8 = (byte)uVar4;
  local_90 = 1 << (bVar8 & 0x1f);
  uVar9 = local_90 - 1;
  uVar15 = local_58;
  local_88 = local_90;
  if ((in_ECX != 1) || (local_90 < 0x5b0)) {
LAB_00615ed5:
    do {
      cVar14 = (char)uVar15;
      bVar12 = (byte)local_50;
      bVar2 = cVar14 - bVar12;
      uVar3 = *local_6c;
      uVar6 = (uint)uVar3;
      if ((int)uVar6 < local_70) {
        local_4c._0_2_ = (ushort)bVar2 << 8;
      }
      else if (local_70 < (int)uVar6) {
        local_4c._0_2_ = CONCAT11(bVar2,(char)local_7c[uVar6]);
        uVar3 = local_80[uVar6];
      }
      else {
        local_4c = CONCAT31((uint3)bVar2,0x60);
        uVar3 = 0;
      }
      local_4c = CONCAT22(uVar3,(ushort)local_4c);
      iVar13 = 1 << (cVar14 - bVar12 & 0x1f);
      puVar10 = (undefined4 *)(local_5c + ((local_78 >> (bVar12 & 0x1f)) + local_90) * 4);
      uVar6 = local_90;
      do {
        puVar10 = puVar10 + -iVar13;
        *puVar10 = local_4c;
        uVar6 = uVar6 - iVar13;
      } while (uVar6 != 0);
      for (uVar6 = 1 << (cVar14 - 1U & 0x1f); (local_78 & uVar6) != 0; uVar6 = uVar6 >> 1) {
      }
      if (uVar6 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = (uVar6 - 1 & local_78) + uVar6;
      }
      local_6c = local_6c + 1;
      puVar5 = local_28 + uVar15;
      *puVar5 = *puVar5 - 1;
      if (*puVar5 == 0) {
        if (uVar15 == local_54) {
          local_4c._0_2_ = CONCAT11(cVar14 - bVar12,0x40);
          local_4c = (uint)(ushort)local_4c;
          goto joined_r0x006160a4;
        }
        uVar15 = (uint)*(ushort *)(in_EDX + (uint)*local_6c * 2);
        local_58 = uVar15;
      }
    } while ((uVar15 <= uVar4) || (uVar6 = uVar9 & local_78, uVar6 == local_84));
    if (local_50 == 0) {
      local_50 = uVar4;
    }
    local_5c = local_5c + local_90 * 4;
    iVar7 = uVar15 - local_50;
    iVar13 = 1 << ((byte)iVar7 & 0x1f);
    uVar11 = local_50 + iVar7;
    if (uVar11 < local_54) {
      puVar5 = local_28 + uVar11;
      do {
        uVar3 = *puVar5;
        uVar15 = local_58;
        if ((int)(iVar13 - (uint)uVar3) < 1) break;
        uVar11 = uVar11 + 1;
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
        iVar13 = (iVar13 - (uint)uVar3) * 2;
      } while (uVar11 < local_54);
    }
    local_90 = 1 << ((byte)iVar7 & 0x1f);
    local_88 = local_88 + local_90;
    if ((in_ECX != 1) || (local_88 < 0x5b0)) {
      *(byte *)(*param_2 + uVar6 * 4) = (byte)iVar7;
      *(byte *)(*param_2 + 1 + uVar6 * 4) = bVar8;
      *(short *)(*param_2 + 2 + uVar6 * 4) = (short)(local_5c - *param_2 >> 2);
      local_84 = uVar6;
      goto LAB_00615ed5;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
joined_r0x006160a4:
  if (local_78 == 0) {
LAB_00616106:
    *param_2 = *param_2 + local_88 * 4;
    *param_3 = uVar4;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((local_50 != 0) && ((uVar9 & local_78) != local_84)) {
    local_50 = 0;
    local_4c._0_2_ = CONCAT11(bVar8,(undefined1)local_4c);
    local_4c = (uint)(ushort)local_4c;
    local_5c = *param_2;
    uVar15 = uVar4;
  }
  *(uint *)(local_5c + (local_78 >> ((byte)local_50 & 0x1f)) * 4) = local_4c;
  for (uVar6 = 1 << ((char)uVar15 - 1U & 0x1f); (local_78 & uVar6) != 0; uVar6 = uVar6 >> 1) {
  }
  if (uVar6 == 0) goto LAB_00616106;
  local_78 = (local_78 & uVar6 - 1) + uVar6;
  goto joined_r0x006160a4;
}

