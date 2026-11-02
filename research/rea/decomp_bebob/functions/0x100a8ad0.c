// rea decompile_all
// name: CMFCColorBar::PreTranslateMessage
// address: 0x100a8ad0
// body: available
// range: 0x100a8ad0-0x100a8bae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCColorBar::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCColorBar::PreTranslateMessage(CMFCColorBar *this,tagMSG *param_1)

{
  UINT UVar1;
  POINT pt;
  BOOL BVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if ((((*(int *)(this + 0xde4) == 0) && (*(int *)(this + 0xde8) == 0)) &&
      (*(int *)(this + 0xdec) == 0)) || (*(int *)(this + 0xcf4) != 0)) goto LAB_100a8b96;
  UVar1 = param_1->message;
  if (UVar1 == 0x7b) {
LAB_100a8b91:
    pHVar3 = *(HWND *)(this + 0x20);
  }
  else {
    if (UVar1 == 0x100) {
      if (param_1->wParam != 0x1b) goto LAB_100a8b96;
      goto LAB_100a8b91;
    }
    if (UVar1 == 0x104) goto LAB_100a8b91;
    if (((UVar1 != 0x201) && (UVar1 != 0x204)) && (UVar1 != 0x207)) {
LAB_100a8b96:
      CMFCToolBar::PreTranslateMessage((CMFCToolBar *)this,param_1);
      goto LAB_100a8b9e;
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    pt.y = (int)*(short *)((int)&param_1->lParam + 2);
    pt.x = (int)(short)param_1->lParam;
    BVar2 = PtInRect(&local_18,pt);
    if (BVar2 != 0) goto LAB_100a8b96;
    pHVar3 = *(HWND *)(this + 0x20);
  }
  pHVar3 = GetParent(pHVar3);
  pCVar4 = CWnd::FromHandle(pHVar3);
  SendMessageW(*(HWND *)(pCVar4 + 0x20),0x10,0,0);
LAB_100a8b9e:
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

