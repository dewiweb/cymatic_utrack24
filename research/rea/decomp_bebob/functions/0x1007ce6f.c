// rea decompile_all
// name: CListBox::OnChildNotify
// address: 0x1007ce6f
// body: available
// range: 0x1007ce6f-0x1007cefc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007ce8e to 0x100142da CWnd::OnChildNotify (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CListBox::OnChildNotify(unsigned int,unsigned int,long,long *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2010 Release */

int __thiscall
CListBox::OnChildNotify(CListBox *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0x2b) {
    (**(code **)(*(int *)this + 0x164))(param_3);
  }
  else if (param_1 == 0x2c) {
    (**(code **)(*(int *)this + 0x168))(param_3);
  }
  else if (param_1 == 0x2d) {
    (**(code **)(*(int *)this + 0x170))(param_3);
  }
  else {
    if (param_1 == 0x2e) {
      lVar2 = (**(code **)(*(int *)this + 0x174))(param_2 & 0xffff,param_2 >> 0x10);
    }
    else if (param_1 == 0x2f) {
      lVar2 = (**(code **)(*(int *)this + 0x178))(param_2 & 0xffff,param_2 >> 0x10);
    }
    else {
      if (param_1 != 0x39) {
        iVar1 = CWnd::OnChildNotify((CWnd *)this,param_1,param_2,param_3,param_4);
        return iVar1;
      }
      lVar2 = (**(code **)(*(int *)this + 0x16c))(param_3);
    }
    *param_4 = lVar2;
  }
  return 1;
}

