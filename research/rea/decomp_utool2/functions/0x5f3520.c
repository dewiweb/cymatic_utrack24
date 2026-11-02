// rea decompile_all
// name: FUN_005f3520
// address: 0x5f3520
// body: available
// range: 0x5f3520-0x5f3b05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f3520(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 local_64;
  uint local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int *local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  undefined8 local_1c;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_48 = 1;
  local_54 = in_ECX[1];
  local_34 = *(uint *)(local_54 + 0x17e0);
  local_38 = *(uint *)(local_54 + 0x17e4);
  if (*(int *)(local_54 + 0xf0) == 0) {
    local_2c = 0;
    local_24 = 0;
  }
  else {
    local_24 = *(uint *)(local_54 + 0x128);
    local_2c = *(uint *)(local_54 + 300);
  }
  iVar8 = *(int *)(local_54 + 0x108);
  iVar3 = *(int *)(*in_ECX + 8);
  iVar7 = *(int *)(*in_ECX + 0x10);
  if (*(int *)(local_54 + 0xf4) == 0) {
    local_28 = (int *)0x0;
  }
  else {
    local_28 = (int *)(local_54 + 0x1b8);
  }
  if (iVar3 == 0) {
    iVar3 = *(int *)(local_54 + 0x11c);
  }
  if (iVar7 == 0) {
    iVar7 = *(int *)(local_54 + 0x120);
  }
  if (*(int *)(local_54 + 0x114) == 0) {
    if ((iVar8 == *(int *)(local_54 + 0x10c)) && (iVar8 != 0)) {
      uVar2 = iVar7 * iVar3 * iVar8;
    }
    else {
      uVar2 = iVar7 * iVar3 * 0x1000;
    }
    local_20 = (uVar2 >> 3) + 0x40;
  }
  else {
    local_20 = ((uint)(*(int *)(local_54 + 0x110) + *(int *)(local_54 + 0x114)) >> 1) + 1;
  }
  local_64 = param_1;
  uVar2 = local_24;
  local_c = local_2c;
  if ((local_2c == 0) && (local_24 == 0)) {
    uVar2 = param_2;
    local_c = param_3;
  }
  if (local_28 != (int *)0x0) {
    local_30 = *local_28;
    iVar8 = local_30 + -1;
    local_1c._0_4_ = 0;
    if (-1 < iVar8) {
      puVar4 = (uint *)(local_28[1] + iVar8 * 0x18);
      do {
        uVar6 = *puVar4;
        uVar5 = puVar4[1];
        if ((((uVar6 & uVar5) != 0xffffffff) && (puVar4[4] != 0)) &&
           ((((local_2c == 0 && (local_24 == 0)) ||
             ((uVar5 <= local_2c && ((uVar5 < local_2c || (uVar6 < local_24)))))) &&
            ((uVar5 < param_3 || ((uVar5 == param_3 && (uVar6 <= param_2)))))))) {
          if (-1 < iVar8) {
            iVar3 = local_28[1];
            uVar6 = *(uint *)(iVar3 + 8 + iVar8 * 0x18);
            local_3c = uVar6 + local_34;
            local_40 = *(int *)(iVar3 + 0xc + iVar8 * 0x18) + local_38 +
                       (uint)CARRY4(uVar6,local_34);
            uVar6 = *(uint *)(iVar3 + iVar8 * 0x18);
            local_8 = *(uint *)(iVar3 + 4 + iVar8 * 0x18);
            goto LAB_005f36af;
          }
          break;
        }
        puVar4 = puVar4 + -6;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    local_8 = 0;
    local_40 = local_38;
    local_3c = local_34;
    uVar6 = (uint)local_1c;
LAB_005f36af:
    local_1c = (ulonglong)uVar6 << 0x20;
    iVar8 = 0;
    if (0 < local_30) {
      puVar4 = (uint *)local_28[1];
      do {
        uVar5 = *puVar4;
        uVar1 = puVar4[1];
        if ((((uVar5 & uVar1) != 0xffffffff) && (puVar4[4] != 0)) &&
           ((((local_2c == 0 && (local_24 == 0)) ||
             ((uVar1 <= local_2c && ((uVar1 < local_2c || (uVar5 < local_24)))))) &&
            ((param_3 < uVar1 || ((param_3 <= uVar1 && (param_2 < uVar5)))))))) break;
        iVar8 = iVar8 + 1;
        puVar4 = puVar4 + 6;
      } while (iVar8 < local_30);
    }
    local_10 = uVar2;
    local_44 = local_c;
    if (iVar8 < local_30) {
      iVar3 = local_28[1];
      uVar5 = *(uint *)(iVar3 + 8 + iVar8 * 0x18);
      param_1._0_4_ = uVar5 + local_34;
      param_1._4_4_ = *(int *)(iVar3 + 0xc + iVar8 * 0x18) + local_38 + (uint)CARRY4(uVar5,local_34)
      ;
      local_10 = *(uint *)(iVar3 + iVar8 * 0x18);
      local_44 = *(uint *)(iVar3 + 4 + iVar8 * 0x18);
    }
    local_50 = uVar2;
    if ((local_40 <= param_1._4_4_) && ((local_40 < param_1._4_4_ || (local_3c <= (uint)param_1))))
    {
      local_58 = local_40;
      local_5c = local_3c;
      local_64 = CONCAT44(param_1._4_4_,(uint)param_1);
      local_c = local_44;
      goto LAB_005f37ae;
    }
  }
  uVar6 = 0;
  local_8 = 0;
  local_1c = local_1c & 0xffffffff;
  local_10 = uVar2;
  local_5c = local_34;
  local_58 = local_38;
LAB_005f37ae:
  if ((local_10 == uVar6) && (local_c == local_8)) {
    bVar9 = 0xfffffffe < local_10;
    local_10 = local_10 + 1;
    local_c = local_c + bVar9;
  }
  *(uint *)(local_54 + 0x17e8) = param_2;
  *(uint *)(local_54 + 0x17ec) = param_3;
  if ((local_8 <= local_c) && ((local_8 < local_c || (uVar6 < local_10)))) {
    uVar2 = local_58;
    uVar6 = (uint)local_64;
    local_4c = in_ECX;
    while( true ) {
      if ((local_64._4_4_ < uVar2) || ((local_64._4_4_ <= uVar2 && (uVar6 < local_5c)))) break;
      FUN_006f56f0();
      FUN_006f56f0();
      FUN_006f56f0();
      uVar10 = FUN_006f55df();
      uVar5 = (uint)uVar10 - local_20;
      local_2c = uVar5 + local_5c;
      param_1._4_4_ =
           ((int)((ulonglong)uVar10 >> 0x20) - (uint)((uint)uVar10 < local_20)) + uVar2 +
           (uint)CARRY4(uVar5,local_5c);
      if (((int)local_64._4_4_ <= (int)param_1._4_4_) &&
         (((int)local_64._4_4_ < (int)param_1._4_4_ || (uVar6 <= local_2c)))) {
        local_2c = uVar6 - 1;
        param_1._4_4_ = local_64._4_4_ - (uVar6 == 0);
      }
      if (((int)param_1._4_4_ <= (int)uVar2) &&
         (((int)param_1._4_4_ < (int)uVar2 || (local_2c < local_5c)))) {
        local_2c = local_5c;
        param_1._4_4_ = uVar2;
      }
      iVar8 = (**(code **)(in_ECX[1] + 4))
                        (in_ECX,local_2c,param_1._4_4_,*(undefined4 *)(in_ECX[1] + 0x2c));
      if (iVar8 != 0) break;
      iVar8 = in_ECX[1];
      *(undefined4 *)(iVar8 + 0xe8) = 0;
      *(undefined4 *)(iVar8 + 0xec) = 0;
      *(undefined4 *)(in_ECX[1] + 0xe14) = 0;
      iVar8 = *(int *)(in_ECX[1] + 0x34);
      *(undefined4 *)(iVar8 + 0xc) = 0;
      *(undefined4 *)(iVar8 + 8) = 0;
      *(undefined4 *)(iVar8 + 0x14) = 0;
      *(undefined4 *)(iVar8 + 0x10) = 0;
      *(undefined4 *)*in_ECX = 2;
      *(undefined4 *)(in_ECX[1] + 0x17f0) = 0;
      iVar8 = FUN_005f6ab0();
      if (iVar8 == 0) break;
      iVar8 = in_ECX[1];
      if (*(int *)(iVar8 + 0xe1c) == 0) {
        return 1;
      }
      uVar2 = *(uint *)(iVar8 + 0xeac);
      if ((*(int *)(iVar8 + 0xe8) == 0) && (*(int *)(iVar8 + 0xec) == 0)) {
LAB_005f396e:
        if ((local_2c == local_5c) && (param_1._4_4_ == local_58)) break;
        uVar2 = local_58;
        uVar6 = (uint)local_64;
        if (local_20 == 0) {
          local_20 = 0x10;
        }
        else {
          local_20 = local_20 * 2;
        }
      }
      else {
        uVar6 = *(uint *)(iVar8 + 0xe90) + *(uint *)(iVar8 + 0xea8);
        uVar5 = uVar2 + CARRY4(*(uint *)(iVar8 + 0xe90),*(uint *)(iVar8 + 0xea8));
        if ((local_c <= uVar5) && (((local_c < uVar5 || (local_10 <= uVar6)) && (local_48 == 0))))
        goto LAB_005f396e;
        local_48 = 0;
        if ((uVar2 < local_8) ||
           ((uVar2 == local_8 && (in_ECX = local_4c, *(uint *)(iVar8 + 0xea8) < local_1c._4_4_))))
        break;
        if ((uVar2 < param_3) || ((uVar2 <= param_3 && (*(uint *)(iVar8 + 0xea8) <= param_2)))) {
          local_1c = CONCAT44(uVar6,(uint)local_1c);
          if ((*(code **)(iVar8 + 8) == (code *)0x0) ||
             ((local_8 = uVar5,
              iVar8 = (**(code **)(iVar8 + 8))(in_ECX,&local_5c,*(undefined4 *)(iVar8 + 0x2c)),
              iVar8 != 0 || (iVar8 = *(int *)(in_ECX[1] + 0x34), (*(byte *)(iVar8 + 0x14) & 7) != 0)
              ))) break;
          uVar2 = (uint)((*(int *)(iVar8 + 0xc) + (*(int *)(iVar8 + 8) - *(int *)(iVar8 + 0x10)) * 4
                         ) * 8 - *(int *)(iVar8 + 0x14)) >> 3;
          bVar9 = local_5c < uVar2;
          local_5c = local_5c - uVar2;
          uVar2 = local_58 - bVar9;
          local_58 = uVar2;
          iVar8 = __aulldiv((local_5c - local_2c) * 2,
                            ((uVar2 - param_1._4_4_) - (uint)(local_5c < local_2c)) * 2 |
                            local_5c - local_2c >> 0x1f,3,0);
          uVar6 = (uint)local_64;
        }
        else {
          if (((*(code **)(iVar8 + 8) == (code *)0x0) ||
              (local_10 = uVar6, local_c = uVar5,
              iVar8 = (**(code **)(iVar8 + 8))(in_ECX,&local_64,*(undefined4 *)(iVar8 + 0x2c)),
              iVar8 != 0)) ||
             (iVar8 = *(int *)(in_ECX[1] + 0x34), (*(byte *)(iVar8 + 0x14) & 7) != 0)) break;
          uVar2 = (uint)((*(int *)(iVar8 + 0xc) + (*(int *)(iVar8 + 8) - *(int *)(iVar8 + 0x10)) * 4
                         ) * 8 - *(int *)(iVar8 + 0x14)) >> 3;
          uVar6 = (uint)local_64 - uVar2;
          iVar8 = local_64._4_4_ - ((uint)local_64 < uVar2);
          local_64 = CONCAT44(iVar8,uVar6);
          iVar8 = __aulldiv((uVar6 - local_2c) * 2,
                            ((iVar8 - param_1._4_4_) - (uint)(uVar6 < local_2c)) * 2 |
                            uVar6 - local_2c >> 0x1f,3,0);
          uVar2 = local_58;
        }
        local_20 = iVar8 + 0x10;
      }
      if ((local_c < local_8) || ((local_c <= local_8 && (local_10 <= local_1c._4_4_)))) break;
    }
  }
  *(undefined4 *)*in_ECX = 6;
  return 0;
}

