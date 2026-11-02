// rea decompile_all
// name: CDockablePane::HitTest
// address: 0x100792f9
// body: available
// range: 0x100792f9-0x10079486 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079366 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::HitTest(class CPoint,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDockablePane::HitTest(CDockablePane *this,LONG param_2,LONG param_3)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  BOOL BVar2;
  CWnd *pCVar3;
  CDockingManager *pCVar4;
  int iVar5;
  int local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  pt.y = param_3;
  pt.x = param_2;
  BVar2 = PtInRect(&local_18,pt);
  if (BVar2 != 0) {
    pCVar3 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
    pCVar4 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar3);
    if (pCVar4 == (CDockingManager *)0x0) {
      if (DAT_10160f6c == 0) {
LAB_10079366:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
    }
    else if ((*(int *)(pCVar4 + 8) == 0) && (local_3c = 0, 0 < *(int *)(this + 0x328))) {
      do {
        if ((local_3c < 0) || (*(int *)(this + 0x328) <= local_3c)) goto LAB_10079366;
        piVar1 = *(int **)(*(int *)(this + 0x324) + local_3c * 4);
        (**(code **)(*piVar1 + 0xc))(&local_28);
        OffsetRect(&local_28,local_18.left,local_18.top);
        pt_01.y = param_3;
        pt_01.x = param_2;
        BVar2 = PtInRect(&local_28,pt_01);
        if (BVar2 != 0) {
          FUN_100b954e((int)piVar1);
          goto LAB_10079476;
        }
        local_3c = local_3c + 1;
      } while (local_3c < *(int *)(this + 0x328));
    }
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_38);
    CWnd::ClientToScreen((CWnd *)this,&local_38);
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar2 = PtInRect(&local_38,pt_00);
    if ((BVar2 == 0) && (iVar5 = (**(code **)(*(int *)this + 0x164))(), iVar5 != 0)) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      iVar5 = (**(code **)(*(int *)this + 0x1a0))();
      SetRect(&local_28,local_18.left,local_18.top + 1,local_18.right,iVar5 + 1 + local_18.top);
      pt_02.y = param_3;
      pt_02.x = param_2;
      PtInRect(&local_28,pt_02);
    }
  }
LAB_10079476:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

