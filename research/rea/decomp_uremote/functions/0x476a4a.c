// rea decompile_all
// name: FUN_00476a4a
// address: 0x476a4a
// body: available
// range: 0x476a4a-0x476b89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476a4a(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_10;
  int local_c;
  
  FUN_004761ad();
  local_c = 0;
  local_20 = 1;
  if (1 < *(int *)(param_1 + 0x1c)) {
    local_1c = 0x10;
    do {
      iVar1 = FUN_00470221(*(double *)(*(int *)(param_1 + 0x14) + local_1c) * (double)(param_3 + -1)
                          );
      iVar1 = iVar1 - local_c;
      FUN_004761ad();
      local_10 = 0;
      if (0 < iVar1) {
        uVar5 = local_18 >> 8 & 0xff00ff;
        do {
          puVar6 = (uint *)(param_2 + local_c * 4);
          *puVar6 = local_24;
          iVar2 = (local_10 << 8) / iVar1;
          uVar3 = *puVar6 >> 8 & 0xff00ff;
          uVar4 = *puVar6 & 0xff00ff;
          local_c = local_c + 1;
          local_10 = local_10 + 1;
          *puVar6 = (((uVar5 - uVar3) * iVar2 & 0xffffff00) + uVar3 * 0x100 ^
                    (((local_18 & 0xff00ff) - uVar4) * iVar2 >> 8) + uVar4) & 0xff00ff ^
                    ((uVar5 - uVar3) * iVar2 & 0xffffff00) + uVar3 * 0x100;
        } while (local_10 < iVar1);
      }
      local_24 = local_18;
      local_20 = local_20 + 1;
      local_1c = local_1c + 0x10;
    } while (local_20 < *(int *)(param_1 + 0x1c));
  }
  if (local_c < param_3) {
    puVar6 = (uint *)(param_2 + local_c * 4);
    for (param_3 = param_3 - local_c; param_3 != 0; param_3 = param_3 + -1) {
      *puVar6 = local_24;
      puVar6 = puVar6 + 1;
    }
  }
  return;
}

