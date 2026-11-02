// rea decompile_all
// name: CMFCMaskedEdit::DoUpdate
// address: 0x1004d728
// body: available
// range: 0x1004d728-0x1004d7e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: int __thiscall CMFCMaskedEdit::DoUpdate(int,int,int)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCMaskedEdit::DoUpdate(CMFCMaskedEdit *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined **ppuVar2;
  int *piVar3;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1004d734;
  if (*(int *)(this + 0x98) == 0) {
    *(undefined4 *)(this + 0x98) = 1;
    ppuVar2 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar2);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    iVar1 = SetValue(this,local_14[0],1);
    if (iVar1 == 0) {
      MessageBeep(0xffffffff);
      if (param_1 != 0) {
        piVar3 = FUN_10005e30((int *)(*(int *)(this + 0x74) + -0x10));
        local_8 = CONCAT31(local_8._1_3_,1);
        CWnd::SetWindowTextW((CWnd *)this,(wchar_t *)(piVar3 + 4));
        if (param_2 != -1) {
          CEdit::SetSel((CEdit *)this,param_2,param_3,0);
        }
        FUN_10001030(piVar3);
      }
    }
    *(undefined4 *)(this + 0x98) = 0;
    FUN_10001030((undefined4 *)(local_14[0] + -8));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

