// rea decompile_all
// name: FUN_004a1381
// address: 0x4a1381
// body: available
// range: 0x4a1381-0x4a13c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a1381(undefined4 param_1)

{
  float *unaff_ESI;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_004a1206(param_1,&local_10);
  FUN_004a134f();
  *unaff_ESI = local_10;
  unaff_ESI[1] = local_18;
  unaff_ESI[2] = local_c - local_10;
  unaff_ESI[3] = local_14 - local_18;
  return;
}

