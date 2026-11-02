// rea decompile_all
// name: Serialize
// address: 0x100aa906
// body: available
// range: 0x100aa906-0x100aa9f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMap<unsigned long,unsigned long,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const *>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<unsigned long,unsigned long,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const
   *>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<class CDocument *,class CDocument *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const
   *>::Serialize(class CArchive &)
    public: virtual void __thiscall CMap<class CDocument *,class CDocument *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const
   *>::Serialize(class CArchive &)
   
   Library: Visual Studio 2010 Release */

void __thiscall Serialize(void *this,CArchive *param_1)

{
  CArchive *pCVar1;
  short *psVar2;
  uint *this_00;
  void *pvVar3;
  ulong local_1c;
  ulong local_18;
  short *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar1 = param_1;
  uStack_4 = 0xc;
  local_8 = 0x100aa912;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    local_18 = CArchive::ReadCount(param_1);
    while (local_18 != 0) {
      local_18 = local_18 - 1;
      _eh_vector_constructor_iterator_(local_14,4,1,FUN_10005ff0,FUN_10006020);
      local_8 = 0;
      FUN_10003400(param_1,&local_1c,(void *)0x1);
      FUN_1000b13c(param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           local_14,1);
      psVar2 = local_14[0];
      this_00 = FID_conflict_operator__(this,local_1c);
      FUN_100022b0(this_00,psVar2);
      local_8 = 0xffffffff;
      _eh_vector_destructor_iterator_(local_14,4,1,FUN_10006020);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)((int)this + 0xc));
    if ((*(int *)((int)this + 0xc) != 0) &&
       (param_1 = (CArchive *)0x0, *(int *)((int)this + 8) != 0)) {
      do {
        for (pvVar3 = *(void **)(*(int *)((int)this + 4) + (int)param_1 * 4); pvVar3 != (void *)0x0;
            pvVar3 = *(void **)((int)pvVar3 + 8)) {
          FUN_10003400(pCVar1,pvVar3,(void *)0x1);
          FUN_1000b13c(pCVar1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              ((int)pvVar3 + 4),1);
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(CArchive **)((int)this + 8));
    }
  }
  return;
}

