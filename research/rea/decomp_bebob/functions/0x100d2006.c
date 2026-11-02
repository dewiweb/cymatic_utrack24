// rea decompile_all
// name: CMFCFontInfo::GetFullName
// address: 0x100d2006
// body: available
// range: 0x100d2006-0x100d2097 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall CMFCFontInfo::GetFullName(void)const 
   
   Library: Visual Studio 2010 Release */

CSimpleStringT<wchar_t,0> * __thiscall CMFCFontInfo::GetFullName(CMFCFontInfo *this)

{
  int *piVar1;
  wchar_t *pwVar2;
  undefined4 *puVar3;
  CSimpleStringT<wchar_t,0> *in_stack_00000004;
  int local_1c;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_18[1] = 0;
  local_8 = 0;
  piVar1 = FUN_10005e30((int *)(*(int *)(this + 4) + -0x10));
  *(int **)in_stack_00000004 = piVar1 + 4;
  local_8 = 0;
  local_18[1] = 1;
  if (*(int *)(*(int *)(this + 8) + -0xc) != 0) {
    pwVar2 = (wchar_t *)
             ATL::operator+((char *)&local_1c,
                            (CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_> *
                            )&DAT_10121d74);
    local_8 = 1;
    puVar3 = (undefined4 *)
             ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                             *)local_18,pwVar2);
    local_8 = CONCAT31(local_8._1_3_,2);
    ATL::CSimpleStringT<wchar_t,0>::Append
              (in_stack_00000004,(wchar_t *)*puVar3,*(int *)((wchar_t *)*puVar3 + -6));
    FUN_10001030((undefined4 *)(local_18[0] + -0x10));
    FUN_10001030((undefined4 *)(local_1c + -0x10));
  }
  return in_stack_00000004;
}

