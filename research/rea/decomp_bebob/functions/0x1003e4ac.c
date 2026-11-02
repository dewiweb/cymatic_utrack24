// rea decompile_all
// name: CDockingManager::DeterminePaneAndStatus
// address: 0x1003e4ac
// body: available
// range: 0x1003e4ac-0x1003e606 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual enum AFX_CS_STATUS __thiscall CDockingManager::DeterminePaneAndStatus(class
   CPoint,int,unsigned long,class CBasePane * *,class CBasePane const *,class CBasePane const *)
   
   Library: Visual Studio 2010 Release */

AFX_CS_STATUS __thiscall
CDockingManager::DeterminePaneAndStatus
          (CDockingManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          uint param_5,int *param_6,uint param_7,int *param_8)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  CObject *pCVar4;
  uint uVar5;
  AFX_CS_STATUS AVar6;
  
  iVar1 = (**(code **)(*(int *)this + 0x10))
                    (param_2,param_3,param_4,1,&PTR_s_CDockablePane_1016138c,1,param_7);
  *param_6 = iVar1;
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*(int *)this + 0x14))(param_2,param_3,0,1);
    if ((((piVar2 != (int *)0x0) &&
         (piVar3 = (int *)(**(code **)(*param_8 + 0x224))(0), piVar3 != piVar2)) &&
        (iVar1 = (**(code **)(*piVar2 + 0x1e8))(param_2,param_3,1), iVar1 == 2)) &&
       (iVar1 = (**(code **)(*piVar2 + 0x1a0))(), iVar1 == 1)) {
      pCVar4 = (CObject *)(**(code **)(*piVar2 + 0x1a8))();
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,pCVar4);
      *param_6 = (int)pCVar4;
      return 3;
    }
    if (*param_6 == 0) goto LAB_1003e5cc;
  }
  iVar1 = (**(code **)(*(int *)*param_6 + 0x224))(0);
  if ((((iVar1 != 0) && (uVar5 = (**(code **)(*param_8 + 0x1bc))(), (uVar5 & 0x40) != 0)) &&
      (uVar5 = (**(code **)(*(int *)*param_6 + 0x1bc))(), (uVar5 & 0x40) != 0)) ||
     (iVar1 = (**(code **)(*(int *)*param_6 + 0x224))(0), iVar1 == 0)) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,(CObject *)*param_6);
    iVar1 = (**(code **)(*(int *)pCVar4 + 0x16c))();
    if ((iVar1 == 0) && (uVar5 = (**(code **)(*(int *)pCVar4 + 400))(), (param_5 & uVar5) == 0)) {
      return 0;
    }
    AVar6 = (**(code **)(*(int *)pCVar4 + 0x348))(param_2,param_3,param_4);
    return AVar6;
  }
LAB_1003e5cc:
  *param_6 = 0;
  param_8 = (int *)0x0;
  param_7 = 0;
  iVar1 = IsPointNearDockSite(this,param_2,param_3,&param_7,&param_8);
  if ((iVar1 != 0) && ((param_5 & param_7) != 0)) {
    return 2;
  }
  return 0;
}

