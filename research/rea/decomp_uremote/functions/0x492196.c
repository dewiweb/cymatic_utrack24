// rea decompile_all
// name: FUN_00492196
// address: 0x492196
// body: available
// range: 0x492196-0x4921bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00492196(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    if ((*(uint *)(in_EAX + 0x2c) & 0x40) == 0) {
      *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) | 0x4000;
      return 1;
    }
    FUN_004913c4();
  }
  return 0;
}

