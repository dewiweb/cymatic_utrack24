// rea decompile_all
// name: CControlBar::SetStatusText
// address: 0x1005877d
// body: available
// range: 0x1005877d-0x1005881d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CControlBar::SetStatusText(int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CControlBar::SetStatusText(CControlBar *this,int param_1)

{
  CWnd *pCVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pCVar1 = CWnd::GetOwner((CWnd *)this);
  pAVar2 = AfxGetModuleThreadState();
  if (param_1 == -1) {
    *(undefined4 *)(pAVar2 + 0x50) = 0;
    if (((byte)this[0xa0] & 8) == 0) {
      KillTimer(*(HWND *)(this + 0x20),0xe000);
      return 0;
    }
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0x375,0xe001,0);
    *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) & 0xfffffff7;
  }
  else {
    if ((((byte)this[0xa0] & 8) != 0) && (*(int *)(pAVar2 + 0x4c) == param_1)) {
      return 0;
    }
    *(CControlBar **)(pAVar2 + 0x50) = this;
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0x362,param_1,0);
    *(uint *)(this + 0xa0) = *(uint *)(this + 0xa0) | 8;
    ResetTimer(this,0xe001,200);
  }
  return 1;
}

