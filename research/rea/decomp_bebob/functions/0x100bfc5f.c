// rea decompile_all
// name: CMFCOutlookBarPane::AdjustLocations
// address: 0x100bfc5f
// body: available
// range: 0x100bfc5f-0x100bfefc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bfe9b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCOutlookBarPane::AdjustLocations(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCOutlookBarPane::AdjustLocations(CMFCOutlookBarPane *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_7c [8];
  CClientDC local_74 [20];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  CPen *local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x100bfc6b;
  if ((this != (CMFCOutlookBarPane *)0x0) && (*(int *)(this + 0x20) != 0)) {
    piVar2 = (int *)FUN_10037b18(&local_48);
    local_28 = piVar2[1] + 6;
    local_40 = *piVar2 + 6;
    CClientDC::CClientDC(local_74,(CWnd *)this);
    local_8 = 0;
    local_4c = CDC::SelectObject((CDC *)local_74,(CPen *)&DAT_10166bb4);
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_24);
    local_30 = (local_24.right - local_24.left) + -2;
    local_2c = DAT_101692e0;
    iVar3 = (**(code **)(*(int *)this + 0x35c))();
    if (iVar3 != 0) {
      pCVar4 = CMFCVisualManager::GetInstance();
      piVar2 = (int *)(**(code **)(*(int *)pCVar4 + 0x13c))(&local_48);
      local_30 = local_30 + *piVar2;
      local_2c = local_2c + piVar2[1];
    }
    iVar6 = local_24.top - *(int *)(this + 0x1c88);
    iVar3 = *(int *)(this + 0x1c90);
    if (((*(int *)(this + 0x1c8c) < 1) || ((local_24.right - local_24.left) + -5 < local_40)) ||
       ((local_24.bottom - local_24.top) + -5 < local_28)) {
      iVar7 = 0;
    }
    else {
      CWnd::SetWindowPos((CWnd *)(this + 0xde0),(CWnd *)0x0,(local_24.right - local_40) + -5,
                         local_24.top + 5,-1,-1,0x15);
      iVar7 = 4;
    }
    CWnd::ShowWindow((CWnd *)(this + 0xde0),iVar7);
    iVar3 = iVar6 + iVar3;
    puVar1 = *(undefined4 **)(this + 0xbcc);
    while (puVar1 != (undefined4 *)0x0) {
      if (puVar1 == (undefined4 *)0x0) {
LAB_100bfe9b:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar2 = (int *)puVar1[2];
      local_34 = (undefined4 *)*puVar1;
      local_50 = piVar2;
      if (piVar2 == (int *)0x0) goto LAB_100bfe9b;
      piVar2[6] = *(int *)(this + 0xb14);
      piVar2[0x1d] = DAT_101692dc;
      piVar2[0x1e] = DAT_101692e0;
      piVar5 = (int *)(**(code **)(*piVar2 + 0x1c))(local_7c,local_74,&local_30,0);
      local_44 = piVar5[1];
      iVar6 = (local_24.right - local_24.left) + -1;
      local_58 = *piVar5;
      if (iVar6 < *piVar5) {
        local_58 = iVar6;
      }
      local_60 = (iVar6 - local_58) / 2 + local_24.left;
      local_58 = local_60 + local_58;
      local_38 = *(int *)(this + 0x1c90);
      local_54 = local_44 + iVar3;
      piVar2[0x15] = local_60;
      piVar2[0x16] = iVar3;
      local_38 = local_38 + local_54;
      piVar2[0x17] = local_58;
      iVar6 = *local_50;
      piVar2[0x18] = local_54;
      local_5c = iVar3;
      (**(code **)(iVar6 + 0x30))();
      iVar3 = local_38;
      puVar1 = local_34;
    }
    *(uint *)(this + 0x1c98) = (uint)(local_24.bottom < iVar3);
    if (((local_24.bottom < iVar3 == 0) || ((local_24.right - local_24.left) + -5 < local_40)) ||
       ((local_24.bottom - local_24.top) + -5 < local_28)) {
      iVar3 = 0;
    }
    else {
      CWnd::SetWindowPos((CWnd *)(this + 0x1530),(CWnd *)&DAT_101665c0,
                         (local_24.right - local_40) + -5,(local_24.bottom - local_28) + -5,-1,-1,
                         0x11);
      iVar3 = 4;
    }
    CWnd::ShowWindow((CWnd *)(this + 0x1530),iVar3);
    CDC::SelectObject((CDC *)local_74,local_4c);
    RedrawWindow(*(HWND *)(this + 0xe00),(RECT *)0x0,(HRGN)0x0,0x105);
    RedrawWindow(*(HWND *)(this + 0x1550),(RECT *)0x0,(HRGN)0x0,0x105);
    CMFCToolBar::OnMouseLeave((CMFCToolBar *)this,0,0);
    CMFCToolBar::UpdateTooltips((CMFCToolBar *)this);
    local_8 = 0xffffffff;
    CClientDC::~CClientDC(local_74);
  }
  FUN_100f90cf();
  return;
}

