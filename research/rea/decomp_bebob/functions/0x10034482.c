// rea decompile_all
// name: CMFCVisualManager::OnDrawTask
// address: 0x10034482
// body: available
// range: 0x10034482-0x100346b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100344ab to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTask(class CDC *,class
   CMFCTasksPaneTask *,class CImageList *,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawTask
          (CMFCVisualManager *this,CDC *param_1,CMFCTasksPaneTask *param_2,CImageList *param_3,
          int param_4,int param_5)

{
  int iVar1;
  tagPOINT tVar2;
  CMFCTasksPaneTask *pCVar3;
  CPen *pCVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 local_3c [4];
  CMFCVisualManager *local_38;
  int local_34 [2];
  CImageList *local_2c;
  CMFCTasksPaneTask *local_28;
  int local_24;
  LONG local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x1003448e;
  local_28 = param_2;
  local_2c = param_3;
  local_38 = this;
  if ((param_2 == (CMFCTasksPaneTask *)0x0) || (param_3 == (CImageList *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  local_24 = *(int *)(param_2 + 0xc);
  local_20 = *(LONG *)(param_2 + 0x10);
  local_1c = *(int *)(param_2 + 0x14);
  local_18 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x3c) != 0) {
    pCVar4 = CDC::SelectObject(param_1,(CPen *)&DAT_10166b78);
    CDC::MoveTo(param_1,(int)local_3c,local_24);
    CDC::LineTo(param_1,local_1c,(local_18 + local_20) / 2);
    CDC::SelectObject(param_1,pCVar4);
    goto LAB_100346ad;
  }
  local_34[0] = 0;
  local_34[1] = 0;
  ImageList_GetIconSize(*(HIMAGELIST *)(param_3 + 4),local_34,local_34 + 1);
  pCVar3 = local_28;
  if ((-1 < *(int *)(local_28 + 0x1c)) && (0 < local_34[0])) {
    tVar2.y = local_20;
    tVar2.x = local_24;
    CImageList::Draw(local_2c,param_1,*(int *)(local_28 + 0x1c),tVar2,1);
  }
  iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(pCVar3 + 4) + 4) + 8) + 0x3b0);
  if (iVar6 == -1) {
    iVar6 = *(int *)(local_38 + 0xb8);
  }
  local_24 = local_24 + iVar6 + local_34[0];
  local_28 = (CMFCTasksPaneTask *)(uint)(*(int *)(pCVar3 + 0x24) == 0);
  local_38 = (CMFCVisualManager *)GetTextColor(*(HDC *)(param_1 + 8));
  if (local_28 == (CMFCTasksPaneTask *)0x0) {
    iVar6 = *(int *)param_1;
    if (*(int *)(pCVar3 + 0x38) != 0) {
      if (param_4 == 0) {
        local_2c = (CImageList *)(**(code **)(iVar6 + 0x28))(&DAT_10166bb4);
        goto LAB_100345eb;
      }
      local_2c = (CImageList *)(**(code **)(iVar6 + 0x28))(&DAT_10166bd4);
      iVar6 = *(int *)(pCVar3 + 0x48);
      goto LAB_100345f1;
    }
    (**(code **)(iVar6 + 0x30))(DAT_10166ad0);
    local_2c = (CImageList *)(**(code **)(*(int *)param_1 + 0x28))(&DAT_10166bb4);
  }
  else {
    puVar5 = &DAT_10166bc4;
    if (*(int *)(pCVar3 + 0x40) == 0) {
      puVar5 = &DAT_10166bb4;
    }
    local_2c = (CImageList *)(**(code **)(*(int *)param_1 + 0x28))(puVar5);
LAB_100345eb:
    iVar6 = *(int *)(pCVar3 + 0x44);
LAB_100345f1:
    if (iVar6 == -1) {
      iVar6 = DAT_10166b08;
    }
    (**(code **)(*(int *)param_1 + 0x30))(iVar6);
  }
  iVar7 = CDC::SetBkMode(param_1,1);
  iVar6 = *(int *)(*(int *)(*(int *)(pCVar3 + 4) + 4) + 8);
  if (local_28 == (CMFCTasksPaneTask *)0x0) {
    iVar6 = *(int *)(iVar6 + 0x36c);
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x370);
  }
  iVar1 = *(int *)(pCVar3 + 8);
  if (iVar6 == 0) {
    piVar8 = FUN_10005e30((int *)(iVar1 + -0x10));
    local_28 = (CMFCTasksPaneTask *)(piVar8 + 4);
    local_8 = 0;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,L'\n'
              );
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,L'\r'
              );
    pCVar3 = local_28;
    (**(code **)(*(int *)param_1 + 0x68))(local_28,*(int *)(local_28 + -0xc),&local_24,0x8024);
    local_8 = 0xffffffff;
    FUN_10001030((undefined4 *)(pCVar3 + -0x10));
  }
  else {
    (**(code **)(*(int *)param_1 + 0x68))(iVar1,*(undefined4 *)(iVar1 + -0xc),&local_24,0x10);
  }
  CDC::SetBkMode(param_1,iVar7);
  (**(code **)(*(int *)param_1 + 0x28))(local_2c);
  (**(code **)(*(int *)param_1 + 0x30))(local_38);
LAB_100346ad:
  FUN_100f90cf();
  return;
}

