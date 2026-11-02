// rea decompile_all
// name: CMFCMenuBar::AdjustLocations
// address: 0x1006f4e2
// body: available
// range: 0x1006f4e2-0x1006f6b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006f5d9 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCMenuBar::AdjustLocations(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCMenuBar::AdjustLocations(CMFCMenuBar *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  CMFCToolBarComboBoxButton *pCVar5;
  uint uVar6;
  int iVar7;
  int dy;
  int local_40;
  int local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pCVar5 = GetHelpCombobox(this);
  if ((pCVar5 != (CMFCToolBarComboBoxButton *)0x0) && (*(int *)(pCVar5 + 0x40) != 1)) {
    *(undefined4 *)(pCVar5 + 0x40) = 1;
    (**(code **)(*(int *)pCVar5 + 0x84))(0);
  }
  CMFCToolBar::AdjustLocations((CMFCToolBar *)this);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_28);
  local_40 = local_28.right;
  uVar6 = (**(code **)(*(int *)this + 400))();
  uVar6 = (uint)((uVar6 & 0xa000) != 0);
  if (*(int *)(this + 0xcf8) != 0) {
    iVar1 = *(int *)(this + 0xd04);
    local_18.left = local_28.left;
    iVar2 = *(int *)(this + 0xd08);
    local_18.top = local_28.top;
    iVar7 = *(int *)(this + 0xbd0);
    local_18.right = local_28.right;
    local_18.bottom = local_28.bottom;
    SetRectEmpty(&local_28);
    CPane::CalcInsideRect((CPane *)this,(CRect *)&local_28,uVar6);
    if (uVar6 == 0) {
      local_18.bottom = local_18.bottom + (local_28.bottom - local_28.top);
    }
    local_18.top = local_18.bottom - iVar2;
    local_18.left = local_18.right - iVar1;
    if (*(int *)(this + 0xca0) != 0) {
      if (iVar7 == 0) {
LAB_1006f5d9:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      iVar7 = *(int *)(iVar7 + 4);
    }
    local_38 = 0;
    if (0 < *(int *)(this + 0xcec)) {
      do {
        if (iVar7 == 0) goto LAB_1006f5d9;
        iVar3 = *(int *)(iVar7 + 4);
        piVar4 = *(int **)(iVar7 + 8);
        piVar4[0x15] = local_18.left;
        piVar4[0x16] = local_18.top;
        piVar4[0x17] = local_18.right;
        piVar4[0x18] = local_18.bottom;
        (**(code **)(*piVar4 + 0x30))();
        local_40 = local_18.left;
        iVar7 = 0;
        if (uVar6 == 0) {
          dy = -1 - iVar2;
        }
        else {
          dy = 0;
          iVar7 = -1 - iVar1;
        }
        OffsetRect(&local_18,iVar7,dy);
        local_38 = local_38 + 1;
        iVar7 = iVar3;
      } while (local_38 < *(int *)(this + 0xcec));
    }
  }
  if (pCVar5 != (CMFCToolBarComboBoxButton *)0x0) {
    if (*(int *)(pCVar5 + 0x40) != 0) {
      *(undefined4 *)(pCVar5 + 0x40) = 0;
      (**(code **)(*(int *)pCVar5 + 0x84))(1);
    }
    local_18.left = *(LONG *)(pCVar5 + 0x54);
    local_18.top = *(LONG *)(pCVar5 + 0x58);
    local_18.right = *(LONG *)(pCVar5 + 0x5c);
    local_18.bottom = *(LONG *)(pCVar5 + 0x60);
    if (uVar6 == 0) {
      SetRectEmpty(&local_18);
    }
    else {
      local_18.right = local_40;
      local_18.left = local_40 - *(int *)(this + 0xcf4);
    }
    *(LONG *)(pCVar5 + 0x54) = local_18.left;
    *(LONG *)(pCVar5 + 0x58) = local_18.top;
    *(LONG *)(pCVar5 + 0x5c) = local_18.right;
    *(LONG *)(pCVar5 + 0x60) = local_18.bottom;
    (**(code **)(*(int *)pCVar5 + 0x30))();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

