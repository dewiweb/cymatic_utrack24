// rea decompile_all
// name: CCheckListBox::DrawItem
// address: 0x100ea07a
// body: available
// range: 0x100ea07a-0x100ea1f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ea0a3 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CCheckListBox::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CCheckListBox::DrawItem(CCheckListBox *this,tagDRAWITEMSTRUCT *param_1)

{
  bool bVar1;
  tagDRAWITEMSTRUCT *ptVar2;
  CDC *pCVar3;
  LRESULT LVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined **ppuVar9;
  
  ptVar2 = param_1;
  pCVar3 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  if (pCVar3 != (CDC *)0x0) {
    if ((-1 < (int)*(WPARAM *)(ptVar2 + 8)) && (((byte)ptVar2[0xc] & 3) != 0)) {
      LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x1a1,*(WPARAM *)(ptVar2 + 8),0);
      iVar5 = CWnd::IsWindowEnabled((CWnd *)this);
      if ((iVar5 == 0) || (iVar5 = IsEnabled(this,*(int *)(ptVar2 + 8)), iVar5 == 0)) {
        bVar1 = true;
        DVar6 = 0x808080;
      }
      else {
        bVar1 = false;
        DVar6 = GetSysColor(8);
      }
      uVar7 = (**(code **)(*(int *)pCVar3 + 0x30))(DVar6);
      DVar6 = GetSysColor(5);
      uVar8 = (**(code **)(*(int *)pCVar3 + 0x2c))(DVar6);
      if ((!bVar1) && (((byte)ptVar2[0x10] & 1) != 0)) {
        iVar5 = *(int *)pCVar3;
        DVar6 = GetSysColor(0xe);
        (**(code **)(iVar5 + 0x30))(DVar6);
        iVar5 = *(int *)pCVar3;
        DVar6 = GetSysColor(0xd);
        (**(code **)(iVar5 + 0x2c))(DVar6);
      }
      if (*(int *)(this + 0x74) == 0) {
        CalcMinimumItemHeight(this);
      }
      ppuVar9 = FUN_1000ad47();
      FUN_10005e00(&param_1,(int *)ppuVar9);
      GetText(this,*(WPARAM *)(ptVar2 + 8),(CSimpleStringT<wchar_t,0> *)&param_1);
      iVar5 = (LVar4 - *(int *)(this + 0x74)) / 2;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      (**(code **)(*(int *)pCVar3 + 0x60))
                (*(undefined4 *)(ptVar2 + 0x1c),*(int *)(ptVar2 + 0x20) + iVar5,2,ptVar2 + 0x1c,
                 param_1,*(undefined4 *)(param_1 + -0xc),0);
      (**(code **)(*(int *)pCVar3 + 0x30))(uVar7);
      (**(code **)(*(int *)pCVar3 + 0x2c))(uVar8);
      FUN_10001030((undefined4 *)(param_1 + -0x10));
    }
    if (((byte)ptVar2[0xc] & 4) != 0) {
      DrawFocusRect(*(HDC *)(pCVar3 + 4),(RECT *)(ptVar2 + 0x1c));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

