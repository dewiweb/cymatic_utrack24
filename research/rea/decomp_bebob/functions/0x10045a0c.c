// rea decompile_all
// name: CVSListBoxBase::CVSListBoxBase
// address: 0x10045a0c
// body: available
// range: 0x10045a0c-0x10045ac1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: __thiscall CVSListBoxBase::CVSListBoxBase(void)
   
   Library: Visual Studio 2010 Release */

CVSListBoxBase * __thiscall CVSListBoxBase::CVSListBoxBase(CVSListBoxBase *this)

{
  undefined **ppuVar1;
  
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CList<>(this + 0x74,10);
  CList<unsigned_long,unsigned_long>::CList<unsigned_long,unsigned_long>
            ((CList<unsigned_long,unsigned_long> *)(this + 0x90),10);
  CMap<int,int,unsigned_int,unsigned_int>::CMap<int,int,unsigned_int,unsigned_int>
            ((CMap<int,int,unsigned_int,unsigned_int> *)(this + 0xac),10);
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined ***)(this + 0xf8) = CFont::vftable;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x100,(int *)ppuVar1);
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd0) = 1;
  *(undefined4 *)(this + 0xdc) = 1;
  *(undefined4 *)(this + 0xe4) = 0;
  return this;
}

