// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog
// address: 0x1008b2ed
// body: available
// range: 0x1008b2ed-0x1008b520 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog(class
   CMFCToolBarButton *,class CMFCToolBarImages *,class CWnd *,int,int)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarButtonCustomizeDialog * __thiscall
CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog
          (CMFCToolBarButtonCustomizeDialog *this,CMFCToolBarButton *param_1,
          CMFCToolBarImages *param_2,CWnd *param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  __POSITION *p_Var6;
  
  CDialog::CDialog((CDialog *)this,0x3f04,param_3);
  *(undefined ***)this = vftable;
  CWnd::CWnd((CWnd *)(this + 0x94));
  *(undefined ***)(this + 0x94) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x108));
  *(undefined ***)(this + 0x108) = CButton::vftable;
  CWnd::CWnd((CWnd *)(this + 0x17c));
  *(undefined ***)(this + 0x17c) = CStatic::vftable;
  CWnd::CWnd((CWnd *)(this + 0x1f0));
  *(undefined ***)(this + 0x1f0) = CEdit::vftable;
  CWnd::CWnd((CWnd *)(this + 0x264));
  *(undefined ***)(this + 0x264) = CButton::vftable;
  CMFCToolBarButtonsListButton::CMFCToolBarButtonsListButton
            ((CMFCToolBarButtonsListButton *)(this + 0x2d8));
  CWnd::CWnd((CWnd *)(this + 0x400));
  *(undefined ***)(this + 0x400) = CButton::vftable;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(this + 0x474,(int *)ppuVar2);
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(this + 0x478,(int *)ppuVar2);
  *(CMFCToolBarImages **)(this + 0x480) = param_2;
  *(int *)(this + 0x484) = param_4;
  *(CMFCToolBarButton **)(this + 0x47c) = param_1;
  *(int *)(this + 0x494) = param_5;
  CObList::CObList((CObList *)(this + 0x49c),10);
  *(undefined4 *)(this + 0x4b8) = 0;
  *(undefined4 *)(this + 0x4bc) = 0;
  *(undefined4 *)(this + 0x4c0) = 0;
  *(undefined4 *)(this + 0x4c4) = 0;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(this + 0x4c8,(int *)ppuVar2);
  *(undefined4 *)(this + 0x4cc) = 0;
  if (DAT_101685b0 != (void *)0x0) {
    iVar3 = FUN_1006a40b(DAT_101685b0,*(uint *)(*(int *)(this + 0x47c) + 0x20));
    *(int *)(this + 0x4cc) = iVar3;
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(this + 0x4cc) == 0) {
      iVar3 = CMFCToolBar::GetDefaultImage(*(uint *)(*(int *)(this + 0x47c) + 0x20));
      if (iVar3 < 0) goto LAB_1008b484;
    }
    uVar4 = 0;
  }
  else {
LAB_1008b484:
    uVar4 = 1;
  }
  *(undefined4 *)(this + 0x498) = uVar4;
  if (*(int *)(param_1 + 4) == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(this + 0x488) = uVar4;
  *(undefined4 *)(this + 0x48c) = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(this + 0x494) == 0) {
LAB_1008b4da:
    if (*(int *)(*(int *)(this + 0x47c) + 0x18) == 0) {
      *(undefined4 *)(this + 0x490) = *(undefined4 *)(param_1 + 8);
      goto LAB_1008b4fa;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x20);
    puVar5 = FUN_10037712();
    p_Var6 = CList<unsigned_int,unsigned_int>::Find
                       ((CList<unsigned_int,unsigned_int> *)(puVar5 + 0x58),uVar1,(__POSITION *)0x0)
    ;
    if (p_Var6 != (__POSITION *)0x0) {
      *(undefined4 *)(this + 0x48c) = 0;
    }
    if (*(int *)(this + 0x494) == 0) goto LAB_1008b4da;
  }
  *(undefined4 *)(this + 0x490) = 1;
LAB_1008b4fa:
  FUN_100022b0(this + 0x474,(short *)&PTR_1011d390);
  FUN_100022b0(this + 0x478,(short *)&PTR_1011d390);
  return this;
}

