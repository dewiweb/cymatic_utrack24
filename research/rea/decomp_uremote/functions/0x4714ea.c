// rea decompile_all
// name: FUN_004714ea
// address: 0x4714ea
// body: available
// range: 0x4714ea-0x47152c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004714ea(void)

{
  int *in_EAX;
  uint uVar1;
  int in_ECX;
  
  while (in_ECX = in_ECX + -1, 0 < in_ECX) {
    uVar1 = FUN_00460a06();
    if (uVar1 == 0) break;
    if (uVar1 < 0x80) {
      *(char *)*in_EAX = (char)uVar1;
      *in_EAX = *in_EAX + 1;
    }
    else {
      FUN_004608c3(uVar1);
    }
  }
  *(undefined1 *)*in_EAX = 0;
  return;
}

