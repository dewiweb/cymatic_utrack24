// rea decompile_all
// name: CPane::CPane
// address: 0x10087bdb
// body: available
// range: 0x10087bdb-0x10087d31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: __thiscall CPane::CPane(void)
   
   Library: Visual Studio 2010 Release */

CPane * __thiscall CPane::CPane(CPane *this)

{
  CBasePane::CBasePane((CBasePane *)this);
  *(undefined ***)this = vftable;
  this[0x100] = (CPane)0x0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  ((LPRECT)(this + 0x140))->left = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  this[0x160] = (CPane)0x0;
  *(undefined4 *)(this + 0x170) = 0;
  CMFCDragFrameImpl::CMFCDragFrameImpl((CMFCDragFrameImpl *)(this + 0x17c));
  CRecentDockSiteInfo::CRecentDockSiteInfo((CRecentDockSiteInfo *)(this + 0x1d4),this);
  ((LPRECT)(this + 0x288))->left = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined4 *)(this + 0x290) = 0;
  *(undefined4 *)(this + 0x294) = 0;
  *(undefined4 *)(this + 0x11c) = 6;
  *(undefined4 *)(this + 0x118) = 6;
  *(undefined4 *)(this + 0x128) = 2;
  *(undefined4 *)(this + 0x124) = 2;
  *(undefined4 *)(this + 0x120) = 2;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 300) = 0x7fff;
  this[0x162] = (CPane)0x0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  SetRectEmpty((LPRECT)(this + 0x288));
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined4 *)(this + 0x298) = 0;
  *(undefined ***)(this + 0x178) = &PTR_s_CPaneFrameWnd_101606a0;
  SetRectEmpty((LPRECT)(this + 0x140));
  *(undefined4 *)(this + 0x104) = 1;
  *(undefined4 *)(this + 0x108) = 1;
  *(undefined4 *)(this + 0x10c) = 1;
  *(undefined4 *)(this + 0x154) = 1;
  *(undefined4 *)(this + 0x150) = 1;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  return this;
}

