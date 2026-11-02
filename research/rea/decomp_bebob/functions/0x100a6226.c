// rea decompile_all
// name: COutlookOptionsDlg::OnOK
// address: 0x100a6226
// body: available
// range: 0x100a6226-0x100a6305 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall COutlookOptionsDlg::OnOK(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall COutlookOptionsDlg::OnOK(COutlookOptionsDlg *this)

{
  LRESULT LVar1;
  int iVar2;
  undefined **local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  LRESULT local_18;
  WPARAM local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_30 = CArray<int,int>::vftable;
  local_2c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_8 = 0;
  local_14 = 0;
  LVar1 = SendMessageW(*(HWND *)(this + 0x210),0x18b,0,0);
  if (0 < LVar1) {
    do {
      local_18 = SendMessageW(*(HWND *)(this + 0x210),0x199,local_14,0);
      local_1c = CCheckListBox::GetCheck((CCheckListBox *)(this + 0x1f0),local_14);
      iVar2 = (**(code **)(**(int **)(this + 0x280) + 0x278))(local_18);
      if (local_1c != iVar2) {
        (**(code **)(**(int **)(this + 0x280) + 0x1a4))(local_18,local_1c,0,0);
      }
      CArray<int,int>::SetAtGrow((CArray<int,int> *)&local_30,local_28,local_18);
      local_14 = local_14 + 1;
      LVar1 = SendMessageW(*(HWND *)(this + 0x210),0x18b,0,0);
    } while ((int)local_14 < LVar1);
  }
  CMFCBaseTabCtrl::SetTabsOrder(*(CMFCBaseTabCtrl **)(this + 0x280),(CArray<int,int> *)&local_30);
  CDialog::OnOK((CDialog *)this);
  local_8 = 0xffffffff;
  FUN_1006d048(&local_30);
  return;
}

