// rea decompile_all
// name: ___init_time
// address: 0x5c8bc6
// body: available
// range: 0x5c8bc6-0x5c8c3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2008 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  int iVar2;
  int **ppiVar3;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_00956d90;
LAB_005c8c1e:
    ppiVar3 = &_LocInfo[1].lc_category[0].wrefcount;
    ppuVar1 = (undefined **)*ppiVar3;
    if (ppuVar1 != &PTR_DAT_00956d90) {
      InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
    }
    *ppiVar3 = (int *)_Memory;
    iVar2 = 0;
  }
  else {
    _Memory = __calloc_crt(1,0xb8);
    if (_Memory != (undefined **)0x0) {
      iVar2 = __get_lc_time();
      if (iVar2 == 0) {
        _Memory[0x2d] = (undefined *)0x1;
        goto LAB_005c8c1e;
      }
      ___free_lc_time(_Memory);
      _free(_Memory);
    }
    iVar2 = 1;
  }
  return iVar2;
}

