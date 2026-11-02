// rea decompile_all
// name: CGlobalUtils::CheckAlignment
// address: 0x10067950
// body: available
// range: 0x10067950-0x10067c4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CGlobalUtils::CheckAlignment(class CPoint,class CBasePane *,int,class
   CDockingManager const *,int,unsigned long &,unsigned long,struct tagRECT const *)const 
   
   Library: Visual Studio 2010 Release */

int __thiscall
CGlobalUtils::CheckAlignment
          (undefined4 param_1,LONG param_2,LONG param_3,CObject *param_4,int param_5,
          CDockingManager *param_6,int param_7,undefined4 *param_8,uint param_9,RECT *param_10)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  POINT pt_05;
  bool bVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  int local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_40 = -1;
  bVar1 = false;
  if (param_6 == (CDockingManager *)0x0) {
    if (param_4 != (CObject *)0x0) {
      pHVar2 = GetParent(*(HWND *)(param_4 + 0x20));
      pCVar3 = CWnd::FromHandle(pHVar2);
      param_6 = GetDockingManager((CGlobalUtils *)&PTR_vftable_10160f68,pCVar3);
      if (param_6 != (CDockingManager *)0x0) goto LAB_100679a3;
    }
  }
  else {
LAB_100679a3:
    iVar7 = *(int *)(param_6 + 0x1b8);
    if (((iVar7 != 0) && (*(int *)(iVar7 + 8) != 0)) && (*(int *)(iVar7 + 4) != 0)) {
      local_40 = *(int *)(iVar7 + 0x100);
      bVar1 = true;
    }
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  if (param_4 == (CObject *)0x0) {
    if (param_10 == (RECT *)0x0) goto LAB_10067b6c;
    CopyRect(&local_28,param_10);
  }
  else {
    GetWindowRect(*(HWND *)(param_4 + 0x20),&local_28);
  }
  local_3c = 0;
  local_48 = 0;
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1016138c,param_4);
  if (pCVar4 != (CObject *)0x0) {
    local_3c = (**(code **)(*(int *)pCVar4 + 0x1a0))();
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    (**(code **)(*(int *)pCVar4 + 0x32c))(&local_38,&local_18);
    local_48 = local_18.bottom - local_18.top;
  }
  if (param_7 == 0) {
    if (bVar1) {
      local_40 = local_40 + -4;
      goto LAB_10067a68;
    }
    local_18.left = local_28.left - param_5;
    local_18.top = local_28.top - param_5;
    local_18.bottom = local_28.top + local_3c + param_5;
    local_18.right = local_28.right + param_5;
    pt_03.y = param_3;
    pt_03.x = param_2;
    BVar5 = PtInRect(&local_18,pt_03);
    if ((BVar5 == 0) || (uVar6 = 0x2000, (param_9 & 0x2000) == 0)) {
      local_18.right = local_28.left + param_5;
      local_18.bottom = local_28.bottom + param_5;
      pt_04.y = param_3;
      pt_04.x = param_2;
      BVar5 = PtInRect(&local_18,pt_04);
      if ((BVar5 == 0) || (uVar6 = 0x1000, (param_9 & 0x1000) == 0)) {
        local_18.left = local_28.left - param_5;
        local_18.bottom = local_28.bottom + param_5;
        local_18.top = (local_28.bottom - local_48) - param_5;
        local_18.right = local_28.right + param_5;
        pt_05.y = param_3;
        pt_05.x = param_2;
        BVar5 = PtInRect(&local_18,pt_05);
        if ((BVar5 == 0) || (uVar6 = 0x8000, (param_9 & 0x8000) == 0)) {
          iVar7 = local_28.right - param_5;
          goto LAB_10067b41;
        }
      }
    }
  }
  else {
    if (bVar1) {
LAB_10067a68:
      if (local_40 == 0) {
        *param_8 = 0x1000;
      }
      else if (local_40 == 1) {
        *param_8 = 0x4000;
      }
      else if (local_40 == 2) {
        *param_8 = 0x2000;
      }
      else if (local_40 == 3) {
        *param_8 = 0x8000;
      }
      goto LAB_10067b6c;
    }
    local_18.left = local_28.left - param_5;
    local_18.top = local_28.top - param_5;
    local_18.bottom = local_28.top;
    local_18.right = local_28.right + param_5;
    pt.y = param_3;
    pt.x = param_2;
    BVar5 = PtInRect(&local_18,pt);
    if ((BVar5 == 0) || (uVar6 = 0x2000, (param_9 & 0x2000) == 0)) {
      local_18.right = local_28.left;
      local_18.bottom = local_28.bottom + param_5;
      pt_00.y = param_3;
      pt_00.x = param_2;
      BVar5 = PtInRect(&local_18,pt_00);
      if ((BVar5 == 0) || (uVar6 = 0x1000, (param_9 & 0x1000) == 0)) {
        local_18.left = local_28.left - param_5;
        local_18.top = local_28.bottom;
        local_18.bottom = local_28.bottom + param_5;
        local_18.right = local_28.right + param_5;
        pt_01.y = param_3;
        pt_01.x = param_2;
        BVar5 = PtInRect(&local_18,pt_01);
        iVar7 = local_28.right;
        if ((BVar5 == 0) || (uVar6 = 0x8000, (param_9 & 0x8000) == 0)) {
LAB_10067b41:
          local_18.top = local_28.top - param_5;
          pt_02.y = param_3;
          pt_02.x = param_2;
          local_18.left = iVar7;
          BVar5 = PtInRect(&local_18,pt_02);
          if ((BVar5 == 0) || (uVar6 = 0x4000, (param_9 & 0x4000) == 0)) goto LAB_10067b6c;
        }
      }
    }
  }
  *param_8 = uVar6;
LAB_10067b6c:
  iVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar7;
}

