// rea decompile_all
// name: FUN_100862c4
// address: 0x100862c4
// body: available
// range: 0x100862c4-0x1008667e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100862c4(int param_1,undefined4 param_2,CDC *param_3,int *param_4,int param_5)

{
  double dVar1;
  CMFCToolBarImages *this;
  CMFCVisualManager *pCVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *extraout_ECX;
  void *pvVar7;
  undefined4 extraout_EDX;
  CDC *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int iStack_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  CUserTool *local_3c;
  CMFCToolBarImages *local_38;
  int local_34;
  int *local_30;
  CDC *local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int iStack_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_3;
  local_64 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  local_30 = param_4;
  local_38 = (CMFCToolBarImages *)&DAT_10166f30;
  if (*(int *)(param_1 + 4) == 0) {
    if (DAT_10167174 == DAT_10166f34) {
      local_38 = (CMFCToolBarImages *)&DAT_10167170;
    }
  }
  else {
    local_38 = DAT_10166e6c;
  }
  local_3c = (CUserTool *)0x0;
  pvVar7 = DAT_101685b0;
  if ((DAT_101685b0 != (void *)0x0) && (*(int *)(param_1 + 4) == 0)) {
    local_3c = (CUserTool *)FUN_1006a40b(DAT_101685b0,*(uint *)(param_1 + 0x20));
    pvVar7 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_10026c8e(pvVar7,param_2,&local_44);
  local_18 = *param_4;
  local_14 = param_4[1];
  local_10 = param_4[2];
  iStack_c = param_4[3];
  local_50 = local_44 + 6;
  if (param_5 != 0) {
    pCVar2 = CMFCVisualManager::GetInstance();
    iVar3 = (**(code **)(*(int *)pCVar2 + 0x98))();
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 4) == 0) {
        iVar3 = *(int *)(param_1 + 0x34);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x38);
      }
      if ((-1 < iVar3) && (local_38 != (CMFCToolBarImages *)0x0)) {
        local_58 = local_18 + local_50;
        local_60 = *local_30;
        iStack_5c = local_30[1];
        local_54 = local_30[3];
        local_18 = local_58;
        pCVar2 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar2 + 0x84))
                  (local_2c,param_1,local_60,iStack_5c,local_58,local_54,2);
        pCVar2 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar2 + 0x88))
                  (local_2c,param_1,local_60,iStack_5c,local_58,local_54,2);
      }
    }
  }
  pCVar2 = CMFCVisualManager::GetInstance();
  local_68 = (**(code **)(*(int *)pCVar2 + 0x134))
                       (local_2c,local_18,local_14,local_10,iStack_c,param_5);
  this_00 = local_2c;
  this = local_38;
  iStack_24 = local_30[1];
  local_20 = local_30[2];
  iStack_1c = local_30[3];
  local_28 = *local_30 + 10 + local_44;
  local_48 = local_50;
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = *(int *)(param_1 + 0x34);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x38);
  }
  if ((iVar3 < 0) || (local_38 == (CMFCToolBarImages *)0x0)) goto LAB_100865f4;
  if (local_3c != (CUserTool *)0x0) {
    local_18 = *local_30;
    local_14 = local_30[1];
    iStack_c = local_30[3];
    local_10 = local_18 + local_50;
    CUserTool::DrawToolIcon(local_3c,local_2c,(CRect *)&local_18);
    goto LAB_100865f4;
  }
  if ((param_5 == 0) && (pCVar2 = CMFCVisualManager::GetInstance(), *(int *)(pCVar2 + 0x78) != 0)) {
    local_38 = (CMFCToolBarImages *)0x1;
LAB_100864b3:
    local_3c = (CUserTool *)0x0;
  }
  else {
    local_38 = (CMFCToolBarImages *)0x0;
    if ((param_5 == 0) ||
       (((pCVar2 = CMFCVisualManager::GetInstance(), *(int *)(pCVar2 + 0x70) == 0 ||
         (DAT_10166c28 != 0)) || (local_3c = (CUserTool *)0x1, DAT_10166c24 != 0))))
    goto LAB_100864b3;
  }
  dVar1 = 1.0;
  if (DAT_10166c84 != 0) {
    dVar1 = _DAT_10166c7c;
  }
  iVar3 = 0;
  iVar4 = 0;
  if ((dVar1 != 1.0) && (DAT_10166e70 == 0)) {
    iVar3 = local_40;
    iVar4 = local_44;
  }
  CMFCToolBarImages::PrepareDrawImage(this,&local_14,iVar4,iVar3,local_38);
  iVar3 = *local_30;
  local_30 = (int *)(local_30[1] + 3);
  iVar3 = iVar3 + 3;
  dVar1 = _DAT_10166c7c;
  if (DAT_10166c84 == 0) {
    dVar1 = 1.0;
  }
  if ((dVar1 != 1.0) && (DAT_10166e70 != 0)) {
    local_54 = *(int *)(this + 0x54);
    if ((local_44 - *(int *)(this + 0x50)) / 2 < 0) {
      iVar4 = 0;
    }
    else {
      local_54 = *(int *)(this + 0x54);
      iVar4 = (local_44 - *(int *)(this + 0x50)) / 2;
    }
    iVar3 = iVar3 + iVar4;
    local_58 = *(int *)(this + 0x50);
    if ((local_40 - *(int *)(this + 0x54)) / 2 < 0) {
      iVar4 = 0;
    }
    else {
      local_58 = *(int *)(this + 0x50);
      iVar4 = (local_40 - *(int *)(this + 0x54)) / 2;
    }
    local_30 = (int *)((int)local_30 + iVar4);
  }
  if (local_3c != (CUserTool *)0x0) {
    local_34 = iVar3 + 1;
    local_30 = (int *)((int)local_30 + 1);
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = *(int *)(param_1 + 0x34);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38);
    }
    CMFCToolBarImages::Draw(this,local_2c,local_34,(int)local_30,iVar3,0,0,0,1,0,0xff);
    iVar3 = local_34 + -2;
    local_30 = (int *)((int)local_30 + -2);
    local_34 = iVar3;
  }
  if (*(int *)(param_1 + 4) == 0) {
    iVar4 = *(int *)(param_1 + 0x34);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x38);
  }
  CMFCToolBarImages::Draw(this,local_2c,iVar3,(int)local_30,iVar4,0,0,0,0,(int)local_38,0xff);
  CMFCToolBarImages::EndDrawImage(this,(tagAFXDrawState *)&local_14);
  this_00 = local_2c;
LAB_100865f4:
  if (*(int *)(*(int *)(param_1 + 0x2c) + -0xc) != 0) {
    uVar5 = (**(code **)(*(int *)this_00 + 0x30))(local_68);
    CDC::SetBkMode(this_00,1);
    (**(code **)(*(int *)this_00 + 0x68))
              (*(int *)(param_1 + 0x2c),*(undefined4 *)(*(int *)(param_1 + 0x2c) + -0xc),&local_28,
               0x24);
    (**(code **)(*(int *)this_00 + 0x30))(uVar5);
    iVar3 = local_20 - local_28;
    piVar6 = (int *)CDC::GetTextExtent(this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                                *)&local_58);
    if (iVar3 < *piVar6) {
      local_48 = local_20 - local_28;
    }
    else {
      piVar6 = (int *)CDC::GetTextExtent(this_00,local_6c);
      local_48 = *piVar6;
    }
    local_48 = local_48 + local_50;
  }
  *(undefined4 *)(param_1 + 8) = local_64;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

