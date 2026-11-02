// rea decompile_all
// name: FUN_0043b4f5
// address: 0x43b4f5
// body: available
// range: 0x43b4f5-0x43b548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0043b4f5(void)

{
  undefined1 local_44 [48];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x43b501;
  FUN_0046537e(local_14);
  local_8 = 0;
  FUN_0046d8be(local_44,local_14);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004652d6();
  FUN_0046dd96();
  local_8 = 0xffffffff;
  FUN_0046da60(local_44);
  return;
}

