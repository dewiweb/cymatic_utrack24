// rea decompile_all
// name: CMFCDragFrameImpl::RemoveTabPreDocking
// address: 0x100c1de6
// body: available
// range: 0x100c1de6-0x100c1eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCDragFrameImpl::RemoveTabPreDocking(class CDockablePane *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCDragFrameImpl::RemoveTabPreDocking(CMFCDragFrameImpl *this,CDockablePane *param_1)

{
  CWnd *this_00;
  CObject *pCVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (((param_1 != (CDockablePane *)0x0) ||
      (param_1 = *(CDockablePane **)(this + 0x3c), param_1 != (CDockablePane *)0x0)) &&
     (*(int *)(this + 0x34) != -1)) {
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,(CObject *)param_1)
    ;
    if (((pCVar1 == (CObject *)0x0) || (*(int *)(this + 0x54) != 0)) ||
       ((this_00 = *(CWnd **)(this + 0x50), this_00 == (CWnd *)0x0 ||
        (*(int *)(this_00 + 0x20) == 0)))) {
      DrawFrameTab(this,param_1,1);
    }
    else {
      bVar4 = false;
      if (((*(int *)(this + 0x48) != 0) &&
          (iVar3 = *(int *)(*(int *)(this + 0x48) + 0x1b8), iVar3 != 0)) &&
         ((*(int *)(iVar3 + 8) != 0 && (*(int *)(iVar3 + 4) != 0)))) {
        bVar4 = true;
      }
      CWnd::ShowWindow(this_00,0);
      if (!bVar4) {
        CDockingManager::LockUpdate(*(CDockingManager **)(this + 0x48),0);
      }
      piVar2 = (int *)(**(code **)(*(int *)pCVar1 + 0x3a4))();
      iVar3 = (**(code **)(*piVar2 + 0x1ac))(*(undefined4 *)(this + 0x34));
      if (iVar3 == *(int *)(this + 0x50)) {
        piVar2 = (int *)(**(code **)(*(int *)pCVar1 + 0x3a4))();
        (**(code **)(*piVar2 + 0x194))(*(undefined4 *)(this + 0x34),1);
      }
      if (!bVar4) {
        CDockingManager::LockUpdate(*(CDockingManager **)(this + 0x48),1);
      }
    }
    iVar3 = *(int *)(*(int *)(this + 0x48) + 0x1b8);
    if (((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) && (*(int *)(iVar3 + 4) != 0)) {
      CWnd::ShowWindow(*(CWnd **)(this + 0x44),5);
    }
  }
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}

