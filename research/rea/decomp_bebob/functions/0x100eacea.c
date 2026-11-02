// rea decompile_all
// name: CMFCColorDialog::PreTranslateMessage
// address: 0x100eacea
// body: available
// range: 0x100eacea-0x100eadd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCColorDialog::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCColorDialog::PreTranslateMessage(CMFCColorDialog *this,tagMSG *param_1)

{
  WPARAM WVar1;
  ushort uVar2;
  BOOL BVar3;
  undefined **ppuVar4;
  HGLOBAL hMem;
  LPWSTR lpString1;
  int iVar5;
  LPCWSTR local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100eacf6;
  if (param_1->message == 0x100) {
    WVar1 = param_1->wParam;
    uVar2 = GetAsyncKeyState(0x11);
    if (((uVar2 & 0x8000) != 0) && ((WVar1 == 0x43 || (WVar1 == 0x2d)))) {
      BVar3 = OpenClipboard(*(HWND *)(this + 0x20));
      if (BVar3 != 0) {
        EmptyClipboard();
        ppuVar4 = FUN_1000ad47();
        FUN_10005e00(local_14,(int *)ppuVar4);
        local_8 = 0;
        FUN_100022f0(local_14,L"RGB(%d, %d, %d)");
        hMem = GlobalAlloc(0x2000,*(int *)(local_14[0] + -6) * 2 + 2);
        lpString1 = GlobalLock(hMem);
        lstrcpyW(lpString1,local_14[0]);
        GlobalUnlock(hMem);
        SetClipboardData(0xd,hMem);
        CloseClipboard();
        local_8 = 0xffffffff;
        FUN_10001030((undefined4 *)(local_14[0] + -8));
      }
    }
  }
  iVar5 = CDialogEx::PreTranslateMessage((CDialogEx *)this,param_1);
  return iVar5;
}

