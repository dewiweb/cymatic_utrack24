// rea decompile_all
// name: FUN_00411a6e
// address: 0x411a6e
// body: available
// range: 0x411a6e-0x411aa9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_00411a6e(void *param_1,size_t param_2,int *param_3)

{
  void *_Dst;
  int local_8;
  
  _Dst = (void *)FUN_0041194c(param_2,&local_8);
  if ((local_8 == 0) && (param_1 != (void *)0x0)) {
    _memcpy(_Dst,param_1,param_2);
  }
  *param_3 = local_8;
  return _Dst;
}

