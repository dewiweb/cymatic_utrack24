// rea decompile_all
// name: __ungetc_nolock
// address: 0x5c9ed3
// body: available
// range: 0x5c9ed3-0x5c9fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __ungetc_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __ungetc_nolock(int _Ch,FILE *_File)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((_File->_flag & 0x40) != 0) {
LAB_005c9f5c:
    if (_Ch != -1) {
      uVar2 = _File->_flag;
      if (((uVar2 & 1) != 0) || (((char)uVar2 < '\0' && ((uVar2 & 2) == 0)))) {
        if (_File->_base == (char *)0x0) {
          __getbuf(_File);
        }
        if (_File->_ptr == _File->_base) {
          if (_File->_cnt != 0) {
            return -1;
          }
          _File->_ptr = _File->_ptr + 1;
        }
        _File->_ptr = _File->_ptr + -1;
        pcVar1 = _File->_ptr;
        if ((_File->_flag & 0x40) == 0) {
          *pcVar1 = (char)_Ch;
        }
        else if (*pcVar1 != (char)_Ch) {
          _File->_ptr = pcVar1 + 1;
          return -1;
        }
        _File->_cnt = _File->_cnt + 1;
        _File->_flag = _File->_flag & 0xffffffefU | 1;
        return _Ch & 0xff;
      }
    }
    return -1;
  }
  uVar2 = __fileno(_File);
  if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
    puVar4 = &DAT_00956450;
  }
  else {
    puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_0095dd00)[(int)uVar2 >> 5]);
  }
  if ((puVar4[0x24] & 0x7f) == 0) {
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar4 = &DAT_00956450;
    }
    else {
      puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_0095dd00)[(int)uVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x80) == 0) goto LAB_005c9f5c;
  }
  piVar3 = __errno();
  *piVar3 = 0x16;
  __invalid_parameter(0,0,0,0,0);
  return -1;
}

