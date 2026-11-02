// rea decompile_all
// name: _AfxChangePropPageFont
// address: 0x100d751a
// body: available
// range: 0x100d751a-0x100d75ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    struct DLGTEMPLATE * __stdcall _AfxChangePropPageFont(struct DLGTEMPLATE const *,int)
   
   Library: Visual Studio 2010 Release */

DLGTEMPLATE * _AfxChangePropPageFont(DLGTEMPLATE *param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  DLGTEMPLATE *pDVar3;
  CDialogTemplate local_2c [12];
  ushort local_20 [2];
  int local_1c;
  wchar_t *local_18;
  ushort local_14 [6];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100d7526;
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(&local_18,(int *)ppuVar1);
  local_8 = 0;
  iVar2 = AfxGetPropSheetFont((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_18,local_20,param_2);
  if (iVar2 == 0) {
LAB_100d754c:
    FUN_10001030((undefined4 *)(local_18 + -8));
    pDVar3 = (DLGTEMPLATE *)0x0;
  }
  else {
    ppuVar1 = FUN_1000ad47();
    FUN_10005e00(&local_1c,(int *)ppuVar1);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = CDialogTemplate::GetFont
                      (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *
                               )&local_1c,local_14);
    if (iVar2 != 0) {
      iVar2 = FUN_10005720(&local_1c,(ushort *)local_18);
      if ((iVar2 == 0) && (local_14[0] == local_20[0])) {
        FUN_10001030((undefined4 *)(local_1c + -0x10));
        goto LAB_100d754c;
      }
    }
    FUN_10053e2c(local_2c,param_1);
    local_8._0_1_ = 2;
    CDialogTemplate::SetFont(local_2c,local_18,local_20[0]);
    pDVar3 = (DLGTEMPLATE *)FUN_10053adb((undefined4 *)local_2c);
    local_8 = CONCAT31(local_8._1_3_,1);
    CDialogTemplate::~CDialogTemplate(local_2c);
    FUN_10001030((undefined4 *)(local_1c + -0x10));
    FUN_10001030((undefined4 *)(local_18 + -8));
  }
  return pDVar3;
}

