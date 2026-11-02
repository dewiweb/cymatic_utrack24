// rea decompile_all
// name: __endthreadex
// address: 0x5b0fc0
// body: available
// range: 0x5b0fc0-0x5b0ffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5b0ff6 to EXTERNAL:0x51 KERNEL32.DLL::ExitThread (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 2008 Release */

void __cdecl __endthreadex(uint _Retval)

{
  BOOL BVar1;
  _ptiddata _Ptd;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_005f07f8);
  if (BVar1 != 0) {
    FUN_0041f3a2();
  }
  _Ptd = __getptd_noexit();
  if (_Ptd != (_ptiddata)0x0) {
    __freeptd(_Ptd);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}

