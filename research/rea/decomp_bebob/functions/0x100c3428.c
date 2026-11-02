// rea decompile_all
// name: FUN_100c3428
// address: 0x100c3428
// body: available
// range: 0x100c3428-0x100c35ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c35a7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void __thiscall FUN_100c3428(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  int *piVar5;
  BOOL BVar6;
  int iVar7;
  CObList local_34 [4];
  undefined4 *local_30;
  HWND local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100c3434;
  pCVar3 = (CObject *)(**(code **)(*(int *)this + 0x198))();
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,pCVar3);
  if (pCVar3 != (CObject *)0x0) {
    local_18 = *(HWND *)((int)this + 0x20);
    local_14 = pCVar3;
    if (param_1 == 0) {
      CObList::CObList(local_34,10);
      local_8 = 0;
      piVar5 = (int *)(**(code **)(*(int *)this + 0x3a4))();
      param_1 = 0;
      iVar7 = (**(code **)(*piVar5 + 0x1a8))();
      if (0 < iVar7) {
        do {
          iVar7 = (**(code **)(*piVar5 + 0x278))(param_1);
          if (iVar7 != 0) {
            pCVar3 = (CObject *)(**(code **)(*piVar5 + 0x1ac))(param_1);
            pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar3);
            if (pCVar3 != (CObject *)0x0) {
              (**(code **)(*(int *)pCVar3 + 0x37c))();
              CObList::AddTail(local_34,pCVar3);
            }
          }
          param_1 = param_1 + 1;
          iVar7 = (**(code **)(*piVar5 + 0x1a8))();
        } while (param_1 < iVar7);
      }
      while (local_30 != (undefined4 *)0x0) {
        if (local_30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        uVar1 = local_30[2];
        puVar2 = (undefined4 *)*local_30;
        (**(code **)(*(int *)local_14 + 0x1cc))(uVar1);
        (**(code **)(*(int *)this + 0x3c4))(uVar1);
        local_30 = puVar2;
      }
      local_8 = 0xffffffff;
      FUN_1001e259(local_34);
    }
    else {
      pCVar4 = (CObject *)(**(code **)(**(int **)((int)this + 0x358) + 0x20c))();
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar4);
      if (pCVar4 == (CObject *)0x0) {
        return;
      }
      (**(code **)(*(int *)pCVar4 + 0x37c))();
      (**(code **)(*(int *)pCVar3 + 0x1cc))(pCVar4);
      (**(code **)(*(int *)this + 0x3c4))(pCVar4);
    }
    BVar6 = IsWindow(local_18);
    if (((BVar6 != 0) && (iVar7 = (**(code **)(*(int *)this + 0x3ac))(), iVar7 == 0)) &&
       (iVar7 = (**(code **)(*(int *)this + 0x3a8))(), 0 < iVar7)) {
      (**(code **)(*(int *)this + 0x220))(0,0,0);
    }
  }
  return;
}

