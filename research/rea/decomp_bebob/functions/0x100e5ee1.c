// rea decompile_all
// name: CMouseManager::GetViewNames
// address: 0x100e5ee1
// body: available
// range: 0x100e5ee1-0x100e5f51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMouseManager::GetViewNames(class CStringList &)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall CMouseManager::GetViewNames(CMouseManager *this,CStringList *param_1)

{
  undefined **ppuVar1;
  CObList *local_1c;
  __POSITION *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100e5eed;
  FUN_1005419f((int)param_1);
  local_18 = (__POSITION *)-(uint)(*(int *)(this + 0x10) != 0);
  while (local_18 != (__POSITION *)0x0) {
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar1);
    local_8 = 0;
    CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
    ::GetNextAssoc((CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
                    *)(this + 4),&local_18,
                   (CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)local_14,&local_1c);
    AddTail(param_1,local_14);
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  }
  return;
}

