// rea decompile_all
// name: CMDIChildWndEx::CMDIChildWndEx
// address: 0x1001ec9f
// body: available
// range: 0x1001ec9f-0x1001ed49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: __thiscall CMDIChildWndEx::CMDIChildWndEx(void)
   
   Library: Visual Studio 2010 Release */

CMDIChildWndEx * __thiscall CMDIChildWndEx::CMDIChildWndEx(CMDIChildWndEx *this)

{
  CMDIChildWnd::CMDIChildWnd((CMDIChildWnd *)this);
  *(undefined ***)this = vftable;
  ((LPRECT)(this + 0x128))->left = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  CFrameImpl::CFrameImpl((CFrameImpl *)(this + 0x140),(CFrameWnd *)this);
  CDockingManager::CDockingManager((CDockingManager *)(this + 0x244));
  CMDITabProxyWnd::CMDITabProxyWnd((CMDITabProxyWnd *)(this + 0x43c));
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  SetRectEmpty((LPRECT)(this + 0x128));
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x434) = 0;
  *(undefined4 *)(this + 0x4b4) = 0;
  *(undefined4 *)(this + 0x4b8) = 1;
  return this;
}

