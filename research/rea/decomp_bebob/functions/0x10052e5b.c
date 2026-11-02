// rea decompile_all
// name: CMFCButton::PreTranslateMessage
// address: 0x10052e5b
// body: available
// range: 0x10052e5b-0x10052fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCButton::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCButton::PreTranslateMessage(CMFCButton *this,tagMSG *param_1)

{
  UINT UVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  uint uVar4;
  int iVar5;
  HWND hWnd;
  
  iVar5 = *(int *)(this + 0x738);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((UVar1 = param_1->message, UVar1 == 0x201 || ((UVar1 == 0x202 || (UVar1 == 0x200)))))) {
    SendMessageW(*(HWND *)(iVar5 + 0x20),0x407,0,(LPARAM)param_1);
  }
  if (param_1->message == 0x100) {
    if ((param_1->wParam == 0xd) && (DAT_1016843c == 0)) {
      pHVar2 = GetParent(*(HWND *)(this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      if (pCVar3 != (CWnd *)0x0) {
        hWnd = *(HWND *)(this + 0x20);
        uVar4 = CWnd::GetDlgCtrlID((CWnd *)this);
        pHVar2 = *(HWND *)(pCVar3 + 0x20);
        goto LAB_10052ef3;
      }
    }
    if ((param_1->message == 0x100) && (*(int *)(this + 0xc0) != 0)) {
      pHVar2 = GetParent(*(HWND *)(this + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      if (pCVar3 != (CWnd *)0x0) {
        uVar4 = param_1->wParam;
        if (uVar4 == 0x20) {
          if (*(int *)(this + 0xb8) != 0) {
            *(uint *)(this + 0xb4) = (uint)(*(int *)(this + 0xb4) == 0);
            RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
            pHVar2 = GetParent(*(HWND *)(this + 0x20));
            pCVar3 = CWnd::FromHandle(pHVar2);
            if (pCVar3 == (CWnd *)0x0) {
              pHVar2 = (HWND)0x0;
            }
            else {
              pHVar2 = *(HWND *)(pCVar3 + 0x20);
            }
            hWnd = *(HWND *)(this + 0x20);
            uVar4 = GetWindowLongW(hWnd,-0xc);
LAB_10052ef3:
            SendMessageW(pHVar2,0x111,uVar4 & 0xffff,(LPARAM)hWnd);
            return 1;
          }
        }
        else if (0x24 < uVar4) {
          if (uVar4 < 0x27) {
            iVar5 = 0;
          }
          else {
            if (0x28 < uVar4) goto LAB_10052f4a;
            iVar5 = 1;
          }
          iVar5 = CheckNextPrevRadioButton(this,iVar5);
          if (iVar5 != 0) {
            return 1;
          }
        }
      }
    }
  }
LAB_10052f4a:
  iVar5 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  return iVar5;
}

