// rea decompile_all
// name: FUN_004a4a67
// address: 0x4a4a67
// body: available
// range: 0x4a4a67-0x4a4aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4a67(float param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)FUN_00474dff(param_3);
  fVar1 = *unaff_EDI;
  fVar2 = unaff_EDI[1];
  fVar4 = (float10)FUN_00474dcb(param_3);
  *unaff_ESI = (float)(fVar3 * (float10)param_1 + (float10)fVar1);
  unaff_ESI[1] = (float)((float10)fVar2 - fVar4 * (float10)param_2);
  return;
}

