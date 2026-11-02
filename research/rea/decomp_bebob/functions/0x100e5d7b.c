// rea decompile_all
// name: CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>::GetNextAssoc
// address: 0x100e5d7b
// body: available
// range: 0x100e5d7b-0x100e5dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e5d8a to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMap<class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >,char const *,class CObList *,class CObList *>::GetNextAssoc(struct
   __POSITION * &,class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   &,class CObList * &)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>::
GetNextAssoc(CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CObList*,CObList*>
             *this,__POSITION **param_1,
            CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *param_2,CObList **param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  __POSITION *p_Var4;
  uint uVar5;
  __POSITION *p_Var6;
  
  piVar2 = *(int **)(this + 4);
  if ((piVar2 != (int *)0x0) && (p_Var4 = *param_1, p_Var4 != (__POSITION *)0x0)) {
    if (p_Var4 == (__POSITION *)0xffffffff) {
      uVar5 = 0;
      piVar1 = piVar2;
      if (*(uint *)(this + 8) != 0) {
        do {
          p_Var4 = (__POSITION *)*piVar1;
          if (p_Var4 != (__POSITION *)0x0) goto LAB_100e5db8;
          uVar5 = uVar5 + 1;
          piVar1 = piVar1 + 1;
        } while (uVar5 < *(uint *)(this + 8));
        goto LAB_100e5d8a;
      }
    }
LAB_100e5db8:
    p_Var6 = *(__POSITION **)(p_Var4 + 8);
    if (p_Var6 == (__POSITION *)0x0) {
      uVar5 = *(uint *)(this + 8);
      uVar3 = *(uint *)(p_Var4 + 0xc) % uVar5 + 1;
      if (uVar3 < uVar5) {
        piVar2 = piVar2 + uVar3;
        do {
          p_Var6 = (__POSITION *)*piVar2;
          if (p_Var6 != (__POSITION *)0x0) break;
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (uVar3 < uVar5);
      }
    }
    *param_1 = p_Var6;
    FUN_10007c90(param_2,(undefined4 *)p_Var4);
    *param_3 = *(CObList **)(p_Var4 + 4);
    return;
  }
LAB_100e5d8a:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

