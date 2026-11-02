// rea decompile_all
// name: __wmakepath_s
// address: 0x100fbf5a
// body: available
// range: 0x100fbf5a-0x100fc072 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wmakepath_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
__wmakepath_s(wchar_t *_PathResult,size_t _SIZE,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,
             wchar_t *_Ext)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iStack_14;
  uint uVar6;
  
  if ((_PathResult == (wchar_t *)0x0) || (_SIZE == 0)) {
    piVar1 = __errno();
    iStack_14 = 0x16;
    goto LAB_100fbf77;
  }
  pwVar3 = _PathResult;
  uVar5 = 0;
  if ((_Drive == (wchar_t *)0x0) || (*_Drive == L'\0')) {
LAB_100fbfb4:
    if ((_Dir != (wchar_t *)0x0) && (*_Dir != L'\0')) {
      do {
        uVar6 = uVar5;
        pwVar4 = _Dir;
        pwVar2 = pwVar3;
        uVar5 = uVar6 + 1;
        if (_SIZE <= uVar5) goto LAB_100fc053;
        *pwVar2 = *pwVar4;
        pwVar3 = pwVar2 + 1;
        _Dir = pwVar4 + 1;
      } while (pwVar4[1] != L'\0');
      if ((*pwVar4 != L'/') && (*pwVar4 != L'\\')) {
        uVar5 = uVar6 + 2;
        if (_SIZE <= uVar5) goto LAB_100fc053;
        *pwVar3 = L'\\';
        pwVar3 = pwVar2 + 2;
      }
    }
    if (_Filename != (wchar_t *)0x0) {
      for (; *_Filename != L'\0'; _Filename = _Filename + 1) {
        uVar5 = uVar5 + 1;
        if (_SIZE <= uVar5) goto LAB_100fc053;
        *pwVar3 = *_Filename;
        pwVar3 = pwVar3 + 1;
      }
    }
    if ((_Ext != (wchar_t *)0x0) && (*_Ext != L'\0')) {
      if (*_Ext != L'.') {
        uVar5 = uVar5 + 1;
        if (_SIZE <= uVar5) goto LAB_100fc053;
        *pwVar3 = L'.';
        pwVar3 = pwVar3 + 1;
      }
      for (; *_Ext != L'\0'; _Ext = _Ext + 1) {
        uVar5 = uVar5 + 1;
        if (_SIZE <= uVar5) goto LAB_100fc053;
        *pwVar3 = *_Ext;
        pwVar3 = pwVar3 + 1;
      }
    }
    if (uVar5 + 1 <= _SIZE) {
      *pwVar3 = L'\0';
      return 0;
    }
  }
  else if (2 < _SIZE) {
    *_PathResult = *_Drive;
    _PathResult[1] = L':';
    pwVar3 = _PathResult + 2;
    uVar5 = 2;
    goto LAB_100fbfb4;
  }
LAB_100fc053:
  *_PathResult = L'\0';
  piVar1 = __errno();
  iStack_14 = 0x22;
LAB_100fbf77:
  *piVar1 = iStack_14;
  FUN_100fe6d4();
  return iStack_14;
}

