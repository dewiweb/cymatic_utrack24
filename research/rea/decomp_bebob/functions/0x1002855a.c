// rea decompile_all
// name: CMFCToolBar::OnDrop
// address: 0x1002855a
// body: available
// range: 0x1002855a-0x1002873c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::OnDrop(class COleDataObject *,unsigned long,class
   CPoint)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBar::OnDrop(CMFCToolBar *this,undefined4 param_1,int param_2,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  int iVar7;
  int local_8;
  
  if ((*(int *)(this + 0xb44) != 0) || (iVar7 = *(int *)(this + 0xb8c), iVar7 < 0)) {
    return 0;
  }
  iVar1 = *(int *)(this + 0xc98);
  *(undefined4 *)(this + 0xc98) = 0;
  (**(code **)(*(int *)this + 0x3d0))();
  iVar2 = (**(code **)(*(int *)this + 0x390))(param_4,param_5);
  if ((-1 < iVar2) && (iVar2 = FUN_100261ef(this,iVar2), iVar1 == iVar2)) {
    return 0;
  }
  piVar3 = (int *)(**(code **)(*(int *)this + 0x3f8))(param_1);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*piVar3 + 0x78))(this);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 4))(1);
LAB_10028733:
    iVar7 = 1;
  }
  else {
    piVar3[7] = 0;
    local_8 = iVar7;
    if ((iVar1 == 0) || (param_2 == 1)) {
LAB_1002863c:
      iVar7 = (**(code **)(*(int *)this + 0x340))(piVar3,local_8);
      if (iVar7 != -1) {
        (**(code **)(*(int *)this + 0x208))();
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        iVar7 = CObject::IsKindOf((CObject *)pCVar5,(CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4);
        if (iVar7 != 0) {
          pHVar4 = GetParent(*(HWND *)(this + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          pHVar4 = GetParent(*(HWND *)(pCVar5 + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10160470,(CObject *)pCVar5
                                     );
          if (pCVar6 != (CObject *)0x0) {
            (**(code **)(*(int *)pCVar6 + 0x20c))();
          }
        }
        if (DAT_10166e58 != 0) {
          (**(code **)(*piVar3 + 0x80))();
        }
        *(undefined4 *)(this + 0xb80) = 0xffffffff;
        RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10160df8,(CObject *)pCVar5
                                   );
        if (pCVar6 != (CObject *)0x0) {
          RedrawWindow(*(HWND *)(pCVar6 + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
        }
        goto LAB_10028733;
      }
      iVar7 = 0;
    }
    else {
      iVar2 = FUN_10026099(this,iVar1);
      if ((iVar7 != iVar2) && (iVar7 != iVar2 + 1)) {
        (**(code **)(*(int *)this + 0x34c))(iVar2);
        if (iVar2 < iVar7) {
          iVar7 = iVar7 + -1;
        }
        local_8 = *(int *)(this + 0xbd4);
        if (iVar7 < *(int *)(this + 0xbd4)) {
          local_8 = iVar7;
        }
        goto LAB_1002863c;
      }
      (**(code **)(*(int *)this + 0x410))(iVar1,this + 0xc80,&param_4);
      iVar7 = 1;
    }
    (**(code **)(*piVar3 + 4))(1);
  }
  return iVar7;
}

