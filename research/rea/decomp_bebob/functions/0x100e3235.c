// rea decompile_all
// name: COleDropTarget::COleDropTarget
// address: 0x100e3235
// body: available
// range: 0x100e3235-0x100e32c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall COleDropTarget::COleDropTarget(void)
   
   Library: Visual Studio 2010 Release */

COleDropTarget * __thiscall COleDropTarget::COleDropTarget(COleDropTarget *this)

{
  CCmdTarget::CCmdTarget((CCmdTarget *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0x34) = XDropTarget::vftable;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0xffff;
  AfxLockGlobals(4);
  if (DAT_10169c98 == 0) {
    DAT_10169c8c = GetProfileIntW(L"windows",L"DragScrollInset",0xb);
    DAT_10169c90 = GetProfileIntW(L"windows",L"DragScrollDelay",0x32);
    DAT_10169c94 = GetProfileIntW(L"windows",L"DragScrollInterval",0x32);
    DAT_10169c98 = 1;
  }
  AfxUnlockGlobals(4);
  return this;
}

