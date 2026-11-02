// rea decompile_all
// name: CFileException
// address: 0x1000da3b
// body: available
// range: 0x1000da3b-0x1000da89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CFileException::CFileException(int,long,char const *)
    public: __thiscall CFileException::CFileException(int,long,wchar_t const *)
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall
CFileException(void *this,undefined4 param_1,undefined4 param_2,short *param_3)

{
  undefined **ppuVar1;
  
  FUN_100090b3((int)this);
  *(undefined ***)this = CFileException::vftable;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00((void *)((int)this + 0x10),(int *)ppuVar1);
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  FUN_100022b0((void *)((int)this + 0x10),param_3);
  return this;
}

