// rea decompile_all
// name: CMFCColorBar::CMFCColorBar
// address: 0x100a9d35
// body: available
// range: 0x100a9d35-0x100a9e58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall CMFCColorBar::CMFCColorBar(void)
   
   Library: Visual Studio 2010 Release */

CMFCColorBar * __thiscall CMFCColorBar::CMFCColorBar(CMFCColorBar *this)

{
  undefined **ppuVar1;
  
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)this);
  *(undefined ***)this = vftable;
  *(undefined ***)(this + 0xd90) = CArray<unsigned_long,unsigned_long>::vftable;
  *(undefined4 *)(this + 0xd94) = 0;
  *(undefined4 *)(this + 0xda0) = 0;
  *(undefined4 *)(this + 0xd9c) = 0;
  *(undefined4 *)(this + 0xd98) = 0;
  CList<unsigned_long,unsigned_long>::CList<unsigned_long,unsigned_long>
            ((CList<unsigned_long,unsigned_long> *)(this + 0xda4),10);
  *(undefined4 *)(this + 0xdc0) = 0;
  *(undefined4 *)(this + 0xdc4) = 0;
  *(undefined4 *)(this + 0xdcc) = 0;
  *(undefined ***)(this + 0xdc8) = CPalette::vftable;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0xdd8,(int *)ppuVar1);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0xddc,(int *)ppuVar1);
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0xde0,(int *)ppuVar1);
  *(undefined4 *)(this + 0xdd0) = 0xffffffff;
  *(undefined4 *)(this + 0xdd4) = 0xffffffff;
  *(undefined4 *)(this + 0xdc0) = 0;
  *(undefined4 *)(this + 0xd80) = 1;
  *(undefined4 *)(this + 0xb04) = 1;
  *(undefined4 *)(this + 0xd7c) = 1;
  *(undefined4 *)(this + 0xd58) = 0;
  *(undefined4 *)(this + 0xd5c) = 0;
  *(undefined4 *)(this + 0xd60) = 0;
  *(undefined4 *)(this + 0xd6c) = 0;
  *(undefined4 *)(this + 0xd8c) = 0;
  *(undefined4 *)(this + 0xd78) = 0;
  *(undefined4 *)(this + 0xd84) = 0;
  *(undefined4 *)(this + 0xde4) = 0;
  *(undefined4 *)(this + 0xdec) = 0;
  *(undefined4 *)(this + 0xde8) = 0;
  *(undefined4 *)(this + 0xd68) = 0;
  *(undefined4 *)(this + 0xd64) = 0;
  *(undefined4 *)(this + 0xd88) = 0;
  *(undefined4 *)(this + 0xd70) = 4;
  *(undefined4 *)(this + 0xd74) = 4;
  *(undefined4 *)(this + 0xdc4) = 0;
  return this;
}

