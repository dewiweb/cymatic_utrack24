// rea decompile_all
// name: ___lc_strtolc
// address: 0x5bb30a
// body: available
// range: 0x5bb30a-0x5bb432 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2008 Release */

undefined4 ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  errno_t eVar2;
  uint _MaxCount;
  char *_Dst;
  char *_Str;
  rsize_t _SizeInBytes;
  
  _Str = param_2;
  _memset(param_1,0,0x90);
  if (*param_2 != '\0') {
    if ((*param_2 != '.') || (param_2[1] == '\0')) {
      param_2 = (char *)0x0;
      _MaxCount = _strcspn(_Str,"_.,");
      do {
        if (_MaxCount == 0) {
          return 0xffffffff;
        }
        cVar1 = _Str[_MaxCount];
        if (param_2 == (char *)0x0) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '.') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1;
        }
        else if (param_2 == (char *)0x1) {
          if (0x3f < _MaxCount) {
            return 0xffffffff;
          }
          if (cVar1 == '_') {
            return 0xffffffff;
          }
          _SizeInBytes = 0x40;
          _Dst = param_1 + 0x40;
        }
        else {
          if (param_2 != (char *)0x2) {
            return 0xffffffff;
          }
          if (0xf < _MaxCount) {
            return 0xffffffff;
          }
          if ((cVar1 != '\0') && (cVar1 != ',')) {
            return 0xffffffff;
          }
          _SizeInBytes = 0x10;
          _Dst = param_1 + 0x80;
        }
        eVar2 = _strncpy_s(_Dst,_SizeInBytes,_Str,_MaxCount);
        if (eVar2 != 0) {
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (cVar1 == ',') {
          return 0;
        }
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = (char *)((int)param_2 + 1);
        _Str = _Str + _MaxCount + 1;
        _MaxCount = _strcspn(_Str,"_.,");
      } while( true );
    }
    eVar2 = _strncpy_s(param_1 + 0x80,0x10,param_2 + 1,0xf);
    if (eVar2 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    param_1[0x8f] = '\0';
  }
  return 0;
}

