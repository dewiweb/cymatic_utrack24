// rea decompile_all
// name: __setlocale_get_all
// address: 0x5bb4a0
// body: available
// range: 0x5bb4a0-0x5bb61c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __setlocale_get_all
   
   Library: Visual Studio 2008 Release */

char * __setlocale_get_all(void)

{
  bool bVar1;
  char *_Memory;
  errno_t eVar2;
  int iVar3;
  LONG LVar4;
  char *_Dst;
  int unaff_ESI;
  undefined4 *local_10;
  int local_c;
  undefined **local_8;
  
  bVar1 = true;
  _Memory = __malloc_crt(0x355);
  _Dst = _Memory;
  if (_Memory != (char *)0x0) {
    _Dst = _Memory + 4;
    *_Dst = '\0';
    _Memory[0] = '\x01';
    _Memory[1] = '\0';
    _Memory[2] = '\0';
    _Memory[3] = '\0';
    local_c = 1;
    iVar3 = unaff_ESI + 0x10;
    local_10 = (undefined4 *)(unaff_ESI + 0x58);
    __strcats(_Dst,0x351,3,"LC_COLLATE",&DAT_0091716c,*local_10);
    local_8 = &PTR_s_LC_COLLATE_005f199c;
    do {
      eVar2 = _strcat_s(_Dst,0x351,";");
      if (eVar2 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = _strcmp((char *)*local_10,*(char **)(iVar3 + 0x58));
      if (iVar3 != 0) {
        bVar1 = false;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 3;
      iVar3 = local_c * 0x10 + unaff_ESI;
      local_10 = (undefined4 *)(iVar3 + 0x48);
      __strcats(_Dst,0x351,3,*local_8,&DAT_0091716c,*local_10);
    } while ((int)local_8 < 0x5f19cc);
    if (bVar1) {
      _free(_Memory);
      if ((*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) &&
         (LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50)), LVar4 == 0)) {
        _free(*(void **)(unaff_ESI + 0x50));
      }
      if ((*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) &&
         (LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54)), LVar4 == 0)) {
        _free(*(void **)(unaff_ESI + 0x54));
      }
      _Dst = *(char **)(unaff_ESI + 0x68);
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(undefined4 *)(unaff_ESI + 0x50) = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
    }
    else {
      if ((*(LONG **)(unaff_ESI + 0x50) != (LONG *)0x0) &&
         (LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x50)), LVar4 == 0)) {
        _free(*(void **)(unaff_ESI + 0x50));
      }
      if ((*(LONG **)(unaff_ESI + 0x54) != (LONG *)0x0) &&
         (LVar4 = InterlockedDecrement(*(LONG **)(unaff_ESI + 0x54)), LVar4 == 0)) {
        _free(*(void **)(unaff_ESI + 0x54));
      }
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0;
      *(char **)(unaff_ESI + 0x50) = _Memory;
      *(char **)(unaff_ESI + 0x48) = _Dst;
    }
  }
  return _Dst;
}

