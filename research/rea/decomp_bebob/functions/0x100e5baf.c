// rea decompile_all
// name: GetAssocAt
// address: 0x100e5baf
// body: available
// range: 0x100e5baf-0x100e5c02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: class CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,int,int>::CAssoc * __thiscall CMap<class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const
   *,int,int>::GetAssocAt(wchar_t const *,unsigned int &,unsigned int &)const 
    protected: class CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,struct HMENU__ *,struct HMENU__ *>::CAssoc *
   __thiscall CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,struct HMENU__ *,struct HMENU__
   *>::GetAssocAt(wchar_t const *,unsigned int &,unsigned int &)const 
    protected: class CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,struct IObjectCollection *,struct IObjectCollection
   *>::CAssoc * __thiscall CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,struct IObjectCollection *,struct IObjectCollection
   *>::GetAssocAt(wchar_t const *,unsigned int &,unsigned int &)const 
    protected: class CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,class CDocument *,class CDocument *>::CAssoc *
   __thiscall CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *,class CDocument *,class CDocument
   *>::GetAssocAt(wchar_t const *,unsigned int &,unsigned int &)const 
     5 names - too many to list
   
   Library: Visual Studio 2010 Release */

void * __thiscall GetAssocAt(void *this,wchar_t *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  void *pvVar4;
  
  uVar3 = HashKey<wchar_t_const*>(param_1);
  puVar1 = param_3;
  *param_3 = uVar3;
  uVar3 = uVar3 % *(uint *)((int)this + 8);
  *param_2 = uVar3;
  if (*(int *)((int)this + 4) != 0) {
    for (pvVar4 = *(void **)(*(int *)((int)this + 4) + uVar3 * 4); pvVar4 != (void *)0x0;
        pvVar4 = *(void **)((int)pvVar4 + 8)) {
      if ((*(uint *)((int)pvVar4 + 0xc) == *puVar1) &&
         (bVar2 = CompareElements<>(pvVar4,&param_1), CONCAT31(extraout_var,bVar2) != 0)) {
        return pvVar4;
      }
    }
  }
  return (void *)0x0;
}

