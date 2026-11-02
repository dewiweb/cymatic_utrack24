// rea decompile_all
// name: FUN_00515860
// address: 0x515860
// body: available
// range: 0x515860-0x5158b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515860(void)

{
  uint *in_ECX;
  undefined8 uVar1;
  
  if (*in_ECX != 0 || in_ECX[1] != 0) {
    uVar1 = FUN_0052e670();
    FUN_005158c0((uint)uVar1 - *in_ECX,
                 ((int)((ulonglong)uVar1 >> 0x20) - in_ECX[1]) - (uint)((uint)uVar1 < *in_ECX));
    in_ECX[2] = *in_ECX;
    in_ECX[3] = in_ECX[1];
    *in_ECX = 0;
    in_ECX[1] = 0;
  }
  return;
}

