// rea decompile_all
// name: CMFCButton::CheckNextPrevRadioButton
// address: 0x10052a70
// body: available
// range: 0x10052a70-0x10052b6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCButton::CheckNextPrevRadioButton(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCButton::CheckNextPrevRadioButton(CMFCButton *this,int param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *this_00;
  ulong uVar3;
  uint uVar4;
  bool bVar5;
  HWND hWnd;
  
  if (*(int *)(this + 0xbc) != 0) {
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    bVar5 = param_1 == 0;
    param_1 = (int)CWnd::GetNextDlgGroupItem(pCVar2,(CWnd *)this,(uint)bVar5);
    if ((CMFCButton *)param_1 != this) {
      do {
        this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCButton_10126ae4,(CObject *)param_1)
        ;
        if (((this_00 != (CObject *)0x0) && (*(int *)(this_00 + 0xbc) != 0)) &&
           (uVar3 = CWnd::GetExStyle((CWnd *)this_00), (uVar3 & 0x18000000) == 0x10000000)) break;
        param_1 = (int)CWnd::GetNextDlgGroupItem(pCVar2,(CWnd *)param_1,(uint)bVar5);
      } while ((CMFCButton *)param_1 != this);
      if (((this_00 != (CObject *)0x0) && (this_00 != (CObject *)this)) &&
         (*(int *)(this_00 + 0xb4) == 0)) {
        SendMessageW(*(HWND *)(this_00 + 0x20),0xf1,1,0);
        CWnd::SetFocus((CWnd *)this_00);
        pHVar1 = GetParent(*(HWND *)(this_00 + 0x20));
        pCVar2 = CWnd::FromHandle(pHVar1);
        if (pCVar2 == (CWnd *)0x0) {
          pHVar1 = (HWND)0x0;
        }
        else {
          pHVar1 = *(HWND *)(pCVar2 + 0x20);
        }
        hWnd = *(HWND *)(this_00 + 0x20);
        uVar4 = GetWindowLongW(hWnd,-0xc);
        SendMessageW(pHVar1,0x111,uVar4 & 0xffff,(LPARAM)hWnd);
        return 1;
      }
    }
  }
  return 0;
}

