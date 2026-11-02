// rea decompile_all
// name: CreateWrapper
// address: 0x10092c0f
// body: available
// range: 0x10092c0f-0x10092d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class CWnd * __thiscall CMFCBaseTabCtrl::CreateWrapper(class CWnd *,char
   const *,int)
    protected: virtual class CWnd * __thiscall CMFCBaseTabCtrl::CreateWrapper(class CWnd *,wchar_t
   const *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CreateWrapper(void *this,CObject *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  CObject *pCVar2;
  CDockablePaneAdapter *this_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x10092c1b;
  iVar1 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CDockablePane_1016138c);
  if (((iVar1 == 0) && (param_3 != 0)) && (*(int *)((int)this + 0x74) != 0)) {
    if (*(CRuntimeClass **)((int)this + 0x178) == (CRuntimeClass *)0x0) {
      this_00 = FUN_1000858a(0x368);
      local_8 = 0;
      if (this_00 == (CDockablePaneAdapter *)0x0) {
        pCVar2 = (CObject *)0x0;
      }
      else {
        pCVar2 = (CObject *)CDockablePaneAdapter::CDockablePaneAdapter(this_00);
      }
      local_8 = 0xffffffff;
    }
    else {
      pCVar2 = CRuntimeClass::CreateObject(*(CRuntimeClass **)((int)this + 0x178));
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePaneAdapter_10162750,pCVar2);
    }
    local_24 = *(int *)(pCVar2 + 0x350);
    iStack_20 = *(int *)(pCVar2 + 0x354);
    iStack_1c = *(int *)(pCVar2 + 0x358);
    iStack_18 = *(int *)(pCVar2 + 0x35c);
    iVar1 = *(int *)(pCVar2 + 0x334);
    local_28 = 0x56000000;
    local_2c = 0xf;
    iVar3 = CObject::IsKindOf(param_1,(CRuntimeClass *)&PTR_s_CBasePane_1012a214);
    if (iVar3 != 0) {
      local_28 = (**(code **)(*(int *)param_1 + 0x1bc))();
      local_28 = local_28 | 0x56000000;
      local_2c = (**(code **)(*(int *)param_1 + 0x1c0))();
    }
    iVar3 = *(int *)pCVar2;
    uVar6 = 0;
    uVar5 = 0x20;
    iVar4 = CWnd::GetDlgCtrlID((CWnd *)param_1);
    iVar3 = (**(code **)(iVar3 + 0x324))
                      (param_2,this,&local_24,1,iVar4,local_28,uVar5,local_2c,uVar6);
    if (iVar3 == 0) {
      (**(code **)(*(int *)pCVar2 + 4))(1);
    }
    else {
      (**(code **)(*(int *)pCVar2 + 0x1ec))(0);
      (**(code **)(*(int *)pCVar2 + 0x3a4))(param_1);
      *(int *)(pCVar2 + 0x1d8) = local_24;
      *(int *)(pCVar2 + 0x1dc) = iStack_20;
      *(int *)(pCVar2 + 0x1e0) = iStack_1c;
      *(int *)(pCVar2 + 0x1e4) = iStack_18;
      if (iVar1 != 0) {
        *(int *)(pCVar2 + 0x334) = iVar1;
      }
    }
  }
  FUN_100f90cf();
  return;
}

