// rea decompile_all
// name: CMFCColorButton::OnDraw
// address: 0x100513ee
// body: available
// range: 0x100513ee-0x1005168d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100514bf to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorButton::OnDraw(class CDC *,class CRect const
   &,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCColorButton::OnDraw(CMFCColorButton *this,CDC *param_1,CRect *param_2,uint param_3)

{
  CMFCColorButton *pCVar1;
  int iVar2;
  UINT UVar3;
  CMFCVisualManager *pCVar4;
  int local_5c [2];
  CPalette *local_54;
  CMFCColorButton *local_50;
  COLORREF local_4c;
  tagRECT local_48;
  RECT local_38;
  tagRECT local_28;
  undefined **local_18;
  undefined4 uStack_14;
  undefined **local_10;
  CRect *local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  local_50 = this;
  if (*(int *)(this + 0x7a8) == 0) {
    RebuildPalette(this,(CPalette *)0x0);
  }
  local_54 = CDC::SelectPalette(param_1,*(CPalette **)(this + 0x7a8),0);
  RealizePalette(*(HDC *)(param_1 + 4));
  FUN_10037b18(local_5c);
  pCVar1 = local_50;
  local_28.left = *(LONG *)param_2;
  local_28.top = *(LONG *)(param_2 + 4);
  local_28.bottom = *(LONG *)(param_2 + 0xc);
  local_38.top = *(LONG *)(local_c + 4);
  local_38.right = *(LONG *)(local_c + 8);
  local_38.bottom = *(LONG *)(local_c + 0xc);
  local_38.left = *(int *)(param_2 + 8) + (-8 - local_5c[0]);
  local_4c = *(COLORREF *)(local_50 + 0x758);
  local_28.right = local_38.left;
  if ((local_4c == 0xffffffff) &&
     (local_4c = *(COLORREF *)(local_50 + 0x75c), *(int *)(*(int *)(local_50 + 0x7a0) + -0xc) != 0))
  {
    local_28.right = (local_28.bottom - local_28.top) + local_28.left;
    uStack_14 = *(undefined4 *)(local_c + 4);
    local_c = *(CRect **)(local_c + 0xc);
    local_18 = (undefined **)local_28.right;
    local_10 = (undefined **)local_38.left;
    iVar2 = (**(code **)(*(int *)local_50 + 0x188))(param_1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    CDC::SetBkMode(param_1,1);
    (**(code **)(*(int *)param_1 + 0x30))(DAT_10166ac0);
    (**(code **)(*(int *)param_1 + 0x68))
              (*(int *)(pCVar1 + 0x7a0),*(undefined4 *)(*(int *)(pCVar1 + 0x7a0) + -0xc),&local_18,
               0x8025);
    (**(code **)(*(int *)param_1 + 0x28))(iVar2);
  }
  pCVar1 = local_50;
  InflateRect(&local_28,-2,-2);
  CDC::Draw3dRect(param_1,&local_28,DAT_10166abc,DAT_10166abc);
  InflateRect(&local_28,-1,-1);
  CDC::Draw3dRect(param_1,&local_28,DAT_10166ac8,DAT_10166ac8);
  InflateRect(&local_28,-1,-1);
  if ((local_4c != 0xffffffff) && ((param_3 & 4) == 0)) {
    if (DAT_10166c4c == 8) {
      UVar3 = GetNearestPaletteIndex(*(HPALETTE *)(*(int *)(pCVar1 + 0x7a8) + 4),local_4c);
      local_4c = UVar3 & 0xffff | 0x1000000;
    }
    CBrush::CBrush((CBrush *)&local_10,local_4c);
    FillRect(*(HDC *)(param_1 + 4),&local_28,(HBRUSH)local_c);
    local_10 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_10);
  }
  local_48.left = local_38.left;
  local_48.top = local_38.top;
  local_48.right = local_38.right;
  local_48.bottom = local_38.bottom;
  InflateRect(&local_48,-2,-2);
  if (DAT_10168378 != 0) {
    pCVar4 = CMFCVisualManager::GetInstance();
    iVar2 = (**(code **)(*(int *)pCVar4 + 0x1c4))
                      (param_1,local_48.left,local_48.top,local_48.right,local_48.bottom,param_3 & 4
                       ,*(int *)(local_50 + 0xa0),*(int *)(local_50 + 0xa8));
    if (iVar2 != 0) goto LAB_1005166b;
  }
  FillRect(*(HDC *)(param_1 + 4),&local_38,DAT_10166b34);
  local_10 = (undefined **)0x0;
  local_c = (CRect *)0x0;
  CMenuImages::Draw(param_1,0xd,(CRect *)&local_38,param_3 >> 2 & 1,(CSize *)&local_10);
  CDC::Draw3dRect(param_1,&local_38,DAT_10166acc,DAT_10166ac8);
  InflateRect(&local_38,-1,-1);
  CDC::Draw3dRect(param_1,&local_38,DAT_10166abc,DAT_10166ab8);
LAB_1005166b:
  if (local_54 != (CPalette *)0x0) {
    CDC::SelectPalette(param_1,local_54,0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

