// rea decompile_all
// name: OnCreate
// address: 0x10068c4b
// body: available
// range: 0x10068c4b-0x10068e82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CPreviewViewEx::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CPreviewViewEx::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall OnCreate(void *this,CFrameWnd *param_1)

{
  CBasePane *this_00;
  int iVar1;
  CFrameWnd *this_01;
  CWnd *pCVar2;
  CObject *pCVar3;
  int iVar4;
  CDockingManager *this_02;
  short *psVar5;
  undefined4 uVar6;
  
  iVar1 = OnCreate(this,(int *)param_1);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  DAT_10168540 = DAT_10168540 + 1;
  this_01 = AFXGetParentFrame(this);
  iVar1 = CObject::IsKindOf((CObject *)this_01,(CRuntimeClass *)&PTR_s_CMDIChildWndEx_1011fd2c);
  param_1 = this_01;
  if (iVar1 != 0) {
    param_1 = CWnd::GetTopLevelFrame((CWnd *)this_01);
  }
  pCVar2 = CWnd::GetDlgItem((CWnd *)param_1,0xe806);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonBar_1012a670,(CObject *)pCVar2);
  *(CObject **)((int)this + 0xe28) = pCVar3;
  if (pCVar3 == (CObject *)0x0) {
    iVar1 = AFX_GLOBAL_DATA::Is32BitIcons((AFX_GLOBAL_DATA *)&DAT_10166aa0);
    this_00 = (CBasePane *)((int)this + 0x15c);
    iVar4 = (**(code **)(*(int *)this_00 + 800))
                      (*(undefined4 *)((int)this + 0xd0),0x50402808,0xe800);
    if (iVar4 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*(int *)this_00 + 0x330))(0x4240,0,0,1,0,0,-(uint)(iVar1 != 0) & 0x423d);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x1b0) = *(undefined4 *)((int)this + 0x20);
    iVar1 = FUN_1002605c(this_00,0xe301,0);
    *(int *)((int)this + 0xe38) = iVar1;
    iVar1 = FUN_100261ef(this_00,iVar1);
    if (*(int *)(iVar1 + 4) == 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0x34);
    }
    else {
      uVar6 = *(undefined4 *)(iVar1 + 0x38);
    }
    *(undefined4 *)((int)this + 0xe30) = uVar6;
    iVar1 = FUN_1002605c(this_00,0x423f,0);
    iVar4 = FUN_100261ef(this_00,iVar1);
    if (*(int *)(iVar4 + 4) == 0) {
      uVar6 = *(undefined4 *)(iVar4 + 0x34);
    }
    else {
      uVar6 = *(undefined4 *)(iVar4 + 0x38);
    }
    *(undefined4 *)((int)this + 0xe34) = uVar6;
    (**(code **)(*(int *)this_00 + 0x34c))(iVar1);
    uVar6 = 1;
    iVar4 = 1;
    psVar5 = (short *)0x0;
    iVar1 = FUN_1002605c(this_00,0xe304,0);
    SetToolBarBtnText(this_00,iVar1,psVar5,iVar4,uVar6);
    uVar6 = 0;
    iVar4 = 1;
    psVar5 = (short *)0x0;
    iVar1 = FUN_1002605c(this_00,0xe300,0);
    SetToolBarBtnText(this_00,iVar1,psVar5,iVar4,uVar6);
    this_02 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,(CWnd *)this_01)
    ;
    CDockingManager::AddPane(this_02,this_00,0,0,0);
    if ((DAT_10160fd8 == 0) && (DAT_10166e5c != 0)) {
      *(undefined4 *)((int)this + 0xd08) = *(undefined4 *)((int)this + 0xcf8);
      *(undefined4 *)((int)this + 0xd0c) = *(undefined4 *)((int)this + 0xcfc);
      *(undefined4 *)((int)this + 0xd10) = *(undefined4 *)((int)this + 0xd00);
      *(undefined4 *)((int)this + 0xd14) = *(undefined4 *)((int)this + 0xd04);
    }
    CPreviewViewEx::SetToolbarSize(this);
  }
  else if (DAT_10168540 == 1) {
    CMFCRibbonBar::SetPrintPreviewMode((CMFCRibbonBar *)pCVar3,1);
  }
  pCVar2 = CWnd::GetDlgItem((CWnd *)param_1,0xe801);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCStatusBar_10132f3c,(CObject *)pCVar2);
  *(CObject **)((int)this + 0xe24) = pCVar3;
  if ((pCVar3 != (CObject *)0x0) && (DAT_10168540 == 1)) {
    (**(code **)(*(int *)pCVar3 + 800))(0xff,0,1);
  }
  return 0;
}

