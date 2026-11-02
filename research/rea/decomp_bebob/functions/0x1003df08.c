// rea decompile_all
// name: FUN_1003df08
// address: 0x1003df08
// body: available
// range: 0x1003df08-0x1003e08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003e08b to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_1003df08(void *this,CObList *param_1,int param_2,CRuntimeClass *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  CObject *pCVar5;
  CRuntimeClass *pCVar6;
  CBasePane *pCVar7;
  undefined4 *puVar8;
  
  puVar2 = *(undefined4 **)((int)this + 0x24);
  while (puVar2 != (undefined4 *)0x0) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_1003e08b;
    puVar8 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)*puVar8);
    iVar4 = CObject::IsKindOf(pCVar3,(CRuntimeClass *)&PTR_s_CDockSite_1012dd78);
    if (iVar4 == 0) {
      iVar4 = CObject::IsKindOf(pCVar3,(CRuntimeClass *)&PTR_s_CTabbedPane_101621c4);
      if ((iVar4 != 0) && (param_4 != 0)) {
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTabbedPane_101621c4,pCVar3);
        (**(code **)(*(int *)pCVar5 + 0x3ec))(param_1,param_3);
      }
    }
    else {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_1012dd78,pCVar3);
      puVar8 = *(undefined4 **)(pCVar5 + 0x104);
      while (puVar8 != (undefined4 *)0x0) {
        if (puVar8 == (undefined4 *)0x0) goto LAB_1003e08b;
        puVar1 = puVar8 + 2;
        puVar8 = (undefined4 *)*puVar8;
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)*puVar1);
        if ((param_3 == (CRuntimeClass *)0x0) ||
           (pCVar6 = (CRuntimeClass *)(*(code *)**(undefined4 **)pCVar5)(), pCVar6 == param_3)) {
          CObList::AddTail(param_1,pCVar5);
        }
      }
    }
    if ((param_3 == (CRuntimeClass *)0x0) ||
       (pCVar6 = (CRuntimeClass *)(*(code *)**(undefined4 **)pCVar3)(), pCVar6 == param_3)) {
      CObList::AddTail(param_1,pCVar3);
    }
  }
  if (param_2 != 0) {
    puVar2 = *(undefined4 **)((int)this + 0x40);
    while (puVar2 != (undefined4 *)0x0) {
      if (puVar2 == (undefined4 *)0x0) {
LAB_1003e08b:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar8 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)*puVar8);
      iVar4 = CObject::IsKindOf(pCVar3,(CRuntimeClass *)&PTR_s_CPaneDivider_1012b088);
      if ((iVar4 != 0) &&
         (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_1012b088,pCVar3),
         pCVar3 != (CObject *)0x0)) {
        pCVar7 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar3);
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)pCVar7);
        if ((pCVar3 != (CObject *)0x0) &&
           ((param_3 == (CRuntimeClass *)0x0 ||
            (pCVar6 = (CRuntimeClass *)(*(code *)**(undefined4 **)pCVar3)(), pCVar6 == param_3)))) {
          CObList::AddTail(param_1,pCVar3);
        }
      }
    }
  }
  CPaneFrameWnd::GetPaneList(param_1,param_3,param_4);
  return;
}

