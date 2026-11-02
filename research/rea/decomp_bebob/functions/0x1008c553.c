// rea decompile_all
// name: FUN_1008c553
// address: 0x1008c553
// body: available
// range: 0x1008c553-0x1008c890 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1008c7d5 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1008c553(void *this,CDC *param_1,CRect *param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  CMFCToolBar *this_00;
  double dVar1;
  uint uVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  CMFCToolBarImages *pCVar5;
  CRect *pCVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  tagAFXDrawState local_60 [12];
  undefined4 local_54;
  CMFCToolBarImages *local_50;
  CRect *local_4c;
  CPen *local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  CPen *local_38;
  CDC *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 uStack_24;
  POINT local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  local_4c = param_2;
  CMFCToolBarButton::FillInterior(this,param_1,param_2,param_6,0);
  dVar1 = 1.0;
  local_40 = 7;
  if (DAT_10166c84 != 0) {
    dVar1 = _DAT_10166c7c;
  }
  if (dVar1 != 1.0) {
    uVar7 = FUN_100f8660(DAT_10166c84,7);
    local_40 = (int)uVar7;
  }
  if (DAT_10166e5c == 0) {
    local_44 = local_40 / 2 + 1;
  }
  else {
    local_44 = local_40;
    local_40 = local_40 * 2;
  }
  local_30 = *(undefined4 *)param_2;
  uStack_2c = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)(param_2 + 0xc);
  this_00 = *(CMFCToolBar **)((int)this + 0x70);
  local_28 = *(int *)(param_2 + 8) + (-1 - local_40 / 2);
  pCVar6 = local_4c;
  if (this_00 != (CMFCToolBar *)0x0) {
    local_48 = *(CPen **)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x84) = 1;
    CMFCToolBar::GetImageSize(this_00);
    dVar1 = _DAT_10166c7c;
    if (DAT_10166c84 == 0) {
      dVar1 = 1.0;
    }
    if (dVar1 != 1.0) {
      uVar7 = FUN_100f8660(DAT_10166c84,extraout_EDX);
      local_54 = (undefined4)uVar7;
      uVar7 = FUN_100f8660(extraout_ECX,(int)(uVar7 >> 0x20));
      local_38 = (CPen *)uVar7;
      local_3c = local_54;
    }
    if ((DAT_10166e5c == 0) || (*(int *)(this_00 + 0x5cc) < 1)) {
      pCVar5 = (CMFCToolBarImages *)(this_00 + 0x2a4);
    }
    else {
      pCVar5 = (CMFCToolBarImages *)(this_00 + 0x5c8);
    }
    local_50 = pCVar5;
    if (*(int *)((int)this + 0x88) == 0) {
      CMFCToolBarImages::SetTransparentColor(pCVar5,DAT_10166ab4);
    }
    else {
      CMFCToolBarImages::SetTransparentColor(DAT_10166e6c,DAT_10166ab4);
      pCVar5 = DAT_10166e6c;
    }
    CMFCToolBarImages::PrepareDrawImage(pCVar5,local_60,local_3c,local_38,0);
    pCVar6 = local_4c;
    local_38 = *(CPen **)((int)this + 0x44);
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0xc) = 1;
    *(undefined4 *)((int)this + 0x44) = 1;
    if (*(int *)((int)this + 0x88) == 0) {
      CMFCToolBarButton::OnDraw
                (this,local_34,(CRect *)&local_30,local_50,param_4,param_5,param_6,0,param_8);
      pCVar6 = local_4c;
    }
    else {
      *(int *)((int)this + 4) = *(int *)((int)this + 0x88);
      CMFCToolBarButton::OnDraw
                (this,local_34,local_4c,DAT_10166e6c,param_4,param_5,param_6,0,param_8);
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0x34) = 0xffffffff;
    *(undefined4 *)((int)this + 0x38) = 0xffffffff;
    *(CPen **)((int)this + 0x44) = local_38;
    *(CPen **)((int)this + 0xc) = local_48;
    pCVar5 = local_50;
    if (*(int *)((int)this + 0x88) != 0) {
      pCVar5 = DAT_10166e6c;
    }
    CMFCToolBarImages::EndDrawImage(pCVar5,local_60);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x24) >> 0x11 & 1;
  local_20.x = (*(int *)(pCVar6 + 8) - local_40) + -1 + uVar2;
  local_18 = (*(int *)(pCVar6 + 8) - local_44) + 1 + uVar2;
  local_20.y = (*(int *)(pCVar6 + 0xc) - local_44) + 1 + uVar2;
  local_c = (*(int *)(pCVar6 + 0xc) - local_40) + -1 + uVar2;
  local_14 = local_20.y;
  local_10 = local_18;
  local_48 = (CPen *)(**(code **)(*(int *)local_34 + 0x24))(8);
  if ((local_48 == (CPen *)0x0) ||
     (local_38 = CDC::SelectObject(local_34,(CPen *)&DAT_10166b48), local_38 == (CPen *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10009068();
  }
  Polygon(*(HDC *)(local_34 + 4),&local_20,3);
  if (((param_5 != 0) || (iVar3 = (**(code **)(*(int *)this + 0x54))(), iVar3 == 0)) ||
     (param_7 == 0)) goto LAB_1008c86a;
  if ((*(int *)((int)this + 0x78) == 0) &&
     (uVar2 = *(uint *)((int)this + 0x24), (uVar2 & 0x30000) == 0)) {
    if ((param_6 == 0) || ((uVar2 & 0x150000) != 0)) goto LAB_1008c86a;
    uVar2 = uVar2 & 0x20000;
LAB_1008c835:
    if (uVar2 == 0) goto LAB_1008c84c;
    pCVar4 = CMFCVisualManager::GetInstance();
    uVar8 = 1;
  }
  else {
    if (*(int *)((int)this + 0x20) != 0) {
      uVar2 = *(int *)((int)this + 0x20) + 1;
      goto LAB_1008c835;
    }
LAB_1008c84c:
    pCVar4 = CMFCVisualManager::GetInstance();
    uVar8 = 2;
  }
  (**(code **)(*(int *)pCVar4 + 0x88))
            (local_34,this,*(undefined4 *)pCVar6,*(undefined4 *)(pCVar6 + 4),
             *(undefined4 *)(pCVar6 + 8),*(undefined4 *)(pCVar6 + 0xc),uVar8);
LAB_1008c86a:
  CDC::SelectObject(local_34,local_48);
  CDC::SelectObject(local_34,local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

