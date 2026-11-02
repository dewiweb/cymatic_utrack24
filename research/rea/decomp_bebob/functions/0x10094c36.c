// rea decompile_all
// name: CMFCBaseTabCtrl::InitAutoColors
// address: 0x10094c36
// body: available
// range: 0x10094c36-0x10094d94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCBaseTabCtrl::InitAutoColors(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCBaseTabCtrl::InitAutoColors(CMFCBaseTabCtrl *this)

{
  CArray<unsigned_long,unsigned_long> *this_00;
  ulong uVar1;
  
  if (*(int *)(this + 0x1d0) != 0) {
    this_00 = (CArray<unsigned_long,unsigned_long> *)(this + 0x1b8);
    FUN_10005790(this_00,0,-1);
    if (DAT_10166c4c < 9) {
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xff00);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xffff00);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xff00ff);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xc0c0c0);
      uVar1 = 0xffff;
    }
    else {
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xf2d4c5);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0x78dcff);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xa1cebe);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xa1a0f0);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xe1a8bc);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xb6c19c);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0x86b8f7);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xc2add9);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xd7c2a5);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xbea6b3);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xa3d6ea);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0x7dfaf6);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0x9de9b5);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0xcfc35f);
      CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),0x8383c1);
      uVar1 = 0xd5caca;
    }
    CArray<unsigned_long,unsigned_long>::SetAtGrow(this_00,*(int *)(this + 0x1c0),uVar1);
  }
  return;
}

