// rea decompile_all
// name: CMFCToolBarMenuButton::OnClick
// address: 0x1007d757
// body: available
// range: 0x1007d757-0x1007d941 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarMenuButton::OnClick(class CWnd *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBarMenuButton::OnClick(CMFCToolBarMenuButton *this,CWnd *param_1,int param_2)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  CObject *this_00;
  CMFCToolBarMenuButton *pCVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  CMFCToolBarButton *pCVar5;
  undefined1 local_18 [12];
  CObject *local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 0x9c) = 0;
  if (((*(int *)(this + 0x90) != 0) && (param_2 == 0)) && (*(int *)(this + 0x94) == 0)) {
    if ((*(int *)(this + 0x20) == 0) || (*(int *)(this + 0x20) == -1)) {
      *(undefined4 *)(this + 0x9c) = 1;
    }
    else {
      local_18._8_4_ = 0;
      local_c = (CObject *)0x0;
      GetCursorPos((LPPOINT)(local_18 + 8));
      ScreenToClient(*(HWND *)(param_1 + 0x20),(LPPOINT)(local_18 + 8));
      pt.y = (LONG)local_c;
      pt.x = local_18._8_4_;
      BVar1 = PtInRect((RECT *)(this + 200),pt);
      *(BOOL *)(this + 0x9c) = BVar1;
      if (BVar1 == 0) goto LAB_1007d931;
    }
  }
  iVar4 = (**(code **)(*(int *)this + 0xec))();
  if ((iVar4 != 0) && (param_2 == 0)) {
    local_18._8_4_ = 0;
    local_c = (CObject *)0x0;
    GetCursorPos((LPPOINT)(local_18 + 8));
    ScreenToClient(*(HWND *)(param_1 + 0x20),(LPPOINT)(local_18 + 8));
    pt_00.y = (LONG)local_c;
    pt_00.x = local_18._8_4_;
    BVar1 = PtInRect((RECT *)(this + 0xd8),pt_00);
    if (BVar1 != 0) goto LAB_1007d931;
  }
  if ((((*(int *)(this + 0x9c) == 0) && (*(int *)(this + 0x20) != 0)) &&
      (*(int *)(this + 0x20) != -1)) &&
     ((*(int *)(this + 0x90) == 0 && (*(int *)(this + 0xa8) == 0)))) goto LAB_1007d931;
  local_c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_1012aa4e_2_101611d0,
                               *(CObject **)(this + 0x6c));
  if (*(int *)(this + 0x8c) == 0) {
    this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_1012f74f_1_10161b40,
                                 *(CObject **)(this + 0x6c));
    if (((param_2 == 0) || (this_00 == (CObject *)0x0)) || (DAT_10166e54 != 0)) {
      if ((local_c != (CObject *)0x0) &&
         (pCVar2 = CMFCToolBar::GetDroppedDownMenu((CMFCToolBar *)local_c,(int *)0x0),
         pCVar2 != (CMFCToolBarMenuButton *)0x0)) {
        (**(code **)(*(int *)pCVar2 + 0x58))();
      }
      iVar4 = (**(code **)(*(int *)this + 200))(param_1);
      if (iVar4 == 0) goto LAB_1007d931;
    }
    else {
      CMFCPopupMenuBar::StartPopupMenuTimer((CMFCPopupMenuBar *)this_00,this,1);
    }
    pCVar5 = (CMFCToolBarButton *)this;
    if (local_c != (CObject *)0x0) goto LAB_1007d8ec;
  }
  else {
    *(undefined4 *)(*(int *)(this + 0x8c) + 0x120) = 0;
    (**(code **)(**(int **)(this + 0x8c) + 0x60))();
    *(undefined4 *)(this + 0x8c) = 0;
    if (local_c != (CObject *)0x0) {
      pCVar5 = (CMFCToolBarButton *)0x0;
LAB_1007d8ec:
      CMFCToolBar::SetHot((CMFCToolBar *)local_c,pCVar5);
    }
  }
  if (*(int *)(this + 0x6c) != 0) {
    local_18._0_4_ = *(undefined4 *)(this + 0x54);
    local_18._4_4_ = *(undefined4 *)(this + 0x58);
    local_18._8_4_ = *(undefined4 *)(this + 0x5c);
    local_c = *(CObject **)(this + 0x60);
    pCVar3 = CMFCVisualManager::GetInstance();
    InflateRect((LPRECT)local_18,*(int *)(pCVar3 + 0x98),*(int *)(pCVar3 + 0x98));
    RedrawWindow(*(HWND *)(*(int *)(this + 0x6c) + 0x20),(RECT *)local_18,(HRGN)0x0,0x401);
  }
LAB_1007d931:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

