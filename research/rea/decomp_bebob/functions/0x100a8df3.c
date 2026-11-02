// rea decompile_all
// name: CMFCColorBar::OnMouseLeave
// address: 0x100a8df3
// body: available
// range: 0x100a8df3-0x100a8ec5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMFCColorBar::OnMouseLeave(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CMFCColorBar::OnMouseLeave(CMFCColorBar *this,uint param_1,long param_2)

{
  int iVar1;
  long lVar2;
  CMFCToolBarMenuButton *pCVar3;
  CWnd *pCVar4;
  
  if ((*(int *)(this + 0xde4) == 0) && (*(int *)(this + 0xde8) == 0)) {
    lVar2 = CMFCToolBar::OnMouseLeave((CMFCToolBar *)this,param_1,param_2);
  }
  else {
    if ((DAT_10166e78 == 0) &&
       (((*(int *)(this + 0xb38) == 0 || (DAT_10166e54 != 0)) ||
        (pCVar3 = CMFCToolBar::GetDroppedDownMenu((CMFCToolBar *)this,(int *)0x0),
        pCVar3 == (CMFCToolBarMenuButton *)0x0)))) {
      iVar1 = *(int *)(this + 0xb7c);
      *(undefined4 *)(this + 0xb34) = 0;
      *(undefined4 *)(this + 0xc88) = 0xffffffff;
      *(undefined4 *)(this + 0xc8c) = 0xffffffff;
      if (-1 < iVar1) {
        *(undefined4 *)(this + 0xb7c) = 0xffffffff;
        (**(code **)(*(int *)this + 0x3b0))(0xffffffff);
        CMFCToolBar::InvalidateButton((CMFCToolBar *)this,iVar1);
        UpdateWindow(*(HWND *)(this + 0x20));
        pCVar4 = CWnd::GetOwner((CWnd *)this);
        SendMessageW(*(HWND *)(pCVar4 + 0x20),0x362,0xe001,0);
        if (*(int **)(this + 0xdec) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0xdec) + 0x160))(0xffffffff);
        }
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}

