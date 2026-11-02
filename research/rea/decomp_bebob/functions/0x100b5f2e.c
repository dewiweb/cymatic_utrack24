// rea decompile_all
// name: CMFCRibbonPanel::CopyFrom
// address: 0x100b5f2e
// body: available
// range: 0x100b5f2e-0x100b6039 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b5fcf to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::CopyFrom(class CMFCRibbonPanel &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanel::CopyFrom(CMFCRibbonPanel *this,CMFCRibbonPanel *param_1)

{
  undefined4 *puVar1;
  CMFCRibbonPanel *pCVar2;
  CRuntimeClass *this_00;
  CObject *pCVar3;
  int iVar4;
  
  pCVar2 = param_1;
  FUN_10007c90(this + 0x9c,(undefined4 *)(param_1 + 0x9c));
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  iVar4 = 0;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  if (0 < *(int *)(param_1 + 0x248)) {
    do {
      if ((iVar4 < 0) || (*(int *)(param_1 + 0x248) <= iVar4)) goto LAB_100b5fcf;
      CArray<int,int>::SetAtGrow
                ((CArray<int,int> *)(this + 0x240),*(int *)(this + 0x248),
                 *(int *)(*(int *)(param_1 + 0x244) + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x248));
  }
  param_1 = (CMFCRibbonPanel *)0x0;
  if (0 < *(int *)(pCVar2 + 0x25c)) {
    do {
      if (((int)param_1 < 0) || (*(int *)(pCVar2 + 0x25c) <= (int)param_1)) {
LAB_100b5fcf:
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      puVar1 = *(undefined4 **)(*(int *)(pCVar2 + 600) + (int)param_1 * 4);
      this_00 = (CRuntimeClass *)(**(code **)*puVar1)();
      pCVar3 = CRuntimeClass::CreateObject(this_00);
      (**(code **)(*(int *)pCVar3 + 200))(puVar1);
      (**(code **)(*(int *)pCVar3 + 0xd0))(puVar1);
      CArray<int,int>::SetAtGrow
                ((CArray<int,int> *)(this + 0x254),*(int *)(this + 0x25c),(int)pCVar3);
      param_1 = param_1 + 1;
    } while ((int)param_1 < *(int *)(pCVar2 + 0x25c));
  }
  return;
}

