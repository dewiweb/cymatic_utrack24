// rea decompile_all
// name: __callthreadstartex
// address: 0x5b0ffd
// body: available
// range: 0x5b0ffd-0x5b1031 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __callthreadstartex
   
   Library: Visual Studio 2008 Release */

void __callthreadstartex(void)

{
  _ptiddata p_Var1;
  uint _Retval;
  _EXCEPTION_POINTERS *local_18;
  
  p_Var1 = __getptd();
  _Retval = (*p_Var1->_initaddr)(p_Var1->_initarg);
  __endthreadex(_Retval);
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}

