// rea decompile_all
// name: AfxInternalPreTranslateMessage
// address: 0x1000c413
// body: available
// range: 0x1000c413-0x1000c485 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl AfxInternalPreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __cdecl AfxInternalPreTranslateMessage(tagMSG *param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  CWnd *pCVar3;
  HWND__ *pHVar4;
  CWnd *pCVar5;
  
  pAVar1 = AfxGetModuleThreadState();
  if (((*(CWinThread **)(pAVar1 + 4) == (CWinThread *)0x0) || (param_1->hwnd != (HWND)0x0)) ||
     (iVar2 = CWinThread::DispatchThreadMessageEx(*(CWinThread **)(pAVar1 + 4),param_1), iVar2 == 0)
     ) {
    pCVar3 = AfxGetMainWnd();
    pHVar4 = (HWND__ *)0x0;
    if (pCVar3 != (CWnd *)0x0) {
      pHVar4 = *(HWND__ **)(pCVar3 + 0x20);
    }
    iVar2 = CWnd::WalkPreTranslateTree(pHVar4,param_1);
    if (iVar2 == 0) {
      if (pCVar3 != (CWnd *)0x0) {
        pCVar5 = CWnd::FromHandle(param_1->hwnd);
        pCVar5 = CWnd::GetTopLevelParent(pCVar5);
        if (pCVar5 != pCVar3) {
          iVar2 = (**(code **)(*(int *)pCVar3 + 0x10c))(param_1);
          return iVar2;
        }
      }
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

