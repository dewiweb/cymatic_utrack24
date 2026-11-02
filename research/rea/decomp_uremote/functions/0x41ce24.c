// rea decompile_all
// name: FUN_0041ce24
// address: 0x41ce24
// body: available
// range: 0x41ce24-0x41d066 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0041ce24(uint *param_1,short *param_2,int param_3,uint *param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  undefined4 *local_c;
  uint local_8;
  
  _memset(param_1,0,0x80);
  uVar2 = *param_4;
  param_1[4] = uVar2;
  uVar6 = FUN_00411976(0x30,0,&local_8);
  param_1[2] = uVar6;
  if (local_8 == 0) {
    local_c = (undefined4 *)FUN_00411976(8,0,&local_8);
    param_1[3] = (uint)local_c;
    if (local_8 == 0) {
      uVar6 = param_1[2];
      local_8 = 0;
      *param_1 = (int)param_2[1];
      sVar1 = *param_2;
      param_1[1] = (int)sVar1;
      iVar8 = 0;
      if ((int)sVar1 != 0) {
        do {
          iVar12 = *(short *)(*(int *)(param_2 + 6) + local_8 * 2) + 1;
          iVar7 = iVar12 - iVar8;
          piVar9 = (int *)(iVar8 * 0x30 + uVar6);
          *local_c = piVar9;
          local_c[1] = iVar7;
          if (0 < iVar7) {
            *piVar9 = iVar12 * 0x30 + -0x30 + uVar6;
            piVar9[2] = (int)local_c;
            piVar11 = piVar9;
            if (1 < iVar7) {
              iVar7 = iVar7 + -1;
              piVar10 = piVar9;
              do {
                iVar7 = iVar7 + -1;
                piVar11 = piVar10 + 0xc;
                piVar10[1] = (int)piVar11;
                *piVar11 = (int)piVar10;
                piVar10[0xe] = (int)local_c;
                piVar10 = piVar11;
              } while (iVar7 != 0);
            }
            piVar11[1] = (int)piVar9;
          }
          local_c = local_c + 2;
          local_8 = local_8 + 1;
          iVar8 = iVar12;
        } while (local_8 < param_1[1]);
      }
      uVar6 = param_1[2];
      iVar8 = *(int *)(param_2 + 2);
      local_8 = 0;
      if (*param_1 != 0) {
        puVar13 = (uint *)(uVar6 + 0xc);
        do {
          uVar3 = puVar13[-2];
          if ((*(byte *)(local_8 + *(int *)(param_2 + 4)) & 1) == 0) {
            *puVar13 = 1;
          }
          iVar12 = local_8 * 8;
          cVar4 = FUN_0041cd47();
          *(char *)(puVar13 + 2) = cVar4;
          iVar7 = *(int *)(iVar8 + ((int)(uVar3 - uVar6) / 0x30) * 8 + 4);
          iVar12 = *(int *)(iVar12 + 4 + iVar8);
          cVar5 = FUN_0041cd47();
          uVar3 = *puVar13;
          *(char *)((int)puVar13 + 9) = cVar5;
          if (((uVar3 & 1) != 0) ||
             ((cVar4 == cVar5 &&
              ((cVar5 != '\x04' || (iVar7 = FUN_0040d569(iVar7 - iVar12), iVar7 != 0)))))) {
            *puVar13 = uVar3 | 2;
          }
          local_8 = local_8 + 1;
          puVar13 = puVar13 + 0xc;
        } while (local_8 < *param_1);
      }
      param_1[6] = (uint)param_4;
      param_1[5] = (uint)param_2;
      FUN_0041cd87(0);
      FUN_0041cbc9(param_1);
      local_8 = FUN_0041c731(param_3 + 0x10,param_3 + 0x1c,uVar2);
      if (local_8 == 0) {
        local_8 = FUN_0041c731(param_3 + 0x34,param_3 + 0x40,uVar2);
      }
    }
  }
  return local_8;
}

