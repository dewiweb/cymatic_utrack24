// rea decompile_all
// name: COleCntrFrameWndEx::~COleCntrFrameWndEx
// address: 0x1006ad81
// body: available
// range: 0x1006ad81-0x1006aec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006adfb to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual __thiscall COleCntrFrameWndEx::~COleCntrFrameWndEx(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall COleCntrFrameWndEx::~COleCntrFrameWndEx(COleCntrFrameWndEx *this)

{
  undefined4 *puVar1;
  HWND hWnd;
  __POSITION *p_Var2;
  CObject *pCVar3;
  HWND__ *pHVar4;
  CWnd *pCVar5;
  BOOL BVar6;
  HWND pHVar7;
  undefined4 *puVar8;
  __POSITION *p_Var9;
  undefined **local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  COleCntrFrameWndEx *local_1c;
  CObList *local_18;
  __POSITION *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  *(undefined ***)this = vftable;
  puVar8 = *(undefined4 **)(this + 0x1e0);
  local_8 = 1;
  local_1c = this;
  while (puVar8 != (undefined4 *)0x0) {
    if (puVar8 == (undefined4 *)0x0) goto LAB_1006adfb;
    puVar1 = puVar8 + 2;
    puVar8 = (undefined4 *)*puVar8;
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)*puVar1);
    if (pCVar3 != (CObject *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0x60))();
    }
  }
  local_38 = CList<HWND__*,HWND__*>::vftable;
  local_2c = 0;
  local_28 = 0;
  local_30 = 0;
  local_34 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 10;
  local_8 = CONCAT31(local_8._1_3_,2);
  pHVar4 = GetTopWindow(*(HWND *)(this + 0x20));
  while (pCVar5 = CWnd::FromHandle(pHVar4), puVar8 = local_34, pCVar5 != (CWnd *)0x0) {
    CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)&local_38,*(HWND__ **)(pCVar5 + 0x20))
    ;
    pHVar4 = GetWindow(*(HWND *)(pCVar5 + 0x20),2);
  }
  while (puVar8 != (undefined4 *)0x0) {
    hWnd = (HWND)puVar8[2];
    puVar8 = (undefined4 *)*puVar8;
    BVar6 = IsWindow(hWnd);
    if ((BVar6 != 0) && (pHVar7 = GetParent(hWnd), pHVar7 == *(HWND *)(this + 0x20))) {
      DestroyWindow(hWnd);
    }
  }
  local_18 = (CObList *)FUN_10026ef9();
  p_Var9 = *(__POSITION **)(local_18 + 4);
  while( true ) {
    if (p_Var9 == (__POSITION *)0x0) {
      local_8._0_1_ = 1;
      local_38 = CList<HWND__*,HWND__*>::vftable;
      CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)&local_38);
      local_8 = (uint)local_8._1_3_ << 8;
      CDockingManager::~CDockingManager((CDockingManager *)(this + 0x114));
      local_8 = 0xffffffff;
      FUN_1006a0e4((CFrameWnd *)this);
      return;
    }
    local_14 = p_Var9;
    if (p_Var9 == (__POSITION *)0x0) break;
    p_Var2 = *(__POSITION **)p_Var9;
    if (*(int *)(p_Var9 + 8) == 0) break;
    pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(*(int *)(p_Var9 + 8) + 0x20));
    p_Var9 = p_Var2;
    if (pCVar5 == (CWnd *)0x0) {
      CObList::RemoveAt(local_18,local_14);
    }
  }
LAB_1006adfb:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

