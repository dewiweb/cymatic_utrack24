// rea decompile_all
// name: CMDIClientAreaWnd::OnMDIDestroy
// address: 0x10064e1e
// body: available
// range: 0x10064e1e-0x10065096 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMDIClientAreaWnd::OnMDIDestroy(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CMDIClientAreaWnd::OnMDIDestroy(CMDIClientAreaWnd *this,uint param_1,long param_2)

{
  CMDIClientAreaWnd *pCVar1;
  CObject *pCVar2;
  CFrameWnd *pCVar3;
  CObject *pCVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  int iVar7;
  int iVar8;
  AFX_MODULE_STATE *pAVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  __POSITION *p_Var13;
  long lVar14;
  BOOL BVar15;
  HWND pHVar16;
  bool bVar17;
  HWND local_c;
  
  pCVar3 = CWnd::GetParentFrame((CWnd *)this);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10120c48,(CObject *)pCVar3);
  pCVar5 = CWnd::FromHandle((HWND__ *)param_1);
  pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,(CObject *)pCVar5);
  bVar17 = false;
  if ((*(int *)(pCVar4 + 0x140) == 0) && (DAT_1016037c == 0)) {
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
  }
  local_c = (HWND)0x0;
  if (pCVar6 == (CObject *)0x0) goto LAB_10064f9b;
  pCVar2 = *(CObject **)(pCVar6 + 0x118);
  *(undefined4 *)(pCVar6 + 0x118) = 0;
  if (pCVar2 == (CObject *)0x0) goto LAB_10064f9b;
  iVar7 = (**(code **)(*(int *)pCVar2 + 0x178))();
  iVar8 = (**(code **)(*(int *)pCVar2 + 0x218))(param_1);
  if (-1 < iVar8) {
    *(undefined4 *)(pCVar6 + 0x11c) = 1;
  }
  pAVar9 = AfxGetModuleState();
  piVar10 = (int *)(**(code **)(**(int **)(pAVar9 + 4) + 0xfc))();
  if (piVar10 == (int *)0x0) {
LAB_10064eed:
    uVar12 = 1;
  }
  else {
    iVar11 = (**(code **)(*piVar10 + 0x30))();
    if (iVar11 == 0) goto LAB_10064eed;
    uVar12 = 0;
  }
  (**(code **)(*(int *)pCVar2 + 0x194))(iVar8,uVar12);
  iVar8 = (**(code **)(*(int *)pCVar2 + 0x1a8))();
  if (iVar8 == 0) {
    p_Var13 = CObList::Find((CObList *)(this + 0x28d0),pCVar2,(__POSITION *)0x0);
    if (p_Var13 != (__POSITION *)0x0) {
      if (((1 < *(int *)(this + 0x28dc)) && (*(int *)(pCVar2 + 0x24c) != 0)) &&
         ((iVar7 = *(int *)p_Var13, iVar7 != 0 || (iVar7 = *(int *)(this + 0x28d4), iVar7 != 0)))) {
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1012b4b4,
                                    *(CObject **)(iVar7 + 8));
        if (pCVar6 != (CObject *)0x0) {
          iVar7 = (**(code **)(*(int *)pCVar6 + 0x208))();
          if (iVar7 == -1) {
            iVar7 = 0;
          }
          iVar7 = (**(code **)(*(int *)pCVar6 + 0x1ac))(iVar7);
          if (iVar7 != 0) {
            local_c = *(HWND *)(iVar7 + 0x20);
          }
        }
      }
      RemoveTabGroup(this,(CMFCTabCtrl *)pCVar2,1);
    }
  }
  else {
    iVar8 = (**(code **)(*(int *)pCVar2 + 0x178))();
    bVar17 = iVar7 != iVar8;
  }
LAB_10064f9b:
  pCVar1 = this + 0x74;
  if ((pCVar1 != (CMDIClientAreaWnd *)0x0) && (*(int *)(this + 0x94) != 0)) {
    iVar7 = (**(code **)(*(int *)pCVar1 + 0x178))();
    iVar8 = (**(code **)(*(int *)pCVar1 + 0x218))(param_1);
    if (-1 < iVar8) {
      pCVar6 = (CObject *)(**(code **)(*(int *)pCVar1 + 0x1ac))(iVar8);
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c,pCVar6);
      if (pCVar6 != (CObject *)0x0) {
        *(undefined4 *)(pCVar6 + 0x11c) = 1;
      }
      (**(code **)(*(int *)pCVar1 + 0x194))(iVar8,1);
    }
    iVar8 = (**(code **)(*(int *)pCVar1 + 0x178))();
    bVar17 = iVar7 != iVar8;
  }
  lVar14 = CWnd::Default((CWnd *)this);
  if (bVar17) {
    (**(code **)(*(int *)pCVar4 + 0x174))(1);
  }
  if (*(int *)(pCVar4 + 0x140) == 0) {
    BVar15 = IsWindow(local_c);
    if (BVar15 != 0) {
      SetActiveTab(this,local_c);
    }
    if ((*(int *)(pCVar4 + 0x140) == 0) && (DAT_1016037c == 0)) {
      SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
      pHVar16 = GetParent(*(HWND *)(this + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar16);
      RedrawWindow(*(HWND *)(pCVar5 + 0x20),(RECT *)0x0,(HRGN)0x0,0x185);
    }
  }
  return lVar14;
}

