// rea decompile_all
// name: CMFCToolBar::PreTranslateMessage
// address: 0x1002f38b
// body: available
// range: 0x1002f38b-0x1002f486 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::PreTranslateMessage(CMFCToolBar *this,tagMSG *param_1)

{
  uint uVar1;
  CMFCToolBarMenuButton *pCVar2;
  int iVar3;
  
  uVar1 = param_1->message;
  if ((uVar1 == 0x100) && (param_1->wParam == 0x1b)) {
    if (*(int *)(this + 0xb30) == 0) {
      pCVar2 = GetDroppedDownMenu(this,(int *)0x0);
      if (pCVar2 != (CMFCToolBarMenuButton *)0x0) goto LAB_1002f47b;
      (**(code **)(*(int *)this + 0x360))();
      (**(code **)(*(int *)this + 0x364))();
    }
    else {
      FUN_1002809e((CPane *)this);
    }
    return 1;
  }
  if (uVar1 == DAT_10166eb8) {
    OnPromptReset(this,0,0);
    return 1;
  }
  if (uVar1 < 0x105) {
    if ((uVar1 != 0x104) &&
       ((uVar1 < 0xa1 ||
        ((0xa2 < uVar1 &&
         ((uVar1 < 0xa4 ||
          ((0xa5 < uVar1 && ((uVar1 < 0xa7 || ((0xa8 < uVar1 && (uVar1 != 0x100))))))))))))))
    goto LAB_1002f47b;
  }
  else if ((uVar1 < 0x200) ||
          ((0x202 < uVar1 && ((uVar1 < 0x204 || ((0x205 < uVar1 && (1 < uVar1 - 0x207))))))))
  goto LAB_1002f47b;
  iVar3 = *(int *)(this + 0xc94);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
    SendMessageW(*(HWND *)(iVar3 + 0x20),0x407,0,(LPARAM)param_1);
  }
LAB_1002f47b:
  iVar3 = CBasePane::PreTranslateMessage((CBasePane *)this,param_1);
  return iVar3;
}

