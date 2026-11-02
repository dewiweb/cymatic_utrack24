// rea decompile_all
// name: FUN_00418e52
// address: 0x418e52
// body: available
// range: 0x418e52-0x418efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418e52(uint *param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  *param_4 = -1;
  FUN_00418d35(param_1,&local_20);
  if (local_18 == 3) {
    local_10 = *param_1;
    local_14 = param_1[2];
    piVar1 = param_2 + param_3 * 3;
    local_8 = param_2;
    *param_1 = local_20 + 1U;
    param_1[2] = local_1c - 1U;
    local_c = piVar1;
    if (local_20 + 1U < local_1c - 1U) {
      do {
        FUN_00418d35(param_1,&local_20);
        if (local_18 == 0) break;
        if ((param_2 != (int *)0x0) && (local_8 < piVar1)) {
          *local_8 = local_20;
          local_8[1] = local_1c;
          local_8[2] = local_18;
          piVar1 = local_c;
        }
        local_8 = local_8 + 3;
      } while (*param_1 < param_1[2]);
    }
    *param_4 = ((int)local_8 - (int)param_2) / 0xc;
    *param_1 = local_10;
    param_1[2] = local_14;
  }
  return;
}

