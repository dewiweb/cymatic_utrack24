// rea decompile_all
// name: CMFCRibbonPanelMenuBar::DoPaint
// address: 0x100a4b48
// body: available
// range: 0x100a4b48-0x100a4d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a4bff to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::DoPaint(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanelMenuBar::DoPaint(CMFCRibbonPanelMenuBar *this,CDC *param_1)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  HRGN pHVar4;
  CFont *pCVar5;
  int iVar6;
  CMFCVisualManager *pCVar7;
  CDC *this_00;
  undefined **local_8c;
  undefined4 local_88;
  CDC *local_84;
  CMemDC local_80 [4];
  CDC *local_7c;
  int local_78;
  CDC local_70 [44];
  tagRECT local_44;
  RECT local_34;
  tagRECT local_24;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x100a4b57;
  CMemDC::CMemDC(local_80,param_1,(CWnd *)this);
  local_8 = 0;
  local_84 = local_70;
  if (local_78 == 0) {
    local_84 = local_7c;
  }
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  (**(code **)(*(int *)param_1 + 0x50))(&local_34);
  local_88 = 0;
  local_8c = CRgn::vftable;
  local_8 = CONCAT31(local_8._1_3_,1);
  BVar3 = IsRectEmpty(&local_34);
  if (BVar3 == 0) {
    pHVar4 = CreateRectRgnIndirect(&local_34);
    CMenu::Attach((CMenu *)&local_8c,(HMENU__ *)pHVar4);
    CDC::SelectClipRgn(local_84,(CRgn *)&local_8c);
  }
  iVar6 = *(int *)local_84;
  pCVar5 = CWnd::GetFont(*(CWnd **)(this + 0xe1c));
  iVar6 = (**(code **)(iVar6 + 0x28))(pCVar5);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  CDC::SetBkMode(local_84,1);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_44.left = local_24.left;
  local_44.top = local_24.top;
  local_44.right = local_24.right;
  local_44.bottom = local_24.bottom;
  InflateRect(&local_44,3,3);
  if (*(int *)(this + 0xe30) == 0) {
    iVar1 = *(int *)(*(int *)(this + 0xe20) + 0xa8);
    if (iVar1 == 0) {
      if (*(int *)(this + 0xd68) == 0) {
        pCVar7 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar7 + 0x34))
                  (local_84,this,local_24.left,local_24.top,local_24.right,local_24.bottom,
                   local_24.left,local_24.top,local_24.right,local_24.bottom,0);
      }
      else {
        pCVar7 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar7 + 0x29c))
                  (local_84,this,local_24.left,local_24.top,local_24.right,local_24.bottom);
      }
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x3c4);
      *(CMFCRibbonPanelMenuBar **)(iVar1 + 0x3c4) = this;
      pCVar7 = CMFCVisualManager::GetInstance();
      (**(code **)(*(int *)pCVar7 + 0x210))
                (local_84,iVar1,local_44.left,local_44.top,local_44.right,local_44.bottom);
      *(undefined4 *)(iVar1 + 0x3c4) = uVar2;
    }
    (**(code **)(**(int **)(this + 0xe20) + 0x44))(local_84);
    this_00 = local_84;
  }
  else {
    pCVar7 = CMFCVisualManager::GetInstance();
    this_00 = local_84;
    (**(code **)(*(int *)pCVar7 + 0x210))
              (local_84,*(undefined4 *)(this + 0xe30),local_44.left,local_44.top,local_44.right,
               local_44.bottom);
    (**(code **)(**(int **)(this + 0xe30) + 0x10))(this_00);
  }
  (**(code **)(*(int *)this_00 + 0x28))(iVar6);
  CDC::SelectClipRgn(this_00,(CRgn *)0x0);
  local_8 = local_8 & 0xffffff00;
  local_8c = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_8c);
  local_8 = 0xffffffff;
  CMemDC::~CMemDC(local_80);
  FUN_100f90cf();
  return;
}

