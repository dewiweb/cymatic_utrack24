// rea decompile_all
// name: COleStreamFile::Duplicate
// address: 0x100d96ec
// body: available
// range: 0x100d96ec-0x100d9741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CFile * __thiscall COleStreamFile::Duplicate(void)const 
   
   Library: Visual Studio 2010 Release */

CFile * __thiscall COleStreamFile::Duplicate(COleStreamFile *this)

{
  int iVar1;
  COleStreamFile *this_00;
  CFile *pCVar2;
  IStream *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100d96f8;
  iVar1 = (**(code **)(**(int **)(this + 0x14) + 0x34))(*(int **)(this + 0x14),local_18);
  if (iVar1 < 0) {
    _AfxThrowOleFileException(iVar1);
  }
  local_8 = 0;
  this_00 = FUN_1000858a(0x1c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this_00 == (COleStreamFile *)0x0) {
    pCVar2 = (CFile *)0x0;
  }
  else {
    pCVar2 = (CFile *)COleStreamFile(this_00,local_18[0]);
  }
  *(undefined4 *)(pCVar2 + 8) = *(undefined4 *)(this + 8);
  return pCVar2;
}

