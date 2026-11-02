// rea decompile_all
// name: CMFCCustomizeButton::OnDraw
// address: 0x10099874
// body: available
// range: 0x10099874-0x10099a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCCustomizeButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCCustomizeButton::OnDraw
          (CMFCCustomizeButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  CMFCVisualManager *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int local_34;
  int local_30;
  CDC *local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  if (*(int *)(this + 0x94) != 0) goto LAB_10099a73;
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)(param_2 + 4);
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0x100) = 1;
  if (param_6 == 0) {
    iVar1 = (**(code **)(*(int *)this + 0x70))();
    iVar3 = 0;
    if (iVar1 != 0) goto LAB_100998c3;
  }
  else {
LAB_100998c3:
    iVar3 = 1;
  }
  CMFCToolBarButton::FillInterior((CMFCToolBarButton *)this,local_2c,(CRect *)&local_28,iVar3,0);
  pCVar2 = CMFCVisualManager::GetInstance();
  iVar3 = (**(code **)(*(int *)pCVar2 + 0x2dc))();
  if (*(int *)(this + 0x100) != 0) {
    FUN_10037b18(&local_34);
    if ((DAT_10166e5c != 0) && (DAT_10168c40 == 0)) {
      local_34 = local_34 * 2;
      local_30 = local_30 * 2;
    }
    if (0 < *(int *)(this + 0xe8)) {
      local_18.left = *(LONG *)param_2;
      local_18.top = *(LONG *)(param_2 + 4);
      local_18.right = *(LONG *)(param_2 + 8);
      local_18.bottom = *(LONG *)(param_2 + 0xc);
      if (param_4 == 0) {
        local_18.right = local_18.left + iVar3 * 2 + local_34;
      }
      else {
        local_18.top = (local_18.bottom + iVar3 * -2) - local_30;
      }
      if (((*(uint *)(this + 0x24) & 0x30000) != 0) || (*(int *)(this + 0x8c) != 0)) {
        pCVar2 = CMFCVisualManager::GetInstance();
        if (*(int *)(pCVar2 + 0x6c) == 0) {
          OffsetRect(&local_18,1,1);
        }
      }
      CMenuImages::Draw(local_2c,(-(uint)(param_4 != 0) & 0xfffffff7) + 9,(CRect *)&local_18,0,
                        (CSize *)&local_34);
    }
    if (*(int *)(this + 0x11c) != 0) {
      local_18.left = *(LONG *)param_2;
      local_18.top = *(LONG *)(param_2 + 4);
      local_18.right = *(LONG *)(param_2 + 8);
      local_18.bottom = *(LONG *)(param_2 + 0xc);
      if (param_4 == 0) {
        local_18.left = (local_18.right + iVar3 * -2) - local_34;
      }
      else {
        local_18.bottom = local_18.top + iVar3 * 2 + local_30;
      }
      if (((*(uint *)(this + 0x24) & 0x30000) != 0) || (*(int *)(this + 0x8c) != 0)) {
        pCVar2 = CMFCVisualManager::GetInstance();
        if (*(int *)(pCVar2 + 0x6c) == 0) {
          OffsetRect(&local_18,1,1);
        }
      }
      CMenuImages::Draw(local_2c,(-(uint)(param_4 != 0) & 3) + 8,(CRect *)&local_18,0,
                        (CSize *)&local_34);
    }
  }
  if (param_5 == 0) {
    if (((*(uint *)(this + 0x24) & 0x30000) == 0) && (*(int *)(this + 0x8c) == 0)) {
      if ((param_6 == 0) || ((*(uint *)(this + 0x24) & 0x150000) != 0)) goto LAB_10099a73;
      pCVar2 = CMFCVisualManager::GetInstance();
      uVar4 = 2;
    }
    else {
      pCVar2 = CMFCVisualManager::GetInstance();
      uVar4 = 1;
    }
    (**(code **)(*(int *)pCVar2 + 0x88))(local_2c,this,local_28,uStack_24,uStack_20,uStack_1c,uVar4)
    ;
  }
LAB_10099a73:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

