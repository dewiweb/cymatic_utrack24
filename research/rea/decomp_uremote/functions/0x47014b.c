// rea decompile_all
// name: FUN_0047014b
// address: 0x47014b
// body: available
// range: 0x47014b-0x470182 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_0047014b(double param_1,uint param_2)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  fVar2 = (float10)param_1;
  fVar3 = (float10)1;
  while( true ) {
    if ((uVar1 & 1) != 0) {
      fVar3 = fVar3 * fVar2;
    }
    uVar1 = uVar1 >> 1;
    if (uVar1 == 0) break;
    fVar2 = fVar2 * fVar2;
  }
  if ((int)param_2 < 0) {
    fVar3 = (float10)1 / fVar3;
  }
  return fVar3;
}

