// rea decompile_all
// name: FUN_005cd40f
// address: 0x5cd40f
// body: available
// range: 0x5cd40f-0x5cd446 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5cd446 with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */

void FUN_005cd40f(void)

{
  code *pcVar1;
  undefined1 local_54 [40];
  undefined1 local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x5cd41b;
  basic_string<>("string too long");
  local_8 = 0;
  FUN_005cd371(local_2c);
  __CxxThrowException_8(local_54,&DAT_00941544);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

