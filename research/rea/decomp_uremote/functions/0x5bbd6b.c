// rea decompile_all
// name: _setlocale
// address: 0x5bbd6b
// body: available
// range: 0x5bbd6b-0x5bbe90 inclusive
// range: 0x5bbeb0-0x5bbed2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2008 Release */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  int *piVar1;
  _ptiddata p_Var2;
  void *pvVar3;
  int iVar4;
  char *local_24;
  
  local_24 = (char *)0x0;
  if ((uint)_Category < 6) {
    p_Var2 = __getptd();
    ___updatetlocinfo();
    p_Var2->_ownlocale = p_Var2->_ownlocale | 0x10;
    pvVar3 = __calloc_crt(0xd8,1);
    if (pvVar3 != (void *)0x0) {
      __lock(0xc);
      __copytlocinfo_nolock();
      FUN_005bbe99();
      local_24 = (char *)__setlocale_nolock(_Category);
      if (local_24 == (char *)0x0) {
        ___removelocaleref(pvVar3);
        ___freetlocinfo(pvVar3);
      }
      else {
        if (_Locale != (char *)0x0) {
          iVar4 = _strcmp(_Locale,&DAT_00956ba8);
          if (iVar4 != 0) {
            DAT_0095d264 = 1;
          }
        }
        __lock(0xc);
        __updatetlocinfoEx_nolock();
        ___removelocaleref(pvVar3);
        if (((p_Var2->_ownlocale & 2) == 0) && (((byte)DAT_00956ba4 & 1) == 0)) {
          __updatetlocinfoEx_nolock();
          _memcpy(&DAT_0095d268,PTR_DAT_00956c88 + 0xc,0x18);
          sync_legacy_variables_lk();
        }
        FUN_005bbea5();
      }
    }
    FUN_005bbed6();
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    local_24 = (char *)0x0;
  }
  return local_24;
}

