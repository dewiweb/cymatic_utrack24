// rea decompile_all
// name: FID_conflict:operator[]
// address: 0x100e602f
// body: available
// range: 0x100e602f-0x100e6092 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e6064 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: class CObList * & __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,class CObList *,class CObList *>::operator[](char const
   *)
    public: class CObList * & __thiscall CMap<class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,class CObList *,class
   CObList *>::operator[](wchar_t const *)
   
   Library: Visual Studio 2010 Release */

int __thiscall FID_conflict_operator__(void *this,wchar_t *param_1)

{
  void *pvVar1;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  pvVar1 = GetAssocAt(this,param_1,(uint *)&local_c,(uint *)&local_8);
  if (pvVar1 == (void *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      InitHashTable(this,*(uint *)((int)this + 8),1);
      if (*(int *)((int)this + 4) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
    }
    pvVar1 = NewAssoc(this,param_1);
    *(void **)((int)pvVar1 + 0xc) = local_8;
    *(undefined4 *)((int)pvVar1 + 8) = *(undefined4 *)(*(int *)((int)this + 4) + (int)local_c * 4);
    *(void **)(*(int *)((int)this + 4) + (int)local_c * 4) = pvVar1;
  }
  return (int)pvVar1 + 4;
}

