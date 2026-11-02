// rea decompile_all
// name: CMFCColorBar::OpenColorDialog
// address: 0x100a8c74
// body: available
// range: 0x100a8c74-0x100a8d82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCColorBar::OpenColorDialog(unsigned long,unsigned long &)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCColorBar::OpenColorDialog(CMFCColorBar *this,ulong param_1,ulong *param_2)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  int iVar4;
  undefined **local_a2c [40];
  ulong local_98c;
  undefined4 local_974;
  CMFCColorDialog local_970 [204];
  ulong local_8a4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa1c;
  local_8 = 0x100a8c83;
  pHVar1 = GetParent(*(HWND *)(this + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar2);
  if ((pCVar3 == (CObject *)0x0) ||
     (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_101630d8,
                                  *(CObject **)(pCVar3 + 0x148)), pCVar3 == (CObject *)0x0)) {
    local_974 = 0;
    if (*(int *)(this + 0xd78) == 0) {
      CMFCColorDialog::CMFCColorDialog(local_970,param_1,0,(CWnd *)0x0,(HPALETTE__ *)0x0);
      local_8 = 1;
      iVar4 = FUN_1001bf3c((CDialog *)local_970);
      if (iVar4 == 1) {
        *param_2 = local_8a4;
        local_974 = 1;
      }
      local_8 = 0xffffffff;
      CMFCColorDialog::~CMFCColorDialog(local_970);
    }
    else {
      CColorDialog::CColorDialog((CColorDialog *)local_a2c,param_1,0x102,(CWnd *)0x0);
      local_8 = 0;
      iVar4 = CColorDialog::DoModal((CColorDialog *)local_a2c);
      if (iVar4 == 1) {
        *param_2 = local_98c;
        local_974 = 1;
      }
      local_8 = 0xffffffff;
      local_a2c[0] = CCommonDialog::vftable;
      CDialog::~CDialog((CDialog *)local_a2c);
    }
  }
  else {
    (**(code **)(*(int *)pCVar3 + 0xfc))(param_1,param_2);
  }
  iVar4 = FUN_100f90cf();
  return iVar4;
}

