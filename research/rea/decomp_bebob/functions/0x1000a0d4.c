// rea decompile_all
// name: AfxMessageBox
// address: 0x1000a0d4
// body: available
// range: 0x1000a0d4-0x1000a106 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall AfxMessageBox(wchar_t const *,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

int AfxMessageBox(wchar_t *param_1,uint param_2,uint param_3)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  
  pAVar1 = AfxGetModuleState();
  if (*(int **)(pAVar1 + 4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1000a0ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(**(int **)(pAVar1 + 4) + 0xb4))();
    return iVar2;
  }
  iVar2 = CWinApp::ShowAppMessageBox((CWinApp *)0x0,param_1,param_2,param_3);
  return iVar2;
}

