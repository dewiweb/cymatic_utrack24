// rea decompile_all
// name: FUN_0047551b
// address: 0x47551b
// body: available
// range: 0x47551b-0x475581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047551b(int param_1)

{
  float fVar1;
  float *in_EAX;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  float10 fVar2;
  
  *unaff_ESI = in_ECX;
  unaff_ESI[1] = param_1;
  *(double *)(unaff_ESI + 2) = (double)*in_EAX;
  *(double *)(unaff_ESI + 4) = (double)in_EAX[1];
  fVar1 = (*in_EAX - in_EAX[2]) * (*in_EAX - in_EAX[2]) +
          (in_EAX[1] - in_EAX[3]) * (in_EAX[1] - in_EAX[3]);
  *(double *)(unaff_ESI + 6) = (double)fVar1;
  fVar2 = (float10)FUN_005afec4((double)fVar1);
  *(double *)(unaff_ESI + 8) = (double)((float10)param_1 / fVar2);
  return;
}

