// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList
// address: 0x100e4875
// body: available
// range: 0x100e4875-0x100e4965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::OnSelchangeCommandsList(CMFCToolBarsKeyboardPropertyPage *this)

{
  WPARAM wParam;
  LRESULT LVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  int local_8;
  
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(this + 0x4d4));
  SendMessageW(*(HWND *)(this + 0x324),0x184,0,0);
  OnSelchangeCurrentKeysList((int)this);
  wParam = SendMessageW(*(HWND *)(this + 0x398),0x188,0,0);
  iVar3 = 0;
  if (wParam == 0xffffffff) {
    *(undefined4 *)(this + 0x4f4) = 0;
  }
  else {
    LVar1 = SendMessageW(*(HWND *)(this + 0x398),0x199,wParam,0);
    *(LRESULT *)(this + 0x4f4) = LVar1;
    pCVar2 = CWnd::GetParentFrame((CWnd *)this);
    if ((pCVar2 != (CFrameWnd *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
      (**(code **)(*(int *)pCVar2 + 0x170))
                (*(undefined4 *)(*(int *)(this + 0x4f4) + 0x20),this + 0x4d4);
    }
    if ((*(int *)(this + 0x4e0) != 0) && (local_8 = 0, 0 < *(int *)(this + 0x4e8))) {
      iVar3 = 0;
      do {
        if (*(uint *)(*(int *)(this + 0x4f4) + 0x20) ==
            (uint)((tagACCEL *)(*(int *)(this + 0x4e0) + iVar3))->cmd) {
          AddKeyEntry(this,(tagACCEL *)(*(int *)(this + 0x4e0) + iVar3));
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 6;
      } while (local_8 < *(int *)(this + 0x4e8));
    }
    iVar3 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x11c),iVar3);
  CWnd::UpdateData((CWnd *)this,0);
  return;
}

