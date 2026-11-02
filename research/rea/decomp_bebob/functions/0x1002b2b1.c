// rea decompile_all
// name: CMFCToolBar::OnLButtonUp
// address: 0x1002b2b1
// body: available
// range: 0x1002b2b1-0x1002b622 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBar::OnLButtonUp(CMFCToolBar *this,uint param_1,int param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  HWND pHVar3;
  undefined4 uVar4;
  CObject *this_00;
  int iVar5;
  int iVar6;
  CWnd *pCVar7;
  BOOL BVar8;
  int iVar9;
  uint local_c;
  
  if ((DAT_10166e54 == 0) || (*(int *)(this + 0xb04) != 0)) {
    if (*(int *)(this + 0x164) == 0) {
      if (*(int *)(this + 0xb78) == -1) {
        iVar9 = (**(code **)(*(int *)this + 0x390))(param_3,param_4);
        if (iVar9 != -1) {
          return;
        }
        CPane::OnLButtonUp((CPane *)this,param_1,param_3,param_4);
      }
      else {
        ReleaseCapture();
        if (*(int *)(this + 0xc90) != 0) {
          pHVar3 = SetCapture(*(HWND *)(*(int *)(this + 0xc90) + 0x20));
          CWnd::FromHandle(pHVar3);
          *(undefined4 *)(this + 0xc90) = 0;
        }
        uVar4 = (**(code **)(*(int *)this + 0x390))(param_3,param_4);
        *(undefined4 *)(this + 0xb7c) = uVar4;
        this_00 = (CObject *)FUN_100261ef(this,*(int *)(this + 0xb78));
        if (this_00 == (CObject *)0x0) {
          return;
        }
        iVar5 = CObject::IsKindOf(this_00,(CRuntimeClass *)
                                          &PTR_s_CMFCToolBarMenuButtonsButton_1012ec78);
        uVar1 = *(uint *)(this_00 + 0x24);
        param_1 = 0;
        iVar9 = *(int *)(this + 0xb78);
        local_c = uVar1 & 0xfffdffff;
        if ((iVar9 == *(int *)(this + 0xb7c)) &&
           (iVar6 = (**(code **)(*(int *)this + 0x390))(param_3,param_4), iVar6 == iVar9)) {
          UpdateButton(this,iVar9);
          if (((*(uint *)(this_00 + 0x24) & 0x40000) == 0) &&
             (param_1 = *(uint *)(this_00 + 0x20), (*(uint *)(this_00 + 0x24) & 2) != 0)) {
            if ((uVar1 & 0x100000) != 0) {
              local_c = uVar1 & 0xffedffff;
            }
            local_c = local_c ^ 0x10000;
          }
        }
        if (DAT_10166e78 == 0) {
          pCVar7 = CWnd::GetOwner((CWnd *)this);
          SendMessageW(*(HWND *)(pCVar7 + 0x20),0x362,0xe001,0);
        }
        pHVar3 = *(HWND *)(this + 0x20);
        iVar9 = *(int *)(this + 0xb78);
        *(undefined4 *)(this + 0xb78) = 0xffffffff;
        *(undefined4 *)(this + 0xb7c) = 0xffffffff;
        (**(code **)(*(int *)this + 0x364))();
        iVar6 = (**(code **)(*(int *)this + 0x390))(param_3,param_4);
        if ((((iVar6 == iVar9) && (iVar6 = (**(code **)(*(int *)this + 0x3e4))(this_00), iVar6 == 0)
             ) && (param_1 != 0)) && (param_1 != 0xffffffff)) {
          InvalidateButton(this,iVar9);
          UpdateWindow(*(HWND *)(this + 0x20));
          CMFCCmdUsageCount::AddCmd((CMFCCmdUsageCount *)&DAT_1016703c,param_1);
          iVar6 = (**(code **)(*(int *)this_00 + 0x24))();
          if ((iVar6 == 0) &&
             ((DAT_101685b0 == (CUserToolsManager *)0x0 ||
              (iVar6 = CUserToolsManager::InvokeTool(DAT_101685b0,param_1), iVar6 == 0)))) {
            pCVar7 = CWnd::GetOwner((CWnd *)this);
            SendMessageW(*(HWND *)(pCVar7 + 0x20),0x111,param_1,0);
          }
        }
        else {
          BVar8 = IsWindow(pHVar3);
          if (((BVar8 != 0) && (BVar8 = IsIconic(pHVar3), BVar8 == 0)) &&
             (BVar8 = IsZoomed(pHVar3), BVar8 != 0)) {
            (**(code **)(*(int *)this_00 + 0x24))();
          }
        }
        BVar8 = IsWindow(pHVar3);
        if (BVar8 == 0) {
          return;
        }
        if (*(int *)(this + 0xbd4) <= iVar9) {
          return;
        }
        if (iVar5 == 0) {
          (**(code **)(*(int *)this + 0x374))(iVar9,local_c);
        }
        else {
          iVar5 = FUN_100261ef(this,iVar9);
          if (iVar5 != 0) {
            *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) & 0xfffdffff;
          }
        }
        UpdateButton(this,iVar9);
        InvalidateButton(this,iVar9);
        UpdateWindow(*(HWND *)(this + 0x20));
      }
      *(undefined4 *)(this + 0xc8c) = 0xffffffff;
      *(undefined4 *)(this + 0xc88) = 0xffffffff;
      OnMouseMove(this,0,param_3,param_4);
      return;
    }
  }
  else if (*(int *)(this + 0xb30) != 0) {
    iVar9 = param_3 - *(int *)(*(int *)(this + 0xc98) + 0x54);
    if ((4 < iVar9) && (lVar2 = _labs(*(int *)(*(int *)(this + 0xc98) + 0x5c) - param_3), 6 < lVar2)
       ) {
      (**(code **)(**(int **)(this + 0xc98) + 0x34))(iVar9);
      (**(code **)(*(int *)this + 0x208))();
    }
    SetRectEmpty((LPRECT)(this + 0xc68));
    *(undefined4 *)(this + 0xc98) = 0;
    *(undefined4 *)(this + 0xb30) = 0;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
    ReleaseCapture();
    if (*(int *)(this + 0xc90) != 0) {
      pHVar3 = SetCapture(*(HWND *)(*(int *)(this + 0xc90) + 0x20));
      CWnd::FromHandle(pHVar3);
      *(undefined4 *)(this + 0xc90) = 0;
    }
    (**(code **)(*(int *)this + 0x2d4))(1);
  }
  CPane::OnLButtonUp((CPane *)this,param_1,param_3,param_4);
  return;
}

