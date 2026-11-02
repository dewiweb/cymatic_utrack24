// rea decompile_all
// name: CMFCCustomizeMenuButton::OnClickMenuItem
// address: 0x100d440d
// body: available
// range: 0x100d440d-0x100d470a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d4445 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCCustomizeMenuButton::OnClickMenuItem(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCCustomizeMenuButton::OnClickMenuItem(CMFCCustomizeMenuButton *this)

{
  void *this_00;
  int iVar1;
  __POSITION *p_Var2;
  int iVar3;
  uint uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CObject *pCVar7;
  CMFCPopupMenu *this_01;
  uint local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0xf0) == 0) && (*(int *)(this + 0xfc) != 0)) {
    this_00 = *(void **)(this + 0x6c);
    if (this_00 == (void *)0x0) {
LAB_100d4445:
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    iVar1 = FUN_10026099(this_00,(int)this);
    if ((iVar1 != -1) && (*(int *)((int)this_00 + 0xb7c) != iVar1)) {
      *(int *)((int)this_00 + 0xb7c) = iVar1;
      InvalidateRect(*(HWND *)((int)this_00 + 0x20),(RECT *)(this + 0x54),1);
    }
    if (*(int *)(this + 0x100) == 0) {
      iVar1 = *(int *)(this + 0xe8);
      if (iVar1 == 0x4278) {
        PostMessageW(*(HWND *)(DAT_1016977c + 0x20),DAT_10166eb8,0,0);
      }
      else if (*(int *)(this + 0xf4) == 0) {
        p_Var2 = CObList::FindIndex((CObList *)(DAT_1016977c + 0xc00),iVar1);
        if (p_Var2 == (__POSITION *)0x0) goto LAB_100d4445;
        iVar1 = *(int *)(p_Var2 + 8);
        if (iVar1 != 0) {
          local_20 = (**(code **)(*(int *)DAT_1016977c + 0x344))(iVar1,*(undefined4 *)(this + 0xe8))
          ;
          if (local_20 == 0xffffffff) {
            local_20 = (**(code **)(*(int *)DAT_1016977c + 0x344))(iVar1,0xffffffff);
          }
          else {
            iVar1 = FUN_100268b9((int)this_00);
            local_1c = 0;
            if (0 < iVar1) {
              do {
                iVar3 = FUN_100261ef(this_00,local_1c);
                uVar4 = *(uint *)(iVar3 + 0xe8);
                if (((local_20 <= uVar4) && (uVar4 != 0x4278)) && (*(int *)(iVar3 + 0xf4) != 0)) {
                  *(uint *)(iVar3 + 0xe8) = uVar4 + 1;
                }
                local_1c = local_1c + 1;
              } while (local_1c < iVar1);
            }
          }
          *(uint *)(this + 0xe8) = local_20;
          if ((*(int *)(this + 0xf8) != 0) &&
             ((uVar4 = FUN_100268b9((int)DAT_1016977c), uVar4 <= local_20 ||
              (iVar1 = FUN_100261ef(DAT_1016977c,local_20 + 1), (*(byte *)(iVar1 + 0x24) & 1) == 0))
             )) {
            (**(code **)(*(int *)DAT_1016977c + 0x348))(0xffffffff);
          }
          (**(code **)(*(int *)DAT_1016977c + 0x208))();
          (**(code **)(*(int *)DAT_1016977c + 0x2d4))(1);
          UpdateCustomizeButton(this);
          *(undefined4 *)(this + 0xf4) = 1;
          *(undefined4 *)(this + 0xec) = 1;
          InvalidateRect(*(HWND *)((int)this_00 + 0x20),(RECT *)0x0,1);
        }
      }
      else {
        iVar1 = FUN_100261ef(DAT_1016977c,iVar1);
        uVar4 = (uint)(*(int *)(iVar1 + 0x50) == 0);
        *(uint *)(iVar1 + 0x50) = uVar4;
        iVar1 = *(int *)(this + 0xe8);
        *(uint *)(this + 0xec) = uVar4;
        iVar3 = FUN_100268b9((int)DAT_1016977c);
        if ((iVar1 + 1 < iVar3) &&
           (iVar1 = FUN_100261ef(DAT_1016977c,iVar1 + 1), (*(byte *)(iVar1 + 0x24) & 1) != 0)) {
          *(uint *)(iVar1 + 0x50) = uVar4;
        }
        this_01 = (CMFCPopupMenu *)0x0;
        pHVar5 = GetParent(*(HWND *)((int)this_00 + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar5);
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar6
                                   );
        if (pCVar7 != (CObject *)0x0) {
          do {
            this_01 = (CMFCPopupMenu *)pCVar7;
            pCVar7 = (CObject *)CMFCPopupMenu::GetParentPopupMenu(this_01);
          } while (pCVar7 != (CObject *)0x0);
          if (this_01 != (CMFCPopupMenu *)0x0) {
            CWnd::ShowWindow((CWnd *)this_01,0);
          }
        }
        (**(code **)(*(int *)DAT_1016977c + 0x208))();
        (**(code **)(*(int *)DAT_1016977c + 0x2d4))(1);
        UpdateCustomizeButton(this);
        InvalidateRect(*(HWND *)((int)this_00 + 0x20),(RECT *)0x0,1);
        if (this_01 != (CMFCPopupMenu *)0x0) {
          CWnd::ShowWindow((CWnd *)this_01,4);
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(this_01 + 0x20),&local_18);
          CMFCPopupMenu::UpdateAllShadows(&local_18);
        }
      }
    }
    else {
      iVar1 = CMFCToolBar::IsOneRowWithSibling(DAT_1016977c);
      if (iVar1 == 0) {
        CMFCToolBar::SetOneRowWithSibling(DAT_1016977c);
      }
      else {
        CMFCToolBar::SetTwoRowsWithSibling(DAT_1016977c);
      }
    }
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

