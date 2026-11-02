// rea decompile_all
// name: CCellObj::CCellObj
// address: 0x100f3fef
// body: available
// range: 0x100f3fef-0x100f4096 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: __thiscall CCellObj::CCellObj(class CPalette *,unsigned long,int,int,int,long)
   
   Library: Visual Studio 2010 Release */

CCellObj * __thiscall
CCellObj::CCellObj(CCellObj *this,CPalette *param_1,ulong param_2,int param_3,int param_4,
                  int param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  UINT UVar4;
  long unaff_ESI;
  long unaff_EDI;
  
  *(int *)(this + 0x3c) = param_3;
  *(int *)(this + 0x40) = param_4;
  *(undefined ***)this = vftable;
  *(int *)(this + 0x44) = param_5;
  uVar1 = AlignColor(unaff_EDI,unaff_ESI);
  uVar2 = AlignColor(unaff_EDI,unaff_ESI);
  uVar3 = AlignColor(unaff_EDI,unaff_ESI);
  uVar1 = ((uVar3 & 0xff) << 8 | uVar2 & 0xff) << 8 | uVar1 & 0xff;
  *(uint *)(this + 0x34) = uVar1;
  if (DAT_10166c4c == 8) {
    UVar4 = GetNearestPaletteIndex(*(HPALETTE *)(param_1 + 4),param_2);
    uVar1 = UVar4 & 0xffff | 0x1000000;
  }
  *(uint *)(this + 0x38) = uVar1;
  GetPoints(this,*(int *)(this + 0x3c),*(int *)(this + 0x40),param_5,(tagPOINT *)(this + 4));
  return this;
}

