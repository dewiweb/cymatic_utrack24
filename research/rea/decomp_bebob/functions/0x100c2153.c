// rea decompile_all
// name: CMFCDragFrameImpl::PlaceTabPreDocking
// address: 0x100c2153
// body: available
// range: 0x100c2153-0x100c21f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCDragFrameImpl::PlaceTabPreDocking(class CWnd *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCDragFrameImpl::PlaceTabPreDocking(CMFCDragFrameImpl *this,CWnd *param_1)

{
  CObject *pCVar1;
  int iVar2;
  
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_10134e7c,(CObject *)param_1);
  if ((pCVar1 != (CObject *)0x0) &&
     (((iVar2 = (**(code **)(*(int *)pCVar1 + 0x3ac))(), 1 < iVar2 &&
       (iVar2 = (**(code **)(*(int *)pCVar1 + 0x3b0))(), iVar2 != 0)) ||
      ((iVar2 = (**(code **)(*(int *)pCVar1 + 0x3ac))(), 0 < iVar2 &&
       (iVar2 = (**(code **)(*(int *)pCVar1 + 0x3b0))(), iVar2 == 0)))))) {
    *(CObject **)(this + 0x4c) = pCVar1;
    PlaceTabPreDocking(this,(CBaseTabbedPane *)pCVar1,1);
    return;
  }
  if ((*(int *)(this + 0x34) == -1) &&
     (pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)param_1)
     , pCVar1 != (CObject *)0x0)) {
    DrawFrameTab(this,(CDockablePane *)pCVar1,0);
    *(CObject **)(this + 0x4c) = pCVar1;
    *(CObject **)(this + 0x3c) = pCVar1;
    *(undefined4 *)(this + 0x34) = 1;
  }
  return;
}

