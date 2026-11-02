// rea decompile_all
// name: ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accFocus
// address: 0x10011e85
// body: available
// range: 0x10011e85-0x10011eb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall ATL::IAccessibleProxyImpl<class
   ATL::CAccessibleProxy>::get_accFocus(struct tagVARIANT *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long ATL::IAccessibleProxyImpl<ATL::CAccessibleProxy>::get_accFocus(tagVARIANT *param_1)

{
  long lVar1;
  int in_stack_00000008;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar1 = -0x7ffefef8;
  }
  else if (in_stack_00000008 == 0) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x48))(*(int **)(param_1 + 8));
  }
  return lVar1;
}

