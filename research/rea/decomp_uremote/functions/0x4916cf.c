// rea decompile_all
// name: FUN_004916cf
// address: 0x4916cf
// body: available
// range: 0x4916cf-0x491749 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x491745 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_004916cf(undefined4 param_1,void *param_2,int param_3)

{
  int in_EAX;
  void *_Dst;
  int in_ECX;
  
  if (((0 < in_EAX) && (-1 < in_ECX)) && ((param_2 != (void *)0x0 || (in_ECX < 1)))) {
    if ((in_EAX <= 0x7fffffff - in_ECX) &&
       (_Dst = (void *)FUN_00491691(in_ECX + in_EAX,param_3), _Dst != (void *)0x0)) {
      if (0 < in_ECX) {
        _memcpy(_Dst,param_2,in_ECX * param_3);
      }
      _memset((void *)(in_ECX * param_3 + (int)_Dst),0,in_EAX * param_3);
      return _Dst;
    }
    return (void *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

