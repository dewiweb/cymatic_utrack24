// rea decompile_all
// name: CMFCDragFrameImpl::PlaceTabPreDocking
// address: 0x100c1fe1
// body: available
// range: 0x100c1fe1-0x100c2152 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    public: void __thiscall CMFCDragFrameImpl::PlaceTabPreDocking(class CBaseTabbedPane *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCDragFrameImpl::PlaceTabPreDocking(CMFCDragFrameImpl *this,CBaseTabbedPane *param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  CObject *pCVar3;
  CWnd *this_00;
  CDockablePane *this_01;
  CFrameWnd *pCVar4;
  int *piVar5;
  undefined4 uVar6;
  int local_28 [8];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x100c1fed;
  if (*(int *)(this + 0x34) != -1) goto LAB_100c214b;
  uVar6 = 0;
  if (param_2 == 0) {
    EndDrawDragFrame(this,0);
  }
  ppuVar1 = FUN_1000ad47();
  FUN_10005e00(local_28,(int *)ppuVar1);
  local_8 = 0;
  iVar2 = CObject::IsKindOf(*(CObject **)(this + 0x44),
                            (CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338);
  if (iVar2 == 0) {
    this_00 = *(CWnd **)(this + 0x44);
LAB_100c205b:
    CWnd::GetWindowTextW
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       local_28);
  }
  else {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10162338,
                                *(CObject **)(this + 0x44));
    if ((pCVar3 != (CObject *)0x0) &&
       (this_00 = (CWnd *)(**(code **)(*(int *)pCVar3 + 0x1a8))(), this_00 != (CWnd *)0x0))
    goto LAB_100c205b;
  }
  if (*(int *)(this + 0x50) == 0) {
    this_01 = FUN_1000858a(0x350);
    local_8._0_1_ = 1;
    if (this_01 == (CDockablePane *)0x0) {
      this_01 = (CDockablePane *)0x0;
    }
    else {
      CDockablePane::CDockablePane(this_01);
      *(undefined ***)this_01 = CDummyDockablePane::vftable;
    }
    *(CDockablePane **)(this + 0x50) = this_01;
    local_8 = (uint)local_8._1_3_ << 8;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    pCVar4 = DAT_10168578;
    if (DAT_10168578 == (CFrameWnd *)0x0) {
      pCVar4 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x44));
    }
    (**(code **)(**(int **)(this + 0x50) + 0x328))
              (0,&PTR_1011d390,pCVar4,local_28 + 1,0,DAT_10162278,0x40000000,0x20,0xf,0);
  }
  piVar5 = (int *)(**(code **)(*(int *)param_1 + 0x3a4))();
  (**(code **)(*piVar5 + 0x188))(*(undefined4 *)(this + 0x50),local_28[0],0xffffffff,1);
  iVar2 = *(int *)(*(int *)(this + 0x48) + 0x1b8);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) && (*(int *)(iVar2 + 4) != 0)) {
    CWnd::ShowWindow(*(CWnd **)(this + 0x44),0);
  }
  piVar5 = (int *)(**(code **)(*(int *)param_1 + 0x3a4))();
  if (*(int *)(this + 0x50) != 0) {
    uVar6 = *(undefined4 *)(*(int *)(this + 0x50) + 0x20);
  }
  uVar6 = (**(code **)(*piVar5 + 0x218))(uVar6);
  *(undefined4 *)(this + 0x34) = uVar6;
  *(CBaseTabbedPane **)(this + 0x3c) = param_1;
  FUN_10001030((undefined4 *)(local_28[0] + -0x10));
LAB_100c214b:
  FUN_100f90cf();
  return;
}

