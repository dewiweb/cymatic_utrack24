// rea decompile_all
// name: std::_Locinfo::_Locinfo_dtor
// address: 0x5cd085
// body: available
// range: 0x5cd085-0x5cd0ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static void __cdecl std::_Locinfo::_Locinfo_dtor(class std::_Locinfo *)
   
   Library: Visual Studio 2008 Release */

void __cdecl std::_Locinfo::_Locinfo_dtor(_Locinfo *param_1)

{
  _Locinfo *_Locale;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    if (*(uint *)(param_1 + 0x54) < 0x10) {
      _Locale = param_1 + 0x40;
    }
    else {
      _Locale = *(_Locinfo **)(param_1 + 0x40);
    }
    _setlocale(0,(char *)_Locale);
  }
  return;
}

