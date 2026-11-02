// rea decompile_all
// name: CHandleMap::FromHandle
// address: 0x1000e3e1
// body: available
// range: 0x1000e3e1-0x1000e481 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e44b to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CObject * __thiscall CHandleMap::FromHandle(void *)
   
   Library: Visual Studio 2010 Release */

CObject * __thiscall CHandleMap::FromHandle(CHandleMap *this,void *param_1)

{
  int iVar1;
  CObject *pCVar2;
  _func_int_uint *p_Var3;
  void **ppvVar4;
  
  if (param_1 == (void *)0x0) {
    pCVar2 = (CObject *)0x0;
  }
  else {
    pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(this + 0x1c),param_1);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(this + 0x38),param_1);
      if (pCVar2 == (CObject *)0x0) {
        p_Var3 = AfxSetNewHandler(FUN_1000cb96);
        pCVar2 = CFixedAllocNoSync::Alloc((CFixedAllocNoSync *)(this + 4));
        if (pCVar2 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10009030();
        }
        (**(code **)(this + 0x14))(pCVar2);
        ppvVar4 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(this + 0x38),param_1);
        *ppvVar4 = pCVar2;
        AfxSetNewHandler(p_Var3);
        iVar1 = *(int *)(this + 0x58);
        *(void **)(pCVar2 + iVar1) = param_1;
        if (*(int *)(this + 0x5c) == 2) {
          *(void **)(pCVar2 + iVar1 + 4) = param_1;
        }
      }
      else {
        iVar1 = *(int *)(this + 0x58);
        *(void **)(pCVar2 + iVar1) = param_1;
        if (*(int *)(this + 0x5c) == 2) {
          *(void **)(pCVar2 + iVar1 + 4) = param_1;
        }
      }
    }
  }
  return pCVar2;
}

