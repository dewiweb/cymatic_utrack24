// rea decompile_all
// name: CMFCColorButton::OnShowColorPopup
// address: 0x10050ec1
// body: available
// range: 0x10050ec1-0x1005104a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorButton::OnShowColorPopup(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorButton::OnShowColorPopup(CMFCColorButton *this)

{
  void *this_00;
  CMFCPopupMenu *pCVar1;
  int iVar2;
  CObject *pCVar3;
  CWnd *this_01;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x10050ecd;
  if (*(int *)(this + 0x794) == 0) {
    if (*(int *)(this + 0x768) == 0) {
      FUN_100a8baf((CPalette *)0x0,this + 0x760);
    }
    this_00 = FUN_1000858a(0x1eb8);
    local_8 = 0;
    if (this_00 == (void *)0x0) {
      pCVar1 = (CMFCPopupMenu *)0x0;
    }
    else {
      pCVar1 = CMFCColorPopupMenu(this_00,this,(int)(this + 0x760),*(undefined4 *)(this + 0x758),
                                  *(undefined ***)(this + 0x7a0),*(undefined ***)(this + 0x798),
                                  *(undefined ***)(this + 0x79c),
                                  (CList<struct_HWND__*,struct_HWND__*> *)(this + 0x774),
                                  *(int *)(this + 0x790),*(undefined4 *)(this + 0x75c));
    }
    local_8 = 0xffffffff;
    *(CMFCPopupMenu **)(this + 0x794) = pCVar1;
    *(undefined4 *)(pCVar1 + 0x1eb4) = *(undefined4 *)(this + 0x750);
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_24);
    iVar2 = (**(code **)(**(int **)(this + 0x794) + 0x208))
                      (this,local_24.left,local_24.bottom,0,*(undefined4 *)(this + 0x750),0);
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x794) = 0;
    }
    else {
      if (*(int *)(this + 0x750) != 0) {
        pCVar3 = (CObject *)(**(code **)(**(int **)(this + 0x794) + 0x1c0))();
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorBar_10161cc0,pCVar3);
        if (pCVar3 != (CObject *)0x0) {
          *(undefined4 *)(pCVar3 + 0xd88) = 1;
        }
      }
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      GetWindowRect(*(HWND *)(*(int *)(this + 0x794) + 0x20),&local_34);
      CMFCPopupMenu::UpdateShadow(*(CMFCPopupMenu **)(this + 0x794),&local_34);
      if (*(int *)(this + 0x754) != 0) {
        this_01 = (CWnd *)(**(code **)(**(int **)(this + 0x794) + 0x1c0))();
        CWnd::SetFocus(this_01);
      }
    }
    if (*(int *)(this + 0xac) != 0) {
      ReleaseCapture();
      *(undefined4 *)(this + 0xac) = 0;
    }
  }
  else {
    SendMessageW(*(HWND *)(*(int *)(this + 0x794) + 0x20),0x10,0,0);
    *(undefined4 *)(this + 0x794) = 0;
  }
  FUN_100f90cf();
  return;
}

