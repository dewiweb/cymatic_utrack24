// rea decompile_all
// name: FUN_0047ee4b
// address: 0x47ee4b
// body: available
// range: 0x47ee4b-0x47ee9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047ee4b(uint param_1)

{
  int in_ECX;
  undefined1 local_28 [20];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x47ee57;
  local_14 = 0;
  if ((in_ECX == 0) || (param_1 < 5)) {
    FUN_004c6ae2();
  }
  else {
    FUN_00464b4e(local_28,param_1);
    local_8 = 0;
    FUN_0047ee23();
    local_8 = 0xffffffff;
    FUN_00464b99(local_28);
  }
  return;
}

