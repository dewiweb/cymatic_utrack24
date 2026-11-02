// rea decompile_all
// name: COutlookCustomizeButton::CreatePopupMenu
// address: 0x100a7226
// body: available
// range: 0x100a7226-0x100a73cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a72be to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CMFCPopupMenu * __thiscall COutlookCustomizeButton::CreatePopupMenu(void)
   
   Library: Visual Studio 2010 Release */

CMFCPopupMenu * __thiscall COutlookCustomizeButton::CreatePopupMenu(COutlookCustomizeButton *this)

{
  CMFCPopupMenu *pCVar1;
  void *this_00;
  undefined **ppuVar2;
  HMODULE pHVar3;
  CMFCToolBarMenuButton *pCVar4;
  int iVar5;
  int in_stack_fffffef0;
  wchar_t *local_100;
  CMFCToolBarMenuButton local_fc [244];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf0;
  local_8 = 0x100a7235;
  pCVar1 = CMFCCustomizeButton::CreatePopupMenu((CMFCCustomizeButton *)this);
  if (pCVar1 == (CMFCPopupMenu *)0x0) {
LAB_100a73ca:
    pCVar1 = (CMFCPopupMenu *)FUN_100f90cf();
    return pCVar1;
  }
  iVar5 = 0;
  this_00 = (void *)(**(code **)(*(int *)pCVar1 + 0x1c0))(*(undefined4 *)(this + 0xe8));
  FUN_1002605c(this_00,iVar5,in_stack_fffffef0);
  FID_conflict_RemoveItem((int *)pCVar1);
  iVar5 = CMFCPopupMenu::GetMenuItemCount(pCVar1);
  if (0 < iVar5) {
    CMFCPopupMenu::InsertSeparator(pCVar1,-1);
  }
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(&local_100,(int *)ppuVar2);
  local_8 = 0;
  pHVar3 = (HMODULE)FUN_1000ac62();
  if (pHVar3 == (HMODULE)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_10006200(&local_100,pHVar3,0x4285);
  }
  if (iVar5 != 0) {
    pCVar4 = (CMFCToolBarMenuButton *)
             CMFCToolBarMenuButton::CMFCToolBarMenuButton
                       (local_fc,0xf200,(HMENU__ *)0x0,-1,local_100,0);
    local_8._0_1_ = 1;
    CMFCPopupMenu::InsertItem(pCVar1,pCVar4,-1);
    local_8 = (uint)local_8._1_3_ << 8;
    CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_fc);
    pHVar3 = (HMODULE)FUN_1000ac62();
    if (pHVar3 == (HMODULE)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10006200(&local_100,pHVar3,0x4286);
    }
    if (iVar5 != 0) {
      pCVar4 = (CMFCToolBarMenuButton *)
               CMFCToolBarMenuButton::CMFCToolBarMenuButton
                         (local_fc,0xf201,(HMENU__ *)0x0,-1,local_100,0);
      local_8._0_1_ = 2;
      CMFCPopupMenu::InsertItem(pCVar1,pCVar4,-1);
      local_8 = (uint)local_8._1_3_ << 8;
      CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_fc);
      pHVar3 = (HMODULE)FUN_1000ac62();
      if (pHVar3 == (HMODULE)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_10006200(&local_100,pHVar3,0x4287);
      }
      if (iVar5 != 0) {
        pCVar4 = (CMFCToolBarMenuButton *)
                 CMFCToolBarMenuButton::CMFCToolBarMenuButton
                           (local_fc,0xf202,(HMENU__ *)0x0,-1,local_100,0);
        local_8._0_1_ = 3;
        CMFCPopupMenu::InsertItem(pCVar1,pCVar4,-1);
        local_8 = (uint)local_8._1_3_ << 8;
        CMFCToolBarMenuButton::~CMFCToolBarMenuButton(local_fc);
        FUN_10001030((undefined4 *)(local_100 + -8));
        goto LAB_100a73ca;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

