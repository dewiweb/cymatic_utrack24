// rea decompile_all
// name: CMFCToolBarImages::CMFCToolBarImages
// address: 0x10084fbd
// body: available
// range: 0x10084fbd-0x10085150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCToolBarImages::CMFCToolBarImages(void)
   
   Library: Visual Studio 2010 Release */

CMFCToolBarImages * __thiscall CMFCToolBarImages::CMFCToolBarImages(CMFCToolBarImages *this)

{
  undefined **ppuVar1;
  
  *(undefined ***)this = vftable;
  FUN_1001714b((undefined4 *)(this + 0x40));
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0x94,(int *)ppuVar1);
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined ***)(this + 0x98) = CBitmap::vftable;
  CList<unsigned_int,unsigned_int>::CList<unsigned_int,unsigned_int>
            ((CList<unsigned_int,unsigned_int> *)(this + 0xb8),10);
  CList<>(this + 0xd4,10);
  CMap<unsigned_int,unsigned_int,int,int>::CMap<unsigned_int,unsigned_int,int,int>
            ((CMap<unsigned_int,unsigned_int,int,int> *)(this + 0xf0),10);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  if (DAT_10168964 == 0) {
    DAT_10168924 = CreateCompatibleDC((HDC)0x0);
    DAT_10168928 = CreateCompatibleDC((HDC)0x0);
    if ((DAT_10168924 == (HDC)0x0) || (DAT_10168928 == (HDC)0x0)) {
      FUN_100170f3();
    }
    DAT_10168964 = 1;
  }
  *(undefined8 *)(this + 0xb0) = 0x3ff0000000000000;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xa4) = 0xffffffff;
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x50) = 0x10;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x54) = 0xf;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x3c) = 1;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x82;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  FUN_10084be5(this);
  return this;
}

