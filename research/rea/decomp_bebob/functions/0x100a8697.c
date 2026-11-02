// rea decompile_all
// name: CMFCColorBar::OnUpdateCmdUI
// address: 0x100a8697
// body: available
// range: 0x100a8697-0x100a87a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a878c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorBar::OnUpdateCmdUI(class CFrameWnd *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorBar::OnUpdateCmdUI(CMFCColorBar *this,CFrameWnd *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  CObject *pCVar4;
  undefined4 *puVar5;
  CMFCColorBarCmdUI local_38 [4];
  undefined4 local_34;
  CMFCColorBar *local_24;
  int local_20;
  undefined4 local_18;
  int local_10;
  undefined4 local_c [2];
  
  if ((*(int *)(this + 0xd8c) == 0) || (*(int *)(this + 0xd8c) == -1)) {
    CMFCToolBar::OnUpdateCmdUI((CMFCToolBar *)this,param_1,param_2);
  }
  else {
    CMFCColorBarCmdUI::CMFCColorBarCmdUI(local_38);
    local_34 = *(undefined4 *)(this + 0xd8c);
    local_18 = 1;
    local_24 = this;
    iVar2 = (**(code **)(*(int *)param_1 + 0xc))(local_34,0xffffffff,local_38,0);
    iVar3 = local_10;
    if (((iVar2 == 0) && (iVar3 = 0, param_2 != 0)) && (local_20 == 0)) {
      local_c[0] = 0;
      iVar3 = (**(code **)(*(int *)param_1 + 0xc))(*(undefined4 *)(this + 0xd8c),0,local_38,local_c)
      ;
    }
    if (iVar3 != *(int *)(this + 0xd7c)) {
      puVar5 = *(undefined4 **)(this + 0xbcc);
      *(int *)(this + 0xd7c) = iVar3;
      while (puVar5 != (undefined4 *)0x0) {
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        puVar1 = puVar5 + 2;
        puVar5 = (undefined4 *)*puVar5;
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarColorButton_10161ca4,
                                    (CObject *)*puVar1);
        if (pCVar4 != (CObject *)0x0) {
          *(uint *)(pCVar4 + 0x24) = *(uint *)(pCVar4 + 0x24) & 0xfffbffff;
          if (iVar3 == 0) {
            *(uint *)(pCVar4 + 0x24) = *(uint *)(pCVar4 + 0x24) | 0x40000;
          }
        }
      }
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(this + 0x20));
    }
    CMFCToolBar::OnUpdateCmdUI((CMFCToolBar *)this,param_1,param_2);
  }
  return;
}

