// rea decompile_all
// name: OnCommand
// address: 0x1002146e
// body: available
// range: 0x1002146e-0x100214d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CFrameWndEx::OnCommand(unsigned int,long)
    protected: virtual int __thiscall COleDocIPFrameWndEx::OnCommand(unsigned int,long)
    protected: virtual int __thiscall COleIPFrameWndEx::OnCommand(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall OnCommand(void *this,uint param_1,long param_2)

{
  int iVar1;
  
  if ((short)(param_1 >> 0x10) == 1) {
    CMFCToolBar::AddCommandUsage(param_1 & 0xffff);
    iVar1 = CFrameImpl::ProcessKeyboard((CFrameImpl *)((int)this + 0x194),0x1b,(int *)0x0);
    if ((iVar1 != 0) ||
       ((DAT_101685b0 != (CUserToolsManager *)0x0 &&
        (iVar1 = CUserToolsManager::InvokeTool(DAT_101685b0,param_1 & 0xffff), iVar1 != 0)))) {
      return 1;
    }
  }
  if (DAT_10166e54 == 0) {
    iVar1 = CFrameWnd::OnCommand(this,param_1,param_2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

