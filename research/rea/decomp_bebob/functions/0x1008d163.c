// rea decompile_all
// name: CMFCDropDownToolbarButton::OnClick
// address: 0x1008d163
// body: available
// range: 0x1008d163-0x1008d23c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCDropDownToolbarButton::OnClick(class CWnd *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCDropDownToolbarButton::OnClick(CMFCDropDownToolbarButton *this,CWnd *param_1,int param_2)

{
  int iVar1;
  UINT_PTR UVar2;
  CObject *this_00;
  CObject *pCVar3;
  CMFCToolBarButton *pCVar4;
  
  iVar1 = *(int *)(this + 0x6c);
  if (*(UINT_PTR *)(this + 0x7c) == 0) {
    if (iVar1 == 0) {
      DAT_10168a90 = this;
      return 0;
    }
    UVar2 = SetTimer(*(HWND *)(iVar1 + 0x20),1,DAT_101615fc,FUN_1008c035);
    *(UINT_PTR *)(this + 0x7c) = UVar2;
    DAT_10168a90 = this;
    return 0;
  }
  if (iVar1 != 0) {
    KillTimer(*(HWND *)(iVar1 + 0x20),*(UINT_PTR *)(this + 0x7c));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  DAT_10168a90 = (CMFCDropDownToolbarButton *)0x0;
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1012aa4e_2_101611d0,
                               *(CObject **)(this + 0x6c));
  if (*(int *)(this + 0x78) == 0) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40,
                                *(CObject **)(this + 0x6c));
    if (((param_2 == 0) || (pCVar3 == (CObject *)0x0)) || (DAT_10166e54 != 0)) {
      DropDownToolbar(this,param_1);
    }
    pCVar4 = (CMFCToolBarButton *)this;
    if (this_00 == (CObject *)0x0) goto LAB_1008d21e;
  }
  else {
    *(undefined4 *)(*(int *)(this + 0x78) + 0x120) = 0;
    (**(code **)(**(int **)(this + 0x78) + 0x60))();
    *(undefined4 *)(this + 0x78) = 0;
    if (this_00 == (CObject *)0x0) goto LAB_1008d21e;
    pCVar4 = (CMFCToolBarButton *)0x0;
  }
  CMFCToolBar::SetHot((CMFCToolBar *)this_00,pCVar4);
LAB_1008d21e:
  if (*(int *)(this + 0x6c) != 0) {
    InvalidateRect(*(HWND *)(*(int *)(this + 0x6c) + 0x20),(RECT *)(this + 0x54),1);
  }
  return 0;
}

