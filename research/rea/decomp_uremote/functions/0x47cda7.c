// rea decompile_all
// name: FUN_0047cda7
// address: 0x47cda7
// body: available
// range: 0x47cda7-0x47cded inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047cda7(void)

{
  undefined4 *in_ECX;
  undefined4 extraout_EDX;
  undefined4 auStack_4c [14];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x47cdb3;
  auStack_4c[0] = 0x47cdbc;
  FUN_0047cd2e();
  local_14 = (undefined1 *)auStack_4c;
  FUN_004d076d();
  FUN_00476c68();
  local_8 = 0;
  auStack_4c[0] = extraout_EDX;
  (**(code **)(*(int *)*in_ECX + 0x44))();
  FUN_00476da0();
  return;
}

