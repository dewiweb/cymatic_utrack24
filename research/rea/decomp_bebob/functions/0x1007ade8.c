// rea decompile_all
// name: CDockablePane::PreTranslateMessage
// address: 0x1007ade8
// body: available
// range: 0x1007ade8-0x1007afbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CDockablePane::PreTranslateMessage(CDockablePane *this,tagMSG *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  CBaseTabbedPane *pCVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CDockingManager *pCVar7;
  
  uVar2 = param_1->message;
  if (uVar2 < 0x105) {
    if ((uVar2 == 0x104) ||
       ((0xa0 < uVar2 &&
        ((uVar2 < 0xa3 ||
         ((0xa3 < uVar2 &&
          ((uVar2 < 0xa6 || ((0xa6 < uVar2 && ((uVar2 < 0xa9 || (uVar2 == 0x100)))))))))))))) {
LAB_1007ae5c:
      iVar3 = *(int *)(this + 0x338);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
        SendMessageW(*(HWND *)(iVar3 + 0x20),0x407,0,(LPARAM)param_1);
      }
    }
  }
  else if ((0x1ff < uVar2) &&
          ((uVar2 < 0x203 || ((0x203 < uVar2 && ((uVar2 < 0x206 || (uVar2 - 0x207 < 2))))))))
  goto LAB_1007ae5c;
  if (param_1->message != 0x100) goto LAB_1007af16;
  uVar2 = (**(code **)(*(int *)this + 0x1b4))();
  if ((((uVar2 & 2) != 0) && (this[0x2b4] != (CDockablePane)0x0)) && (param_1->wParam == 0x1b)) {
    pHVar5 = *(HWND *)(this + 0x20);
    goto LAB_1007aeb1;
  }
  if (((param_1->message == 0x100) && (iVar3 = (**(code **)(*(int *)this + 0x168))(), iVar3 != 0))
     && (param_1->wParam == 0x1b)) {
    pCVar4 = CBasePane::GetParentTabbedPane((CBasePane *)this);
    iVar3 = (**(code **)(*(int *)pCVar4 + 0x224))(0);
    if ((pCVar4[0x2b4] == (CBaseTabbedPane)0x0) &&
       ((iVar3 == 0 || (*(char *)(iVar3 + 0x99) == '\0')))) goto LAB_1007af16;
    if (iVar3 != 0) {
      pHVar5 = *(HWND *)(iVar3 + 0x20);
      goto LAB_1007aeb1;
    }
  }
  else {
LAB_1007af16:
    if ((param_1->message != 0x100) ||
       ((param_1->wParam != 0x1b || (cVar1 = (**(code **)(*(int *)this + 0x1b4))(), -1 < cVar1)))) {
LAB_1007afad:
      iVar3 = CBasePane::PreTranslateMessage((CBasePane *)this,param_1);
      return iVar3;
    }
    pHVar5 = GetParent(*(HWND *)(this + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    pCVar7 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar6);
    if ((pCVar7 == (CDockingManager *)0x0) ||
       (((iVar3 = *(int *)(pCVar7 + 0x1b8), iVar3 == 0 || (*(int *)(iVar3 + 8) == 0)) ||
        (*(int *)(iVar3 + 4) == 0)))) goto LAB_1007afad;
    pHVar5 = GetParent(*(HWND *)(this + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    pCVar4 = (CBaseTabbedPane *)
             AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101606a0,(CObject *)pCVar6);
    if (pCVar4 == (CBaseTabbedPane *)0x0) goto LAB_1007afad;
    pHVar5 = GetCapture();
    pCVar6 = CWnd::FromHandle(pHVar5);
    if (pCVar6 != (CWnd *)pCVar4) goto LAB_1007afad;
  }
  pHVar5 = *(HWND *)(pCVar4 + 0x20);
LAB_1007aeb1:
  PostMessageW(pHVar5,0x1f,0,0);
  return 1;
}

