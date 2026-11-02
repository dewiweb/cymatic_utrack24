// rea decompile_all
// name: CMFCPropertyGridToolTipCtrl::PreTranslateMessage
// address: 0x100ce513
// body: available
// range: 0x100ce513-0x100ce5a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCPropertyGridToolTipCtrl::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCPropertyGridToolTipCtrl::PreTranslateMessage(CMFCPropertyGridToolTipCtrl *this,tagMSG *param_1)

{
  uint uVar1;
  HWND hWndTo;
  int iVar2;
  tagPOINT local_c;
  
  uVar1 = param_1->message;
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if ((uVar1 < 0x200) || (0x20e < uVar1)) {
    iVar2 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  }
  else {
    if (uVar1 != 0x200) {
      Hide(this);
    }
    local_c.x = (LONG)(ushort)param_1->lParam;
    local_c.y = (LONG)*(ushort *)((int)&param_1->lParam + 2);
    hWndTo = (HWND)0x0;
    if (*(int *)(this + 0x90) != 0) {
      hWndTo = *(HWND *)(*(int *)(this + 0x90) + 0x20);
    }
    MapWindowPoints(*(HWND *)(this + 0x20),hWndTo,&local_c,1);
    SendMessageW(*(HWND *)(*(int *)(this + 0x90) + 0x20),param_1->message,param_1->wParam,
                 CONCAT22((undefined2)local_c.y,(undefined2)local_c.x));
    iVar2 = 1;
  }
  return iVar2;
}

