// rea decompile_all
// name: FUN_0048dec4
// address: 0x48dec4
// body: available
// range: 0x48dec4-0x48dfd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048dec4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 byte *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_22c [128];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  byte *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar7 = local_22c;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 0x7fffffff;
    piVar7 = piVar7 + 1;
  }
  local_28 = 0;
  if (0 < param_5) {
    do {
      bVar1 = *(byte *)(local_28 + param_6);
      uVar5 = (uint)bVar1;
      piVar7 = *(int **)(param_1 + 0x74);
      iVar4 = (param_3 - (uint)*(byte *)(piVar7[1] + uVar5)) * 3;
      iVar6 = param_4 - (uint)*(byte *)(piVar7[2] + uVar5);
      iVar3 = (param_2 - (uint)*(byte *)(uVar5 + *piVar7)) * 2;
      iVar2 = iVar6 * iVar6 + iVar4 * iVar4 + iVar3 * iVar3;
      local_1c = local_22c;
      local_8 = (iVar3 + 8) * 0x20;
      local_18 = param_7;
      local_24 = 3;
      do {
        local_2c = 7;
        local_14 = (iVar4 + 6) * 0x18;
        local_10 = iVar2;
        do {
          local_20 = 3;
          iVar3 = local_10;
          local_c = (iVar6 + 4) * 0x10;
          do {
            if (iVar3 < *local_1c) {
              *local_1c = iVar3;
              *local_18 = bVar1;
            }
            iVar3 = iVar3 + local_c;
            local_c = local_c + 0x80;
            local_1c = local_1c + 1;
            local_18 = local_18 + 1;
            local_20 = local_20 + -1;
          } while (-1 < local_20);
          local_10 = local_10 + local_14;
          local_14 = local_14 + 0x120;
          local_2c = local_2c + -1;
        } while (-1 < local_2c);
        iVar2 = iVar2 + local_8;
        local_8 = local_8 + 0x200;
        local_24 = local_24 + -1;
      } while (-1 < local_24);
      local_28 = local_28 + 1;
    } while (local_28 < param_5);
  }
  return;
}

