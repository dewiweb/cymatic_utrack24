// rea decompile_all
// name: FUN_004feef9
// address: 0x4feef9
// body: available
// range: 0x4feef9-0x4fef6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004feef9(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 local_5c [8];
  undefined1 local_54 [64];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x4fef05;
  FUN_0043bc2d();
  FUN_004a6dc2();
  cVar1 = FUN_004a4daa();
  if (cVar1 == '\0') {
    FUN_005002da(local_5c);
    local_8 = 0;
    FUN_00478556(local_14 + 8);
    FUN_00501043(local_54,param_3,0);
    local_8 = 0xffffffff;
    FUN_004a6c46(local_5c);
  }
  return;
}

