// rea decompile_all
// name: CPropertySheet::AddPage
// address: 0x100d7807
// body: available
// range: 0x100d7807-0x100d795b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d7816 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100d794a to 0x10009030 FUN_10009030 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPropertySheet::AddPage(class CPropertyPage *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPropertySheet::AddPage(CPropertySheet *this,CPropertyPage *param_1)

{
  size_t _NewSize;
  int iVar1;
  void *pvVar2;
  HPROPSHEETPAGE lParam;
  LRESULT LVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  _PROPSHEETPAGEA *p_Var7;
  int local_8;
  
  if (param_1 == (CPropertyPage *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  CObArray::SetAtGrow((CObArray *)(this + 0xa8),*(int *)(this + 0xb0),(CObject *)param_1);
  if (*(int *)(this + 0x20) == 0) {
    return;
  }
  uVar4 = 0;
  local_8 = 0;
  piVar6 = *(int **)(this + 0x94);
  if (*(int *)(this + 0x8c) != 0) {
    do {
      iVar1 = *piVar6;
      iVar5 = local_8 + iVar1;
      if ((iVar5 < local_8) || (iVar5 < iVar1)) goto LAB_100d794a;
      piVar6 = (int *)((int)piVar6 + iVar1);
      uVar4 = uVar4 + 1;
      local_8 = iVar5;
    } while (uVar4 < *(uint *)(this + 0x8c));
  }
  _NewSize = **(int **)(param_1 + 0x94) + local_8;
  if (((local_8 <= (int)_NewSize) && (**(int **)(param_1 + 0x94) <= (int)_NewSize)) &&
     (pvVar2 = _realloc(*(int **)(this + 0x94),_NewSize), pvVar2 != (void *)0x0)) {
    *(void **)(this + 0x94) = pvVar2;
    p_Var7 = (_PROPSHEETPAGEA *)((int)pvVar2 + local_8);
    FUN_10004cd0(p_Var7,_NewSize - local_8,*(rsize_t **)(param_1 + 0x94),
                 **(rsize_t **)(param_1 + 0x94));
    CPropertyPage::PreProcessPageTemplate
              (param_1,p_Var7,(uint)((*(uint *)(this + 0x78) & 0x1000020) != 0));
    iVar1 = *(int *)(param_1 + 0xa0);
    if (*(int *)(iVar1 + -0xc) != 0) {
      *(uint *)(p_Var7 + 4) = *(uint *)(p_Var7 + 4) | 0x1000;
      *(int *)(p_Var7 + 0x28) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0xa4);
    if (*(int *)(iVar1 + -0xc) != 0) {
      *(uint *)(p_Var7 + 4) = *(uint *)(p_Var7 + 4) | 0x2000;
      *(int *)(p_Var7 + 0x2c) = iVar1;
    }
    AfxGetModuleState();
    lParam = (HPROPSHEETPAGE)FID_conflict__DestroyPropertySheetPage((HPROPSHEETPAGE)p_Var7);
    if (lParam != (HPROPSHEETPAGE)0x0) {
      LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x467,0,(LPARAM)lParam);
      if (LVar3 != 0) {
        *(int *)(this + 0x8c) = *(int *)(this + 0x8c) + 1;
        return;
      }
      AfxGetModuleState();
      FID_conflict__DestroyPropertySheetPage(lParam);
    }
  }
LAB_100d794a:
                    /* WARNING: Subroutine does not return */
  FUN_10009030();
}

