// rea decompile_all
// name: FUN_00500c0f
// address: 0x500c0f
// body: available
// range: 0x500c0f-0x500c9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00500c0f(void)

{
  float *unaff_ESI;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00474d74(unaff_ESI[1]);
  if (fVar1 < (float10)0.002) {
    fVar1 = (float10)FUN_00474d74(unaff_ESI[3]);
    if (fVar1 < (float10)0.002) {
      fVar1 = (float10)FUN_00474d74(*unaff_ESI - 1.0);
      if (fVar1 < (float10)0.002) {
        fVar1 = (float10)FUN_00474d74(unaff_ESI[4] - 1.0);
        if (fVar1 < (float10)0.002) {
          return 1;
        }
      }
    }
  }
  return 0;
}

