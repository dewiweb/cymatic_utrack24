// rea decompile_all
// name: CMFCMaskedEdit::OnChar
// address: 0x1004ebdd
// body: available
// range: 0x1004ebdd-0x1004ec55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCMaskedEdit::OnChar(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCMaskedEdit::OnChar(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  SHORT SVar2;
  int iVar3;
  CMFCMaskedEdit *local_8;
  
  uVar1 = param_1;
  local_8 = this;
  iVar3 = _iswprint((wint_t)param_1);
  if ((iVar3 != 0) && (SVar2 = GetKeyState(0x11), -1 < (char)SVar2)) {
    OnCharPrintchar(this,uVar1,param_2,param_3);
    return;
  }
  if (((uVar1 != 0x2e) && (uVar1 != 8)) || (*(int *)(*(int *)(this + 0x78) + -0xc) == 0)) {
    SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_8,(LPARAM)&param_1);
    CWnd::Default((CWnd *)this);
    DoUpdate(this,1,(int)local_8,param_1);
  }
  return;
}

