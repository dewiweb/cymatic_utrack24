// rea decompile_all
// name: Serialize
// address: 0x100e6093
// body: available
// range: 0x100e6093-0x100e6178 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,int,int>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,struct HMENU__ *,struct HMENU__ *>::Serialize(class
   CArchive &)
    public: virtual void __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,struct IObjectCollection *,struct IObjectCollection
   *>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,class CDocument *,class CDocument *>::Serialize(class
   CArchive &)
     10 names - too many to list
   
   Library: Visual Studio 2010 Release */

void __thiscall Serialize(void *this,CArchive *param_1)

{
  CArchive *pCVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar4;
  undefined4 local_1c;
  ulong local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar1 = param_1;
  uStack_4 = 0xc;
  local_8 = 0x100e609f;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_18 = CArchive::ReadCount(param_1);
    while (local_18 != 0) {
      local_18 = local_18 - 1;
      _eh_vector_constructor_iterator_(local_14,4,1,FUN_10005ff0,FUN_10006020);
      local_8 = 0;
      FUN_1000b13c(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           local_14,1);
      FUN_10003400(param_1,&local_1c,(void *)0x1);
      uVar2 = local_1c;
      puVar3 = (undefined4 *)FID_conflict_operator__(this,local_14[0]);
      local_8 = 0xffffffff;
      *puVar3 = uVar2;
      _eh_vector_destructor_iterator_(local_14,4,1,FUN_10006020);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 0xc));
    if ((*(int *)((int)this + 0xc) != 0) &&
       (param_1 = (CArchive *)0x0, *(int *)((int)this + 8) != 0)) {
      do {
        for (pCVar4 = *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> **)
                       (*(int *)((int)this + 4) + (int)param_1 * 4);
            pCVar4 != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0;
            pCVar4 = *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> **)
                      (pCVar4 + 8)) {
          FUN_1000b13c(pCVar1,pCVar4,1);
          FUN_10003400(pCVar1,pCVar4 + 4,(void *)0x1);
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(CArchive **)((int)this + 8));
    }
  }
  return;
}

