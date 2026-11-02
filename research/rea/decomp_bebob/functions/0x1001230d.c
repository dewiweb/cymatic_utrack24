// rea decompile_all
// name: AfxWndProc
// address: 0x1001230d
// body: available
// range: 0x1001230d-0x10012359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall AfxWndProc(struct HWND__ *,unsigned int,unsigned int,long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long AfxWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  CWnd *pCVar2;
  
  if (param_2 == 0x360) {
    lVar1 = 1;
  }
  else {
    pCVar2 = CWnd::FromHandlePermanent(param_1);
    if ((pCVar2 == (CWnd *)0x0) || (*(HWND__ **)(pCVar2 + 0x20) != param_1)) {
      lVar1 = DefWindowProcW(param_1,param_2,param_3,param_4);
    }
    else {
      lVar1 = FUN_10012208(pCVar2,param_1,param_2,param_3,param_4);
    }
  }
  return lVar1;
}

