// rea decompile_all
// name: __wcsicmp_l
// address: 0x100fbbba
// body: available
// range: 0x100fbbba-0x100fbcbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wcsicmp_l
   
   Library: Visual Studio 2010 Release */

int __cdecl __wcsicmp_l(wchar_t *_Str1,wchar_t *_Str2,_locale_t _Locale)

{
  wint_t wVar1;
  wint_t wVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,_Locale);
  if (_Str1 == (wchar_t *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_100fe6d4();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  else if (_Str2 == (wchar_t *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_100fe6d4();
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    iVar4 = 0x7fffffff;
  }
  else {
    if ((local_14.locinfo)->lc_category[0].wlocale == (wchar_t *)0x0) {
      iVar4 = (int)_Str1 - (int)_Str2;
      do {
        uVar5 = (uint)*(ushort *)(iVar4 + (int)_Str2);
        if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
          uVar5 = uVar5 + 0x20 & 0xffff;
        }
        uVar6 = (uint)(ushort)*_Str2;
        if ((0x40 < uVar6) && (uVar6 < 0x5b)) {
          uVar6 = uVar6 + 0x20 & 0xffff;
        }
        _Str2 = _Str2 + 1;
      } while (((short)uVar5 != 0) && ((short)uVar5 == (short)uVar6));
    }
    else {
      do {
        wVar1 = __towlower_l(*_Str1,&local_14);
        uVar5 = (uint)wVar1;
        _Str1 = _Str1 + 1;
        wVar2 = __towlower_l(*_Str2,&local_14);
        _Str2 = _Str2 + 1;
        uVar6 = (uint)wVar2;
        if (wVar1 == 0) break;
      } while (wVar1 == wVar2);
    }
    iVar4 = uVar5 - uVar6;
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return iVar4;
}

