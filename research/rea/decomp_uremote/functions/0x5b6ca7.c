// rea decompile_all
// name: __getstream
// address: 0x5b6ca7
// body: available
// range: 0x5b6ca7-0x5b6dd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __getstream
   
   Library: Visual Studio 2008 Release */

FILE * __cdecl __getstream(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  FILE *pFVar6;
  FILE *_File;
  
  pFVar6 = (FILE *)0x0;
  __lock(1);
  iVar5 = 0;
  do {
    _File = pFVar6;
    if (DAT_0095ee40 <= iVar5) {
LAB_005b6da5:
      if (_File != (FILE *)0x0) {
        _File->_flag = _File->_flag & 0x8000;
        _File->_cnt = 0;
        _File->_base = (char *)0x0;
        _File->_ptr = (char *)0x0;
        _File->_tmpfname = (char *)0x0;
        _File->_file = -1;
      }
      FUN_005b6dd6();
      return _File;
    }
    piVar1 = (int *)(DAT_0095de38 + iVar5 * 4);
    if (*piVar1 == 0) {
      iVar5 = iVar5 * 4;
      pvVar4 = __malloc_crt(0x38);
      *(void **)(iVar5 + DAT_0095de38) = pvVar4;
      if (*(int *)(DAT_0095de38 + iVar5) != 0) {
        iVar3 = ___crtInitCritSecAndSpinCount(*(int *)(DAT_0095de38 + iVar5) + 0x20,4000);
        if (iVar3 == 0) {
          _free(*(void **)(iVar5 + DAT_0095de38));
          *(undefined4 *)(iVar5 + DAT_0095de38) = 0;
        }
        else {
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(iVar5 + DAT_0095de38) + 0x20));
          _File = *(FILE **)(iVar5 + DAT_0095de38);
          _File->_flag = 0;
        }
      }
      goto LAB_005b6da5;
    }
    uVar2 = *(uint *)(*piVar1 + 0xc);
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if ((iVar5 - 3U < 0x11) && (iVar3 = __mtinitlocknum(iVar5 + 0x10), iVar3 == 0))
      goto LAB_005b6da5;
      __lock_file2(iVar5,*(void **)(DAT_0095de38 + iVar5 * 4));
      _File = *(FILE **)(DAT_0095de38 + iVar5 * 4);
      if ((_File->_flag & 0x83) == 0) goto LAB_005b6da5;
      __unlock_file2(iVar5,_File);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

