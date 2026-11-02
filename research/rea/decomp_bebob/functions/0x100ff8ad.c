// rea decompile_all
// name: __mtinit
// address: 0x100ff8ad
// body: available
// range: 0x100ff8ad-0x100ffa27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2010 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    __mtterm();
    return 0;
  }
  DAT_1016a508 = GetProcAddress(hModule,"FlsAlloc");
  DAT_1016a50c = GetProcAddress(hModule,"FlsGetValue");
  DAT_1016a510 = GetProcAddress(hModule,"FlsSetValue");
  DAT_1016a514 = GetProcAddress(hModule,"FlsFree");
  if ((((DAT_1016a508 == (FARPROC)0x0) || (DAT_1016a50c == (FARPROC)0x0)) ||
      (DAT_1016a510 == (FARPROC)0x0)) || (DAT_1016a514 == (FARPROC)0x0)) {
    DAT_1016a50c = TlsGetValue_exref;
    DAT_1016a508 = (FARPROC)&LAB_100ff512;
    DAT_1016a510 = TlsSetValue_exref;
    DAT_1016a514 = TlsFree_exref;
  }
  DAT_10163724 = TlsAlloc();
  if ((DAT_10163724 != 0xffffffff) && (BVar1 = TlsSetValue(DAT_10163724,DAT_1016a50c), BVar1 != 0))
  {
    __init_pointers();
    DAT_1016a508 = EncodePointer(DAT_1016a508);
    DAT_1016a50c = EncodePointer(DAT_1016a50c);
    DAT_1016a510 = EncodePointer(DAT_1016a510);
    DAT_1016a514 = EncodePointer(DAT_1016a514);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = DecodePointer(DAT_1016a508);
      DAT_10163720 = (*pcVar3)(pcVar5);
      if ((DAT_10163720 != -1) && (_Ptd = __calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0)) {
        iVar2 = DAT_10163720;
        p_Var6 = _Ptd;
        pcVar3 = DecodePointer(DAT_1016a510);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
    __mtterm();
  }
  return 0;
}

