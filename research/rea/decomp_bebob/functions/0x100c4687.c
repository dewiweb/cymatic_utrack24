// rea decompile_all
// name: CPaneContainerManager::Create
// address: 0x100c4687
// body: available
// range: 0x100c4687-0x100c4702 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c46af to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::Create(class CWnd *,class CPaneDivider
   *,struct CRuntimeClass *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPaneContainerManager::Create
          (CPaneContainerManager *this,CWnd *param_1,CPaneDivider *param_2,CRuntimeClass *param_3)

{
  CObject *this_00;
  CPaneContainer *this_01;
  undefined4 uVar1;
  
  *(CWnd **)(this + 0x4c) = param_1;
  *(CRuntimeClass **)(this + 0x40) = param_3;
  if (*(int *)(this + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  if (param_3 == (CRuntimeClass *)0x0) {
    this_01 = FUN_1000858a(0x9c);
    if (this_01 == (CPaneContainer *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = CPaneContainer::CPaneContainer
                        (this_01,this,(CDockablePane *)0x0,(CDockablePane *)0x0,(CPaneDivider *)0x0)
      ;
    }
    *(undefined4 *)(this + 0x3c) = uVar1;
  }
  else {
    this_00 = CRuntimeClass::CreateObject(param_3);
    *(CObject **)(this + 0x3c) = this_00;
    CPaneContainer::SetPaneContainerManager((CPaneContainer *)this_00,this,0);
  }
  *(CPaneDivider **)(this + 0x44) = param_2;
  return 1;
}

