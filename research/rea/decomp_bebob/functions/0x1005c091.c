// rea decompile_all
// name: CMFCPopupMenu::DoPaint
// address: 0x1005c091
// body: available
// range: 0x1005c091-0x1005c568 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCPopupMenu::DoPaint(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCPopupMenu::DoPaint(CMFCPopupMenu *this,CDC *param_1)

{
  int iVar1;
  CDC *pCVar2;
  ulong uVar3;
  CMFCPopupMenu *pCVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  CObject *pCVar7;
  CObject *pCVar8;
  BOOL BVar9;
  undefined4 uVar10;
  char cVar11;
  CClientDC local_78 [4];
  HDC local_74;
  CDrawingManager local_64 [4];
  undefined4 *local_60;
  CMFCVisualManager *local_5c;
  CDC *local_58;
  CMFCVisualManager *local_54;
  CMFCVisualManager *local_50;
  CMFCVisualManager *local_4c;
  CMFCVisualManager *local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x1005c09d;
  local_58 = param_1;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  if ((*(int *)(this + 0xfc0) != 0) && (DAT_10166e54 == 0)) {
    uVar3 = CWnd::GetExStyle((CWnd *)this);
    local_5c = (CMFCVisualManager *)(uVar3 & 0x400000);
    iVar6 = *(int *)(this + 0xfc0);
    if (local_5c == (CMFCVisualManager *)0x0) {
      local_24.right = local_24.right + -iVar6;
    }
    else {
      local_24.left = local_24.left + iVar6;
    }
    local_24.bottom = local_24.bottom + -iVar6;
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    SetRectEmpty(&local_44);
    if (*(int *)(this + 0x148) != 0) {
      pCVar4 = GetParentPopupMenu(this);
      if (pCVar4 == (CMFCPopupMenu *)0x0) {
        iVar6 = *(int *)(this + 0x148);
        iVar1 = *(int *)(iVar6 + 0x6c);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
          local_44.left = *(LONG *)(iVar6 + 0x54);
          local_44.top = *(LONG *)(iVar6 + 0x58);
          local_44.right = *(int *)(iVar6 + 0x5c) + -1;
          local_44.bottom = *(int *)(iVar6 + 0x60) + -1;
          MapWindowPoints(*(HWND *)(iVar1 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_44,2);
        }
      }
    }
    pCVar5 = CMFCVisualManager::GetInstance();
    iVar6 = (**(code **)(*(int *)pCVar5 + 0x2e4))();
    if (iVar6 != 0) {
      pCVar4 = GetParentPopupMenu(this);
      if (((((pCVar4 != (CMFCPopupMenu *)0x0) && (iVar6 = *(int *)(this + 0x148), iVar6 != 0)) &&
           (*(int *)(iVar6 + 0xb4) != 0)) &&
          ((*(int *)(pCVar4 + 0x10b0) != 0 && (*(int *)(this + 0x10b0) == 0)))) &&
         ((*(int *)(this + 0xea4) == 4 &&
          ((iVar1 = *(int *)(iVar6 + 0x6c), iVar1 != 0 && (*(int *)(iVar1 + 0x20) != 0)))))) {
        local_44.left = *(LONG *)(iVar6 + 0x54);
        local_44.top = *(LONG *)(iVar6 + 0x58);
        local_44.right = *(int *)(iVar6 + 0x5c);
        local_44.bottom = *(int *)(iVar6 + 0x60) + 2;
        MapWindowPoints(*(HWND *)(iVar1 + 0x20),*(HWND *)(this + 0x20),(LPPOINT)&local_44,2);
      }
    }
    if (DAT_10166c14 != 0) {
      CClientDC::CClientDC(local_78,(CWnd *)0x0);
      local_8 = 0;
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_34);
      pCVar2 = local_58;
      BitBlt(*(HDC *)(local_58 + 4),0,0,local_34.right - local_34.left,
             local_34.bottom - local_34.top,local_74,local_34.left,local_34.top,0xcc0020);
      if (local_5c != (CMFCVisualManager *)0x0) {
        CDrawingManager::CDrawingManager(local_64,pCVar2);
        local_4c = (CMFCVisualManager *)(local_34.right + -local_34.left);
        local_48 = (CMFCVisualManager *)(local_34.bottom - local_34.top);
        local_54 = (CMFCVisualManager *)0x0;
        local_50 = (CMFCVisualManager *)0x0;
        local_8._0_1_ = 1;
        CDrawingManager::MirrorRect(local_64,0,0,local_4c,local_48,1);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_1009c588((undefined4 *)local_64);
      }
      local_8 = 0xffffffff;
      CClientDC::~CClientDC(local_78);
    }
    pCVar5 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar5 + 0x40))
              (local_58,&local_24,&local_44,*(undefined4 *)(this + 0xfc0),100,0x41,this + 0xfcc,
               this + 0xfc4,local_5c);
    if (local_5c != (CMFCVisualManager *)0x0) {
      OffsetRect(&local_24,-*(int *)(this + 0xfc0),0);
    }
  }
  pCVar5 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar5 + 0x3c))
            (local_58,this,local_24.left,local_24.top,local_24.right,local_24.bottom);
  local_5c = (CMFCVisualManager *)(**(code **)(*(int *)this + 0x204))();
  InflateRect(&local_24,-(int)local_5c,-(int)local_5c);
  iVar6 = *(int *)(this + 0xecc);
  if (0 < iVar6) {
    iVar1 = *(int *)(this + 0xed4);
    local_54 = (CMFCVisualManager *)local_24.left;
    local_50 = (CMFCVisualManager *)local_24.top;
    local_4c = (CMFCVisualManager *)local_24.right;
    local_48 = (CMFCVisualManager *)local_24.bottom;
    if (iVar1 == 0) {
      local_4c = local_5c + (int)(local_24.left + iVar6);
    }
    else if (iVar1 == 1) {
      local_54 = (CMFCVisualManager *)(local_24.right + (-(int)local_5c - iVar6));
    }
    else if (iVar1 == 2) {
      local_48 = local_5c + (int)(local_24.top + iVar6);
    }
    else if (iVar1 == 3) {
      local_50 = (CMFCVisualManager *)(local_24.bottom + (-(int)local_5c - iVar6));
    }
    pCVar7 = DAT_10168578;
    if (DAT_10168578 == (CObject *)0x0) {
      pCVar7 = (CObject *)CWnd::GetTopLevelFrame((CWnd *)this);
    }
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,pCVar7);
    if (pCVar8 == (CObject *)0x0) {
      pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWndEx_1012126c,pCVar7);
      if (pCVar8 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar8 + 0x1e0))(local_58,this,&local_54);
        goto LAB_1005c3e0;
      }
      pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleIPFrameWndEx_1012089c,pCVar7);
      if (pCVar8 == (CObject *)0x0) {
        pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocIPFrameWndEx_101204e8,pCVar7);
        if (pCVar8 == (CObject *)0x0) goto LAB_1005c3e0;
      }
    }
    (**(code **)(*(int *)pCVar8 + 0x1fc))(local_58,this,&local_54);
  }
LAB_1005c3e0:
  BVar9 = IsRectEmpty((RECT *)(this + 0xfe0));
  if (BVar9 == 0) {
    pCVar5 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar5 + 0x78))
              (local_58,((RECT *)(this + 0xfe0))->left,*(undefined4 *)(this + 0xfe4),
               *(undefined4 *)(this + 0xfe8),*(undefined4 *)(this + 0xfec),
               *(undefined4 *)(this + 0xfdc));
  }
  if (*(int *)(this + 0xef0) != 0) {
    iVar6 = (**(code **)(*(int *)this + 0x1dc))();
    if (iVar6 != 0) {
      pCVar5 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar5 + 0x80))
                (local_58,*(undefined4 *)(this + 0xef8),*(undefined4 *)(this + 0xefc),
                 *(undefined4 *)(this + 0xf00),*(undefined4 *)(this + 0xf04),0,
                 *(int *)(this + 0xf18) < 0,0,0);
    }
    iVar6 = (**(code **)(*(int *)this + 0x1e0))();
    if (iVar6 != 0) {
      iVar6 = (**(code **)(*(int *)this + 0x1c0))();
      if (iVar6 != 0) {
        local_34.bottom = *(LONG *)(this + 0xf0c);
        local_34.left = local_24.left;
        local_34.right = local_24.right;
        local_34.top = (local_34.bottom - (int)local_5c) + -1;
        local_5c = CMFCVisualManager::GetInstance();
        local_60 = (undefined4 *)(*(int *)local_5c + 0x34);
        uVar10 = (**(code **)(*(int *)this + 0x1c0))
                           (local_34.left,local_34.top,local_34.right,local_34.bottom,local_34.left,
                            local_34.top,local_34.right,local_34.bottom,0);
        (*(code *)*local_60)(local_58,uVar10);
      }
      pCVar5 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar5 + 0x80))
                (local_58,*(undefined4 *)(this + 0xf08),*(undefined4 *)(this + 0xf0c),
                 *(undefined4 *)(this + 0xf10),*(undefined4 *)(this + 0xf14),1,
                 0 < *(int *)(this + 0xf18),0,0);
    }
  }
  BVar9 = IsRectEmpty((RECT *)(this + 0x10a0));
  if (BVar9 == 0) {
    if (*(int *)(this + 0x1088) == 0) {
      cVar11 = 0 < *(int *)(this + 0x1090);
    }
    else {
      cVar11 = (0 < *(int *)(this + 0x1090)) + '\x02';
    }
    pCVar5 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar5 + 0x7c))
              (local_58,((RECT *)(this + 0x10a0))->left,*(undefined4 *)(this + 0x10a4),
               *(undefined4 *)(this + 0x10a8),*(undefined4 *)(this + 0x10ac),cVar11);
  }
  *(undefined4 *)(this + 0xebc) = 1;
  FUN_100f90cf();
  return;
}

