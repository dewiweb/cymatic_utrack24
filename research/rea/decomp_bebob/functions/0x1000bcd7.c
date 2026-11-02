// rea decompile_all
// name: CThreadLocalObject::GetData
// address: 0x1000bcd7
// body: available
// range: 0x1000bcd7-0x1000bd60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000bcf1 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CNoTrackObject * __thiscall CThreadLocalObject::GetData(class CNoTrackObject *
   (__stdcall*)(void))
   
   Library: Visual Studio 2010 Release */

CNoTrackObject * __thiscall
CThreadLocalObject::GetData(CThreadLocalObject *this,_func_CNoTrackObject_ptr *param_1)

{
  int iVar1;
  CNoTrackObject *pCVar2;
  
  if (param_1 == (_func_CNoTrackObject_ptr *)0x0) {
LAB_1000bcf1:
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (*(int *)this == 0) {
    if (DAT_10164b74 == (CThreadSlotData *)0x0) {
      DAT_10164b74 = (CThreadSlotData *)
                     CThreadSlotData::CThreadSlotData((CThreadSlotData *)&DAT_10164b78);
      if (DAT_10164b74 == (CThreadSlotData *)0x0) goto LAB_1000bcf1;
    }
    iVar1 = CThreadSlotData::AllocSlot(DAT_10164b74);
    *(int *)this = iVar1;
    if (iVar1 == 0) goto LAB_1000bcf1;
  }
  pCVar2 = CThreadSlotData::GetThreadValue(DAT_10164b74,*(int *)this);
  if (pCVar2 == (CNoTrackObject *)0x0) {
    pCVar2 = (*param_1)();
    CThreadSlotData::SetValue(DAT_10164b74,*(int *)this,pCVar2);
  }
  return pCVar2;
}

