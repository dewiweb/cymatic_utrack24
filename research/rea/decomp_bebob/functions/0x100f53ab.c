// rea decompile_all
// name: CMFCColorPickerCtrl::DrawCursor
// address: 0x100f53ab
// body: available
// range: 0x100f53ab-0x100f5530 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorPickerCtrl::DrawCursor(class CDC *,class CRect const
   &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCColorPickerCtrl::DrawCursor(CMFCColorPickerCtrl *this,CDC *param_1,CRect *param_2)

{
  HWND pHVar1;
  CWnd *pCVar2;
  ulong uVar3;
  CPen *pCVar4;
  CPen *pCVar5;
  uint uVar6;
  int iVar7;
  undefined **local_40 [2];
  CWnd *local_38;
  undefined **local_34;
  CDC *local_30;
  POINT local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100f53b7;
  iVar7 = (*(int *)(param_2 + 8) - *(int *)param_2) / 2;
  local_30 = param_1;
  local_38 = (CWnd *)this;
  if (*(int *)(this + 0x74) == 2) {
    pHVar1 = GetFocus();
    pCVar2 = CWnd::FromHandle(pHVar1);
    uVar6 = -(uint)(pCVar2 != local_38) & 0xffffff;
    CDC::FillSolidRect(local_30,*(int *)param_2 + -1 + iVar7,*(int *)(param_2 + 4),3,5,uVar6);
    CDC::FillSolidRect(local_30,*(int *)param_2 + -1 + iVar7,*(int *)(param_2 + 0xc) + -5,3,5,uVar6)
    ;
    CDC::FillSolidRect(local_30,*(int *)param_2,iVar7 + -1 + *(int *)(param_2 + 4),5,3,uVar6);
    CDC::FillSolidRect(local_30,*(int *)(param_2 + 8) + -5,iVar7 + -1 + *(int *)(param_2 + 4),5,3,
                       uVar6);
  }
  else if (*(int *)(this + 0x74) == 1) {
    local_20 = *(int *)(param_2 + 4);
    local_2c.y = local_20 + iVar7;
    local_24 = *(int *)(param_2 + 8) + -1;
    local_18 = *(int *)(param_2 + 0xc) + -1;
    local_2c.x = *(int *)param_2;
    local_1c = local_24;
    CPen::CPen((CPen *)local_40,0,1,DAT_10166ac0);
    local_8 = 0;
    pHVar1 = GetFocus();
    pCVar2 = CWnd::FromHandle(pHVar1);
    uVar3 = DAT_10166ac0;
    if (pCVar2 != local_38) {
      uVar3 = DAT_10166ab8;
    }
    CBrush::CBrush((CBrush *)&local_34,uVar3);
    local_8._0_1_ = 1;
    pCVar4 = CDC::SelectObject(param_1,(CPen *)&local_34);
    pCVar5 = CDC::SelectObject(param_1,(CPen *)local_40);
    Polygon(*(HDC *)(param_1 + 4),&local_2c,3);
    CDC::SelectObject(param_1,pCVar4);
    CDC::SelectObject(param_1,pCVar5);
    local_8 = (uint)local_8._1_3_ << 8;
    local_34 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_34);
    local_8 = 0xffffffff;
    local_40[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_40);
  }
  FUN_100f90cf();
  return;
}

