// rea decompile_all
// name: ___pctype_func
// address: 0x5c85ed
// body: available
// range: 0x5c85ed-0x5c8615 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___pctype_func
   
   Library: Visual Studio 2008 Release */

ushort * __cdecl ___pctype_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_00956c88) && ((p_Var1->_ownlocale & DAT_00956ba4) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (ushort *)ptVar2[1].lc_category[0].locale;
}

