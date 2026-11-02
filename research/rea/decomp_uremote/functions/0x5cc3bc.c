// rea decompile_all
// name: __mbschr_l
// address: 0x5cc3bc
// body: available
// range: 0x5cc3bc-0x5cc477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mbschr_l
   
   Library: Visual Studio 2008 Release */

uchar * __cdecl __mbschr_l(uchar *_Str,uint _Ch,_locale_t _Locale)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
  if (_Str == (uchar *)0x0) {
    piVar3 = __errno();
    *piVar3 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
    _Str = (byte *)0x0;
  }
  else {
    if (*(int *)(local_10 + 8) == 0) {
      _Str = (uchar *)FUN_005b6920(_Str,_Ch);
    }
    else {
      while( true ) {
        bVar2 = *_Str;
        if (bVar2 == 0) break;
        if ((*(byte *)(bVar2 + 0x1d + local_10) & 4) == 0) {
          pbVar4 = _Str;
          if (_Ch == bVar2) break;
        }
        else {
          bVar1 = _Str[1];
          if (bVar1 == 0) goto LAB_005cc466;
          pbVar4 = _Str + 1;
          if (_Ch == CONCAT11(bVar2,bVar1)) goto LAB_005cc458;
        }
        _Str = pbVar4 + 1;
      }
      if (_Ch != (ushort)bVar2) {
LAB_005cc466:
        if (local_8 != '\0') {
          *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
        }
        return (uchar *)0x0;
      }
    }
LAB_005cc458:
    if (local_8 != '\0') {
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
    }
  }
  return _Str;
}

