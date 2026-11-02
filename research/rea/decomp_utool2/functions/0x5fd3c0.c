// rea decompile_all
// name: FUN_005fd3c0
// address: 0x5fd3c0
// body: available
// range: 0x5fd3c0-0x5fd6e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005fd3c0(int param_1,uint param_2,float *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  uVar8 = 0;
  local_28 = 0;
  iVar1 = *(int *)(param_1 + -8);
  local_14 = *(uint *)(param_1 + -4) - iVar1;
  local_10 = (*(int *)(param_1 + -0xc) - iVar1) + local_14;
  uVar4 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = *(uint *)(param_1 + -4);
  local_c = ((*(int *)(param_1 + -0xc) * 2 - *(int *)(param_1 + -0x10)) - iVar1) + local_10;
  if (param_2 != 0) {
    do {
      uVar2 = *(uint *)(param_1 + local_1c * 4);
      uVar5 = uVar2 - local_18;
      local_28 = local_28 + ((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
      uVar6 = uVar5 - local_14;
      local_24 = local_24 + ((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f));
      uVar7 = uVar6 - local_10;
      local_20 = local_20 + ((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f));
      uVar4 = uVar4 + ((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f));
      uVar3 = (int)(uVar7 - local_c) >> 0x1f;
      uVar8 = uVar8 + ((uVar7 - local_c ^ uVar3) - uVar3);
      local_1c = local_1c + 1;
      local_18 = uVar2;
      local_14 = uVar5;
      local_10 = uVar6;
      local_c = uVar7;
    } while (local_1c < param_2);
  }
  uVar2 = local_24;
  if (local_20 < local_24) {
    uVar2 = local_20;
  }
  if (uVar4 < uVar2) {
    uVar2 = uVar4;
  }
  if (uVar8 < uVar2) {
    uVar2 = uVar8;
  }
  if (local_28 < uVar2) {
    local_1c = 0;
  }
  else {
    uVar2 = local_20;
    if (uVar4 < local_20) {
      uVar2 = uVar4;
    }
    if (uVar8 < uVar2) {
      uVar2 = uVar8;
    }
    if (local_24 < uVar2) {
      local_1c = 1;
    }
    else {
      uVar2 = uVar4;
      if (uVar8 < uVar4) {
        uVar2 = uVar8;
      }
      if (local_20 < uVar2) {
        local_1c = 2;
      }
      else {
        local_1c = 4 - (uint)(uVar4 < uVar8);
      }
    }
  }
  iVar1 = (int)param_2 >> 0x1f;
  if (local_28 == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = (((double)(int)local_28 + (double)(&DAT_00c24bb0)[-((int)local_28 >> 0x1f)]) *
            0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1]);
    FUN_006f8470();
    dVar9 = dVar9 / 0.6931471805599453;
  }
  *param_3 = (float)dVar9;
  if (local_24 == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = (((double)(int)local_24 + (double)(&DAT_00c24bb0)[-((int)local_24 >> 0x1f)]) *
            0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1]);
    FUN_006f8470();
    dVar9 = dVar9 / 0.6931471805599453;
  }
  param_3[1] = (float)dVar9;
  if (local_20 == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = (((double)(int)local_20 + (double)(&DAT_00c24bb0)[-((int)local_20 >> 0x1f)]) *
            0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1]);
    FUN_006f8470();
    dVar9 = dVar9 / 0.6931471805599453;
  }
  param_3[2] = (float)dVar9;
  if (uVar4 == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = (((double)(int)uVar4 + (double)(&DAT_00c24bb0)[-((int)uVar4 >> 0x1f)]) *
            0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1]);
    FUN_006f8470();
    dVar9 = dVar9 / 0.6931471805599453;
  }
  dVar10 = 0.0;
  param_3[3] = (float)dVar9;
  if (uVar8 != 0) {
    dVar10 = (((double)(int)uVar8 + (double)(&DAT_00c24bb0)[-((int)uVar8 >> 0x1f)]) *
             0.6931471805599453) / ((double)(int)param_2 + (double)(&DAT_00c24bb0)[-iVar1]);
    FUN_006f8470();
    dVar10 = dVar10 / 0.6931471805599453;
  }
  param_3[4] = (float)dVar10;
  return local_1c;
}

