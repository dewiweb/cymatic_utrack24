// rea decompile_all
// name: FUN_00460f6d
// address: 0x460f6d
// body: available
// range: 0x460f6d-0x460fa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00460f6d(undefined4 param_1,undefined4 param_2,int *param_3)

{
  float10 fVar1;
  double dVar2;
  double *unaff_retaddr;
  
  fVar1 = (float10)(**(code **)(*param_3 + 0xc))(param_2);
  dVar2 = _fabs((double)(fVar1 - (float10)*unaff_retaddr));
  return dVar2 < 2.220446049250313e-16;
}

