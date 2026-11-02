// rea decompile_all
// name: FUN_0048f0aa
// address: 0x48f0aa
// body: available
// range: 0x48f0aa-0x48f0eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f0aa(int param_1)

{
  void *_Dst;
  undefined4 *in_EAX;
  
  if (((param_1 != 0) && (in_EAX != (undefined4 *)0x0)) &&
     (_Dst = (void *)*in_EAX, _Dst != (void *)0x0)) {
    *in_EAX = 0;
    FUN_0048f0ec(param_1,_Dst,0x7fff,0xffffffff);
    _memset(_Dst,0,0x10c);
    FUN_00491789(param_1,_Dst);
  }
  return;
}

