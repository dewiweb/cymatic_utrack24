// rea decompile_all
// name: __wsplitpath_s
// address: 0x100fbd48
// body: available
// range: 0x100fbd48-0x100fbf59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __wsplitpath_s
   
   Library: Visual Studio 2010 Release */

errno_t __cdecl
__wsplitpath_s(wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSize,wchar_t *_Dir,size_t _DirSize,
              wchar_t *_Filename,size_t _FilenameSize,wchar_t *_Ext,size_t _ExtSize)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  wchar_t *_Src;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  errno_t eVar8;
  
  bVar2 = false;
  if (_FullPath != (wchar_t *)0x0) {
    if (_Drive == (wchar_t *)0x0) {
      if (_DriveSize == 0) {
LAB_100fbd74:
        if (_Dir == (wchar_t *)0x0) {
          if (_DirSize == 0) {
LAB_100fbd85:
            if (_Filename == (wchar_t *)0x0) {
              if (_FilenameSize == 0) {
LAB_100fbd96:
                if (_Ext == (wchar_t *)0x0) {
                  if (_ExtSize == 0) {
LAB_100fbda0:
                    iVar3 = 1;
                    pwVar7 = _FullPath;
                    do {
                      if (*pwVar7 == L'\0') break;
                      iVar3 = iVar3 + -1;
                      pwVar7 = pwVar7 + 1;
                    } while (iVar3 != 0);
                    if (*pwVar7 == L':') {
                      if (_Drive != (wchar_t *)0x0) {
                        if (_DriveSize < 3) goto LAB_100fbeec;
                        _wcsncpy_s(_Drive,_DriveSize,_FullPath,2);
                      }
                      _FullPath = pwVar7 + 1;
                    }
                    else if (_Drive != (wchar_t *)0x0) {
                      *_Drive = L'\0';
                    }
                    wVar1 = *_FullPath;
                    pwVar7 = (wchar_t *)0x0;
                    _Src = (wchar_t *)0x0;
                    pwVar6 = _FullPath;
                    if (wVar1 == L'\0') {
LAB_100fbe5e:
                      pwVar7 = _FullPath;
                      if (_Dir != (wchar_t *)0x0) {
                        *_Dir = L'\0';
                      }
                    }
                    else {
                      do {
                        if ((wVar1 == L'/') || (wVar1 == L'\\')) {
                          pwVar7 = pwVar6 + 1;
                        }
                        else if (wVar1 == L'.') {
                          _Src = pwVar6;
                        }
                        pwVar6 = pwVar6 + 1;
                        wVar1 = *pwVar6;
                      } while (wVar1 != L'\0');
                      if (pwVar7 == (wchar_t *)0x0) goto LAB_100fbe5e;
                      if (_Dir != (wchar_t *)0x0) {
                        uVar4 = (int)pwVar7 - (int)_FullPath >> 1;
                        if (_DirSize <= uVar4) goto LAB_100fbeec;
                        _wcsncpy_s(_Dir,_DirSize,_FullPath,uVar4);
                      }
                    }
                    _FullPath = pwVar7;
                    if ((_Src == (wchar_t *)0x0) || (_Src < _FullPath)) {
                      if (_Filename != (wchar_t *)0x0) {
                        uVar4 = (int)pwVar6 - (int)_FullPath >> 1;
                        if (_FilenameSize <= uVar4) goto LAB_100fbeec;
                        _wcsncpy_s(_Filename,_FilenameSize,_FullPath,uVar4);
                      }
                      if (_Ext != (wchar_t *)0x0) {
                        *_Ext = L'\0';
                      }
                      return 0;
                    }
                    if (_Filename != (wchar_t *)0x0) {
                      uVar4 = (int)_Src - (int)_FullPath >> 1;
                      if (_FilenameSize <= uVar4) goto LAB_100fbeec;
                      _wcsncpy_s(_Filename,_FilenameSize,_FullPath,uVar4);
                    }
                    if (_Ext == (wchar_t *)0x0) {
                      return 0;
                    }
                    uVar4 = (int)pwVar6 - (int)_Src >> 1;
                    if (uVar4 < _ExtSize) {
                      _wcsncpy_s(_Ext,_ExtSize,_Src,uVar4);
                      return 0;
                    }
                    goto LAB_100fbeec;
                  }
                }
                else if (_ExtSize != 0) goto LAB_100fbda0;
              }
            }
            else if (_FilenameSize != 0) goto LAB_100fbd96;
          }
        }
        else if (_DirSize != 0) goto LAB_100fbd85;
      }
    }
    else if (_DriveSize != 0) goto LAB_100fbd74;
  }
  bVar2 = true;
LAB_100fbeec:
  if ((_Drive != (wchar_t *)0x0) && (_DriveSize != 0)) {
    *_Drive = L'\0';
  }
  if ((_Dir != (wchar_t *)0x0) && (_DirSize != 0)) {
    *_Dir = L'\0';
  }
  if ((_Filename != (wchar_t *)0x0) && (_FilenameSize != 0)) {
    *_Filename = L'\0';
  }
  if ((_Ext != (wchar_t *)0x0) && (_ExtSize != 0)) {
    *_Ext = L'\0';
  }
  if ((_FullPath == (wchar_t *)0x0) || (bVar2)) {
    piVar5 = __errno();
    eVar8 = 0x16;
    *piVar5 = 0x16;
    FUN_100fe6d4();
  }
  else {
    piVar5 = __errno();
    eVar8 = 0x22;
    *piVar5 = 0x22;
  }
  return eVar8;
}

