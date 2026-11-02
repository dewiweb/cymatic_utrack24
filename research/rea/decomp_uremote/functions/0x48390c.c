// rea decompile_all
// name: FUN_0048390c
// address: 0x48390c
// body: available
// range: 0x48390c-0x4839c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048390c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char local_10 [4];
  int local_c;
  int *local_8;
  
  FUN_004832b5();
  bVar4 = *(int *)(param_1 + 300) != 0;
  _memset(local_10,0,4);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0xe4)) {
    local_8 = (int *)(param_1 + 0xe8);
    do {
      if (bVar4) {
        iVar3 = *(int *)(*local_8 + 0x18);
LAB_00483970:
        if (local_10[iVar3] == '\0') {
          piVar2 = (int *)(param_1 + 0x58 + iVar3 * 4);
          if (bVar4) {
            piVar2 = (int *)(param_1 + 0x68 + iVar3 * 4);
          }
          if (*piVar2 == 0) {
            iVar1 = FUN_00482aab();
            *piVar2 = iVar1;
          }
          FUN_0048149c(param_1,*piVar2);
          local_10[iVar3] = '\x01';
        }
      }
      else if (*(int *)(param_1 + 0x134) == 0) {
        iVar3 = *(int *)(*local_8 + 0x14);
        goto LAB_00483970;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
    } while (local_c < *(int *)(param_1 + 0xe4));
  }
  return;
}

