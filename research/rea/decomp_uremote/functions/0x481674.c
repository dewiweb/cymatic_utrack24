// rea decompile_all
// name: FUN_00481674
// address: 0x481674
// body: available
// range: 0x481674-0x481750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481674(int *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char local_1c [4];
  char *local_18;
  char local_14 [4];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar3 = (int)param_1;
  local_10 = *(undefined4 *)((int)param_1 + 0x15c);
  _memset(local_14,0,4);
  _memset(local_1c,0,4);
  local_8 = 0;
  if (0 < *(int *)((int)param_1 + 0xe4)) {
    param_1 = (int *)((int)param_1 + 0xe8);
    do {
      iVar4 = *(int *)(*param_1 + 0x14);
      local_c = *(int *)(*param_1 + 0x18);
      local_18 = local_14 + iVar4;
      if (local_14[iVar4] == '\0') {
        piVar1 = (int *)(iVar3 + 0x58 + iVar4 * 4);
        if (*piVar1 == 0) {
          iVar4 = FUN_00482aab();
          *piVar1 = iVar4;
        }
        FUN_0048149c(iVar3,*piVar1);
        *local_18 = '\x01';
      }
      pcVar2 = local_1c + local_c;
      if (*pcVar2 == '\0') {
        piVar1 = (int *)(iVar3 + 0x68 + local_c * 4);
        if (*piVar1 == 0) {
          iVar4 = FUN_00482aab();
          *piVar1 = iVar4;
        }
        FUN_0048149c(iVar3,*piVar1);
        *pcVar2 = '\x01';
      }
      local_8 = local_8 + 1;
      param_1 = param_1 + 1;
    } while (local_8 < *(int *)(iVar3 + 0xe4));
  }
  return;
}

