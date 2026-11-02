// rea decompile_all
// name: CMFCMenuBar::CalcFixedLayout
// address: 0x1006ed18
// body: available
// range: 0x1006ed18-0x1006ed5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCMenuBar::CalcFixedLayout(int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMenuBar::CalcFixedLayout(CMFCMenuBar *this,int param_1,int param_2)

{
  int in_stack_0000000c;
  
  if (*(int *)(this + 0xbd4) == 0) {
    CMFCToolBar::GetButtonSize((CMFCToolBar *)this);
  }
  else {
    (**(code **)(*(int *)this + 0x3b8))
              (param_1,param_2 != 0 | -(in_stack_0000000c != 0) & 2U,0xffffffff);
  }
  return param_1;
}

