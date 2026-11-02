// rea decompile_all
// name: FUN_004763e5
// address: 0x4763e5
// body: available
// range: 0x4763e5-0x47644f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004763e5(void)

{
  float10 fVar1;
  undefined8 extraout_var;
  double dVar2;
  
  fVar1 = (float10)FUN_00476314();
  fVar1 = (float10)FUN_004a8ec6((float)fVar1,extraout_var);
  dVar2 = (double)(fVar1 * (float10)0.2409999966621399);
  fVar1 = (float10)FUN_00476330(dVar2);
  fVar1 = (float10)FUN_004a8ec6((float)fVar1);
  dVar2 = (double)(fVar1 * (float10)0.6909999847412109 + (float10)dVar2);
  fVar1 = (float10)FUN_0047634c(dVar2);
  fVar1 = (float10)FUN_004a8ec6((float)fVar1);
  FUN_0044bfab((float)(fVar1 * (float10)0.06800000369548798 + (float10)dVar2));
  return;
}

