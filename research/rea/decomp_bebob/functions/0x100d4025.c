// rea decompile_all
// name: CMFCCustomizeMenuButton::OnDraw
// address: 0x100d4025
// body: available
// range: 0x100d4025-0x100d427e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d4087 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCustomizeMenuButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCCustomizeMenuButton::OnDraw
          (CMFCCustomizeMenuButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  CMFCVisualManager *pCVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined1 local_60 [4];
  int local_5c [2];
  int local_54;
  undefined4 uStack_50;
  int local_4c;
  int iStack_48;
  CMFCToolBarImages *local_44;
  int local_40;
  undefined4 uStack_3c;
  int iStack_38;
  int local_34;
  uint local_30;
  CDC *local_2c;
  int local_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_44 = param_3;
  local_2c = param_1;
  if (*(int *)(this + 0xf0) == 0) {
    if (*(int *)(this + 0x100) == 0) {
      local_40 = *(int *)param_2;
      uStack_3c = *(undefined4 *)(param_2 + 4);
      iStack_38 = *(int *)(param_2 + 8);
      local_34 = *(int *)(param_2 + 0xc) + -1;
      if (*(int *)(this + 0xfc) == 0) {
        (**(code **)(*(int *)this + 0x8c))(0x40000);
        param_8 = 1;
        param_6 = 0;
        uVar6 = extraout_ECX_01;
        uVar3 = extraout_EDX_01;
      }
      else {
        if ((*(int *)(this + 0xec) == 0) || (param_6 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0x10000;
        }
        (**(code **)(*(int *)this + 0x8c))(uVar6);
        uVar6 = extraout_ECX_00;
        uVar3 = extraout_EDX_00;
      }
      local_30 = (uint)(*(int *)(this + 0xe8) == 0x4278);
      if (local_30 != 0) {
        *(undefined4 *)(this + 0x34) = 0xffffffff;
        *(undefined4 *)(this + 0xc) = 0;
      }
      if ((param_6 != 0) && (*(int *)(this + 0xfc) != 0)) {
        uStack_50 = uStack_3c;
        local_54 = local_40 + 2;
        iStack_48 = local_34;
        local_4c = iStack_38 + -1;
        pCVar1 = CMFCVisualManager::GetInstance();
        iVar2 = (**(code **)(*(int *)pCVar1 + 0x98))();
        if ((iVar2 == 0) && (local_30 == 0)) {
          pCVar1 = CMFCVisualManager::GetInstance();
          uVar4 = (**(code **)(*(int *)pCVar1 + 0x2d0))();
          uVar5 = FUN_10026c8e(extraout_ECX_02,(int)((ulonglong)uVar4 >> 0x20),local_6c);
          local_54 = local_54 + (int)uVar4 * 5 + *(int *)uVar5 * 2;
        }
        pCVar1 = CMFCVisualManager::GetInstance();
        (**(code **)(*(int *)pCVar1 + 0x90))
                  (local_2c,this,local_54,uStack_50,local_4c,iStack_48,local_60);
        uVar6 = extraout_ECX_03;
        uVar3 = extraout_EDX_02;
      }
      FUN_10026c8e(uVar6,uVar3,local_5c);
      local_18 = local_40;
      uStack_14 = uStack_3c;
      local_10 = iStack_38;
      local_c = local_34;
      pCVar1 = CMFCVisualManager::GetInstance();
      iVar2 = (**(code **)(*(int *)pCVar1 + 0x2d0))();
      local_18 = local_18 + 1 + iVar2;
      pCVar1 = CMFCVisualManager::GetInstance();
      iVar2 = (**(code **)(*(int *)pCVar1 + 0x2d0))();
      local_c = local_c + -1;
      local_10 = iVar2 + local_5c[0] + 2 + local_18;
      (**(code **)(*(int *)this + 0xf8))(local_2c,&local_18,param_6);
      if (((param_6 != 0) && ((*(uint *)(this + 0x24) & 0x40000) == 0)) && (local_30 == 0)) {
        (**(code **)(*(int *)this + 0x8c))(0);
      }
      uStack_24 = uStack_3c;
      iStack_20 = iStack_38;
      iStack_1c = local_34;
      local_28 = local_10;
      FUN_1007e626(this,local_2c,&local_28,local_44,param_5,param_6,param_8,1);
    }
    else {
      CMFCToolBarMenuButton::OnDraw
                ((CMFCToolBarMenuButton *)this,param_1,param_2,(CMFCToolBarImages *)0x0,param_4,
                 param_5,param_6,param_7,param_8);
    }
  }
  else {
    local_40 = *(int *)param_2;
    uStack_3c = *(undefined4 *)(param_2 + 4);
    iStack_38 = *(int *)(param_2 + 8);
    local_34 = *(int *)(param_2 + 0xc);
    pCVar1 = CMFCVisualManager::GetInstance();
    uVar4 = FUN_10026c8e(extraout_ECX,extraout_EDX,&local_64);
    local_40 = (**(code **)(*(int *)pCVar1 + 0x2d0))();
    iVar2 = *(int *)(this + 0x6c);
    local_40 = local_40 + *(int *)uVar4 * 2;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10009068();
    }
    pCVar1 = CMFCVisualManager::GetInstance();
    (**(code **)(*(int *)pCVar1 + 0x48))(local_2c,iVar2,local_40,uStack_3c,iStack_38,local_34,0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

