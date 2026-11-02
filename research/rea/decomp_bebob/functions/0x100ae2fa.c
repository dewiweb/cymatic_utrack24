// rea decompile_all
// name: OnDrawOnList
// address: 0x100ae2fa
// body: available
// range: 0x100ae2fa-0x100ae5e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCRibbonEdit::OnDrawOnList(class CDC *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,int,class
   CRect,int,int)
    public: virtual void __thiscall CMFCRibbonEdit::OnDrawOnList(class CDC *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,int,class
   CRect,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
OnDrawOnList(void *this,CDC *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CDC *this_00;
  int iVar9;
  CMFCVisualManager *pCVar10;
  CPen *pCVar11;
  int local_160;
  int local_15c;
  undefined4 local_158;
  undefined1 local_154 [4];
  int local_150;
  CDC *local_14c;
  CMFCToolBarComboBoxButton local_148 [244];
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x170;
  local_14c = param_1;
  local_8 = 0;
  local_34.left = param_4;
  local_150 = (param_7 - param_5) * 2;
  local_34.top = param_5;
  local_158 = *(undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x78) = 0;
  local_34.right = param_4 + param_3;
  local_34.bottom = param_7;
  (**(code **)(*(int *)this + 0x70))(&local_160,1);
  if ((local_160 != 0) || (local_15c != 0)) {
    InflateRect(&local_34,-1,0);
    iVar9 = ((local_34.bottom - local_34.top) - local_15c) / 2;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    local_34.top = local_34.top + iVar9;
    local_34.bottom = local_34.top + local_15c;
    (**(code **)(*(int *)this + 0x7c))
              (local_14c,1,local_34.left,local_34.top,local_34.right,local_34.bottom);
  }
  local_44.left = param_6 - local_150;
  local_44.top = param_5;
  local_44.right = param_6;
  local_44.bottom = param_7;
  InflateRect(&local_44,-1,-1);
  local_54.left = param_4 + param_3;
  local_54.top = param_5;
  local_54.bottom = param_7;
  local_54.right = local_44.left;
  InflateRect(&local_54,-3,0);
  (**(code **)(*(int *)local_14c + 0x68))(param_2,*(undefined4 *)(param_2 + -0xc),&local_54,0x824);
  uVar1 = *(undefined4 *)((int)this + 0x18);
  uVar2 = *(undefined4 *)((int)this + 0x1c);
  uVar3 = *(undefined4 *)((int)this + 0x20);
  uVar4 = *(undefined4 *)((int)this + 0x24);
  uVar5 = *(undefined4 *)((int)this + 0xd4);
  uVar6 = *(undefined4 *)((int)this + 0xd8);
  uVar7 = *(undefined4 *)((int)this + 0xdc);
  uVar8 = *(undefined4 *)((int)this + 0xe0);
  *(LONG *)((int)this + 0x18) = local_44.left;
  *(LONG *)((int)this + 0x1c) = local_44.top;
  *(LONG *)((int)this + 0x20) = local_44.right;
  *(LONG *)((int)this + 0x24) = local_44.bottom;
  *(LONG *)((int)this + 0xd4) = local_44.left;
  *(LONG *)((int)this + 0xd8) = local_44.top;
  *(LONG *)((int)this + 0xdc) = local_44.right;
  *(LONG *)((int)this + 0xe0) = local_44.bottom;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + -0xf;
  pCVar10 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar10 + 0x230))(local_14c,this);
  pCVar10 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar10 + 0x238))(local_14c,this);
  if (*(int *)((int)this + 0x17c) == 0) {
    local_24.left = local_44.left;
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
    InflateRect(&local_24,-3,-3);
    this_00 = local_14c;
    local_24.bottom = local_24.bottom + -1;
    local_24.right = local_24.left + 7;
    pCVar11 = (CPen *)(**(code **)(*(int *)local_14c + 0x24))(7);
    CDC::MoveTo(this_00,(int)local_154,local_24.left);
    CDC::LineTo(this_00,local_24.right,local_24.top);
    CDC::MoveTo(this_00,(int)local_154,(local_24.left + local_24.right) / 2);
    CDC::LineTo(this_00,(local_24.left + local_24.right) / 2,local_24.bottom);
    CDC::MoveTo(this_00,(int)local_154,local_24.left);
    CDC::LineTo(this_00,local_24.right,local_24.bottom);
    CDC::SelectObject(this_00,pCVar11);
  }
  else {
    CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton(local_148);
    local_24.left = *(int *)((int)this + 0xdc);
    local_24.top = local_44.top;
    local_24.right = local_44.right;
    local_24.bottom = local_44.bottom;
    local_8._0_1_ = 1;
    InflateRect(&local_24,-2,-2);
    pCVar10 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar10 + 0x6c))
              (local_14c,local_24.left,local_24.top,local_24.right,local_24.bottom,0,0,0,local_148);
    local_8 = (uint)local_8._1_3_ << 8;
    CMFCToolBarComboBoxButton::~CMFCToolBarComboBoxButton(local_148);
  }
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar2;
  *(undefined4 *)((int)this + 0x20) = uVar3;
  *(undefined4 *)((int)this + 0x24) = uVar4;
  *(undefined4 *)((int)this + 0xd4) = uVar5;
  *(undefined4 *)((int)this + 0xd8) = uVar6;
  *(undefined4 *)((int)this + 0xdc) = uVar7;
  *(undefined4 *)((int)this + 0xe0) = uVar8;
  *(undefined4 *)((int)this + 0x78) = local_158;
  FUN_10001030((undefined4 *)(param_2 + -0x10));
  FUN_100f90cf();
  return;
}

