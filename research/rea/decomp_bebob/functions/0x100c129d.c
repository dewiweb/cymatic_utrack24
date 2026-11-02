// rea decompile_all
// name: CMFCAutoHideButton::OnDraw
// address: 0x100c129d
// body: available
// range: 0x100c129d-0x100c172a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c1657 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCAutoHideButton::OnDraw(class CDC *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCAutoHideButton::OnDraw(CMFCAutoHideButton *this,CDC *param_1)

{
  CMFCVisualManager *pCVar1;
  int iVar2;
  uint uVar3;
  HICON hIcon;
  int iVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined4 uVar7;
  CMFCAutoHideButton *this_00;
  int extraout_EDX;
  HDC hdc;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_a0;
  int local_9c;
  int local_94;
  tagTEXTMETRICW local_90;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  tagRECT local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x100c12ac;
  pCVar1 = CMFCVisualManager::GetInstance();
  local_94 = (**(code **)(*(int *)pCVar1 + 0x1a8))();
  iVar2 = DAT_10162224;
  if (local_94 != 0) {
    iVar2 = IsHorizontal(this);
    iVar2 = (-(uint)(iVar2 != 0) & 0xfffffffe) + 7;
  }
  GetSize(this);
  SetRect((LPRECT)(this + 0x18),0,0,local_a0,local_9c);
  local_34 = DAT_1016221c;
  local_2c = DAT_1016221c;
  local_28 = DAT_1016221c;
  uVar3 = *(uint *)(this + 0x10) & 0xf000;
  local_30 = 0;
  if (uVar3 == 0x1000) {
    iVar9 = -0x5a;
LAB_100c1351:
    CGlobalUtils::FlipRect((CGlobalUtils *)&PTR_vftable_10160f68,(CRect *)&local_34,iVar9);
  }
  else {
    if (uVar3 == 0x4000) {
      iVar9 = 0x5a;
      goto LAB_100c1351;
    }
    if (uVar3 == 0x8000) {
      iVar9 = 0xb4;
      goto LAB_100c1351;
    }
  }
  if ((local_94 == 0) || (*(int *)(*(int *)(this + 0x28) + 0x104) != 0)) goto LAB_100c1419;
  local_44.left = ((LPRECT)(this + 0x18))->left;
  local_44.top = *(LONG *)(this + 0x1c);
  local_44.right = *(LONG *)(this + 0x20);
  uVar3 = *(uint *)(this + 0x10) & 0xf000;
  local_44.bottom = *(LONG *)(this + 0x24);
  if (uVar3 == 0x1000) {
LAB_100c13bb:
    iVar10 = (*(int *)(this + 0x1c) - *(int *)(this + 0x24)) + local_a0 / 2;
    iVar9 = 0;
LAB_100c13d1:
    OffsetRect(&local_44,iVar9,iVar10);
  }
  else {
    if (uVar3 == 0x2000) {
LAB_100c13a5:
      iVar10 = 0;
      iVar9 = (local_9c / 2 - *(int *)(this + 0x20)) + *(int *)(this + 0x18);
      goto LAB_100c13d1;
    }
    if (uVar3 == 0x4000) goto LAB_100c13bb;
    if (uVar3 == 0x8000) goto LAB_100c13a5;
  }
  (**(code **)(*(int *)this + 0x24))
            (param_1,local_44.left,local_44.top,local_44.right,local_44.bottom);
  (**(code **)(*(int *)this + 0x28))
            (param_1,local_44.left,local_44.top,local_44.right,local_44.bottom,local_34,local_30,
             local_2c,local_28);
LAB_100c1419:
  (**(code **)(*(int *)this + 0x24))
            (param_1,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
             *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24));
  (**(code **)(*(int *)this + 0x28))
            (param_1,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
             *(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x24),local_34,local_30,local_2c,
             local_28);
  if (*(int *)(this + 0x2c) != 0) {
    local_24.left = *(LONG *)(this + 0x18);
    local_24.top = *(LONG *)(this + 0x1c);
    local_24.right = *(LONG *)(this + 0x20);
    local_24.bottom = *(LONG *)(this + 0x24);
    if (local_94 == 0) {
      local_24.left = local_24.left + local_34;
      local_24.top = local_24.top + local_30;
      local_24.right = local_24.right - local_2c;
      local_24.bottom = local_24.bottom - local_28;
    }
    InflateRect(&local_24,-DAT_10162220,-DAT_10162220);
    iVar9 = 0;
    if (local_94 != 0) {
      iVar10 = IsHorizontal(this);
      if (iVar10 == 0) {
        iVar8 = -(((local_24.right - local_24.left) * 2) / 3);
        iVar10 = 0;
      }
      else {
        iVar8 = 0;
        iVar10 = -(((local_24.bottom - local_24.top) * 2) / 3);
      }
      InflateRect(&local_24,iVar10,iVar8);
    }
    if (*(int *)(this + 0x2c) != 0) {
      hIcon = (HICON)(**(code **)(**(int **)(this + 0x2c) + 0x1b8))(0);
      iVar8 = DAT_10166bb0;
      iVar10 = DAT_10166bac;
      if (hIcon == (HICON)0x0) {
        iVar9 = IsHorizontal(this);
        if (iVar9 == 0) {
          local_24.top = local_24.top + DAT_10162220;
        }
        else {
          local_24.left = local_24.left + DAT_10162220;
        }
      }
      else {
        iVar4 = IsHorizontal(this);
        if (iVar4 == 0) {
          iVar9 = ((local_24.right - local_24.left) - extraout_EDX) / 2;
        }
        iVar4 = IsHorizontal(this_00);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = ((local_24.bottom - local_24.top) - iVar8) / 2;
        }
        if (param_1 == (CDC *)0x0) {
          hdc = (HDC)0x0;
        }
        else {
          hdc = *(HDC *)(param_1 + 4);
        }
        DrawIconEx(hdc,local_24.left + iVar9,local_24.top + iVar4,hIcon,iVar10,iVar8,0,(HBRUSH)0x0,3
                  );
        iVar9 = IsHorizontal(this);
        if (iVar9 == 0) {
          local_24.top = local_24.top + iVar8 + iVar2;
        }
        else {
          local_24.left = local_24.left + iVar10 + iVar2;
        }
      }
      ppuVar5 = FUN_1000ad47();
      FUN_10005e00(&local_94,(int *)ppuVar5);
      local_8 = 0;
      CWnd::GetWindowTextW
                (*(CWnd **)(this + 0x2c),
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_94);
      if ((((*(int *)(local_94 + -0xc) != 0) && (*(int *)(*(int *)(this + 0x28) + 0x10c) != 0)) ||
          (hIcon == (HICON)0x0)) || (DAT_1016222c == 0)) {
        iVar9 = CDC::SetBkMode(param_1,1);
        iVar10 = IsHorizontal(this);
        puVar6 = &DAT_10166bb4;
        if (iVar10 == 0) {
          puVar6 = &DAT_10166be4;
        }
        iVar10 = (**(code **)(*(int *)param_1 + 0x28))(puVar6);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        pCVar1 = CMFCVisualManager::GetInstance();
        iVar8 = *(int *)param_1;
        uVar7 = (**(code **)(*(int *)pCVar1 + 0x1b4))(this);
        (**(code **)(iVar8 + 0x30))(uVar7);
        iVar8 = IsHorizontal(this);
        if (iVar8 == 0) {
          GetTextMetricsW(*(HDC *)(param_1 + 8),&local_90);
          iStack_50 = local_24.top;
          local_54 = local_24.right -
                     (((local_24.right - local_90.tmHeight) - local_24.left) + 1) / 2;
          local_48 = local_24.top + iVar2;
          iStack_4c = local_24.right;
          (**(code **)(*(int *)param_1 + 0x68))
                    (local_94,*(undefined4 *)(local_94 + -0xc),&local_54,0x124);
        }
        else {
          (**(code **)(*(int *)param_1 + 0x68))
                    (local_94,*(undefined4 *)(local_94 + -0xc),&local_24,0x24);
        }
        (**(code **)(*(int *)param_1 + 0x28))(iVar10);
        CDC::SetBkMode(param_1,iVar9);
      }
      FUN_10001030((undefined4 *)(local_94 + -0x10));
    }
  }
  FUN_100f90cf();
  return;
}

