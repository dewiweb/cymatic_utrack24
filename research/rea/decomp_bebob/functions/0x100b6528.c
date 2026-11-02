// rea decompile_all
// name: CMFCRibbonPanel::CommonInit
// address: 0x100b6528
// body: available
// range: 0x100b6528-0x100b6695 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanel::CommonInit(char const *,struct HICON__ *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonPanel::CommonInit(CMFCRibbonPanel *this,char *param_1,HICON__ *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100b6534;
  ppuVar2 = (undefined **)param_1;
  if (param_1 == (char *)0x0) {
    ppuVar2 = &PTR_1011d390;
  }
  FUN_100022b0(this + 0x9c,(short *)ppuVar2);
  local_14[0] = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (this + 0x9c),L'\n',0);
  if (-1 < local_14[0]) {
    puVar3 = (undefined4 *)
             ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                       ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        (this + 0x9c),(int)&param_1);
    local_8 = 0;
    (**(code **)(*(int *)(this + 0xb8) + 0x14))(*puVar3,0);
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(param_1 + -0x10));
    puVar3 = (undefined4 *)
             ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Left
                       ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        (this + 0x9c),(int)local_14);
    local_8 = 1;
    FUN_10007c90(this + 0x9c,puVar3);
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(local_14[0] + -0x10));
  }
  *(HICON__ **)(this + 0x21c) = param_2;
  *(undefined4 *)(this + 0xa0) = 0;
  (**(code **)(*(int *)(this + 0xb8) + 0x10))(*(undefined4 *)(this + 0x9c));
  iVar1 = DAT_1016200c;
  DAT_1016200c = DAT_1016200c + -1;
  (**(code **)(*(int *)(this + 0xb8) + 0xc))(iVar1);
  SetRectEmpty((LPRECT)(this + 0x6c));
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x2c) = 1;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 4;
  *(undefined4 *)(this + 0x54) = 2;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  SetRectEmpty((LPRECT)(this + 0x5c));
  *(undefined4 *)(this + 0xb0) = 0;
  SetRectEmpty((LPRECT)(this + 0x7c));
  SetRectEmpty((LPRECT)(this + 0x8c));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}

