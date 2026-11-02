// rea decompile_all
// name: FUN_00401248
// address: 0x401248
// body: available
// range: 0x401248-0x4012aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00401248(undefined4 *param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar3 = param_1 + 3;
    uVar2 = 0;
    do {
      if (*piVar3 != 0) {
        pcVar1 = *(code **)(*(int *)((int)&PTR_DAT_008f96cc + uVar2) + 0x14);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(*piVar3);
        }
        FUN_00411a5c(*piVar3);
        *piVar3 = 0;
      }
      uVar2 = uVar2 + 4;
      piVar3 = piVar3 + 1;
    } while (uVar2 < 0x10);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_00411a5c(param_1);
  }
  return;
}

