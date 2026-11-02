// rea decompile_all
// name: CArchiveException::CArchiveException
// address: 0x10009306
// body: available
// range: 0x10009306-0x1000934e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CArchiveException::CArchiveException(int,char const *)
   
   Library: Visual Studio 2010 Release */

CArchiveException * __thiscall
CArchiveException::CArchiveException(CArchiveException *this,int param_1,char *param_2)

{
  undefined **ppuVar1;
  
  FUN_100090b3((int)this);
  *(undefined ***)this = vftable;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(this + 0xc,(int *)ppuVar1);
  *(int *)(this + 8) = param_1;
  FUN_100022b0(this + 0xc,(short *)param_2);
  return this;
}

