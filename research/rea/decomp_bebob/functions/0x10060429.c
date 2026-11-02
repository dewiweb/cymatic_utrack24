// rea decompile_all
// name: CFrameImpl::DeleteToolBar
// address: 0x10060429
// body: available
// range: 0x10060429-0x100604c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::DeleteToolBar(class CMFCToolBar *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameImpl::DeleteToolBar(CFrameImpl *this,CMFCToolBar *param_1)

{
  __POSITION *p_Var1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  p_Var1 = CObList::Find((CObList *)(this + 0x54),(CObject *)param_1,(__POSITION *)0x0);
  iVar4 = 0;
  if (p_Var1 != (__POSITION *)0x0) {
    CObList::RemoveAt((CObList *)(this + 0x54),p_Var1);
    (**(code **)(*(int *)param_1 + 0x380))(*(undefined4 *)(this + 0xa8),0xffffffff,0xffffffff);
    piVar2 = (int *)(**(code **)(*(int *)param_1 + 0x19c))();
    piVar3 = (int *)(**(code **)(*(int *)param_1 + 0x224))(0);
    if (piVar2 == (int *)0x0) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x178))(param_1,0,0);
      }
    }
    else {
      (**(code **)(*piVar2 + 0x278))(param_1,0);
    }
    (**(code **)(*(int *)param_1 + 0x60))();
    (**(code **)(*(int *)param_1 + 4))(1);
    (**(code **)(**(int **)(this + 0xb0) + 0x174))(1);
    iVar4 = 1;
  }
  return iVar4;
}

