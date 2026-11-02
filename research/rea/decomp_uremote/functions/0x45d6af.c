// rea decompile_all
// name: FUN_0045d6af
// address: 0x45d6af
// body: available
// range: 0x45d6af-0x45d71e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045d6af(int param_1)

{
  undefined4 unaff_ESI;
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x45d6bb;
  if ((*(int *)(param_1 + 1000) == 0) && (*(int *)(param_1 + 0x130) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x130) + 0x2c))(local_18);
    local_8 = 0;
    FUN_00501d60();
    FUN_00466c04();
    local_8 = 0xffffffff;
    FUN_00501900();
  }
  else {
    FUN_0046537e(unaff_ESI);
  }
  return;
}

