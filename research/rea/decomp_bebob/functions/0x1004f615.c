// rea decompile_all
// name: CMFCFontComboBox::CompareItem
// address: 0x1004f615
// body: available
// range: 0x1004f615-0x1004f6a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCFontComboBox::CompareItem(struct tagCOMPAREITEMSTRUCT *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCFontComboBox::CompareItem(CMFCFontComboBox *this,tagCOMPAREITEMSTRUCT *param_1)

{
  ushort uVar1;
  tagCOMPAREITEMSTRUCT *ptVar2;
  int iVar3;
  undefined **ppuVar4;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  ptVar2 = param_1;
  uStack_4 = 4;
  local_8 = 0x1004f621;
  uVar1 = *(ushort *)(param_1 + 0xc);
  iVar3 = -1;
  if (uVar1 != 0xffffffff) {
    ppuVar4 = FUN_1000ad47();
    FUN_10005e00(&param_1,(int *)ppuVar4);
    local_8 = 0;
    CComboBox::GetLBText
              ((CComboBox *)this,(uint)uVar1,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_1);
    uVar1 = *(ushort *)(ptVar2 + 0x14);
    if (uVar1 == 0xffffffff) {
      iVar3 = 1;
    }
    else {
      ppuVar4 = FUN_1000ad47();
      FUN_10005e00(local_14,(int *)ppuVar4);
      local_8 = CONCAT31(local_8._1_3_,1);
      CComboBox::GetLBText
                ((CComboBox *)this,(uint)uVar1,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
      iVar3 = _wcscoll((wchar_t *)param_1,local_14[0]);
      FUN_10001030((undefined4 *)(local_14[0] + -8));
    }
    FUN_10001030((undefined4 *)(param_1 + -0x10));
  }
  return iVar3;
}

