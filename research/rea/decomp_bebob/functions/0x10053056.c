// rea decompile_all
// name: CMFCButton::OnDraw
// address: 0x10053056
// body: available
// range: 0x10053056-0x100534be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100531a0 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCButton::OnDraw(class CDC *,class CRect const &,unsigned
   int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCButton::OnDraw(CMFCButton *this,CDC *param_1,CRect *param_2,uint param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  wchar_t *pwVar6;
  BOOL BVar7;
  IMAGES_IDS IVar8;
  CMFCButton *this_00;
  int iVar9;
  undefined4 local_5c;
  uint local_58;
  int local_54;
  wchar_t *local_50;
  CDC *local_4c;
  CMFCToolBarImages *local_48;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int iStack_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x10053062;
  local_4c = param_1;
  local_34.left = *(LONG *)param_2;
  local_34.top = *(LONG *)(param_2 + 4);
  local_34.right = *(LONG *)(param_2 + 8);
  local_34.bottom = *(LONG *)(param_2 + 0xc);
  local_24.left = *(LONG *)param_2;
  local_24.top = *(LONG *)(param_2 + 4);
  local_24.right = *(LONG *)(param_2 + 8);
  local_24.bottom = *(LONG *)(param_2 + 0xc);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&local_50,(int *)ppuVar1);
  local_8 = 0;
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_50);
  if (*(int *)(this + 0xd4) == 0) {
    SetRectEmpty(&local_24);
  }
  else {
    if (*(int *)(local_50 + -6) != 0) {
      iVar2 = *(int *)this;
      if (*(int *)(this + 0x80) == 0) {
        if (*(int *)(this + 0x7c) == 0) {
          iVar2 = (**(code **)(iVar2 + 0x18c))();
          local_34.left = local_34.left + iVar2 / 2 + *(int *)(this + 0xd4);
          iVar2 = (**(code **)(*(int *)this + 0x18c))();
          local_24.left = local_24.left + iVar2 / 2;
          local_24.right = local_34.left;
        }
        else {
          iVar2 = (**(code **)(iVar2 + 0x18c))();
          local_34.right = local_34.right + (-(iVar2 / 2) - *(int *)(this + 0xd4));
          local_24.left = local_34.right;
          iVar2 = (**(code **)(*(int *)this + 0x18c))();
          local_24.right = local_24.right - iVar2 / 2;
        }
      }
      else {
        iVar2 = (**(code **)(iVar2 + 400))();
        local_34.top = iVar2 + *(int *)(this + 0xd8) + local_24.top;
        local_24.bottom = local_34.top;
        iVar2 = (**(code **)(*(int *)this + 400))();
        local_34.bottom = local_34.bottom - iVar2;
      }
    }
    iVar2 = ((local_24.bottom - *(int *)(this + 0xd8)) - local_24.top) / 2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    InflateRect(&local_24,-(((local_24.right - *(int *)(this + 0xd4)) - local_24.left) / 2),-iVar2);
  }
  iVar2 = (**(code **)(*(int *)this + 0x188))(local_4c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  CDC::SetBkMode(local_4c,1);
  iVar9 = DAT_10166ac0;
  if (*(int *)(this + 0x744) != -1) {
    iVar9 = *(int *)(this + 0x744);
  }
  if ((*(int *)(this + 0xa8) != 0) && (*(int *)(this + 0x748) != -1)) {
    iVar9 = *(int *)(this + 0x748);
  }
  local_48 = (CMFCToolBarImages *)0x8000;
  local_54 = 0;
  iVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_50
                     ,L'\n',0);
  if (iVar3 < 0) {
    local_48 = (CMFCToolBarImages *)0x8024;
    local_54 = 1;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 400))();
    InflateRect(&local_34,0,-(iVar3 / 2));
  }
  iVar3 = *(int *)(this + 0x78);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(int *)this + 0x18c))();
    local_34.left = local_34.left + iVar3 / 2;
  }
  else if (iVar3 == 1) {
    local_48 = (CMFCToolBarImages *)((uint)local_48 | 2);
    iVar3 = (**(code **)(*(int *)this + 0x18c))();
    local_34.right = local_34.right - iVar3 / 2;
  }
  else if (iVar3 == 2) {
    local_48 = (CMFCToolBarImages *)((uint)local_48 | 1);
  }
  uVar4 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar4 & 0x400000) != 0) {
    local_48 = (CMFCToolBarImages *)((uint)local_48 | 0x20000);
  }
  local_58 = param_3 & 4;
  if ((local_58 != 0) && (*(int *)(this + 0x90) != 0)) {
    (**(code **)(*(int *)local_4c + 0x30))(DAT_10166abc);
    local_44 = (undefined1  [4])local_34.left;
    local_40 = local_34.top;
    local_3c = local_34.right;
    iStack_38 = local_34.bottom;
    OffsetRect((LPRECT)local_44,1,1);
    (**(code **)(*(int *)this + 0x184))(local_4c,local_44,&local_50,local_48,param_3);
    iVar9 = DAT_10166ad0;
  }
  (**(code **)(*(int *)local_4c + 0x30))(iVar9);
  if (*(int *)(this + 0xcc) != 0) {
    iVar9 = local_34.right - local_34.left;
    piVar5 = (int *)CDC::GetTextExtent(local_4c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                                 *)&local_3c);
    if ((*piVar5 <= iVar9) || (pwVar6 = local_50, local_54 == 0)) {
      pwVar6 = (wchar_t *)0x0;
    }
    SetTooltip(this,pwVar6);
    *(undefined4 *)(this + 0xcc) = 0;
  }
  (**(code **)(*(int *)this + 0x184))(local_4c,&local_34,&local_50,local_48,param_3);
  BVar7 = IsRectEmpty(&local_24);
  if (BVar7 != 0) goto LAB_100534a1;
  IVar8 = *(IMAGES_IDS *)(this + 0x72c);
  if (IVar8 != 0xffffffff) {
    if (((local_58 != 0) && (*(int *)(this + 0x90) != 0)) && (*(IMAGES_IDS *)(this + 0x730) != 0)) {
      IVar8 = *(IMAGES_IDS *)(this + 0x730);
    }
    local_5c = 0;
    local_58 = 0;
    CMenuImages::Draw(local_4c,IVar8,(CPoint *)&local_24,*(IMAGE_STATE *)(this + 0x734),
                      (CSize *)&local_5c);
    goto LAB_100534a1;
  }
  if ((local_58 == 0) || (*(int *)(this + 0x90) == 0)) {
    local_54 = 0;
LAB_100533af:
    if ((*(int *)(this + 0xa8) == 0) ||
       (local_48 = (CMFCToolBarImages *)(this + 0x514), *(int *)(this + 0x518) == 0)) {
      local_48 = (CMFCToolBarImages *)(this + 0x408);
    }
    if (local_54 != 0) goto LAB_100533d3;
LAB_100533e3:
    if ((*(int *)(this + 0xa8) == 0) || (this_00 = this + 0x1f0, *(int *)(this + 500) == 0)) {
      this_00 = this + 0xe4;
    }
  }
  else {
    local_54 = 1;
    if (*(int *)(this + 0x624) == 0) goto LAB_100533af;
    local_48 = (CMFCToolBarImages *)(this + 0x620);
LAB_100533d3:
    if (*(int *)(this + 0x300) == 0) goto LAB_100533e3;
    this_00 = this + 0x2fc;
  }
  if ((*(int *)(this + 0xb4) == 0) || (*(int *)(local_48 + 4) == 0)) {
    if (*(int *)(this_00 + 4) == 0) goto LAB_100534a1;
    CMFCToolBarImages::PrepareDrawImage((CMFCToolBarImages *)this_00,&local_40,0,0,0);
    if ((local_54 == 0) || (*(int *)(this + 0x300) != 0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
    CMFCToolBarImages::Draw
              ((CMFCToolBarImages *)this_00,local_4c,local_24.left,local_24.top,0,0,iVar9,0,0,0,0xff
              );
  }
  else {
    CMFCToolBarImages::PrepareDrawImage(local_48,&local_40,0,0,0);
    if ((local_54 == 0) || (*(int *)(this + 0x624) != 0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1;
    }
    CMFCToolBarImages::Draw(local_48,local_4c,local_24.left,local_24.top,0,0,iVar9,0,0,0,0xff);
    this_00 = (CMFCButton *)local_48;
  }
  CMFCToolBarImages::EndDrawImage((CMFCToolBarImages *)this_00,(tagAFXDrawState *)&local_40);
LAB_100534a1:
  (**(code **)(*(int *)local_4c + 0x28))(iVar2);
  FUN_10001030((undefined4 *)(local_50 + -8));
  FUN_100f90cf();
  return;
}

