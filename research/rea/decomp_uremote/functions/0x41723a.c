// rea decompile_all
// name: FUN_0041723a
// address: 0x41723a
// body: available
// range: 0x41723a-0x4174fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041723a(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *piVar12;
  byte *pbVar13;
  uint local_18;
  uint local_14;
  int local_c;
  byte *local_8;
  
  local_c = 0;
  pbVar10 = param_2 + 1;
  if (pbVar10 <= param_3) {
    bVar1 = *param_2;
    if ((char)bVar1 < '\0') {
      if (((bVar1 & 8) != 0) && (local_c = FUN_00415e6e(param_3), local_c != 0)) {
        return local_c;
      }
      iVar3 = *(int *)(param_1 + 0x10);
      uVar6 = (bVar1 & 0x3f) + iVar3;
      if (*(uint *)(param_1 + 0x14) < uVar6) {
        uVar6 = uVar6 + 3 & 0xfffffffc;
        if (0x40 < uVar6) {
          return 8;
        }
        uVar7 = FUN_00411976(0x18,*(undefined4 *)(param_1 + 0x18),&local_c);
        *(undefined4 *)(param_1 + 0x18) = uVar7;
        if (local_c != 0) {
          return local_c;
        }
        *(uint *)(param_1 + 0x14) = uVar6;
      }
      local_18 = 0;
      piVar12 = (int *)(iVar3 * 0x18 + *(int *)(param_1 + 0x18));
      if ((bVar1 & 0x3f) == 0) {
        return local_c;
      }
      local_8 = param_2 + 4;
      pbVar11 = param_2 + 3;
      param_2 = param_2 + 2;
      while (local_14 = 0, param_2 <= param_3) {
        bVar2 = *pbVar10;
        pbVar13 = pbVar11 + 1;
        *piVar12 = 0x10000;
        pbVar9 = pbVar10 + 1;
        pbVar4 = param_2 + 1;
        pbVar5 = local_8 + 1;
        if ((bVar2 & 0x10) != 0) {
          if (param_3 < pbVar13) {
            return 8;
          }
          pbVar9 = pbVar10 + 3;
          pbVar13 = pbVar11 + 3;
          *piVar12 = ((int)(short)((short)(char)pbVar10[1] << 8) | (uint)pbVar10[2]) << 4;
          pbVar4 = param_2 + 3;
          pbVar5 = local_8 + 3;
        }
        local_8 = pbVar5;
        param_2 = pbVar4;
        piVar12[1] = 0x10000;
        pbVar10 = pbVar9;
        if ((bVar2 & 0x20) != 0) {
          if (param_3 < pbVar13) {
            return 8;
          }
          param_2 = param_2 + 2;
          local_8 = local_8 + 2;
          pbVar10 = pbVar9 + 2;
          pbVar13 = pbVar13 + 2;
          piVar12[1] = ((int)(short)((short)(char)*pbVar9 << 8) | (uint)pbVar9[1]) << 4;
        }
        if ((bVar2 & 3) == 1) {
          if (param_3 < pbVar13) {
            return 8;
          }
          param_2 = param_2 + 2;
          local_8 = local_8 + 2;
          pbVar11 = pbVar10 + 2;
          pbVar13 = pbVar13 + 2;
          local_14 = (int)(short)((short)(char)*pbVar10 << 8) | (uint)pbVar10[1];
        }
        else {
          pbVar11 = pbVar10;
          if ((bVar2 & 3) == 2) {
            if (param_3 < param_2) {
              return 8;
            }
            local_14 = (uint)(char)*pbVar10;
            pbVar11 = pbVar10 + 1;
            param_2 = param_2 + 1;
            local_8 = local_8 + 1;
            pbVar13 = pbVar13 + 1;
          }
        }
        bVar8 = bVar2 >> 2 & 3;
        if (bVar8 == 1) {
          if (param_3 < pbVar13) {
            return 8;
          }
          param_2 = param_2 + 2;
          local_8 = local_8 + 2;
          pbVar10 = pbVar11 + 2;
          pbVar13 = pbVar13 + 2;
          uVar6 = (int)(short)((short)(char)*pbVar11 << 8) | (uint)pbVar11[1];
        }
        else if (bVar8 == 2) {
          if (param_3 < param_2) {
            return 8;
          }
          uVar6 = (uint)(char)*pbVar11;
          param_2 = param_2 + 1;
          local_8 = local_8 + 1;
          pbVar13 = pbVar13 + 1;
          pbVar10 = pbVar11 + 1;
        }
        else {
          uVar6 = 0;
          pbVar10 = pbVar11;
        }
        piVar12[2] = local_14;
        piVar12[3] = uVar6;
        if ((bVar2 & 0x40) == 0) {
          if (param_3 < param_2) {
            return 8;
          }
          uVar6 = (uint)*pbVar10;
          pbVar11 = pbVar10 + 1;
          param_2 = param_2 + 1;
          local_8 = local_8 + 1;
          pbVar13 = pbVar13 + 1;
        }
        else {
          if (param_3 < pbVar13) {
            return 8;
          }
          param_2 = param_2 + 2;
          local_8 = local_8 + 2;
          pbVar11 = pbVar10 + 2;
          pbVar13 = pbVar13 + 2;
          uVar6 = (uint)CONCAT11(*pbVar10,pbVar10[1]);
        }
        piVar12[5] = uVar6;
        if ((bVar2 & 0x80) == 0) {
          if (param_3 < pbVar13) {
            return 8;
          }
          param_2 = param_2 + 2;
          local_8 = local_8 + 2;
          pbVar10 = pbVar11 + 2;
          uVar6 = (uint)*pbVar11;
          iVar3 = 2;
        }
        else {
          if (param_3 < local_8) {
            return 8;
          }
          param_2 = param_2 + 3;
          local_8 = local_8 + 3;
          pbVar10 = pbVar11 + 3;
          uVar6 = (uint)CONCAT11(*pbVar11,pbVar11[1]);
          iVar3 = 3;
        }
        pbVar11 = pbVar13 + iVar3;
        piVar12[4] = uVar6 << 8 | (uint)pbVar10[-1];
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        local_18 = local_18 + 1;
        piVar12 = piVar12 + 6;
        if ((bVar1 & 0x3f) <= local_18) {
          return local_c;
        }
      }
    }
  }
  return 8;
}

