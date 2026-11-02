// rea decompile_all
// name: FUN_00476606
// address: 0x476606
// body: available
// range: 0x476606-0x4766f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00476606(undefined4 param_1,float param_2)

{
  float10 fVar1;
  
  FUN_004d076d();
  FUN_00475f21();
  FUN_004d076d();
  FUN_00475f21();
  fVar1 = (float10)FUN_00474d74();
  if ((float10)param_2 < fVar1 == ((float10)param_2 == fVar1)) {
    FUN_0043bcfe(0);
    FUN_0043d2e1(0x3f800000);
    FUN_00474d74();
    FUN_00474d74();
    FUN_00475fbe();
  }
  else {
    FUN_004d076d();
  }
  return;
}

