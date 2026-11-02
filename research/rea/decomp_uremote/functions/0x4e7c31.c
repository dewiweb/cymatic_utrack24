// rea decompile_all
// name: FUN_004e7c31
// address: 0x4e7c31
// body: available
// range: 0x4e7c31-0x4e7cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e7c31(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = FUN_004c69c8();
  if (iVar1 != 0) {
    (**(code **)(*unaff_ESI + 0xb0))();
    FUN_004c6c2a();
    FUN_0049f50b();
    FUN_004c6670(param_3,unaff_ESI);
    FUN_004c4d7a();
  }
  return;
}

