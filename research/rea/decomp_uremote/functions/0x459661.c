// rea decompile_all
// name: FUN_00459661
// address: 0x459661
// body: available
// range: 0x459661-0x4596cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00459661(void)

{
  int in_EAX;
  int iStack_10;
  int iStack_c;
  undefined1 *local_8;
  
  if (in_EAX < 0x5a0) {
    iStack_10 = in_EAX / 0x3c;
    iStack_c = in_EAX % 0x3c;
    local_8 = &stack0xffffffec;
    FUN_0046537e(&stack0xffffffec);
    FUN_00466882();
  }
  else {
    iStack_c = in_EAX / 0x5a0;
    if (0x16c < iStack_c) {
      iStack_c = iStack_c / 0x16d;
    }
    iStack_10 = 0x16d;
    local_8 = (undefined1 *)&iStack_10;
    FUN_0046537e();
    FUN_00466882();
  }
  return;
}

