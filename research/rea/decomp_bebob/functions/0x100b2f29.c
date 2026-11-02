// rea decompile_all
// name: CMFCRibbonPanel::Insert
// address: 0x100b2f29
// body: available
// range: 0x100b2f29-0x100b2fec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b2fcf to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonPanel::Insert(class CMFCRibbonBaseElement *,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonPanel::Insert(CMFCRibbonPanel *this,CMFCRibbonBaseElement *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == -1) {
    param_2 = *(int *)(this + 0x25c);
  }
  iVar2 = 0;
  if ((param_2 < 0) || (*(int *)(this + 0x25c) < param_2)) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*(int *)param_1 + 0xc4))(*(undefined4 *)(this + 0xa8));
    iVar1 = (**(code **)(*(int *)param_1 + 0xf4))();
    if (((iVar1 == 0) && (*(int *)(this + 0x14) != 0)) && (0 < *(int *)(this + 0x25c))) {
      do {
        if ((iVar2 < 0) || (*(int *)(this + 0x25c) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_10009068();
        }
        iVar1 = (**(code **)(**(int **)(*(int *)(this + 600) + iVar2 * 4) + 0xf4))();
        if (iVar1 == 0) {
          *(undefined4 *)(this + 0x14) = 0;
          break;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0x25c));
    }
    if (param_2 == *(int *)(this + 0x25c)) {
      CArray<int,int>::SetAtGrow
                ((CArray<int,int> *)(this + 0x254),*(int *)(this + 0x25c),(int)param_1);
    }
    else {
      FUN_1006cf3f((CArray<int,int> *)(this + 0x254),param_2,param_1,1);
    }
    iVar2 = 1;
  }
  return iVar2;
}

