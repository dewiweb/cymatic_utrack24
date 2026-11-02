// rea decompile_all
// name: CMFCMousePropertyPage::SelectCommand
// address: 0x100e6ce5
// body: available
// range: 0x100e6ce5-0x100e6da1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMFCMousePropertyPage::SelectCommand(unsigned int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMousePropertyPage::SelectCommand(CMFCMousePropertyPage *this,uint param_1)

{
  CFrameWnd *pCVar1;
  LRESULT LVar2;
  uint uVar3;
  WPARAM local_8;
  
  pCVar1 = CWnd::GetParentFrame((CWnd *)this);
  if ((pCVar1 == (CFrameWnd *)0x0) || (*(int *)(pCVar1 + 0x20) == 0)) {
    ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(this + 0x210));
  }
  else {
    (**(code **)(*(int *)pCVar1 + 0x170))(param_1,this + 0x210);
  }
  CWnd::UpdateData((CWnd *)this,0);
  local_8 = 0;
  LVar2 = SendMessageW(*(HWND *)(this + 0x148),0x18b,0,0);
  if (0 < LVar2) {
    do {
      uVar3 = SendMessageW(*(HWND *)(this + 0x148),0x199,local_8,0);
      if (param_1 == uVar3) {
        SendMessageW(*(HWND *)(this + 0x148),0x186,local_8,0);
        SendMessageW(*(HWND *)(this + 0x148),0x197,local_8,0);
        return 1;
      }
      local_8 = local_8 + 1;
      LVar2 = SendMessageW(*(HWND *)(this + 0x148),0x18b,0,0);
    } while ((int)local_8 < LVar2);
  }
  return 0;
}

