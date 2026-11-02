// rea decompile_all
// name: FUN_005fcf40
// address: 0x5fcf40
// body: available
// range: 0x5fcf40-0x5fd3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005fcf40(int param_1,uint param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint uStack_14;
  
  dVar8 = 0.0;
  iVar1 = *(int *)(param_1 + -8);
  uVar4 = *(uint *)(param_1 + -4) - iVar1;
  local_24 = (*(int *)(param_1 + -0xc) - iVar1) + uVar4;
  uStack_14 = 0;
  local_3c = 0;
  local_40 = 0;
  local_4c = 0;
  local_50 = 0;
  local_1c = 0;
  local_54 = 0;
  local_18 = 0;
  if (param_2 == 0) {
    local_60 = 0;
    local_38 = 0;
    local_30 = 0;
  }
  else {
    local_60 = 0;
    local_38 = 0;
    local_30 = 0;
    uVar2 = *(uint *)(param_1 + -4);
    local_20 = ((*(int *)(param_1 + -0xc) * 2 - *(int *)(param_1 + -0x10)) - iVar1) + local_24;
    do {
      local_44 = uVar2;
      local_48 = uVar4;
      uVar2 = *(uint *)(param_1 + local_1c * 4);
      uVar4 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
      bVar7 = CARRY4(local_40,uVar4);
      local_40 = local_40 + uVar4;
      local_3c = local_3c + bVar7;
      uVar4 = uVar2 - local_44;
      uVar3 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
      bVar7 = CARRY4(local_50,uVar3);
      local_50 = local_50 + uVar3;
      local_4c = local_4c + bVar7;
      uVar5 = uVar4 - local_48;
      uVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
      local_44 = local_60 + uVar3;
      local_48 = local_54 + CARRY4(local_60,uVar3);
      uVar6 = uVar5 - local_24;
      uVar3 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
      bVar7 = CARRY4(local_18,uVar3);
      local_18 = local_18 + uVar3;
      uStack_14 = uStack_14 + bVar7;
      uVar3 = (int)(uVar6 - local_20) >> 0x1f;
      uVar3 = (uVar6 - local_20 ^ uVar3) - uVar3;
      bVar7 = CARRY4(local_30,uVar3);
      local_30 = local_30 + uVar3;
      local_38 = local_38 + bVar7;
      local_1c = local_1c + 1;
      local_54 = local_48;
      local_24 = uVar5;
      local_20 = uVar6;
      local_60 = local_44;
    } while (local_1c < param_2);
    if ((local_48 <= local_4c) && ((local_48 < local_4c || (local_44 < local_50))))
    goto LAB_005fd0da;
  }
  local_44 = local_50;
  local_48 = local_4c;
LAB_005fd0da:
  if ((uStack_14 <= local_48) && ((uStack_14 < local_48 || (local_18 < local_44)))) {
    local_48 = uStack_14;
    local_44 = local_18;
  }
  if ((local_38 <= local_48) && ((local_38 < local_48 || (local_30 < local_44)))) {
    local_48 = local_38;
    local_44 = local_30;
  }
  if ((local_48 < local_3c) || ((local_48 <= local_3c && (local_44 <= local_40)))) {
    if ((local_54 < uStack_14) ||
       ((local_48 = local_18, local_44 = uStack_14, local_54 <= uStack_14 && (local_60 <= local_18))
       )) {
      local_48 = local_60;
      local_44 = local_54;
    }
    if ((local_38 <= local_44) && ((local_38 < local_44 || (local_30 < local_48)))) {
      local_48 = local_30;
      local_44 = local_38;
    }
    if ((local_44 < local_4c) || ((local_44 <= local_4c && (local_48 <= local_50)))) {
      local_20 = local_18;
      local_1c = uStack_14;
      if ((local_38 <= uStack_14) && ((local_38 < uStack_14 || (local_30 < local_18)))) {
        local_20 = local_30;
        local_1c = local_38;
      }
      if ((local_1c < local_54) || ((local_1c <= local_54 && (local_20 <= local_60)))) {
        if ((local_38 < uStack_14) || ((local_38 <= uStack_14 && (local_30 <= local_18)))) {
          local_44 = 4;
        }
        else {
          local_44 = 3;
        }
      }
      else {
        local_44 = 2;
      }
    }
    else {
      local_44 = 1;
    }
  }
  else {
    local_44 = 0;
  }
  iVar1 = (int)param_2 >> 0x1f;
  if ((local_3c == 0) && (local_40 == 0)) {
    dVar8 = 0.0;
  }
  else {
    FUN_006f56f0();
    dVar8 = (dVar8 * 0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1]);
    FUN_006f8470();
    dVar8 = dVar8 / 0.6931471805599453;
  }
  dVar9 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),(float)dVar8);
  *param_3 = (float)dVar8;
  if ((local_4c == 0) && (local_50 == 0)) {
    dVar8 = 0.0;
  }
  else {
    FUN_006f56f0();
    dVar8 = (dVar9 * 0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1]);
    FUN_006f8470();
    dVar8 = dVar8 / 0.6931471805599453;
  }
  dVar10 = 0.0;
  dVar9 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),(float)dVar8);
  param_3[1] = (float)dVar8;
  if ((local_54 != 0) || (local_60 != 0)) {
    FUN_006f56f0();
    dVar10 = (dVar9 * 0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1])
    ;
    FUN_006f8470();
    dVar10 = dVar10 / 0.6931471805599453;
  }
  dVar9 = 0.0;
  dVar8 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),(float)dVar10);
  param_3[2] = (float)dVar10;
  if ((uStack_14 != 0) || (local_18 != 0)) {
    FUN_006f56f0();
    dVar9 = (dVar8 * 0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1]);
    FUN_006f8470();
    dVar9 = dVar9 / 0.6931471805599453;
  }
  dVar10 = 0.0;
  dVar8 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),(float)dVar9);
  param_3[3] = (float)dVar9;
  if ((local_38 != 0) || (local_30 != 0)) {
    FUN_006f56f0();
    dVar10 = (dVar8 * 0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1])
    ;
    FUN_006f8470();
    dVar10 = dVar10 / 0.6931471805599453;
  }
  param_3[4] = (float)dVar10;
  return local_44;
}

