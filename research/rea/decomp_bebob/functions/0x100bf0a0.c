// rea decompile_all
// name: OnDrawButton
// address: 0x100bf0a0
// body: available
// range: 0x100bf0a0-0x100bf35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawButton(class CDC *,class CRect,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,int)
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawButton(class CDC *,class CRect,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
OnDrawButton(void *this,CDC *param_1,LONG param_2,LONG param_3,int param_4,int param_5,CPen *param_6
            ,int param_7)

{
  CDC *pCVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  uint uVar4;
  COLORREF CVar5;
  CPen *pCVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined **local_64 [2];
  CPen *local_5c;
  CDC *local_58;
  POINT *local_54;
  int local_50;
  tagRECT local_4c;
  tagRECT local_3c;
  POINT local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100bf0ac;
  local_58 = param_1;
  local_5c = param_6;
  if ((*(int *)((int)this + 0x450) == 0) && (*(int *)((int)this + 0x458) == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  pCVar2 = CMFCVisualManager::GetInstance();
  local_54 = (POINT *)(**(code **)(*(int *)pCVar2 + 0xd8))
                                (local_58,this,param_2,param_3,param_4,param_5,uVar9,
                                 *(undefined4 *)((int)this + 0x454),*(int *)((int)this + 0x460) == 0
                                 ,*(undefined4 *)((int)this + 0x464),0);
  local_4c.left = param_2;
  local_4c.top = param_3;
  local_4c.right = param_4;
  local_4c.bottom = param_5;
  InflateRect(&local_4c,-*(int *)((int)this + 0x474),0);
  if (*(int *)((int)this + 0x2b0) != 0) {
    InflateRect(&local_4c,-10,0);
  }
  pCVar1 = local_58;
  if (((*(int *)((int)this + 0x438) != 0) && (param_7 != 0)) && (*(int *)((int)this + 0x464) != 0))
  {
    local_4c.right = local_4c.right + -10;
  }
  local_50 = -1;
  if (local_54 != (POINT *)0xffffffff) {
    local_50 = (**(code **)(*(int *)local_58 + 0x30))(local_54);
  }
  (**(code **)(*(int *)pCVar1 + 0x68))
            (*(int *)local_5c,*(undefined4 *)(*(int *)local_5c + -0xc),&local_4c,0x8024);
  if (local_50 != -1) {
    (**(code **)(*(int *)pCVar1 + 0x30))(local_50);
  }
  if ((*(int *)((int)this + 0x438) != 0) && (param_7 != 0)) {
    if (*(int *)((int)this + 0x464) != 0) {
      local_3c.bottom = param_5 - *(int *)((int)this + 0x470);
      local_3c.right = param_4;
      local_3c.top = local_3c.bottom + -10;
      local_3c.left = local_4c.right;
      iVar8 = (param_4 - local_4c.right) / 2 + local_4c.right;
      InflateRect(&local_3c,0,-((local_3c.bottom - local_3c.top) / 3));
      iVar3 = (local_3c.bottom - local_3c.top) / 3;
      InflateRect(&local_3c,-iVar3,-iVar3);
      pCVar1 = local_58;
      local_3c.right = (iVar8 - local_3c.top) + 1 + local_3c.bottom;
      local_3c.left = (iVar8 - local_3c.bottom) + -1 + local_3c.top;
      uVar4 = local_3c.right - local_3c.left;
      uVar7 = uVar4 & 0x80000001;
      bVar10 = uVar7 == 0;
      if ((int)uVar7 < 0) {
        bVar10 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (!bVar10) {
        uVar4 = uVar4 - 1;
      }
      local_54 = &local_2c;
      local_50 = 2;
      do {
        local_54->x = 0;
        local_54->y = 0;
        local_54 = local_54 + 1;
        local_50 = local_50 + -1;
      } while (-1 < local_50);
      local_1c = (int)uVar4 / 2 + local_3c.left;
      local_18 = local_3c.bottom + 1;
      local_2c.y = local_3c.top;
      local_20 = local_3c.top;
      local_2c.x = local_3c.left;
      local_24 = local_3c.right;
      CVar5 = GetTextColor(*(HDC *)(local_58 + 8));
      CBrush::CBrush((CBrush *)local_64,CVar5);
      local_8 = 0;
      pCVar6 = (CPen *)(**(code **)(*(int *)pCVar1 + 0x24))(8);
      local_5c = CDC::SelectObject(pCVar1,(CPen *)local_64);
      CDC::SetPolyFillMode(pCVar1,2);
      Polygon(*(HDC *)(pCVar1 + 4),&local_2c,3);
      CDC::SelectObject(pCVar1,local_5c);
      CDC::SelectObject(pCVar1,pCVar6);
      local_8 = 0xffffffff;
      local_64[0] = CBrush::vftable;
      CImageList::~CImageList((CImageList *)local_64);
    }
    if ((*(int *)((int)this + 0x450) == 0) && (*(int *)((int)this + 0x458) == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    pCVar2 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar2 + 0xdc))
              (local_58,this,param_2,param_3,param_4,param_5,uVar9,
               *(undefined4 *)((int)this + 0x454),*(int *)((int)this + 0x460) == 0,
               *(undefined4 *)((int)this + 0x464),0);
  }
  FUN_100f90cf();
  return;
}

