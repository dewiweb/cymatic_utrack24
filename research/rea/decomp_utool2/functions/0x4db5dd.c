// rea decompile_all
// name: __mbstowcs_s_l
// address: 0x4db5dd
// body: available
// range: 0x4db5dd-0x4db6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mbstowcs_s_l
   
   Library: Visual Studio 2015 Release */

errno_t __cdecl
__mbstowcs_s_l(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,char *_SrcBuf,
              size_t _MaxCount,_locale_t _Locale)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  int local_14;
  __crt_locale_pointers local_10 [8];
  char local_8;
  
  iVar4 = 0;
  if (_DstBuf == (wchar_t *)0x0) {
    if (_SizeInWords != 0) {
LAB_004db5fe:
      piVar1 = __errno();
      *piVar1 = 0x16;
      FUN_004d0d1c();
      return 0x16;
    }
  }
  else {
    if (_SizeInWords == 0) goto LAB_004db5fe;
    *_DstBuf = L'\0';
  }
  if (_PtNumOfCharConverted != (size_t *)0x0) {
    *_PtNumOfCharConverted = 0;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_14,(__crt_locale_pointers *)_Locale);
  sVar2 = _SizeInWords;
  if (_MaxCount <= _SizeInWords) {
    sVar2 = _MaxCount;
  }
  if (sVar2 < 0x80000000) {
    uVar3 = _mbstowcs_l_helper(_DstBuf,_SrcBuf,sVar2,local_10);
    if (uVar3 == 0xffffffff) {
      if (_DstBuf != (wchar_t *)0x0) {
        *_DstBuf = L'\0';
      }
      piVar1 = __errno();
      iVar4 = *piVar1;
      goto LAB_004db6a7;
    }
    uVar3 = uVar3 + 1;
    if (_DstBuf != (wchar_t *)0x0) {
      if (_SizeInWords < uVar3) {
        if (_MaxCount != 0xffffffff) {
          *_DstBuf = L'\0';
          piVar1 = __errno();
          iVar4 = 0x22;
          goto LAB_004db688;
        }
        iVar4 = 0x50;
        uVar3 = _SizeInWords;
      }
      _DstBuf[uVar3 - 1] = L'\0';
    }
    if (_PtNumOfCharConverted != (size_t *)0x0) {
      *_PtNumOfCharConverted = uVar3;
    }
  }
  else {
    piVar1 = __errno();
    iVar4 = 0x16;
LAB_004db688:
    *piVar1 = iVar4;
    FUN_004d0d1c();
  }
LAB_004db6a7:
  if (local_8 == '\0') {
    return iVar4;
  }
  *(uint *)(local_14 + 0x350) = *(uint *)(local_14 + 0x350) & 0xfffffffd;
  return iVar4;
}

