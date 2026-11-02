// rea decompile_all
// name: CPreviewViewEx::OnUpdatePreviewNumPage
// address: 0x10068976
// body: available
// range: 0x10068976-0x10068a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewViewEx::OnUpdatePreviewNumPage(class CCmdUI *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPreviewViewEx::OnUpdatePreviewNumPage(CPreviewViewEx *this,CCmdUI *param_1)

{
  int iVar1;
  CMFCRibbonBaseElement *pCVar2;
  CObject *pCVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  
  CPreviewView::OnUpdateNumPageChange((CPreviewView *)this,param_1);
  if (*(int *)(this + 0x130) == 0) {
    iVar8 = *(int *)(this + 0x13c);
  }
  else {
    iVar8 = *(int *)(this + 300);
  }
  if (*(int *)(this + 0xe28) == 0) {
    if ((this + 0x15c != (CPreviewViewEx *)0x0) && (*(int *)(this + 0x17c) != 0)) {
      piVar6 = (int *)FUN_100261ef(this + 0x15c,*(int *)(this + 0xe38));
      if (iVar8 == 1) {
        uVar7 = *(undefined4 *)(this + 0xe34);
      }
      else {
        uVar7 = *(undefined4 *)(this + 0xe30);
      }
      (**(code **)(*piVar6 + 0xbc))(uVar7);
      InvalidateRect(*(HWND *)(this + 0x17c),(RECT *)(piVar6 + 0x15),1);
    }
  }
  else {
    if (*(int *)(this + 0xe2c) == 0) {
      pCVar2 = FUN_100ab8cf(*(void **)(*(int *)(this + 0xe28) + 0x710),0xe301,1);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_10133868,
                                  (CObject *)pCVar2);
      *(CObject **)(this + 0xe2c) = pCVar3;
    }
    iVar1 = *(int *)(this + 0xe2c);
    if ((iVar1 != 0) && (iVar4 = 5 - (uint)(iVar8 != 1), *(int *)(iVar1 + 0xe8) != iVar4)) {
      *(int *)(iVar1 + 0xe8) = iVar4;
      puVar5 = &DAT_10129744;
      if (iVar8 != 1) {
        puVar5 = &DAT_10129740;
      }
      (**(code **)(**(int **)(this + 0xe2c) + 0x14))(puVar5,0);
      (**(code **)(**(int **)(this + 0xe2c) + 0x118))();
    }
  }
  return;
}

