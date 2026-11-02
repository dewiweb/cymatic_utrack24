// rea decompile_all
// name: FUN_00483f80
// address: 0x483f80
// body: available
// range: 0x483f80-0x48406c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00483f80(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int *local_8;
  
  iVar4 = *(int *)(param_1 + 0xd8) / *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x1c);
  iVar5 = *(int *)(param_1 + 0xdc) / *(int *)(param_2 + 0xc);
  FUN_00483ece(param_3,*(int *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0x1c));
  param_1 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    local_14 = param_3;
    do {
      local_10 = 0;
      puVar3 = *(undefined1 **)(param_4 + param_1 * 4);
      for (iVar1 = iVar2 << 3; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar7 = 0;
        if (0 < iVar5) {
          local_8 = local_14;
          local_1c = iVar5;
          do {
            pbVar6 = (byte *)(*local_8 + local_10);
            local_18 = iVar4;
            if (0 < iVar4) {
              do {
                iVar7 = iVar7 + (uint)*pbVar6;
                pbVar6 = pbVar6 + 1;
                local_18 = local_18 + -1;
              } while (local_18 != 0);
            }
            local_8 = local_8 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        *puVar3 = (char)((iVar7 + (iVar5 * iVar4) / 2) / (iVar5 * iVar4));
        local_10 = local_10 + iVar4;
        puVar3 = puVar3 + 1;
      }
      local_14 = local_14 + iVar5;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(param_2 + 0xc));
  }
  return;
}

