// rea decompile_all
// name: CMFCCaptionButton::GetIconID
// address: 0x100b9595
// body: available
// range: 0x100b9595-0x100b9609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual enum CMenuImages::IMAGES_IDS __thiscall
   CMFCCaptionButton::GetIconID(int,int)const 
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release, Visual Studio 2015 Release */

IMAGES_IDS __thiscall CMFCCaptionButton::GetIconID(CMFCCaptionButton *this,int param_1,int param_2)

{
  uint uVar1;
  IMAGES_IDS IVar2;
  
  uVar1 = *(uint *)(this + 0x1c);
  if (uVar1 == 8) {
    if (param_1 == 0) {
      IVar2 = (-(uint)(param_2 != 0) & 6) + 7;
    }
    else {
      IVar2 = (uint)(param_2 != 0) * 8 + 1;
    }
  }
  else if (uVar1 == 9) {
    IVar2 = 0x10 - (param_2 != 0);
  }
  else {
    if (0x12 < uVar1) {
      if (uVar1 < 0x15) {
        return 5;
      }
      if (uVar1 == 0x17) {
        return 0x1b;
      }
      if (uVar1 == 0x18) {
        return 0x1c;
      }
      if (uVar1 == 0x19) {
        return 0xd;
      }
    }
    IVar2 = 0xffffffff;
  }
  return IVar2;
}

