// rea decompile_all
// name: CFrameWnd::OnClose
// address: 0x10054f59
// body: available
// range: 0x10054f59-0x100550a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005508d to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnClose(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CFrameWnd::OnClose(CFrameWnd *this)

{
  CWinApp *this_00;
  int *piVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  int *piVar4;
  CWnd *this_01;
  CFrameWnd *pCVar5;
  CFrameWnd *local_8;
  
  local_8 = this;
  if (*(code **)(this + 0xd4) == (code *)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x168))();
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0xd4))(this), iVar2 != 0)) {
      pAVar3 = AfxGetModuleState();
      this_00 = *(CWinApp **)(pAVar3 + 4);
      if ((this_00 != (CWinApp *)0x0) && (*(CFrameWnd **)(this_00 + 0x20) == this)) {
        piVar4 = (int *)(**(code **)(*(int *)this_00 + 0xfc))();
        if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 0x30))(), iVar2 != 0)) {
          (**(code **)(*piVar4 + 0x44))();
          (**(code **)(*piVar4 + 0x38))();
        }
        if ((piVar1 == (int *)0x0) && (iVar2 = (**(code **)(*(int *)this_00 + 0xb0))(), iVar2 == 0))
        {
          return;
        }
        if ((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 0x30))(), iVar2 == 0)) {
          (**(code **)(*piVar4 + 0x58))();
        }
        CWinApp::HideApplication(this_00);
        CWinApp::CloseAllDocuments(this_00,0);
        iVar2 = AfxOleCanExitApp();
        if (iVar2 == 0) {
          AfxOleSetUserCtrl(0);
          return;
        }
        pAVar3 = AfxGetModuleState();
        this = local_8;
        if ((pAVar3[0x14] == (AFX_MODULE_STATE)0x0) && (*(int *)(this_00 + 0x20) == 0)) {
          AfxPostQuitMessage(0);
          return;
        }
      }
      if ((piVar1 != (int *)0x0) && (piVar1[0x27] != 0)) {
        local_8 = (CFrameWnd *)(**(code **)(*piVar1 + 0x68))();
        do {
          if (local_8 == (CFrameWnd *)0x0) {
            (**(code **)(*piVar1 + 0x84))();
            return;
          }
          this_01 = (CWnd *)(**(code **)(*piVar1 + 0x6c))(&local_8);
          if (this_01 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
          pCVar5 = CWnd::GetParentFrame(this_01);
        } while (pCVar5 == this);
        (**(code **)(*piVar1 + 0xdc))(this);
      }
      (**(code **)(*(int *)this + 0x60))();
    }
  }
  else {
    (**(code **)(this + 0xd4))(this);
  }
  return;
}

