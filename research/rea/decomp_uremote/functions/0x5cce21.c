// rea decompile_all
// name: __Getcvt
// address: 0x5cce21
// body: available
// range: 0x5cce21-0x5cce36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Getcvt
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

_Cvtvec * __cdecl __Getcvt(_Cvtvec *__return_storage_ptr__)

{
  _Cvtvec *p_Var1;
  int iVar2;
  
  iVar2 = ____lc_handle_func();
  p_Var1 = *(_Cvtvec **)(iVar2 + 8);
  ____lc_codepage_func();
  return p_Var1;
}

