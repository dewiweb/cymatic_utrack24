// rea decompile_all
// name: __mtinit
// address: 0x5b88cf
// body: available
// range: 0x5b88cf-0x5b8a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL");
  }
  if (hModule != (HMODULE)0x0) {
    DAT_0095d21c = GetProcAddress(hModule,"FlsAlloc");
    DAT_0095d220 = GetProcAddress(hModule,"FlsGetValue");
    DAT_0095d224 = GetProcAddress(hModule,"FlsSetValue");
    DAT_0095d228 = GetProcAddress(hModule,"FlsFree");
    if ((((DAT_0095d21c == (FARPROC)0x0) || (DAT_0095d220 == (FARPROC)0x0)) ||
        (DAT_0095d224 == (FARPROC)0x0)) || (DAT_0095d228 == (FARPROC)0x0)) {
      DAT_0095d220 = TlsGetValue_exref;
      DAT_0095d21c = (FARPROC)&LAB_005b8501;
      DAT_0095d224 = TlsSetValue_exref;
      DAT_0095d228 = TlsFree_exref;
    }
    DAT_009564a4 = TlsAlloc();
    if (DAT_009564a4 == 0xffffffff) {
      return 0;
    }
    BVar1 = TlsSetValue(DAT_009564a4,DAT_0095d220);
    if (BVar1 == 0) {
      return 0;
    }
    __init_pointers();
    DAT_0095d21c = (FARPROC)__encode_pointer(DAT_0095d21c);
    DAT_0095d220 = (FARPROC)__encode_pointer(DAT_0095d220);
    DAT_0095d224 = (FARPROC)__encode_pointer(DAT_0095d224);
    DAT_0095d228 = (FARPROC)__encode_pointer(DAT_0095d228);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar3 = (code *)__decode_pointer(DAT_0095d21c,__freefls_4);
      DAT_009564a0 = (*pcVar3)();
      if ((DAT_009564a0 != -1) && (_Ptd = __calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0)) {
        pcVar3 = (code *)__decode_pointer(DAT_0095d224,DAT_009564a0,_Ptd);
        iVar2 = (*pcVar3)();
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
  }
  __mtterm();
  return 0;
}

