// rea decompile_all
// name: CMFCOutlookBarPane::OnDragOver
// address: 0x100c0210
// body: available
// range: 0x100c0210-0x100c0309 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCOutlookBarPane::OnDragOver(class COleDataObject
   *,unsigned long,class CPoint)
   
   Library: Visual Studio 2010 Release */

ulong __thiscall
CMFCOutlookBarPane::OnDragOver
          (CMFCOutlookBarPane *this,COleDataObject *param_1,undefined4 param_2,LONG param_4,
          LONG param_5)

{
  POINT pt;
  POINT pt_00;
  CMFCToolBarButton *this_00;
  int iVar1;
  BOOL BVar2;
  ulong uVar3;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  this_00 = CMFCToolBarButton::CreateFromOleData(param_1);
  if (this_00 != (CMFCToolBarButton *)0x0) {
    iVar1 = CObject::IsKindOf((CObject *)this_00,
                              (CRuntimeClass *)&PTR_s_CMFCOutlookBarPaneButton_101620cc);
    (**(code **)(*(int *)this_00 + 4))(1);
    if (iVar1 != 0) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0xe00),&local_28);
      CWnd::ScreenToClient((CWnd *)this,&local_28);
      pt.y = param_5;
      pt.x = param_4;
      BVar2 = PtInRect(&local_28,pt);
      if (BVar2 == 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0x1550),&local_18);
        CWnd::ScreenToClient((CWnd *)this,&local_18);
        pt_00.y = param_5;
        pt_00.x = param_4;
        BVar2 = PtInRect(&local_18,pt_00);
        if (BVar2 == 0) {
          CMFCToolBar::OnDragOver((CMFCToolBar *)this,param_1,param_2,param_4,param_5);
        }
        else {
          ScrollDown(this);
        }
      }
      else {
        ScrollUp(this);
      }
    }
  }
  uVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar3;
}

