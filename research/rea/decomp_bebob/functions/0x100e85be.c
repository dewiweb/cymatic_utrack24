// rea decompile_all
// name: CMFCToolBarEditBoxButton::OnDraw
// address: 0x100e85be
// body: available
// range: 0x100e85be-0x100e8741 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarEditBoxButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCToolBarEditBoxButton::OnDraw
          (CMFCToolBarEditBoxButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  CWnd *this_00;
  ulong uVar1;
  int iVar2;
  CMFCVisualManager *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  this_00 = *(CWnd **)(this + 0x78);
  if (((this_00 == (CWnd *)0x0) || (*(int *)(this_00 + 0x20) == 0)) ||
     (uVar1 = CWnd::GetExStyle(this_00), (uVar1 & 0x10000000) == 0)) {
    CMFCToolBarButton::OnDraw
              ((CMFCToolBarButton *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8);
    goto LAB_100e8731;
  }
  uVar4 = 0;
  if (param_5 == 0) {
    if ((*(uint *)(this + 0x24) & 0x40000) == 0) goto LAB_100e8626;
LAB_100e86bd:
    uVar5 = 1;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x60))();
    if (iVar2 == 0) goto LAB_100e86bd;
LAB_100e8626:
    uVar5 = 0;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(*(int *)this + 0xd0))(&local_18);
  if ((DAT_10162f70 == 0) || (*(int *)(this + 0x88) != 0)) {
    uVar4 = 1;
  }
  pCVar3 = CMFCVisualManager::GetInstance();
  (**(code **)(*(int *)pCVar3 + 0x74))(param_1,local_18,local_14,local_10,local_c,uVar5,uVar4,this);
  if (((*(int *)(this + 0x18) == 0) || (param_4 == 0)) ||
     (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0)) goto LAB_100e8731;
  if (param_5 == 0) {
    uVar1 = DAT_10166ad0;
    if ((*(uint *)(this + 0x24) & 0x40000) == 0) goto LAB_100e86a4;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x60))();
    uVar1 = DAT_10166ad0;
    if (iVar2 != 0) {
LAB_100e86a4:
      uVar1 = DAT_10166ac0;
      if (param_6 != 0) {
        uVar1 = CMFCToolBar::GetHotTextColor();
      }
    }
  }
  (**(code **)(*(int *)param_1 + 0x30))(uVar1);
  local_28 = *(undefined4 *)param_2;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  local_24 = ((*(int *)(param_2 + 0xc) - *(int *)(this + 0x68)) + local_c) / 2;
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  (**(code **)(*(int *)param_1 + 0x68))
            (*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),&local_28,0x11);
LAB_100e8731:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

