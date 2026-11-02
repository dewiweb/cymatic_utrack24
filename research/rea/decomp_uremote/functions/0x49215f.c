// rea decompile_all
// name: FUN_0049215f
// address: 0x49215f
// body: available
// range: 0x49215f-0x492195 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049215f(void)

{
  int in_EAX;
  undefined4 in_ECX;
  int in_EDX;
  
  if (in_EDX != 0) {
    *(undefined4 *)(in_EDX + 0x14) = in_ECX;
    if (in_EAX == 0) {
      *(code **)(in_EDX + 0x10) = FUN_00492132;
    }
    else {
      *(int *)(in_EDX + 0x10) = in_EAX;
    }
    if (*(int *)(in_EDX + 0xc) != 0) {
      *(undefined4 *)(in_EDX + 0xc) = 0;
      FUN_00491216();
    }
    *(undefined4 *)(in_EDX + 0x130) = 0;
  }
  return;
}

