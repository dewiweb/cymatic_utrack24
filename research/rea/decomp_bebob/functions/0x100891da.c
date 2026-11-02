// rea decompile_all
// name: CPane::UpdateVirtualRect
// address: 0x100891da
// body: available
// range: 0x100891da-0x10089255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPane::UpdateVirtualRect(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CPane::UpdateVirtualRect(CPane *this)

{
  int iVar1;
  undefined4 uVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  LPRECT lpRect;
  CPane *local_c;
  CPane *local_8;
  
  lpRect = (LPRECT)(this + 0x130);
  local_c = this;
  local_8 = this;
  GetWindowRect(*(HWND *)(this + 0x20),lpRect);
  iVar1 = *(int *)this;
  uVar2 = (**(code **)(iVar1 + 0x160))();
  (**(code **)(iVar1 + 0x25c))(&local_c,0,uVar2);
  *(CPane **)(this + 0x138) = local_c + lpRect->left;
  *(CPane **)(this + 0x13c) = local_8 + *(int *)(this + 0x134);
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  if (pCVar4 != (CWnd *)0x0) {
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    CWnd::ScreenToClient(pCVar4,lpRect);
  }
  return;
}

