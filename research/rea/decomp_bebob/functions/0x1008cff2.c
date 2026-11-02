// rea decompile_all
// name: CMFCDropDownToolbarButton::DropDownToolbar
// address: 0x1008cff2
// body: available
// range: 0x1008cff2-0x1008d0b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCDropDownToolbarButton::DropDownToolbar(class CWnd *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCDropDownToolbarButton::DropDownToolbar(CMFCDropDownToolbarButton *this,CWnd *param_1)

{
  CObject *pCVar1;
  int iVar2;
  CMFCDropDownFrame *this_00;
  tagPOINT local_18 [2];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1008cffe;
  if (((*(int *)(this + 0x70) != 0) && (*(int *)(this + 0x78) == 0)) &&
     ((param_1 != (CWnd *)0x0 || (param_1 = *(CWnd **)(this + 0x6c), param_1 != (CWnd *)0x0)))) {
    local_18[0].x = 0;
    local_18[0].y = 0;
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,
                                *(CObject **)(this + 0x6c));
    if ((pCVar1 == (CObject *)0x0) || (iVar2 = (**(code **)(*(int *)pCVar1 + 0x160))(), iVar2 != 0))
    {
      local_18[0].y = *(LONG *)(this + 0x60);
      local_18[0].x = *(int *)(this + 0x54) + -1;
    }
    else {
      local_18[0].y = *(LONG *)(this + 0x58);
      local_18[0].x = *(int *)(this + 0x5c) + 1;
    }
    ClientToScreen(*(HWND *)(param_1 + 0x20),local_18);
    this_00 = FUN_1000858a(0xe04);
    local_8 = 0;
    if (this_00 == (CMFCDropDownFrame *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CMFCDropDownFrame::CMFCDropDownFrame(this_00);
    }
    local_8 = 0xffffffff;
    *(int *)(this + 0x78) = iVar2;
    *(CMFCDropDownToolbarButton **)(iVar2 + 0x124) = this;
    iVar2 = (**(code **)(**(int **)(this + 0x78) + 0x1c0))
                      (param_1,local_18[0].x,local_18[0].y,*(undefined4 *)(this + 0x70));
    return iVar2;
  }
  return 0;
}

