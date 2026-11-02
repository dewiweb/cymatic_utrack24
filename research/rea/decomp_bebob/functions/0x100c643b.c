// rea decompile_all
// name: CPaneContainerManager::Serialize
// address: 0x100c643b
// body: available
// range: 0x100c643b-0x100c65f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c64d7 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CPaneContainerManager::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPaneContainerManager::Serialize(CPaneContainerManager *this,CArchive *param_1)

{
  int iVar1;
  CObject *pCVar2;
  CWnd *pCVar3;
  HWND pHVar4;
  CDockablePane *pCVar5;
  CDockingManager *unaff_EBX;
  undefined4 *puVar6;
  CArchive *this_00;
  CArchiveException *local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  this_00 = param_1;
  uStack_4 = 8;
  local_8 = 0x100c6447;
  if ((~*(uint *)(param_1 + 0x18) & 1) != 0) {
    CPaneContainer::ReleaseEmptyPaneContainer(*(CPaneContainer **)(this + 0x3c));
    (**(code **)(**(int **)(this + 0x3c) + 8))(this_00);
    CArchive::operator<<(this_00,*(long *)(this + 0x10));
    puVar6 = *(undefined4 **)(this + 8);
LAB_100c64ce:
    if (puVar6 == (undefined4 *)0x0) {
      return;
    }
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    pCVar3 = (CWnd *)puVar6[2];
    puVar6 = (undefined4 *)*puVar6;
    iVar1 = CWnd::GetDlgCtrlID(pCVar3);
    if (iVar1 == -1) goto LAB_100c6493;
    goto LAB_100c64c6;
  }
  (**(code **)(*(int *)*(CPaneContainer **)(this + 0x3c) + 8))(param_1);
  if (*(int *)(this + 0x44) == 0) {
    iVar1 = CObject::IsKindOf(*(CObject **)(this + 0x4c),
                              (CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
    if (iVar1 != 0) {
      pHVar4 = GetParent(*(HWND *)(*(int *)(this + 0x4c) + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar4);
      goto LAB_100c6518;
    }
  }
  else {
    pCVar3 = (CWnd *)(**(code **)(**(int **)(this + 0x44) + 0x198))();
LAB_100c6518:
    unaff_EBX = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar3);
    if (unaff_EBX != (CDockingManager *)0x0) goto LAB_100c655f;
  }
  local_18 = FUN_1000858a(0x10);
  local_8 = 0;
  if (local_18 == (CArchiveException *)0x0) {
    param_1 = (CArchive *)0x0;
  }
  else {
    param_1 = (CArchive *)CArchiveException::CArchiveException(local_18,0,(char *)0x0);
  }
  local_8 = 0xffffffff;
  __CxxThrowException_8(&param_1,&DAT_1014e200);
LAB_100c655f:
  local_18 = (CArchiveException *)0x0;
  CArchive::operator>>(this_00,(long *)&local_18);
  local_14[0] = 0;
  if (0 < (int)local_18) {
    do {
      CArchive::operator>>(this_00,(long *)local_14);
      if (local_14[0] == 0xffffffff) {
        CArchive::operator>>(this_00,(long *)local_14);
        pCVar5 = CPaneContainer::FindTabbedPane(*(CPaneContainer **)(this + 0x3c),local_14[0]);
        if (pCVar5 != (CDockablePane *)0x0) {
          CObList::AddTail((CObList *)(this + 4),(CObject *)pCVar5);
        }
      }
      else {
        pCVar2 = (CObject *)(**(code **)(*(int *)unaff_EBX + 0x24))(local_14[0],1);
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar2);
        if (pCVar2 != (CObject *)0x0) {
          CObList::AddTail((CObList *)(this + 4),pCVar2);
          CPaneContainer::SetUpByID
                    (*(CPaneContainer **)(this + 0x3c),local_14[0],(CDockablePane *)pCVar2);
        }
      }
      local_18 = local_18 + -1;
      this_00 = param_1;
    } while (local_18 != (CArchiveException *)0x0);
  }
  return;
LAB_100c6493:
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,(CObject *)pCVar3);
  pCVar3 = (CWnd *)(**(code **)(*(int *)pCVar2 + 0x3d0))(0,0);
  if (pCVar3 != (CWnd *)0x0) {
    iVar1 = CWnd::GetDlgCtrlID(pCVar3);
    CArchive::operator<<(param_1,-1);
LAB_100c64c6:
    CArchive::operator<<(param_1,iVar1);
  }
  goto LAB_100c64ce;
}

