// rea decompile_all
// name: CMFCToolBar::AdjustLayout
// address: 0x1002bc18
// body: available
// range: 0x1002bc18-0x1002bdf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002bdc3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::AdjustLayout(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::AdjustLayout(CMFCToolBar *this)

{
  uint uVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_88;
  CObject *local_84;
  CObject *local_80;
  undefined4 local_7c;
  uint local_78;
  int local_5c;
  undefined4 local_58;
  CObject *local_54;
  int local_38;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((this != (CMFCToolBar *)0x0) && (*(int *)(this + 0x20) != 0)) {
    uVar1 = (**(code **)(*(int *)this + 400))();
    puVar6 = *(undefined4 **)(this + 0xbcc);
    while (puVar6 != (undefined4 *)0x0) {
      uVar5 = 0;
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar4 = puVar6[2];
      puVar6 = (undefined4 *)*puVar6;
      if (iVar4 == 0) break;
      if ((((*(byte *)(iVar4 + 0x24) & 1) == 0) && (*(int *)(this + 0xb14) != 0)) &&
         ((uVar1 & 0xa000) != 0)) {
        uVar5 = 1;
      }
      *(undefined4 *)(iVar4 + 0x18) = uVar5;
    }
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    local_80 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCReBar_1012e7f8,(CObject *)pCVar3);
    if (local_80 == (CObject *)0x0) {
      AdjustSize(this);
    }
    else {
      iVar4 = FUN_10096195(local_80);
      local_84 = (CObject *)SendMessageW(*(HWND *)(iVar4 + 0x20),0x40c,0,0);
      local_7c = *(undefined4 *)(local_80 + 0x2ac);
      local_80 = (CObject *)0x0;
      local_78 = 0x230;
      if (local_84 != (CObject *)0x0) {
        do {
          SendMessageW(*(HWND *)(iVar4 + 0x20),0x41c,(WPARAM)local_80,(LPARAM)&local_7c);
          if (local_5c == *(int *)(this + 0x20)) break;
          local_80 = local_80 + 1;
        } while (local_80 < local_84);
      }
      local_78 = local_78 ^ 0x10;
      if (local_80 < local_84) {
        uVar5 = (**(code **)(*(int *)this + 0x418))();
        *(undefined4 *)(this + 0xb74) = uVar5;
        (**(code **)(*(int *)this + 0x2a4))(&local_88,0);
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        SetRectEmpty(&local_18);
        CPane::CalcInsideRect((CPane *)this,(CRect *)&local_18,1);
        local_84 = local_84 + (local_18.top - local_18.bottom);
        local_88 = local_88 + (local_18.left - local_18.right);
        if (local_88 < 1) {
          local_88 = 0;
        }
        if ((int)local_84 < 1) {
          local_84 = (CObject *)0x0;
        }
        local_58 = DAT_101603ec;
        local_54 = local_84;
        local_38 = local_88;
        SendMessageW(*(HWND *)(iVar4 + 0x20),0x40b,(WPARAM)local_80,(LPARAM)&local_7c);
      }
    }
    (**(code **)(*(int *)this + 0x3e0))();
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

