// rea decompile_all
// name: FUN_004a207d
// address: 0x4a207d
// body: available
// range: 0x4a207d-0x4a20f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004a207d(undefined4 *param_1)

{
  undefined4 *unaff_EDI;
  undefined4 uStack_34;
  undefined4 *apuStack_30 [5];
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0;
  apuStack_30[0] = param_1;
  local_14 = 0;
  uStack_34 = 0x4a209c;
  FUN_0046674d();
  local_8 = 0;
  local_14 = 1;
  if ((*(char *)*param_1 == '\0') && (*(char *)*unaff_EDI != '\0')) {
    local_18 = (undefined1 *)apuStack_30;
    uStack_34 = 0x4a20c2;
    FUN_004c751a();
    local_1c = (undefined1 *)&uStack_34;
    FUN_004c751a();
    FUN_004662e4(&local_18);
    apuStack_30[0] = param_1;
    uStack_34 = 0x4a20e5;
    FUN_00465317();
    apuStack_30[0] = (undefined4 *)0x4a20ed;
    FUN_004652d6();
  }
  return param_1;
}

