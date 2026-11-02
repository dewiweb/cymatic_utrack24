// rea decompile_all
// name: CBaseTabbedPane::Dock
// address: 0x100c2a77
// body: available
// range: 0x100c2a77-0x100c2ca8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CBaseTabbedPane::Dock(class CBasePane *,struct tagRECT const
   *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CBaseTabbedPane::Dock
          (CBaseTabbedPane *this,CBasePane *param_1,tagRECT *param_2,AFX_DOCK_METHOD param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CObject *pCVar5;
  CPaneContainer *pCVar6;
  AFX_DOCK_METHOD AVar7;
  int local_8;
  
  iVar2 = (**(code **)(*(int *)this + 0x224))(0);
  iVar3 = (**(code **)(**(int **)(this + 0x358) + 0x1a8))();
  bVar1 = true;
  if ((iVar2 != 0) && (local_8 = 0, 0 < iVar3)) {
    do {
      iVar4 = (**(code **)(**(int **)(this + 0x358) + 0x1ec))(local_8);
      if (iVar4 != 0) {
        pCVar5 = (CObject *)(**(code **)(**(int **)(this + 0x358) + 0x1ac))(local_8);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar5);
        if (pCVar5 != (CObject *)0x0) {
          pCVar6 = CRecentDockSiteInfo::GetRecentPaneContainer
                             ((CRecentDockSiteInfo *)(pCVar5 + 0x1d4),1);
          if ((pCVar6 == (CPaneContainer *)0x0) &&
             (pCVar6 = CRecentDockSiteInfo::GetRecentTabContainer
                                 ((CRecentDockSiteInfo *)(pCVar5 + 0x1d4),1),
             pCVar6 == (CPaneContainer *)0x0)) {
            bVar1 = false;
            break;
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar3);
  }
  AVar7 = param_3;
  if ((param_3 == 2) && (bVar1)) {
    pCVar6 = CRecentDockSiteInfo::GetRecentPaneContainer
                       ((CRecentDockSiteInfo *)(this + 0x1d4),(uint)(iVar2 != 0));
    if (pCVar6 == (CPaneContainer *)0x0) {
      (**(code **)(*(int *)this + 0x220))(0,1,0);
      param_3 = 0;
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
LAB_100c2c87:
        (**(code **)(*(int *)this + 0x60))();
        return 0;
      }
      do {
        pCVar5 = (CObject *)(**(code **)(**(int **)(this + 0x358) + 0x1ac))(iVar3);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,pCVar5);
        iVar2 = (**(code **)(**(int **)(this + 0x358) + 0x278))(iVar3);
        iVar4 = (**(code **)(**(int **)(this + 0x358) + 0x1ec))(iVar3);
        if (((pCVar5 == (CObject *)0x0) || (iVar2 == 0)) || (iVar4 == 0)) {
          param_3 = param_3 + 1;
        }
        else {
          (**(code **)(**(int **)(this + 0x358) + 0x194))(iVar3,0);
          (**(code **)(*(int *)pCVar5 + 0x1ec))(1);
          (**(code **)(*(int *)pCVar5 + 0x37c))();
          (**(code **)(*(int *)pCVar5 + 500))(pCVar5,param_2,2);
        }
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      if ((int)param_3 < 1) goto LAB_100c2c87;
      iVar2 = (**(code **)(**(int **)(this + 0x358) + 0x1a0))();
      if (iVar2 == 0) {
        (**(code **)(*(int *)this + 0x220))(0,1,0);
        return 1;
      }
      iVar2 = (**(code **)(**(int **)(this + 0x358) + 0x208))();
      if (iVar2 == -1) {
        param_3 = 0xffffffff;
        (**(code **)(*(int *)this + 0x3d4))(&param_3);
        (**(code **)(**(int **)(this + 0x358) + 0x210))(param_3);
      }
      (**(code **)(**(int **)(this + 0x358) + 0x180))();
      (**(code **)(*(int *)this + 0x220))(1,1,0);
    }
    AVar7 = 2;
  }
  iVar2 = CDockablePane::Dock((CDockablePane *)this,param_1,param_2,AVar7);
  return iVar2;
}

