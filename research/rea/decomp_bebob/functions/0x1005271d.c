// rea decompile_all
// name: SetTooltip
// address: 0x1005271d
// body: available
// range: 0x1005271d-0x100527b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10052731 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMFCButton::SetTooltip(char const *)
    public: void __thiscall CMFCButton::SetTooltip(wchar_t const *)
   
   Library: Visual Studio 2010 Release */

void __thiscall SetTooltip(void *this,wchar_t *param_1)

{
  CToolTipCtrl **ppCVar1;
  CToolTipCtrl *pCVar2;
  int iVar3;
  
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x20) != 0)) {
    if (param_1 == (wchar_t *)0x0) {
      iVar3 = *(int *)((int)this + 0x738);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
        SendMessageW(*(HWND *)(iVar3 + 0x20),0x401,0,0);
      }
    }
    else {
      ppCVar1 = (CToolTipCtrl **)((int)this + 0x738);
      pCVar2 = *ppCVar1;
      if ((pCVar2 == (CToolTipCtrl *)0x0) || (*(int *)(pCVar2 + 0x20) == 0)) {
        iVar3 = CTooltipManager::CreateToolTip(ppCVar1,this,0x40);
        if (iVar3 != 0) {
          CToolTipCtrl::AddTool(*ppCVar1,this,param_1,(tagRECT *)0x0,0);
        }
      }
      else {
        CToolTipCtrl::UpdateTipText(pCVar2,param_1,this,0);
      }
      pCVar2 = *ppCVar1;
      if ((pCVar2 != (CToolTipCtrl *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
        SendMessageW(*(HWND *)(pCVar2 + 0x20),0x401,1,0);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

