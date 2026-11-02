// rea decompile_all
// name: CCheckListBox::get_accDefaultAction
// address: 0x100e9840
// body: available
// range: 0x100e9840-0x100e98fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall CCheckListBox::get_accDefaultAction(struct tagVARIANT,wchar_t
   * *)
   
   Library: Visual Studio 2010 Release */

long __thiscall
CCheckListBox::get_accDefaultAction
          (CCheckListBox *this,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
          int *param_6)

{
  LRESULT LVar1;
  int iVar2;
  undefined **ppuVar3;
  HMODULE pHVar4;
  int iVar5;
  long lVar6;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100e984c;
  if ((0 < param_4) && (LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x18b,0,0), param_4 <= LVar1)) {
    iVar5 = *(int *)(this + 0x78);
    iVar2 = GetCheck(this,param_4 + -1);
    ppuVar3 = FUN_1000ad47();
    FUN_10005e00(local_14,(int *)ppuVar3);
    local_8 = 0;
    pHVar4 = (HMODULE)FUN_1000ac62();
    if (pHVar4 != (HMODULE)0x0) {
      FUN_10006200(local_14,pHVar4,(iVar2 + 1) % (int)((iVar5 == 6) + 2) + 0xf2e1);
    }
    iVar5 = Ordinal_4(local_14[0],*(undefined4 *)(local_14[0] + -0xc));
    if (iVar5 == 0) {
      iVar5 = FUN_10001120();
    }
    *param_6 = iVar5;
    FUN_10001030((undefined4 *)(local_14[0] + -0x10));
    return 0;
  }
  lVar6 = CWnd::get_accDefaultAction((CWnd *)this,param_2,param_3,param_4,param_5,param_6);
  return lVar6;
}

