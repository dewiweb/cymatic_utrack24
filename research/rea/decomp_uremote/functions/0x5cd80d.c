// rea decompile_all
// name: _Atexit
// address: 0x5cd80d
// body: available
// range: 0x5cd80d-0x5cd832 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5cd81c to 0x5b8cec _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2008 Release */

void __cdecl _Atexit(_func_void *param_1)

{
  if (DAT_009574bc == 0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  DAT_009574bc = DAT_009574bc + -1;
  *(_func_void **)(DAT_009574bc * 4 + 0x95d620) = param_1;
  return;
}

