// rea decompile_all
// name: CAutoHideDockSite::UnSetAutoHideMode
// address: 0x100c8537
// body: available
// range: 0x100c8537-0x100c8653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c8595 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CAutoHideDockSite::UnSetAutoHideMode(class CMFCAutoHideBar *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CAutoHideDockSite::UnSetAutoHideMode(CAutoHideDockSite *this,CMFCAutoHideBar *param_1)

{
  undefined4 *puVar1;
  __POSITION *p_Var2;
  bool bVar3;
  CDockingPanesRow *this_00;
  CObject *this_01;
  CObList *pCVar4;
  CDockablePane *pCVar5;
  __POSITION *p_Var6;
  undefined4 *puVar7;
  CObList local_48 [4];
  undefined4 *local_44;
  int local_3c;
  CObList local_2c [4];
  __POSITION *local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x100c8543;
  if (param_1 == (CMFCAutoHideBar *)0x0) {
    CObList::CObList(local_2c,10);
    local_8 = 0;
    CObList::AddTail(local_2c,(CObList *)(this + 0x100));
    p_Var2 = local_28;
    while (p_Var6 = p_Var2, p_Var6 != (__POSITION *)0x0) {
      if (p_Var6 == (__POSITION *)0x0) goto LAB_100c8595;
      p_Var2 = *(__POSITION **)p_Var6;
      if (*(int *)(*(int *)(p_Var6 + 8) + 0x104) == 0) {
        CObList::RemoveAt(local_2c,p_Var6);
      }
    }
    while (local_28 != (__POSITION *)0x0) {
      if (local_28 == (__POSITION *)0x0) {
LAB_100c8595:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      p_Var2 = *(__POSITION **)local_28;
      UnSetAutoHideMode(this,*(CMFCAutoHideBar **)(local_28 + 8));
      local_28 = p_Var2;
    }
    pCVar4 = local_2c;
  }
  else {
    this_00 = CDockSite::RowFromPane((CDockSite *)this,(CBasePane *)param_1);
    CObList::CObList(local_48,10);
    local_8 = 1;
    if (this_00 != (CDockingPanesRow *)0x0) {
      CDockingPanesRow::GetGroupFromPane(this_00,(CPane *)param_1,local_48);
    }
    if (local_3c == 0) {
      FUN_100c3c5c(param_1,0);
    }
    else {
      bVar3 = true;
      pCVar5 = (CDockablePane *)0x0;
      puVar7 = local_44;
      while (puVar7 != (undefined4 *)0x0) {
        if (puVar7 == (undefined4 *)0x0) goto LAB_100c8595;
        puVar1 = puVar7 + 2;
        puVar7 = (undefined4 *)*puVar7;
        this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCAutoHideBar_10135338,
                                     (CObject *)*puVar1);
        if (this_01 != (CObject *)0x0) {
          if (bVar3) {
            pCVar5 = CMFCAutoHideBar::GetFirstAHWindow((CMFCAutoHideBar *)this_01);
            FUN_100c3c5c(this_01,0);
            bVar3 = false;
          }
          else {
            FUN_100c3c5c(this_01,pCVar5);
          }
        }
      }
    }
    pCVar4 = local_48;
  }
  local_8 = 0xffffffff;
  FUN_1001e259(pCVar4);
  return;
}

