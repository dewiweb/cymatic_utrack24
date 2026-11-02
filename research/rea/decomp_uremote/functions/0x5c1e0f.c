// rea decompile_all
// name: __stbuf
// address: 0x5c1e0f
// body: available
// range: 0x5c1e0f-0x5c1eaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __stbuf
   
   Library: Visual Studio 2008 Release */

int __cdecl __stbuf(FILE *_File)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = __fileno(_File);
  iVar3 = __isatty(iVar3);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_005b2818();
  if (_File == (FILE *)(iVar3 + 0x20)) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005b2818();
    if (_File != (FILE *)(iVar3 + 0x40)) {
      return 0;
    }
    iVar3 = 1;
  }
  _DAT_0095ca30 = _DAT_0095ca30 + 1;
  if ((_File->_flag & 0x10cU) != 0) {
    return 0;
  }
  piVar1 = &DAT_0095d28c + iVar3;
  if (*piVar1 == 0) {
    pvVar4 = __malloc_crt(0x1000);
    *piVar1 = (int)pvVar4;
    if (pvVar4 == (void *)0x0) {
      _File->_base = (char *)&_File->_charbuf;
      _File->_ptr = (char *)&_File->_charbuf;
      _File->_bufsiz = 2;
      _File->_cnt = 2;
      goto LAB_005c1e98;
    }
  }
  pcVar2 = (char *)*piVar1;
  _File->_base = pcVar2;
  _File->_ptr = pcVar2;
  _File->_bufsiz = 0x1000;
  _File->_cnt = 0x1000;
LAB_005c1e98:
  _File->_flag = _File->_flag | 0x1102;
  return 1;
}

