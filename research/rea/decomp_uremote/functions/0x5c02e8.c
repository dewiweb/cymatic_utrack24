// rea decompile_all
// name: ___check_float_string
// address: 0x5c02e8
// body: available
// range: 0x5c02e8-0x5c033e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___check_float_string
   
   Library: Visual Studio 2008 Release */

undefined4 ___check_float_string(size_t param_1,void *param_2,undefined4 *param_3)

{
  size_t _Count;
  void *pvVar1;
  size_t *unaff_ESI;
  undefined4 *unaff_EDI;
  
  _Count = *unaff_ESI;
  if (param_1 == _Count) {
    if ((void *)*unaff_EDI == param_2) {
      pvVar1 = __calloc_crt(_Count,2);
      *unaff_EDI = pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *param_3 = 1;
      _memcpy((void *)*unaff_EDI,param_2,*unaff_ESI);
    }
    else {
      pvVar1 = __recalloc_crt((void *)*unaff_EDI,_Count,2);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *unaff_EDI = pvVar1;
    }
    *unaff_ESI = *unaff_ESI << 1;
  }
  return 1;
}

