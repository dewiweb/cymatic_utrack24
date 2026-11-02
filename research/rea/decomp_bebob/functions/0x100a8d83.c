// rea decompile_all
// name: CMFCColorBar::OnKey
// address: 0x100a8d83
// body: available
// range: 0x100a8d83-0x100a8df2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCColorBar::OnKey(unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCColorBar::OnKey(CMFCColorBar *this,uint param_1)

{
  __POSITION *p_Var1;
  CWnd *pCVar2;
  int iVar3;
  
  if (-1 < *(int *)(this + 0xb7c)) {
    p_Var1 = CObList::FindIndex((CObList *)(this + 0xbc8),*(int *)(this + 0xb7c));
    if (p_Var1 != (__POSITION *)0x0) {
      iVar3 = *(int *)(p_Var1 + 8);
      goto LAB_100a8dad;
    }
  }
  iVar3 = 0;
LAB_100a8dad:
  if ((param_1 == 0xd) && (iVar3 != 0)) {
    pCVar2 = CWnd::GetOwner((CWnd *)this);
    SendMessageW(*(HWND *)(pCVar2 + 0x20),0x362,0xe001,0);
    (**(code **)(*(int *)this + 0x3e4))(iVar3);
    iVar3 = 1;
  }
  else {
    iVar3 = CMFCPopupMenuBar::OnKey((CMFCPopupMenuBar *)this,param_1);
  }
  return iVar3;
}

