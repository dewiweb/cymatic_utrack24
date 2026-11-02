// rea decompile_all
// name: afxMapHWND
// address: 0x10010f72
// body: available
// range: 0x10010f72-0x10010fe5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class CHandleMap * __stdcall afxMapHWND(int)
   
   Library: Visual Studio 2010 Release */

CHandleMap * afxMapHWND(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  _func_int_uint *p_Var2;
  CHandleMap *this;
  undefined4 uVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x14) == 0) && (param_1 != 0)) {
    p_Var2 = AfxSetNewHandler(FUN_1000cb96);
    this = FUN_1000858a(0x60);
    if (this == (CHandleMap *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CHandleMap::CHandleMap
                        (this,(CRuntimeClass *)&PTR_DAT_1011df44,
                         (_func_void_CObject_ptr *)&LAB_10010c1d,FUN_1000fd7a,0x20,1);
    }
    *(undefined4 *)(pAVar1 + 0x14) = uVar3;
    AfxSetNewHandler(p_Var2);
  }
  return *(CHandleMap **)(pAVar1 + 0x14);
}

