// rea decompile_all
// name: CPane::FloatPane
// address: 0x1008894e
// body: available
// range: 0x1008894e-0x10088d44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPane::FloatPane(class CRect,enum AFX_DOCK_METHOD,bool)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CPane::FloatPane(CPane *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,char param_7)

{
  int iVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  CDockingManager *pCVar4;
  HWND pHVar5;
  uint uVar6;
  int *piVar7;
  CObject *this_00;
  undefined **ppuVar8;
  tagPOINT local_54;
  CWnd *local_4c;
  tagPOINT local_48;
  tagPOINT local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)this + 0x164))();
  if (((iVar1 != 0) || (iVar1 = (**(code **)(*(int *)this + 0x168))(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*(int *)this + 0x1c8))(), iVar1 != 0)) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_28);
    pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
    CWnd::ScreenToClient(pCVar2,&local_28);
    local_48.x = 0;
    local_48.y = 0;
    GetCursorPos(&local_48);
    local_40.x = *(LONG *)(this + 0x158);
    local_40.y = *(LONG *)(this + 0x15c);
    ClientToScreen(*(HWND *)(this + 0x20),&local_40);
    iVar1 = (**(code **)(*(int *)this + 0x2c0))(&param_2,param_6);
    if (iVar1 != 0) {
      local_38 = 0x10;
      local_34 = 0x10;
      local_30 = 0x10;
      local_2c = 0x10;
      CGlobalUtils::AdjustRectToWorkArea
                ((CGlobalUtils *)&PTR_vftable_10160f68,(CRect *)&param_2,(CRect *)&local_38);
      pCVar2 = (CWnd *)(**(code **)(*(int *)this + 0x210))(param_2,param_3,param_4,param_5);
      local_4c = pCVar2;
      if (pCVar2 != (CWnd *)0x0) {
        pCVar3 = (CWnd *)(**(code **)(*(int *)this + 0x198))();
        pCVar4 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar3);
        if (((param_6 != 1) && (pCVar4 != (CDockingManager *)0x0)) && (DAT_101680ec == 0)) {
          (**(code **)(*(int *)this + 0x31c))();
        }
        pCVar3 = local_4c;
        *(undefined4 *)(pCVar2 + 0xcc) = *(undefined4 *)(this + 0x1d8);
        *(undefined4 *)(pCVar2 + 0xd0) = *(undefined4 *)(this + 0x1dc);
        *(undefined4 *)(pCVar2 + 0xd4) = *(undefined4 *)(this + 0x1e0);
        *(undefined4 *)(pCVar2 + 0xd8) = *(undefined4 *)(this + 0x1e4);
        (**(code **)(*(int *)this + 0x218))(local_4c,0);
        local_54.x = local_48.x;
        local_54.y = local_48.y;
        ScreenToClient(*(HWND *)(this + 0x20),&local_54);
        if (param_6 == 1) {
          SendMessageW(*(HWND *)(this + 0x20),0x202,0xffff,
                       CONCAT22((undefined2)local_54.y,(undefined2)local_54.x));
          iVar1 = (**(code **)(*(int *)this + 0x168))();
          if ((iVar1 != 0) && (iVar1 = (**(code **)(*(int *)this + 0x224))(0), iVar1 != 0)) {
            SendMessageW(*(HWND *)(iVar1 + 0x20),0x202,0,
                         CONCAT22((undefined2)local_54.y,(undefined2)local_54.x));
          }
        }
        pHVar5 = GetParent(*(HWND *)(this + 0x20));
        local_4c = CWnd::FromHandle(pHVar5);
        CWnd::SetParent((CWnd *)this,pCVar3);
        if (*(int *)(this + 0xac) == 0) {
          (**(code **)(*(int *)this + 0x21c))(local_4c);
        }
        else {
          (**(code **)(*(int *)this + 0x21c))(*(int *)(this + 0xac));
          *(undefined4 *)(this + 0xac) = 0;
        }
        (**(code **)(*(int *)pCVar3 + 0x174))(this);
        (**(code **)(*(int *)pCVar3 + 0x184))();
        (**(code **)(*(int *)this + 0x234))(&DAT_101665c0,0,0,0,0,0x11,0);
        if ((param_6 == 1) && (uVar6 = (**(code **)(*(int *)this + 0x1b4))(), (uVar6 & 1) != 0)) {
          (**(code **)(*(int *)pCVar3 + 0x20c))(0);
          pCVar3[0x74] = (CWnd)0x1;
        }
        (**(code **)(*(int *)this + 0x2c4))();
        uVar6 = (**(code **)(*(int *)this + 0x1bc))();
        (**(code **)(*(int *)this + 0x1e0))(uVar6 | 1);
        (**(code **)(*(int *)this + 0x20c))();
        if (param_7 != '\0') {
          piVar7 = (int *)(**(code **)(*(int *)this + 0x224))(0);
          (**(code **)(*piVar7 + 0x1cc))();
        }
        if (param_6 == 1) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_18);
          local_40.x = *(LONG *)(this + 0x158);
          local_40.y = *(LONG *)(this + 0x15c);
          ClientToScreen(*(HWND *)(pCVar3 + 0x20),&local_40);
          if ((local_18.right < local_40.x) || (local_40.x < local_18.left)) {
            local_40.x = (local_18.right - local_18.left) / 2 + local_18.left;
          }
          if ((local_18.bottom < local_40.y) || (local_40.y < local_18.top)) {
            iVar1 = (**(code **)(*(int *)pCVar3 + 0x16c))();
            local_40.y = iVar1 / 2 + local_18.top;
          }
          OffsetRect(&local_18,local_48.x - local_40.x,local_48.y - local_40.y);
          CWnd::SetWindowPos(pCVar3,(CWnd *)0x0,local_18.left,local_18.top,
                             local_18.right - local_18.left,local_18.bottom - local_18.top,0x14);
          *(LONG *)(pCVar3 + 0x124) = local_48.x;
          *(LONG *)(pCVar3 + 0x128) = local_48.y;
        }
        if (param_7 != '\0') {
          CWnd::ShowWindow(pCVar3,8);
          iVar1 = (**(code **)(*(int *)this + 0x198))();
          RedrawWindow(*(HWND *)(iVar1 + 0x20),&local_28,(HRGN)0x0,0x5b1);
          ppuVar8 = &PTR_s_COleCntrFrameWndEx_10129fbc;
          this_00 = (CObject *)(**(code **)(*(int *)this + 0x198))();
          iVar1 = CObject::IsKindOf(this_00,(CRuntimeClass *)ppuVar8);
          if (iVar1 != 0) {
            piVar7 = (int *)(**(code **)(*(int *)this + 0x198))();
            (**(code **)(*piVar7 + 0x1bc))(0);
          }
          iVar1 = (**(code **)(*(int *)this + 0x1d4))();
          if (iVar1 != 0) {
            CWnd::SetFocus(pCVar3);
          }
        }
      }
    }
  }
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

