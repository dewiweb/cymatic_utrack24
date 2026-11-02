// rea decompile_all
// name: __vsnwprintf_l
// address: 0x5b1413
// body: available
// range: 0x5b1413-0x5b14e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __vsnwprintf_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,wchar_t *_Format,_locale_t _Locale,va_list _ArgList
              )

{
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if (_Format == (wchar_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  else if ((_MaxCount == 0) || (_DstBuf != (wchar_t *)0x0)) {
    local_24._flag = 0x42;
    local_24._base = (char *)_DstBuf;
    local_24._ptr = (char *)_DstBuf;
    if (_MaxCount < 0x40000000) {
      local_24._cnt = _MaxCount * 2;
    }
    else {
      local_24._cnt = 0x7fffffff;
    }
    iVar2 = __woutput_l(&local_24,_Format,_Locale,_ArgList);
    if (_DstBuf != (wchar_t *)0x0) {
      local_24._cnt = local_24._cnt + -1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = 0;
        local_24._ptr = (char *)((int)local_24._ptr + 1);
      }
      local_24._cnt = local_24._cnt + -1;
      if (local_24._cnt < 0) {
        __flsbuf(0,&local_24);
      }
      else {
        *local_24._ptr = 0;
      }
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter(0,0,0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}

