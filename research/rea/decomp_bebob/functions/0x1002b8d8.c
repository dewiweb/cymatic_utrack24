// rea decompile_all
// name: CMFCToolBar::OnMouseLeave
// address: 0x1002b8d8
// body: available
// range: 0x1002b8d8-0x1002ba15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMFCToolBar::OnMouseLeave(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CMFCToolBar::OnMouseLeave(CMFCToolBar *this,uint param_1,long param_2)

{
  CMFCToolBarMenuButton *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CWnd *pCVar4;
  int iVar5;
  CMFCToolBarButton *pCVar6;
  bool bVar7;
  
  if (DAT_10166e78 == 0) {
    if (((*(int *)(this + 0xb38) != 0) && (DAT_10166e54 == 0)) &&
       (pCVar1 = GetDroppedDownMenu(this,(int *)0x0), pCVar1 != (CMFCToolBarMenuButton *)0x0)) {
      return 0;
    }
    *(undefined4 *)(this + 0xb34) = 0;
    *(undefined4 *)(this + 0xc88) = 0xffffffff;
    *(undefined4 *)(this + 0xc8c) = 0xffffffff;
    pHVar2 = GetFocus();
    pCVar3 = CWnd::FromHandle(pHVar2);
    bVar7 = pCVar3 == (CWnd *)this;
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar2);
    if (((pCVar4 != (CWnd *)0x0) &&
        (iVar5 = CObject::IsKindOf((CObject *)pCVar4,(CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4),
        iVar5 != 0)) && (bVar7 = pCVar4 == pCVar3, !bVar7)) {
      pHVar2 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar2);
      bVar7 = pCVar4 == pCVar3;
    }
    if (*(int *)(this + 0xb7c) < 0) {
      (**(code **)(*(int *)this + 0x414))(0xffffffff);
    }
    else if ((!bVar7) && (iVar5 = (**(code **)(*(int *)this + 0x3f0))(), iVar5 == 0)) {
      iVar5 = *(int *)(this + 0xb7c);
      *(undefined4 *)(this + 0xb7c) = 0xffffffff;
      (**(code **)(*(int *)this + 0x3b0))(0xffffffff);
      pCVar6 = InvalidateButton(this,iVar5);
      UpdateWindow(*(HWND *)(this + 0x20));
      if ((pCVar6 != (CMFCToolBarButton *)0x0) &&
         (iVar5 = (**(code **)(*(int *)pCVar6 + 0x70))(), iVar5 != 0)) {
        return 0;
      }
      pCVar3 = CWnd::GetOwner((CWnd *)this);
      SendMessageW(*(HWND *)(pCVar3 + 0x20),0x362,0xe001,0);
    }
  }
  return 0;
}

