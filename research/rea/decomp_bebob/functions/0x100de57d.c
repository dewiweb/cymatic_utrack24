// rea decompile_all
// name: CSmartDockingGroupGuidesManager::DrawCentralGroupGuides
// address: 0x100de57d
// body: available
// range: 0x100de57d-0x100de767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CSmartDockingGroupGuidesManager::DrawCentralGroupGuides(class CDC
   &,class CBrush &,class CBrush &,class CRect)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingGroupGuidesManager::DrawCentralGroupGuides
          (CSmartDockingGroupGuidesManager *this,CDC *param_1,CBrush *param_2,CBrush *param_3,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  AFX_SMARTDOCK_THEME AVar1;
  HDC pHVar2;
  HBRUSH pHVar3;
  CSmartDockingGroupGuidesManager *pCVar4;
  CDC local_4c [16];
  CBrush *local_3c;
  CDC *local_38;
  undefined **local_34;
  HBRUSH local_30;
  int local_2c;
  CBrush *local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x100de589;
  local_3c = param_2;
  local_38 = param_1;
  local_28 = param_3;
  if (DAT_10168164 == 0) {
    AVar1 = GetVMTheme();
    local_2c = 0;
    if (AVar1 != 2) goto LAB_100de5bb;
  }
  local_2c = 1;
LAB_100de5bb:
  FUN_1001714b((undefined4 *)local_4c);
  local_8 = 0;
  if (param_1 == (CDC *)0x0) {
    pHVar2 = (HDC)0x0;
  }
  else {
    pHVar2 = *(HDC *)(param_1 + 4);
  }
  pHVar2 = CreateCompatibleDC(pHVar2);
  CDC::Attach(local_4c,pHVar2);
  if (local_2c == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetBoundsRect(*(HDC *)(param_1 + 8),&local_24,0);
    local_30 = (HBRUSH)0x0;
    local_34 = CBrush::vftable;
    local_8._0_1_ = 1;
    pHVar3 = CreateSolidBrush(DAT_10168120);
    CMenu::Attach((CMenu *)&local_34,(HMENU__ *)pHVar3);
    FillRect(*(HDC *)(param_1 + 4),&local_24,local_30);
    local_8 = (uint)local_8._1_3_ << 8;
    local_34 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_34);
  }
  if (*(int *)(this + 0xf9c) == 0) {
    CDC::FillRgn(param_1,(CRgn *)(this + 0x1020),local_3c);
    if ((((*(int *)(this + 0x102c) == 0) || (DAT_10168134 != 0)) || (*(int *)(this + 0xf10) == 0))
       || (*(int *)(this + 0xee4) == 0)) {
      CDC::FrameRgn(param_1,(CRgn *)(this + 0x1020),local_28,1,1);
    }
    else {
      CBrush::CBrush((CBrush *)&local_34,0xca7041);
      CDC::FrameRgn(param_1,(CRgn *)(this + 0x1020),(CBrush *)&local_34,1,1);
      local_34 = CBrush::vftable;
      CImageList::~CImageList((CImageList *)&local_34);
    }
  }
  else {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + 0xf14),local_38,param_5,param_6,param_7,param_8,0,1,1,0,
               0,0,0,((local_2c == 0) - 1U & 0xc1) - 1);
    param_1 = local_38;
  }
  if (3 < (*(int *)(this + 0x102c) != 0) + 7) {
    pCVar4 = this + 0x8c;
    local_28 = (CBrush *)((*(int *)(this + 0x102c) != 0) + 4);
    do {
      if (*(int *)(pCVar4 + 0x2e4) != 0) {
        (**(code **)(*(int *)pCVar4 + 0x30))(param_1,local_2c);
      }
      pCVar4 = pCVar4 + 0x2e8;
      local_28 = local_28 + -1;
    } while (local_28 != (CBrush *)0x0);
  }
  local_8 = 0xffffffff;
  CDC::~CDC(local_4c);
  FUN_100f90cf();
  return;
}

