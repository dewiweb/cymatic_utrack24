// rea decompile_all
// name: CMFCToolBar::OnChangeHot
// address: 0x100296e9
// body: available
// range: 0x100296e9-0x100298db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::OnChangeHot(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::OnChangeHot(CMFCToolBar *this,int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  CMFCToolBarMenuButton *pCVar3;
  CObject *pCVar4;
  ANIMATION_TYPE AVar5;
  int iVar6;
  
  if ((*(int *)(this + 0xb84) == param_1) && (-1 < *(int *)(this + 0xb84))) {
    param_1 = -1;
  }
  *(int *)(this + 0xb84) = param_1;
  pCVar3 = GetDroppedDownMenu(this,(int *)0x0);
  if (pCVar3 == (CMFCToolBarMenuButton *)0x0) {
    if (DAT_10166e54 == 0) {
      return;
    }
  }
  else {
    iVar6 = (**(code **)(*(int *)pCVar3 + 0xe8))();
    if (iVar6 != 0) {
      return;
    }
  }
  if ((param_1 < 0) || (*(int *)(this + 0xbd4) <= param_1)) {
    *(undefined4 *)(this + 0xb84) = 0xffffffff;
    if (pCVar3 == (CMFCToolBarMenuButton *)0x0) {
      return;
    }
    if (DAT_10166e54 == 0) {
      return;
    }
    if (DAT_10166e58 != 0) {
      return;
    }
    (**(code **)(*(int *)pCVar3 + 0x58))();
    return;
  }
  pCVar4 = (CObject *)FUN_100261ef(this,param_1);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,pCVar4);
  if (pCVar4 == (CObject *)pCVar3) {
    if (DAT_10166e54 == 0) goto LAB_10029872;
    if ((pCVar3 != (CMFCToolBarMenuButton *)0x0) &&
       (iVar6 = (**(code **)(*(int *)pCVar3 + 0x70))(), iVar6 != 0)) {
      (**(code **)(*(int *)pCVar3 + 0x58))();
    }
  }
  else {
    bVar2 = false;
    AVar5 = CMFCPopupMenu::GetAnimationType(0);
    if (pCVar3 != (CMFCToolBarMenuButton *)0x0) {
      uVar1 = *(undefined4 *)(this + 0xb7c);
      if (DAT_10166e54 == 0) {
        *(undefined4 *)(this + 0xb7c) = 0xffffffff;
      }
      (**(code **)(*(int *)pCVar3 + 0x58))();
      *(undefined4 *)(this + 0xb7c) = uVar1;
      bVar2 = true;
    }
    if ((pCVar4 != (CObject *)0x0) &&
       ((DAT_10166e54 == 0 ||
        (iVar6 = CObject::IsKindOf(pCVar4,(CRuntimeClass *)
                                          &PTR_s_CMFCToolBarSystemMenuButton_101616f8), iVar6 == 0))
       )) {
      if (bVar2) {
        DAT_10168438 = 0;
      }
      (**(code **)(*(int *)pCVar4 + 0x20))(this,1);
      DAT_10168438 = AVar5;
    }
  }
  if ((DAT_10166e54 != 0) && (*(int *)(this + 0xb8c) < 0)) {
    *(undefined4 *)(this + 0xb80) = *(undefined4 *)(this + 0xb84);
    if (*(int *)(this + 0xb7c) != -1) {
      InvalidateButton(this,*(int *)(this + 0xb7c));
    }
    iVar6 = FUN_100261ef(this,*(int *)(this + 0xb80));
    if (iVar6 == 0) {
      return;
    }
    if ((*(byte *)(iVar6 + 0x24) & 1) == 0) {
      InvalidateButton(this,*(int *)(this + 0xb80));
    }
    else {
      *(undefined4 *)(this + 0xb80) = 0xffffffff;
    }
  }
LAB_10029872:
  if ((-1 < *(int *)(this + 0xb84)) &&
     (iVar6 = *(int *)(this + 0xb7c), *(int *)(this + 0xb84) != iVar6)) {
    if (-1 < iVar6) {
      InvalidateButton(this,iVar6);
    }
    *(int *)(this + 0xb7c) = *(int *)(this + 0xb84);
    InvalidateButton(this,*(int *)(this + 0xb84));
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  return;
}

