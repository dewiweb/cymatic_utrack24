// rea decompile_all
// name: CPropertySheet::DoModal
// address: 0x100d7186
// body: available
// range: 0x100d7186-0x100d7338 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPropertySheet::DoModal(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CPropertySheet::DoModal(CPropertySheet *this)

{
  CWinApp *this_00;
  AFX_MODULE_STATE *pAVar1;
  HWND__ *pHVar2;
  BOOL BVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  CPropertySheet *pCVar9;
  HWND local_c;
  int local_8;
  
  AfxEndDeferRegisterClass(0x10);
  AfxEndDeferRegisterClass(0xfc000);
  AfxInitNetworkAddressControl();
  (**(code **)(*(int *)this + 0x16c))();
  pAVar1 = AfxGetModuleState();
  this_00 = *(CWinApp **)(pAVar1 + 4);
  if (this_00 != (CWinApp *)0x0) {
    CWinApp::EnableModeless(this_00,0);
  }
  if (*(int *)(this + 0xc0) == 0) {
    pHVar2 = (HWND__ *)0x0;
  }
  else {
    pHVar2 = *(HWND__ **)(*(int *)(this + 0xc0) + 0x20);
  }
  pHVar2 = CWnd::GetSafeOwner_(pHVar2,&local_c);
  *(HWND__ **)(this + 0x7c) = pHVar2;
  local_8 = 0;
  if (pHVar2 != (HWND__ *)0x0) {
    BVar3 = IsWindowEnabled(pHVar2);
    if (BVar3 != 0) {
      EnableWindow(pHVar2,0);
      local_8 = 1;
    }
  }
  pHVar4 = GetCapture();
  if (pHVar4 != (HWND)0x0) {
    SendMessageW(pHVar4,0x1f,0,0);
  }
  *(undefined4 *)(this + 0x60) = 0;
  if ((*(uint *)(this + 0x78) & 0x4000) == 0) {
    *(uint *)(this + 0x58) = *(uint *)(this + 0x58) | 0x10;
  }
  AfxHookWindowCreate((CWnd *)this);
  if ((*(uint *)(this + 0x78) & 0x4000) == 0) {
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) | 0x400;
    pCVar9 = this + 0x74;
    pAVar1 = AfxGetModuleState();
    iVar5 = CComCtlWrapper::_PropertySheetW
                      ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78),
                       (_PROPSHEETHEADERW_V2 *)pCVar9);
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) & 0xfffffbff;
    AfxUnhookWindowCreate();
    if ((iVar5 == 0) || (iVar5 == -1)) {
      *(uint *)(this + 0x58) = *(uint *)(this + 0x58) & 0xffffffef;
    }
    iVar5 = *(int *)(this + 0x60);
    iVar6 = (**(code **)(*(int *)this + 0x88))();
    if (iVar6 != 0) {
      uVar8 = 4;
      uVar7 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar7 & 0x100) != 0) {
        uVar8 = 5;
      }
      iVar5 = CWnd::RunModalLoop((CWnd *)this,uVar8);
    }
    if (*(int *)(this + 0x20) != 0) {
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,0x97);
    }
  }
  else {
    pCVar9 = this + 0x74;
    pAVar1 = AfxGetModuleState();
    iVar5 = CComCtlWrapper::_PropertySheetW
                      ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78),
                       (_PROPSHEETHEADERW_V2 *)pCVar9);
    AfxUnhookWindowCreate();
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (local_8 != 0) {
    EnableWindow(pHVar2,1);
  }
  if (pHVar2 != (HWND__ *)0x0) {
    pHVar4 = GetActiveWindow();
    if (pHVar4 == *(HWND *)(this + 0x20)) {
      SetActiveWindow(pHVar2);
    }
  }
  if ((*(uint *)(this + 0x78) & 0x4000) == 0) {
    (**(code **)(*(int *)this + 0x60))();
  }
  if (this_00 != (CWinApp *)0x0) {
    CWinApp::EnableModeless(this_00,1);
  }
  if (local_c != (HWND)0x0) {
    EnableWindow(local_c,1);
  }
  return iVar5;
}

