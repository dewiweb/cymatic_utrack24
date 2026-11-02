// rea decompile_all
// name: CPane::PrepareToDock
// address: 0x10087e8e
// body: available
// range: 0x10087e8e-0x10087f0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPane::PrepareToDock(class CDockSite *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPane::PrepareToDock(CPane *this,CDockSite *param_1,AFX_DOCK_METHOD param_2)

{
  int iVar1;
  CObject *pCVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (param_1 != (CDockSite *)0x0) {
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_1012dd78,(CObject *)param_1);
    *(CObject **)(this + 0xac) = pCVar2;
    (**(code **)(*(int *)this + 0x308))(param_1,param_2);
    uVar3 = (**(code **)(*(int *)this + 0x1bc))();
    (**(code **)(*(int *)this + 0x1e0))
              (*(uint *)(this + 0x90) & 0xf000 | uVar3 & 0xffff0ffe | 0xf00);
    iVar1 = *(int *)this;
    uVar4 = (**(code **)(*(int *)param_1 + 400))();
    (**(code **)(iVar1 + 0x1dc))(uVar4);
  }
  return;
}

