// rea decompile_all
// name: OnMenuChar
// address: 0x100244e0
// body: available
// range: 0x100244e0-0x10024515 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: long __thiscall CFrameWndEx::OnMenuChar(unsigned int,unsigned int,class CMenu *)
    protected: long __thiscall COleDocIPFrameWndEx::OnMenuChar(unsigned int,unsigned int,class CMenu
   *)
    protected: long __thiscall COleIPFrameWndEx::OnMenuChar(unsigned int,unsigned int,class CMenu *)
   
   Library: Visual Studio 2010 Release */

long __thiscall OnMenuChar(void *this,uint param_1,uint param_2,CMenu *param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = CFrameImpl::OnMenuChar((CFrameImpl *)((int)this + 0x124),param_1);
  if (iVar1 == 0) {
    lVar2 = CFrameWnd::OnMenuChar(this,param_1,param_2,param_3);
  }
  else {
    lVar2 = -0xfffe;
  }
  return lVar2;
}

