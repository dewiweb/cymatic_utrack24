// rea decompile_all
// name: FUN_005272e0
// address: 0x5272e0
// body: available
// range: 0x5272e0-0x52760f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005272e0(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  bool local_91;
  int local_90 [33];
  int local_c;
  char local_5;
  
  local_5 = '\x01';
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (in_ECX[1] == 0) {
    *in_ECX = *in_ECX + 1;
    *(undefined1 *)(param_1 + 0x170) = 1;
    *(byte *)(param_1 + 0x170) = *(byte *)(param_1 + 0x170) & 0x7f;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    in_ECX[1] = param_1;
  }
  else {
    local_c = in_ECX[1];
    local_90[0] = 0;
    local_91 = false;
    while (local_90[0] < 0x20) {
      local_90[local_90[0] + 1] = local_c;
      local_90[0] = local_90[0] + 1;
      cVar1 = FUN_005036a0(param_1 + 0x48,local_c + 0x48);
      if (cVar1 == '\0') {
        local_5 = '\0';
        param_1 = 0;
        goto LAB_0052746f;
      }
      local_91 = '\0' < cVar1;
      if ((*(int *)(local_c + 0x168 + (uint)local_91 * 4) == 0) ||
         ((local_91 && ((*(byte *)(local_c + 0x170) & 0x80) != 0)))) goto LAB_0052746f;
      local_c = *(int *)(local_c + 0x168 + (uint)local_91 * 4);
    }
    local_5 = '\0';
    param_1 = 0;
LAB_0052746f:
    if (local_5 == '\0') {
      param_1 = 0;
    }
    else {
      *in_ECX = *in_ECX + 1;
      *(undefined1 *)(param_1 + 0x170) = 1;
      *(byte *)(param_1 + 0x170) = *(byte *)(param_1 + 0x170) | 0x80;
      *(undefined4 *)(param_1 + 0x168) = 0;
      if (local_91 == false) {
        *(int *)(param_1 + 0x16c) = local_c;
      }
      else {
        *(byte *)(local_c + 0x170) = *(byte *)(local_c + 0x170) & 0x7f;
        *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(local_c + 0x168 + (uint)local_91 * 4);
      }
      *(int *)(local_c + 0x168 + (uint)local_91 * 4) = param_1;
      while( true ) {
        iVar2 = local_90[0];
        local_90[0] = local_90[0] + -1;
        if (local_90[0] < 0) break;
        if (local_90[0] != 0) {
          local_91 = *(int *)(local_90[local_90[0]] + 0x16c) == local_90[iVar2];
        }
        iVar2 = FUN_00527de0(local_90[iVar2]);
        local_90[local_90[0] + 1] = iVar2;
        iVar2 = FUN_00527eb0(local_90[local_90[0] + 1]);
        local_90[local_90[0] + 1] = iVar2;
        if (local_90[0] == 0) {
          in_ECX[1] = local_90[1];
        }
        else {
          *(int *)(local_90[local_90[0]] + 0x168 + (uint)local_91 * 4) = local_90[local_90[0] + 1];
        }
      }
    }
  }
  return param_1;
}

