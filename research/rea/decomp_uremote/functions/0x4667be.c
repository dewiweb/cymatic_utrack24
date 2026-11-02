// rea decompile_all
// name: FUN_004667be
// address: 0x4667be
// body: available
// range: 0x4667be-0x466846 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004667be(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [20];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4667ca;
  local_14 = 0;
  if (*(char *)*param_1 == '\0') {
    FUN_004652cd();
  }
  else {
    FUN_004661c6(local_28);
    local_8 = 0;
    do {
      iVar1 = FUN_0044eba8();
      iVar2 = FUN_00470235(param_2);
      if (-1 < iVar2) {
        FUN_00466207();
      }
    } while (iVar1 != 0);
    FUN_00466207();
    FUN_004652e4();
    FUN_004652d6();
  }
  return;
}

