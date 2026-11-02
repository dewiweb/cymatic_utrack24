// rea decompile_all
// name: CMDITabProxyWnd::OnSendIconicThumbnail
// address: 0x10020c44
// body: available
// range: 0x10020c44-0x10020ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDITabProxyWnd::OnSendIconicThumbnail(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CMDITabProxyWnd::OnSendIconicThumbnail(CMDITabProxyWnd *this,uint param_1,long param_2)

{
  long lVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  HGDIOBJ ho;
  
  if (*(int *)(this + 0x74) == 0) {
    lVar1 = CWnd::Default((CWnd *)this);
  }
  else {
    hModule = GetModuleHandleW(L"DWMAPI");
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,"DwmSetIconicThumbnail");
      if (pFVar2 != (FARPROC)0x0) {
        ho = (HGDIOBJ)(**(code **)(**(int **)(this + 0x74) + 0x1ec))
                                ((uint)param_2 >> 0x10,param_2 & 0xffffU);
        if (ho == (HGDIOBJ)0x0) {
          ho = (HGDIOBJ)FUN_1002093c(this,(uint)param_2 >> 0x10,param_2 & 0xffffU,1);
        }
        (*pFVar2)(*(undefined4 *)(this + 0x20),ho,0);
        DeleteObject(ho);
      }
    }
    lVar1 = CWnd::Default((CWnd *)this);
  }
  return lVar1;
}

