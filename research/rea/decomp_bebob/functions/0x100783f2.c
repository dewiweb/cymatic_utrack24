// rea decompile_all
// name: CDockablePane::OnBeforeChangeParent
// address: 0x100783f2
// body: available
// range: 0x100783f2-0x10078460 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockablePane::OnBeforeChangeParent(class CWnd *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CDockablePane::OnBeforeChangeParent(CDockablePane *this,CWnd *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (CWnd *)0x0) {
    iVar1 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x31c))();
    }
    iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0);
    if (((iVar2 != 0) ||
        (iVar2 = CObject::IsKindOf((CObject *)param_1,(CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4),
        iVar2 != 0)) || (iVar1 != 0)) {
      (**(code **)(*(int *)this + 0x23c))(param_2);
    }
    CPane::OnBeforeChangeParent((CPane *)this,param_1,0);
    return;
  }
  return;
}

