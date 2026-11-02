// rea decompile_all
// name: CMFCRibbonEdit::CreateSpinButton
// address: 0x100adc94
// body: available
// range: 0x100adc94-0x100add53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCRibbonEdit::CreateSpinButton(class CMFCRibbonRichEditCtrl *,class
   CWnd *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonEdit::CreateSpinButton(CMFCRibbonEdit *this,CMFCRibbonRichEditCtrl *param_1,CWnd *param_2)

{
  CSpinButtonCtrl *this_00;
  CMFCRibbonSpinButtonCtrl *this_01;
  int *piVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100adca0;
  if (*(int *)(this + 0x180) != 0) {
    this_01 = FUN_1000858a(0x90);
    local_8 = 0;
    if (this_01 == (CMFCRibbonSpinButtonCtrl *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)CMFCRibbonSpinButtonCtrl::CMFCRibbonSpinButtonCtrl(this_01,this);
    }
    local_8 = 0xffffffff;
    *(int **)(this + 0x194) = piVar1;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x160))
                      (0x50000026,&local_24,param_2,*(undefined4 *)(this + 0x48));
    this_00 = *(CSpinButtonCtrl **)(this + 0x194);
    if (iVar2 == 0) {
      if (this_00 != (CSpinButtonCtrl *)0x0) {
        (**(code **)(*(int *)this_00 + 4))(1);
      }
    }
    else {
      CSpinButtonCtrl::SetBuddy(this_00,(CWnd *)param_1);
      SendMessageW(*(HWND *)(*(int *)(this + 0x194) + 0x20),0x46f,*(WPARAM *)(this + 0x16c),
                   *(LPARAM *)(this + 0x170));
    }
  }
  iVar2 = FUN_100f90cf();
  return iVar2;
}

