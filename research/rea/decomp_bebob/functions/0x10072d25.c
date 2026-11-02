// rea decompile_all
// name: CSmartDockingManager::Create
// address: 0x10072d25
// body: available
// range: 0x10072d25-0x10072def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10072d5c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::Create(class CWnd *,struct CRuntimeClass *,struct
   CRuntimeClass *)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CSmartDockingManager::Create
          (CSmartDockingManager *this,CWnd *param_1,CRuntimeClass *param_2,CRuntimeClass *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  CSmartDockingManager *pCVar4;
  
  if (param_2 == (CRuntimeClass *)0x0) {
    param_2 = (CRuntimeClass *)&PTR_s_CSmartDockingStandaloneGuide_1013aef0;
  }
  if (param_3 == (CRuntimeClass *)0x0) {
    param_3 = (CRuntimeClass *)&PTR_s_CSmartDockingGroupGuidesManager_1013af0c;
  }
  if (param_2 != (CRuntimeClass *)0x0) {
    iVar1 = CRuntimeClass::IsDerivedFrom
                      (param_2,(CRuntimeClass *)&PTR_s_CSmartDockingStandaloneGuide_1013aef0);
    if ((iVar1 != 0) && (param_3 != (CRuntimeClass *)0x0)) {
      iVar1 = CRuntimeClass::IsDerivedFrom
                        (param_3,(CRuntimeClass *)&PTR_s_CSmartDockingGroupGuidesManager_1013af0c);
      if (iVar1 != 0) {
        Destroy(this);
        uVar2 = (**(code **)(param_3 + 0xc))();
        *(undefined4 *)(this + 0xfc) = uVar2;
        iVar1 = 0;
        pCVar4 = this + 0xd8;
        do {
          piVar3 = (int *)(**(code **)(param_2 + 0xc))();
          *(int **)pCVar4 = piVar3;
          (**(code **)(*piVar3 + 0xc))(iVar1,param_1);
          iVar1 = iVar1 + 1;
          pCVar4 = pCVar4 + 4;
        } while (iVar1 < 4);
        (**(code **)(**(int **)(this + 0xfc) + 0xc))(param_1);
        iVar1 = 4;
        pCVar4 = this + 0xe8;
        do {
          uVar2 = (**(code **)(**(int **)(this + 0xfc) + 0x1c))(iVar1);
          *(undefined4 *)pCVar4 = uVar2;
          iVar1 = iVar1 + 1;
          pCVar4 = pCVar4 + 4;
        } while (iVar1 < 9);
        *(CWnd **)(this + 0x14) = param_1;
        CSmartDockingHighlighterWnd::Create((CSmartDockingHighlighterWnd *)(this + 0x30),param_1);
        *(undefined4 *)(this + 8) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

