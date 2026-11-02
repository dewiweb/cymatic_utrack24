// rea decompile_all
// name: CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd
// address: 0x1006734c
// body: available
// range: 0x1006734c-0x100673ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd(class CWnd *)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall CGlobalUtils::CanPaneBeInFloatingMultiPaneFrameWnd(CGlobalUtils *this,CWnd *param_1)

{
  CObject *pCVar1;
  int iVar2;
  CObject *this_00;
  uint uVar3;
  
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)param_1);
  if (pCVar1 != (CObject *)0x0) {
    param_1 = (CWnd *)(**(code **)(*(int *)pCVar1 + 0x1a4))();
  }
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_1012cc40,(CObject *)param_1);
  uVar3 = 0;
  if (pCVar1 != (CObject *)0x0) {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x168))();
    if (((iVar2 == 0) ||
        (this_00 = (CObject *)(**(code **)(*(int *)pCVar1 + 0x224))(0), this_00 == (CObject *)0x0))
       || (iVar2 = CObject::IsKindOf(this_00,(CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338),
          iVar2 == 0)) {
      uVar3 = (**(code **)(*(int *)pCVar1 + 0x1bc))();
      uVar3 = uVar3 >> 6 & 1;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

