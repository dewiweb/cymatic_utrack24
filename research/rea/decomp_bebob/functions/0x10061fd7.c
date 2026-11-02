// rea decompile_all
// name: CFrameImpl::CFrameImpl
// address: 0x10061fd7
// body: available
// range: 0x10061fd7-0x100620cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CFrameImpl::CFrameImpl(class CFrameWnd *)
   
   Library: Visual Studio 2010 Release */

CFrameImpl * __thiscall CFrameImpl::CFrameImpl(CFrameImpl *this,CFrameWnd *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x34) = 1;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  ((LPRECT)(this + 0x44))->left = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  CObList::CObList((CObList *)(this + 0x54),10);
  CObList::CObList((CObList *)(this + 0x70),10);
  CObList::CObList((CObList *)(this + 0x8c),10);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0xa8,(int *)ppuVar1);
  *(undefined4 *)(this + 0xac) = 0;
  *(CFrameWnd **)(this + 0xb0) = param_1;
  *(undefined4 *)(this + 0xb4) = 0;
  CFullScreenImpl::CFullScreenImpl((CFullScreenImpl *)(this + 0xb8),this);
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined ***)(this + 0xf8) = &PTR_s_CMFCToolBar_10160470;
  SetRectEmpty((LPRECT)(this + 0x44));
  iVar2 = CObject::IsKindOf(*(CObject **)(this + 0xb0),(CRuntimeClass *)&PTR_s_CMDIChildWnd_10127cd0
                           );
  *(int *)(this + 0x28) = iVar2;
  return this;
}

