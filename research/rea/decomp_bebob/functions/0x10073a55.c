// rea decompile_all
// name: CMFCTabCtrl::PreTranslateMessage
// address: 0x10073a55
// body: available
// range: 0x10073a55-0x10073c54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCTabCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCTabCtrl::PreTranslateMessage(CMFCTabCtrl *this,tagMSG *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  CWnd *this_00;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_1->message;
  if (uVar1 < 0x105) {
    if (uVar1 == 0x104) goto LAB_10073be4;
    if (uVar1 < 0xa1) goto LAB_10073c25;
    if (uVar1 < 0xa3) goto LAB_10073be4;
    if (uVar1 < 0xa4) goto LAB_10073c25;
    if (uVar1 < 0xa6) goto LAB_10073be4;
    if (uVar1 < 0xa7) goto LAB_10073c25;
    if (uVar1 < 0xa9) goto LAB_10073be4;
    if (uVar1 != 0x100) goto LAB_10073c25;
    if ((*(int *)(this + 0xa0) == -1) || (uVar2 = GetAsyncKeyState(0x11), (uVar2 & 0x8000) == 0))
    goto LAB_10073be4;
    if (param_1->wParam == 0x21) {
      iVar6 = *(int *)(this + 0x9c) + -1 + *(int *)(this + 0xa0);
      if (*(int *)(this + 0xa0) < iVar6) {
        do {
          iVar5 = iVar6 % *(int *)(this + 0x9c);
          iVar3 = (**(code **)(*(int *)this + 0x278))(iVar5);
          if (iVar3 != 0) goto LAB_10073b40;
          iVar6 = iVar6 + -1;
        } while (*(int *)(this + 0xa0) < iVar6);
      }
    }
    else {
      if (param_1->wParam != 0x22) goto LAB_10073be4;
      iVar6 = *(int *)(this + 0xa0) + 1;
      if (iVar6 < *(int *)(this + 0x9c) + *(int *)(this + 0xa0)) {
        do {
          iVar5 = iVar6 % *(int *)(this + 0x9c);
          iVar3 = (**(code **)(*(int *)this + 0x278))(iVar5);
          if (iVar3 != 0) goto LAB_10073b40;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(this + 0x9c) + *(int *)(this + 0xa0));
      }
    }
LAB_10073b7d:
    iVar6 = 1;
  }
  else {
    if ((uVar1 < 0x200) ||
       ((0x202 < uVar1 && ((uVar1 < 0x204 || ((0x205 < uVar1 && (1 < uVar1 - 0x207))))))))
    goto LAB_10073c25;
LAB_10073be4:
    iVar6 = *(int *)(this + 0xdc);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
      SendMessageW(*(HWND *)(iVar6 + 0x20),0x407,0,(LPARAM)param_1);
    }
    iVar6 = *(int *)(this + 0xd8);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
      SendMessageW(*(HWND *)(iVar6 + 0x20),0x407,0,(LPARAM)param_1);
    }
LAB_10073c25:
    if (param_1->message == 0x203) {
      pHVar4 = (HWND)0x0;
      if (this != (CMFCTabCtrl *)0xffffdf6c) {
        pHVar4 = *(HWND *)(this + 0x20b4);
      }
      if (param_1->hwnd == pHVar4) goto LAB_10073b7d;
    }
    iVar6 = CMFCBaseTabCtrl::PreTranslateMessage((CMFCBaseTabCtrl *)this,param_1);
  }
  return iVar6;
LAB_10073b40:
  *(undefined4 *)(this + 0x200) = 1;
  (**(code **)(*(int *)this + 0x210))(iVar5);
  this_00 = (CWnd *)(**(code **)(*(int *)this + 0x20c))();
  CWnd::SetFocus(this_00);
  (**(code **)(*(int *)this + 0x26c))(*(undefined4 *)(this + 0xa0));
  *(undefined4 *)(this + 0x200) = 0;
  goto LAB_10073b7d;
}

