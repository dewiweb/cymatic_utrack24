// rea decompile_all
// name: _printf
// address: 0x5b436c
// body: available
// range: 0x5b436c-0x5b4407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _printf
   
   Library: Visual Studio 2008 Release */

int __cdecl _printf(char *_Format,...)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _locale_t _Locale;
  va_list _ArgList;
  
  if (_Format == (char *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else {
    iVar3 = FUN_005b2818();
    __lock_file2(1,(void *)(iVar3 + 0x20));
    iVar3 = FUN_005b2818();
    iVar3 = __stbuf((FILE *)(iVar3 + 0x20));
    _ArgList = &stack0x00000008;
    _Locale = (_locale_t)0x0;
    iVar4 = FUN_005b2818();
    iVar2 = __output_l((FILE *)(iVar4 + 0x20),_Format,_Locale,_ArgList);
    iVar4 = FUN_005b2818();
    __ftbuf(iVar3,(FILE *)(iVar4 + 0x20));
    FUN_005b4408();
  }
  return iVar2;
}

