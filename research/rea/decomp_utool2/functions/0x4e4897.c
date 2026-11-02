// rea decompile_all
// name: __mbsdec_l
// address: 0x4e4897
// body: available
// range: 0x4e4897-0x4e4923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mbsdec_l
   
   Library: Visual Studio 2015 Release */

uchar * __cdecl __mbsdec_l(uchar *_Start,uchar *_Pos,_locale_t _Locale)

{
  int *piVar1;
  byte *pbVar2;
  int local_14 [2];
  int local_c;
  char local_8;
  
  if (_Start == (uchar *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004d0d1c();
  }
  else if (_Pos == (uchar *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_004d0d1c();
  }
  else if (_Start < _Pos) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,(__crt_locale_pointers *)_Locale);
    if (*(int *)(local_c + 8) != 0) {
      pbVar2 = _Pos + -1;
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < _Start) break;
      } while ((*(byte *)(*pbVar2 + 0x19 + local_c) & 4) != 0);
      _Pos = _Pos + -((int)_Pos - (int)pbVar2 & 1U);
    }
    if (local_8 != '\0') {
      *(uint *)(local_14[0] + 0x350) = *(uint *)(local_14[0] + 0x350) & 0xfffffffd;
      return _Pos + -1;
    }
    return _Pos + -1;
  }
  return (uchar *)0x0;
}

