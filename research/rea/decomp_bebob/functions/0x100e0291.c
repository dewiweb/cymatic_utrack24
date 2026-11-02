// rea decompile_all
// name: CMFCToolBarButtonsListButton::OnKeyDown
// address: 0x100e0291
// body: available
// range: 0x100e0291-0x100e0320 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonsListButton::OnKeyDown(unsigned int,unsigned
   int,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarButtonsListButton::OnKeyDown
          (CMFCToolBarButtonsListButton *this,uint param_1,uint param_2,uint param_3)

{
  __POSITION *p_Var1;
  int iVar2;
  
  if (param_1 == 0x23) {
    if (*(int *)(this + 0x80) != 0) {
      return;
    }
    iVar2 = *(int *)(this + 0x7c);
    goto LAB_100e0314;
  }
  if (param_1 == 0x24) {
LAB_100e02d5:
    if (*(int *)(this + 0x80) == 0) {
      return;
    }
    iVar2 = *(int *)(this + 0x78);
  }
  else {
    if (param_1 < 0x25) {
LAB_100e0301:
      CWnd::Default((CWnd *)this);
      return;
    }
    if (param_1 < 0x27) {
      if (*(CObject **)(this + 0x110) == (CObject *)0x0) goto LAB_100e02d5;
      p_Var1 = CObList::Find((CObList *)(this + 0x74),*(CObject **)(this + 0x110),(__POSITION *)0x0)
      ;
      if (p_Var1 == (__POSITION *)0x0) {
        return;
      }
      iVar2 = *(int *)(p_Var1 + 4);
    }
    else {
      if (0x28 < param_1) goto LAB_100e0301;
      if (*(CObject **)(this + 0x110) == (CObject *)0x0) goto LAB_100e02d5;
      p_Var1 = CObList::Find((CObList *)(this + 0x74),*(CObject **)(this + 0x110),(__POSITION *)0x0)
      ;
      if (p_Var1 == (__POSITION *)0x0) {
        return;
      }
      iVar2 = *(int *)p_Var1;
    }
    if (iVar2 == 0) {
      return;
    }
  }
LAB_100e0314:
  SelectButton(this,*(CMFCToolBarButton **)(iVar2 + 8));
  return;
}

