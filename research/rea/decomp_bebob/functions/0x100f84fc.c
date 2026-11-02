// rea decompile_all
// name: __wcstombs_s_l
// address: 0x100f84fc
// body: available
// range: 0x100f84fc-0x100f85ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wcstombs_s_l
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
__wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,wchar_t *_Src,
              size_t _MaxCountInBytes,_locale_t _Locale)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  errno_t local_8;
  
  local_8 = 0;
  if (_Dst == (char *)0x0) {
    if (_DstSizeInBytes == 0) goto LAB_100f8518;
  }
  else if (_DstSizeInBytes != 0) {
LAB_100f8518:
    if (_Dst != (char *)0x0) {
      *_Dst = '\0';
    }
    if (_PtNumOfCharConverted != (size_t *)0x0) {
      *_PtNumOfCharConverted = 0;
    }
    sVar1 = _MaxCountInBytes;
    if (_DstSizeInBytes < _MaxCountInBytes) {
      sVar1 = _DstSizeInBytes;
    }
    if (sVar1 < 0x80000000) {
      iVar2 = __wcstombs_l_helper(_Dst,_Src,sVar1,_Locale);
      if (iVar2 == -1) {
        if (_Dst != (char *)0x0) {
          *_Dst = '\0';
        }
        piVar3 = __errno();
        return *piVar3;
      }
      uVar4 = iVar2 + 1;
      if (_Dst != (char *)0x0) {
        if (_DstSizeInBytes < uVar4) {
          if ((_MaxCountInBytes != 0xffffffff) && (*_Dst = '\0', _DstSizeInBytes <= uVar4)) {
            piVar3 = __errno();
            iVar2 = 0x22;
            goto LAB_100f8566;
          }
          local_8 = 0x50;
          uVar4 = _DstSizeInBytes;
        }
        _Dst[uVar4 - 1] = '\0';
      }
      if (_PtNumOfCharConverted == (size_t *)0x0) {
        return local_8;
      }
      *_PtNumOfCharConverted = uVar4;
      return local_8;
    }
  }
  piVar3 = __errno();
  iVar2 = 0x16;
LAB_100f8566:
  *piVar3 = iVar2;
  FUN_100fe6d4();
  return iVar2;
}

