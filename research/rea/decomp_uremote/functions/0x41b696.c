// rea decompile_all
// name: FUN_0041b696
// address: 0x41b696
// body: available
// range: 0x41b696-0x41b6d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041b696(void)

{
  uint in_EAX;
  undefined4 uVar1;
  int unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (*(uint *)(unaff_EDI + 4) < in_EAX) {
    uVar1 = FUN_00411976(0x10,*(undefined4 *)(unaff_EDI + 8),&local_8);
    *(undefined4 *)(unaff_EDI + 8) = uVar1;
    if (local_8 == 0) {
      *(uint *)(unaff_EDI + 4) = in_EAX + 7 & 0xfffffff8;
    }
  }
  return local_8;
}

