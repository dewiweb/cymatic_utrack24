// rea decompile_all
// name: FUN_100c511c
// address: 0x100c511c
// body: available
// range: 0x100c511c-0x100c51e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c51e5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 __thiscall FUN_100c511c(void *this,CObject *param_1,CPaneContainerManager *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  __POSITION *p_Var4;
  CObject *pCVar5;
  undefined4 *puVar6;
  CObject *pCVar7;
  CObList local_34 [4];
  undefined4 *local_30;
  undefined4 local_18;
  CObject *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100c5128;
  CObList::CObList(local_34,10);
  local_8 = 0;
  CPaneContainerManager::AddPanesToList(param_2,local_34,(CObList *)0x0);
  local_18 = 0;
  iVar2 = (**(code **)(*(int *)this + 0x8c))(param_1,&local_18);
  if ((iVar2 == 0) ||
     (p_Var4 = CObList::Find((CObList *)((int)this + 4),param_1,(__POSITION *)0x0),
     p_Var4 == (__POSITION *)0x0)) {
    local_8 = 0xffffffff;
    FUN_1001e259(local_34);
    uVar3 = 0;
  }
  else {
    local_14[0] = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,param_1);
    puVar6 = local_30;
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*puVar1)
      ;
      if (pCVar5 != (CObject *)0x0) {
        pCVar7 = local_14[0];
        if (local_14[0] == (CObject *)0x0) {
          pCVar7 = param_1;
        }
        (**(code **)(*(int *)pCVar5 + 0x34c))(pCVar7,1,1,local_14);
      }
    }
    local_8 = 0xffffffff;
    FUN_1001e259(local_34);
    uVar3 = 1;
  }
  return uVar3;
}

