// rea decompile_all
// name: DDX_Control
// address: 0x10015393
// body: available
// range: 0x10015393-0x10015452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001540f to 0x1000904c FUN_1000904c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall DDX_Control(class CDataExchange *,int,class CWnd &)
   
   Library: Visual Studio 2010 Release */

void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3)

{
  CMFCControlContainer *this;
  CWnd *this_00;
  IUnknown *pIVar1;
  int iVar2;
  COleControlSite *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  
  this_00 = param_3;
  if (*(int *)(param_3 + 0x20) != 0) {
    return;
  }
  pIVar1 = CWnd::GetControlUnknown(param_3);
  if (pIVar1 != (IUnknown *)0x0) {
    return;
  }
  CDataExchange::PrepareCtrl(param_1,param_2);
  CWnd::GetDlgItem(*(CWnd **)(param_1 + 4),param_2,(HWND__ **)&param_3);
  this = *(CMFCControlContainer **)(*(int *)(param_1 + 4) + 0x70);
  if ((this != (CMFCControlContainer *)0x0) && (iVar2 = FUN_1001a8fc(this,(int)param_3), iVar2 != 0)
     ) {
    CMFCControlContainer::ReSubclassControl(this,(HWND__ *)param_3,(ushort)param_2,this_00);
    return;
  }
  if (param_3 != (CWnd *)0x0) {
    iVar2 = CWnd::SubclassWindow(this_00,(HWND__ *)param_3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000904c();
    }
    if (param_3 != (CWnd *)0x0) {
      pCVar5 = *(CWnd **)(param_1 + 4);
      pHVar4 = GetParent(*(HWND *)(this_00 + 0x20));
      if (*(HWND *)(pCVar5 + 0x20) == pHVar4) {
        return;
      }
      param_2 = 0;
      goto LAB_10015445;
    }
  }
  pCVar3 = CWnd::GetOleControlSite(*(CWnd **)(param_1 + 4),param_2);
  if (pCVar3 == (COleControlSite *)0x0) {
    return;
  }
  pCVar5 = *(CWnd **)(param_1 + 4);
LAB_10015445:
  CWnd::AttachControlSite(this_00,pCVar5,param_2);
  return;
}

