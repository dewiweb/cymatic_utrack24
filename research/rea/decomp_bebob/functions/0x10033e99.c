// rea decompile_all
// name: CMFCVisualManager::OnDrawTasksGroupCaption
// address: 0x10033e99
// body: available
// range: 0x10033e99-0x1003416f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033ebe to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTasksGroupCaption(class CDC *,class
   CMFCTasksPaneTaskGroup *,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCVisualManager::OnDrawTasksGroupCaption
          (CMFCVisualManager *this,CDC *param_1,CMFCTasksPaneTaskGroup *param_2,int param_3,
          int param_4,int param_5)

{
  CMFCTasksPaneTaskGroup *pCVar1;
  CMFCTasksPaneTaskGroup *pCVar2;
  COLORREF CVar3;
  ulong uVar4;
  int iVar5;
  CPen *pCVar6;
  IMAGES_IDS IVar7;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  CMFCVisualManager *local_4c;
  CMFCTasksPaneTaskGroup *local_48;
  int local_44;
  undefined4 local_40;
  COLORREF local_3c;
  int local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_48 = param_2;
  local_4c = this;
  if ((param_2 != (CMFCTasksPaneTaskGroup *)0x0) && (*(int *)(param_2 + 4) != 0)) {
    local_18.left = *(LONG *)(param_2 + 0x34);
    local_18.top = *(LONG *)(param_2 + 0x38);
    local_18.right = *(LONG *)(param_2 + 0x3c);
    local_18.bottom = *(LONG *)(param_2 + 0x40);
    CVar3 = GetBkColor(*(HDC *)(param_1 + 8));
    pCVar1 = local_48;
    uVar4 = DAT_10166ad4;
    if (*(int *)(local_48 + 0x2c) == 0) {
      uVar4 = DAT_10166aec;
    }
    CDC::FillSolidRect(param_1,&local_18,uVar4);
    (**(code **)(*(int *)param_1 + 0x2c))(CVar3);
    if ((*(int *)(pCVar1 + 0x5c) == 0) ||
       (((local_18.top - local_18.left) - local_18.bottom) + local_18.right <=
        *(int *)(pCVar1 + 0x54))) {
      local_54 = 0;
    }
    else {
      local_54 = 1;
      (**(code **)(*(int *)local_4c + 0x168))(param_1,pCVar1,5,param_3,param_4,param_5);
    }
    local_3c = (**(code **)(*(int *)param_1 + 0x28))(&DAT_10166bc4);
    GetTextColor(*(HDC *)(param_1 + 8));
    if ((param_5 == 0) || (param_3 == 0)) {
      uVar4 = *(ulong *)(pCVar1 + 0x60);
    }
    else {
      uVar4 = *(ulong *)(pCVar1 + 100);
    }
    if ((uVar4 == 0xffffffff) && (uVar4 = DAT_10166b04, *(int *)(pCVar1 + 0x2c) == 0)) {
      uVar4 = DAT_10166b08;
    }
    local_50 = (**(code **)(*(int *)param_1 + 0x30))(uVar4);
    local_58 = CDC::SetBkMode(param_1,1);
    pCVar2 = local_48;
    local_44 = *(int *)(*(int *)(*(int *)(pCVar1 + 4) + 8) + 0x3a4);
    local_34 = *(int *)(*(int *)(*(int *)(pCVar1 + 4) + 8) + 0x3a8);
    if (local_44 == -1) {
      local_44 = *(int *)(local_4c + 0xac);
    }
    iStack_2c = local_18.bottom;
    local_38 = local_44;
    if (local_54 != 0) {
      local_38 = *(int *)(local_48 + 0x54) + 5;
    }
    local_38 = local_18.left + local_38;
    if (local_34 == -1) {
      local_34 = *(int *)(local_4c + 0xb0);
    }
    local_34 = local_18.top + local_34;
    iVar5 = local_44;
    if (param_5 != 0) {
      iVar5 = local_18.bottom - local_18.top;
    }
    local_30 = local_38;
    if (local_38 <= local_18.right - iVar5) {
      local_30 = local_44;
      if (param_5 != 0) {
        local_30 = local_18.bottom - local_18.top;
      }
      local_30 = local_18.right - local_30;
    }
    (**(code **)(*(int *)param_1 + 0x68))
              (*(int *)(local_48 + 8),*(undefined4 *)(*(int *)(local_48 + 8) + -0xc),&local_38,0x24)
    ;
    CDC::SetBkMode(param_1,local_58);
    (**(code **)(*(int *)param_1 + 0x28))(local_3c);
    (**(code **)(*(int *)param_1 + 0x30))(local_50);
    if ((param_5 != 0) && (*(int *)(*(int *)(pCVar2 + 8) + -0xc) != 0)) {
      FUN_10037b18(&local_5c);
      local_28.left = local_18.left;
      local_28.top = local_18.top;
      iVar5 = (-(((local_18.bottom - local_18.top) + 1) / 2) - (local_5c + 1) / 2) + local_18.right;
      if (local_18.left <= iVar5) {
        local_28.left = iVar5;
      }
      iVar5 = (-(((local_18.bottom - local_18.top) + 1) / 2) - (local_58 + 1) / 2) + local_18.bottom
      ;
      if (local_18.top <= iVar5) {
        local_28.top = iVar5;
      }
      local_28.bottom = local_58 + local_28.top;
      local_28.right = local_28.left + local_5c;
      if ((local_28.right <= local_18.right) && (local_28.bottom <= local_18.bottom)) {
        if (param_3 != 0) {
          pCVar6 = CDC::SelectObject(param_1,(CPen *)&DAT_10166b68);
          local_3c = GetBkColor(*(HDC *)(param_1 + 8));
          CDC::Draw3dRect(param_1,&local_28,DAT_10166b04,DAT_10166af0);
          (**(code **)(*(int *)param_1 + 0x2c))(local_3c);
          CDC::SelectObject(param_1,pCVar6);
        }
        local_40 = 0;
        local_3c = 0;
        if (*(int *)(local_48 + 0x30) == 0) {
          IVar7 = 7;
        }
        else {
          IVar7 = 0;
        }
        CMenuImages::Draw(param_1,IVar7,(CPoint *)&local_28,0,(CSize *)&local_40);
      }
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

