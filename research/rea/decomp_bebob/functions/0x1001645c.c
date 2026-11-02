// rea decompile_all
// name: CDC::GetTextExtent
// address: 0x1001645c
// body: available
// range: 0x1001645c-0x1001648a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CSize __thiscall CDC::GetTextExtent(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)const 
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDC::GetTextExtent(CDC *this,
                  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1)

{
  undefined4 *in_stack_00000008;
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  GetTextExtentPoint32W
            (*(HDC *)(this + 8),(LPCWSTR)*in_stack_00000008,
             *(int *)((LPCWSTR)*in_stack_00000008 + -6),&local_c);
  *(LONG *)param_1 = local_c.cx;
  *(LONG *)(param_1 + 4) = local_c.cy;
  return;
}

