// rea decompile_all
// name: _wcscspn
// address: 0x4e05a6
// body: available
// range: 0x4e05a6-0x4e05f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _wcscspn
   
   Library: Visual Studio 2015 Release */

size_t __cdecl _wcscspn(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  
  pwVar1 = _Str;
  if (*_Str != L'\0') {
    do {
      if (*_Control != L'\0') {
        pwVar3 = _Control;
        wVar2 = *_Control;
        do {
          if (*pwVar1 == wVar2) goto LAB_004e05eb;
          pwVar3 = pwVar3 + 1;
          wVar2 = *pwVar3;
        } while (wVar2 != L'\0');
      }
      pwVar1 = pwVar1 + 1;
    } while (*pwVar1 != L'\0');
  }
LAB_004e05eb:
  return (int)pwVar1 - (int)_Str >> 1;
}

