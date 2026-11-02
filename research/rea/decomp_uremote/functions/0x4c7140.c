// rea decompile_all
// name: FUN_004c7140
// address: 0x4c7140
// body: available
// range: 0x4c7140-0x4c718d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004c7140(int param_1)

{
  undefined4 uVar1;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  uVar1 = 0;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  if (param_1 != 0) {
    FUN_004c6fae(param_1,&local_1c);
    if (0 < local_14) {
      uVar1 = *local_1c;
    }
  }
  local_8 = 0xffffffff;
  _free(local_1c);
  return uVar1;
}

