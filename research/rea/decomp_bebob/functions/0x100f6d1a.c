// rea decompile_all
// name: __vsnwprintf_s_l
// address: 0x100f6d1a
// body: available
// range: 0x100f6d1a-0x100f6e09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __vsnwprintf_s_l
   
   Library: Visual Studio 2010 Release */

int __cdecl
__vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,wchar_t *_Format,
                _locale_t _Locale,va_list _ArgList)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (_Format == (wchar_t *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_100fe6d4();
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (wchar_t *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_100f6d5b:
      if (_DstSize != 0) {
        piVar2 = __errno();
        if (_MaxCount < _DstSize) {
          iVar1 = *piVar2;
          iVar3 = __vswprintf_helper(FUN_100fe6e4,(char *)_DstBuf,_MaxCount + 1,(int)_Format,_Locale
                                     ,_ArgList);
          if (iVar3 == -2) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
LAB_100f6de4:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          iVar3 = __vswprintf_helper(FUN_100fe6e4,(char *)_DstBuf,_DstSize,(int)_Format,_Locale,
                                     _ArgList);
          _DstBuf[_DstSize - 1] = L'\0';
          if (iVar3 != -2) goto LAB_100f6de4;
          if (_MaxCount == 0xffffffff) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *_DstBuf = L'\0';
        if (iVar3 != -2) {
          return -1;
        }
        piVar2 = __errno();
        *piVar2 = 0x22;
        goto LAB_100f6dfd;
      }
    }
  }
  else if (_DstBuf != (wchar_t *)0x0) goto LAB_100f6d5b;
  piVar2 = __errno();
  *piVar2 = 0x16;
LAB_100f6dfd:
  FUN_100fe6d4();
  return -1;
}

