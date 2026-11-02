// rea decompile_all
// name: InsertTab
// address: 0x10095e20
// body: available
// range: 0x10095e20-0x10096001 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10095e4c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCBaseTabCtrl::InsertTab(class CWnd *,char const
   *,int,unsigned int,int)
    public: virtual void __thiscall CMFCBaseTabCtrl::InsertTab(class CWnd *,wchar_t const
   *,int,unsigned int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
InsertTab(void *this,undefined4 param_1,wchar_t *param_2,int param_3,uint param_4,int param_5)

{
  CToolTipCtrl *this_00;
  BOOL BVar1;
  int iVar2;
  CMFCTabInfo *this_01;
  undefined4 uVar3;
  int local_30;
  CWnd *local_2c;
  CObject *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x10095e2c;
  if (param_2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_28 = (CObject *)(**(code **)(*(int *)this + 0x2c0))(param_1,param_2,param_5);
  BVar1 = IsWindowVisible(*(HWND *)((int)this + 0x20));
  if (BVar1 == 0) {
    CWnd::ShowWindow(this,5);
  }
  if ((param_3 < 0) || (*(int *)((int)this + 0x9c) < param_3)) {
    param_3 = *(int *)((int)this + 0x9c);
  }
  local_2c = (CWnd *)(**(code **)(*(int *)this + 0x20c))();
  iVar2 = CObject::IsKindOf(local_28,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
  if (iVar2 == 0) {
    param_5 = 0;
  }
  this_01 = FUN_1000858a(0x48);
  local_8 = 0;
  if (this_01 == (CMFCTabInfo *)0x0) {
    uVar3 = 0;
  }
  else {
    FUN_10006ce0(&local_30,param_2);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar3 = CMFCTabInfo::CMFCTabInfo
                      (this_01,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_30,param_4,(CWnd *)local_28,*(int *)((int)this + 0xe8),
                       param_5);
  }
  local_8 = 2;
  FUN_1000a2f0((void *)((int)this + 0x88),param_3,uVar3,1);
  local_8 = 0xffffffff;
  if (this_01 != (CMFCTabInfo *)0x0) {
    FUN_10001030((undefined4 *)(local_30 + -0x10));
  }
  this_00 = *(CToolTipCtrl **)((int)this + 0xd8);
  *(int *)((int)this + 0x9c) = *(int *)((int)this + 0x9c) + 1;
  if ((this_00 != (CToolTipCtrl *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    if (*(int *)((int)this + 0xe0) != 0) {
      param_2 = (wchar_t *)0xffffffff;
    }
    CToolTipCtrl::AddTool(this_00,this,param_2,&local_24,*(uint *)((int)this + 0xe8));
  }
  *(int *)((int)this + 0xe8) = *(int *)((int)this + 0xe8) + 1;
  (**(code **)(*(int *)this + 0x268))();
  (**(code **)(*(int *)this + 0x180))();
  if (*(int *)((int)this + 0x9c) == 1) {
    (**(code **)(*(int *)this + 0x210))(0);
LAB_10095fdd:
    if (*(int *)((int)this + 0x100) != 0) goto LAB_10095ffa;
  }
  else {
    iVar2 = *(int *)((int)this + 0xa0);
    *(int *)((int)this + 0x1d4) = iVar2;
    if (iVar2 == param_3) {
      *(int *)((int)this + 0x1d4) = iVar2 + 1;
      if ((*(int *)((int)this + 0x100) != 0) && (local_2c != (CWnd *)0x0)) {
        CWnd::ShowWindow(local_2c,0);
      }
      iVar2 = 1;
LAB_10095fd8:
      CWnd::ShowWindow((CWnd *)local_28,iVar2);
      goto LAB_10095fdd;
    }
    if (*(int *)((int)this + 0x100) != 0) {
      if ((local_28 == (CObject *)0x0) || (*(int *)(local_28 + 0x20) == 0)) goto LAB_10095fdd;
      iVar2 = 0;
      goto LAB_10095fd8;
    }
  }
  if ((local_2c != (CWnd *)0x0) && (*(HWND *)(local_2c + 0x20) != (HWND)0x0)) {
    BringWindowToTop(*(HWND *)(local_2c + 0x20));
  }
LAB_10095ffa:
  FUN_100f90cf();
  return;
}

