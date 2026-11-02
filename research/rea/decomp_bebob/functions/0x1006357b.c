// rea decompile_all
// name: CMDIClientAreaWnd::AdjustMDIChildren
// address: 0x1006357b
// body: available
// range: 0x1006357b-0x100636dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::AdjustMDIChildren(class CMFCTabCtrl *)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMDIClientAreaWnd::AdjustMDIChildren(CMDIClientAreaWnd *this,CMFCTabCtrl *param_1)

{
  BOOL BVar1;
  HWND hWndTo;
  int iVar2;
  int iVar3;
  CWnd *this_00;
  uint uVar4;
  CObject *this_01;
  AFX_MODULE_STATE *pAVar5;
  int *piVar6;
  int iVar7;
  tagPOINT local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  BVar1 = IsWindowVisible(*(HWND *)(param_1 + 0x20));
  if ((BVar1 != 0) || (DAT_1016037c == 0)) {
    local_18.x = *(LONG *)(param_1 + 0x2a0);
    local_18.y = *(LONG *)(param_1 + 0x2a4);
    local_10 = *(int *)(param_1 + 0x2a8);
    local_c = *(int *)(param_1 + 0x2ac);
    hWndTo = (HWND)0x0;
    if (this != (CMDIClientAreaWnd *)0x0) {
      hWndTo = *(HWND *)(this + 0x20);
    }
    MapWindowPoints(*(HWND *)(param_1 + 0x20),hWndTo,&local_18,2);
    iVar2 = (**(code **)(*(int *)param_1 + 0x208))();
    iVar7 = 0;
    iVar3 = (**(code **)(*(int *)param_1 + 0x1a8))();
    if (0 < iVar3) {
      do {
        this_00 = (CWnd *)(**(code **)(*(int *)param_1 + 0x1ac))(iVar7);
        if ((this_00 != (CWnd *)0x0) && (*(HWND *)(this_00 + 0x20) != (HWND)0x0)) {
          uVar4 = GetWindowLongW(*(HWND *)(this_00 + 0x20),-0x10);
          if ((uVar4 & 0x20000000) != 0) {
            CWnd::ShowWindow(this_00,9);
          }
          uVar4 = 0x10;
          if (iVar7 != iVar2) {
            uVar4 = 0x1c;
          }
          CWnd::SetWindowPos(this_00,(CWnd *)&DAT_101665c0,local_18.x,local_18.y,
                             local_10 - local_18.x,local_c - local_18.y,uVar4);
          this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,
                                       (CObject *)this_00);
          if (((this_01 != (CObject *)0x0) &&
              (iVar3 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled((CMDIChildWndEx *)this_01),
              iVar3 != 0)) &&
             (iVar3 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)this_01),
             iVar3 != 0)) {
            pAVar5 = AfxGetModuleState();
            if ((*(int **)(pAVar5 + 4) != (int *)0x0) &&
               ((piVar6 = (int *)(**(code **)(**(int **)(pAVar5 + 4) + 0xfc))(),
                piVar6 == (int *)0x0 || (iVar3 = (**(code **)(*piVar6 + 0x30))(), iVar3 == 0)))) {
              CMDIChildWndEx::InvalidateIconicBitmaps((CMDIChildWndEx *)this_01);
              CMDIChildWndEx::SetTaskbarTabOrder((CMDIChildWndEx *)this_01,(CMDIChildWndEx *)0x0);
            }
          }
        }
        iVar7 = iVar7 + 1;
        iVar3 = (**(code **)(*(int *)param_1 + 0x1a8))();
      } while (iVar7 < iVar3);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

