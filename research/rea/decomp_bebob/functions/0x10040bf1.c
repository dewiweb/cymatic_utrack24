// rea decompile_all
// name: CDockingManager::ShowPanes
// address: 0x10040bf1
// body: available
// range: 0x10040bf1-0x10040d80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040cfc to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDockingManager::ShowPanes(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDockingManager::ShowPanes(CDockingManager *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CObject *pCVar4;
  uint uVar5;
  int iVar6;
  CWnd *pCVar7;
  CObList local_34 [4];
  undefined4 *local_30;
  undefined4 local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar3 = DAT_10168804;
  uStack_4 = 0x24;
  local_8 = 0x10040bfd;
  if (param_1 == 0) {
    if (*(int *)(this + 0x1e4) != 0) {
      return 0;
    }
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x180));
    CObList::CObList(local_34,10);
    local_8 = 0;
    FUN_1003df08(this,local_34,1,(CRuntimeClass *)0x0,1);
    local_18 = DAT_10168804;
    DAT_10168804 = 1;
    DAT_101680f0 = 1;
    puVar2 = local_30;
    while (puVar2 != (undefined4 *)0x0) {
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)*puVar1);
      if (((pCVar4 != (CObject *)0x0) &&
          (uVar5 = (**(code **)(*(int *)pCVar4 + 0x1bc))(), (uVar5 & 8) != 0)) &&
         ((iVar6 = (**(code **)(*(int *)pCVar4 + 0x178))(), iVar6 != 0 ||
          (iVar6 = (**(code **)(*(int *)pCVar4 + 0x1d8))(), iVar6 != 0)))) {
        (**(code **)(*(int *)pCVar4 + 0x220))(0,1,0);
        local_14[0] = *(uint *)(pCVar4 + 0x20);
        CList<unsigned_int,unsigned_int&>::AddTail
                  ((CList<unsigned_int,unsigned_int&> *)(this + 0x180),local_14);
      }
    }
    DAT_101680f0 = 0;
    local_8 = 0xffffffff;
    DAT_10168804 = local_18;
    *(undefined4 *)(this + 0x1e4) = 1;
    FUN_1001e259(local_34);
  }
  else {
    if (*(int *)(this + 0x1e4) == 0) {
      return 0;
    }
    DAT_10168804 = 1;
    DAT_101680f0 = 1;
    puVar2 = *(undefined4 **)(this + 0x184);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar7 = CWnd::FromHandlePermanent((HWND__ *)*puVar1);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)pCVar7);
      if (pCVar4 != (CObject *)0x0) {
        (**(code **)(*(int *)pCVar4 + 0x220))(1,1,0);
      }
    }
    DAT_101680f0 = 0;
    DAT_10168804 = uVar3;
    *(undefined4 *)(this + 0x1e4) = 0;
  }
  (**(code **)(*(int *)this + 0x38))(0);
  return 0;
}

