// rea decompile_all
// name: NewAssoc
// address: 0x100a98a0
// body: available
// range: 0x100a98a0-0x100a9937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100a98ed to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: class CMap<unsigned long,unsigned long,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const *>::CAssoc * __thiscall
   CMap<unsigned long,unsigned long,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *>::NewAssoc(unsigned long)
    protected: class CMap<unsigned long,unsigned long,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *>::CAssoc * __thiscall
   CMap<unsigned long,unsigned long,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *>::NewAssoc(unsigned long)
    protected: class CMap<class CDocument *,class CDocument *,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >,char const *>::CAssoc * __thiscall CMap<class
   CDocument *,class CDocument *,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *>::NewAssoc(class CDocument *)
    protected: class CMap<class CDocument *,class CDocument *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *>::CAssoc * __thiscall
   CMap<class CDocument *,class CDocument *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >,wchar_t const *>::NewAssoc(class
   CDocument *)
   
   Library: Visual Studio 2010 Release */

undefined4 * __thiscall NewAssoc(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *_Dst;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar3 = FUN_10009d8b((undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x18),0x10);
    iVar1 = *(int *)((int)this + 0x18);
    iVar3 = iVar3 + -0xc + iVar1 * 0x10;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)((int)this + 0x10);
      *(int *)((int)this + 0x10) = iVar3;
      iVar3 = iVar3 + -0x10;
    }
  }
  _Dst = *(undefined4 **)((int)this + 0x10);
  if (_Dst != (undefined4 *)0x0) {
    uVar2 = _Dst[2];
    _memset(_Dst,0,0x10);
    _Dst[2] = uVar2;
    uVar2 = *(undefined4 *)(*(int *)((int)this + 0x10) + 8);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    *(undefined4 *)((int)this + 0x10) = uVar2;
    *_Dst = param_1;
    ppuVar4 = FUN_1000ad47();
    FUN_10005e00(_Dst + 1,(int *)ppuVar4);
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

