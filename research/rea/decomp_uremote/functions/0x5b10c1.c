// rea decompile_all
// name: __beginthreadex
// address: 0x5b10c1
// body: available
// range: 0x5b10c1-0x5b1170 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2008 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _StartAddress *p_Var1;
  int *piVar2;
  _ptiddata _Ptd;
  _ptiddata p_Var3;
  _StartAddress **lpThreadId;
  HANDLE pvVar4;
  ulong local_8;
  
  p_Var1 = _StartAddress;
  local_8 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter(0,0,0,0,0);
  }
  else {
    ___set_flsgetvalue();
    _Ptd = __calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      p_Var3 = __getptd();
      __initptd(_Ptd,p_Var3->ptlocinfo);
      _Ptd->_thandle = 0xffffffff;
      _Ptd->_initarg = _ArgList;
      _Ptd->_initaddr = p_Var1;
      lpThreadId = (_StartAddress **)_ThrdAddr;
      if (_ThrdAddr == (uint *)0x0) {
        lpThreadId = &_StartAddress;
      }
      pvVar4 = CreateThread(_Security,_StackSize,__threadstartex_4,_Ptd,_InitFlag,
                            (LPDWORD)lpThreadId);
      if (pvVar4 != (HANDLE)0x0) {
        return (uintptr_t)pvVar4;
      }
      local_8 = GetLastError();
    }
    _free(_Ptd);
    if (local_8 != 0) {
      __dosmaperr(local_8);
    }
  }
  return 0;
}

