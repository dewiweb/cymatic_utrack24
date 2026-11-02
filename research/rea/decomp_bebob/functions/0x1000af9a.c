// rea decompile_all
// name: CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
// address: 0x1000af9a
// body: available
// range: 0x1000af9a-0x1000b0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000b005 to 0x1000937c FUN_1000937c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: class CArchive & __thiscall CArchive::operator>><wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > >(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2010 Release */

CArchive * __thiscall
CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
          (CArchive *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  CArchive *pCVar4;
  int local_128;
  CArchive *local_124;
  int local_120;
  wchar_t *local_11c;
  wchar_t local_118 [64];
  char *local_98;
  char local_94 [140];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x11c;
  local_8 = 0x1000afa9;
  local_124 = this;
  puVar1 = FUN_100098a1(this,&local_128);
  if (local_128 == 1) {
    local_98 = (char *)0x0;
    ATL::CTempBuffer<char,128,ATL::CCRTAllocator>::Allocate
              ((CTempBuffer<char,128,ATL::CCRTAllocator> *)&local_98,(uint)puVar1);
    local_8 = 0;
    puVar2 = (undefined4 *)Read(local_124,local_98,(uint)puVar1);
    if (puVar2 == puVar1) {
      puVar1 = (undefined4 *)
               ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
               CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_120,local_98,(int)puVar1);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_10007c90(param_1,puVar1);
      FUN_10001030((undefined4 *)(local_120 + -0x10));
      if (local_98 != local_94) {
        ATL::CTempBuffer<wchar_t,10,ATL::CCRTAllocator>::FreeHeap
                  ((CTempBuffer<wchar_t,10,ATL::CCRTAllocator> *)&local_98);
      }
LAB_1000b0e2:
      pCVar4 = (CArchive *)FUN_100f90cf();
      return pCVar4;
    }
  }
  else {
    local_11c = (wchar_t *)0x0;
    ATL::CTempBuffer<wchar_t,128,ATL::CCRTAllocator>::Allocate
              ((CTempBuffer<wchar_t,128,ATL::CCRTAllocator> *)&local_11c,(uint)puVar1);
    local_8 = 2;
    uVar3 = Read(local_124,local_11c,(int)puVar1 * 2);
    if (uVar3 == (int)puVar1 * 2) {
      ATL::CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>
                ((CSimpleStringT<wchar_t,0> *)&local_120,local_11c,(int)puVar1,
                 (IAtlStringMgr *)&PTR_vftable_1015f978);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_10007c90(param_1,&local_120);
      FUN_10001030((undefined4 *)(local_120 + -0x10));
      if (local_11c != local_118) {
        ATL::CTempBuffer<wchar_t,10,ATL::CCRTAllocator>::FreeHeap
                  ((CTempBuffer<wchar_t,10,ATL::CCRTAllocator> *)&local_11c);
      }
      goto LAB_1000b0e2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000937c(3,(char *)0x0);
}

