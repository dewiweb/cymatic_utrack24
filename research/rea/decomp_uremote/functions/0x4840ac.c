// rea decompile_all
// name: FUN_004840ac
// address: 0x4840ac
// body: available
// range: 0x4840ac-0x484131 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004840ac(uint param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_8;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  FUN_00483ece(param_3,*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0x1c));
  local_8 = 0;
  if (0 < *(int *)(param_2 + 0xc)) {
    param_4 = param_4 - (int)param_3;
    do {
      param_1 = 0;
      puVar5 = *(undefined1 **)(param_4 + (int)param_3);
      pbVar3 = (byte *)*param_3;
      for (iVar1 = iVar2 << 3; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar4 = pbVar3[1] + param_1;
        param_1 = param_1 ^ 1;
        *puVar5 = (char)((int)((uint)*pbVar3 + iVar4) >> 1);
        puVar5 = puVar5 + 1;
        pbVar3 = pbVar3 + 2;
      }
      local_8 = local_8 + 1;
      param_3 = param_3 + 1;
    } while (local_8 < *(int *)(param_2 + 0xc));
  }
  return;
}

